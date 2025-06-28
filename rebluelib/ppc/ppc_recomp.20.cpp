#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82172488"))) PPC_WEAK_FUNC(sub_82172488);
PPC_FUNC_IMPL(__imp__sub_82172488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,152(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r4,80
	ctx.r10.s64 = ctx.r4.s64 + 80;
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// lfs f13,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stfs f13,40(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f12,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// stw r10,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r10.u32);
	// lwz r9,168(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r9,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r9.u32);
	// lwz r8,172(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// stw r8,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r8.u32);
	// lwz r7,176(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// stw r7,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r7.u32);
	// lwz r6,180(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// stw r6,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r6.u32);
	// lwz r5,184(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stw r5,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r5.u32);
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// stw r10,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r10.u32);
	// lwz r9,196(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// stw r9,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r9.u32);
	// lwz r8,200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// stw r8,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r8.u32);
	// lwz r7,204(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// stw r7,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r7.u32);
	// lwz r6,208(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// stw r6,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r6.u32);
	// lwz r5,212(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// stw r5,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r5.u32);
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// stw r11,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r11.u32);
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// stw r10,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r10.u32);
	// lwz r9,224(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// stw r9,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r9.u32);
	// lwz r8,228(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// stw r8,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r8.u32);
	// lwz r7,232(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// stw r7,116(r4)
	PPC_STORE_U32(ctx.r4.u32 + 116, ctx.r7.u32);
	// lwz r6,236(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// stw r6,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r6.u32);
	// lwz r5,240(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// stw r5,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r5.u32);
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// stw r11,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r11.u32);
	// lwz r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// stw r10,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r10.u32);
	// lwz r9,252(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// stw r9,136(r4)
	PPC_STORE_U32(ctx.r4.u32 + 136, ctx.r9.u32);
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// stw r8,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r8.u32);
	// lfs f11,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,144(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 144, temp.u32);
	// lfs f10,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,148(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 148, temp.u32);
	// lfs f9,280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,152(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 152, temp.u32);
	// lfs f8,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,156(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 156, temp.u32);
	// lwz r7,76(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// lfs f7,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,12(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f6,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,16(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f5,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,20(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f4,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,24(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f3,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,28(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f2,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,32(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821725C8"))) PPC_WEAK_FUNC(sub_821725C8);
PPC_FUNC_IMPL(__imp__sub_821725C8) {
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
	// beq cr6,0x821726c4
	if (ctx.cr6.eq) goto loc_821726C4;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6836
	ctx.r31.s64 = ctx.r11.s64 + 6836;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x821725FC;
	sub_823052D8(ctx, base);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
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
	// bne cr6,0x821726b8
	if (!ctx.cr6.eq) goto loc_821726B8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821726b8
	if (ctx.cr6.eq) goto loc_821726B8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821726b8
	if (!ctx.cr6.lt) goto loc_821726B8;
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
	// beq cr6,0x82172690
	if (ctx.cr6.eq) goto loc_82172690;
loc_82172668:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82172688
	if (ctx.cr6.eq) goto loc_82172688;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82172668
	if (!ctx.cr6.eq) goto loc_82172668;
	// b 0x82172690
	goto loc_82172690;
loc_82172688:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82172690:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821726a8
	if (!ctx.cr6.eq) goto loc_821726A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821726A8:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821726B4;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_821726B8:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821726C4;
	sub_823051A8(ctx, base);
loc_821726C4:
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

__attribute__((alias("__imp__sub_821726DC"))) PPC_WEAK_FUNC(sub_821726DC);
PPC_FUNC_IMPL(__imp__sub_821726DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821726E0"))) PPC_WEAK_FUNC(sub_821726E0);
PPC_FUNC_IMPL(__imp__sub_821726E0) {
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
	// addi r31,r11,6836
	ctx.r31.s64 = ctx.r11.s64 + 6836;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82172708;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217272c
	if (ctx.cr6.eq) goto loc_8217272C;
loc_82172714:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217275c
	if (!ctx.cr6.eq) goto loc_8217275C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172714
	if (!ctx.cr6.eq) goto loc_82172714;
loc_8217272C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172784
	if (!ctx.cr6.eq) goto loc_82172784;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821727e0
	ctx.lr = 0x82172740;
	sub_821727E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172784
	if (!ctx.cr6.eq) goto loc_82172784;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82172754;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821727c8
	goto loc_821727C8;
loc_8217275C:
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
	// b 0x821727b8
	goto loc_821727B8;
loc_82172784:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,628
	ctx.r10.s64 = ctx.r11.s64 + 628;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,628(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
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
loc_821727B8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x821727C4;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821727C8:
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

__attribute__((alias("__imp__sub_821727E0"))) PPC_WEAK_FUNC(sub_821727E0);
PPC_FUNC_IMPL(__imp__sub_821727E0) {
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
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82082030
	ctx.lr = 0x82172814;
	sub_82082030(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r11,r11,6836
	ctx.r11.s64 = ctx.r11.s64 + 6836;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82172830
	if (ctx.cr6.eq) goto loc_82172830;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x82172834
	goto loc_82172834;
loc_82172830:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82172834:
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
	// beq cr6,0x82172874
	if (ctx.cr6.eq) goto loc_82172874;
	// addi r10,r9,-12
	ctx.r10.s64 = ctx.r9.s64 + -12;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8217286C:
	// stwu r3,640(r10)
	ea = 640 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8217286c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217286C;
loc_82172874:
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

__attribute__((alias("__imp__sub_82172894"))) PPC_WEAK_FUNC(sub_82172894);
PPC_FUNC_IMPL(__imp__sub_82172894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172898"))) PPC_WEAK_FUNC(sub_82172898);
PPC_FUNC_IMPL(__imp__sub_82172898) {
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
	// addi r10,r11,-27912
	ctx.r10.s64 = ctx.r11.s64 + -27912;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x821728C4;
	sub_82172BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821728dc
	if (ctx.cr6.eq) goto loc_821728DC;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821728DC;
	sub_82080000(ctx, base);
loc_821728DC:
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

__attribute__((alias("__imp__sub_821728F8"))) PPC_WEAK_FUNC(sub_821728F8);
PPC_FUNC_IMPL(__imp__sub_821728F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82172900;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82172938
	if (!ctx.cr6.eq) goto loc_82172938;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8217292C;
	sub_8208CFB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x821729f4
	goto loc_821729F4;
loc_82172938:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8217298c
	if (!ctx.cr6.eq) goto loc_8217298C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x82172948;
	sub_8208D070(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x82172954;
	sub_8208D070(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x8208d070
	ctx.lr = 0x82172968;
	sub_8208D070(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x82172974;
	sub_8208D070(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x82172980;
	sub_8208D070(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x821729e0
	goto loc_821729E0;
loc_8217298C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821729f4
	if (!ctx.cr6.eq) goto loc_821729F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217299C;
	sub_8208D070(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x821729A8;
	sub_8208D070(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x821729B4;
	sub_8208D070(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x821729C0;
	sub_8208D070(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x821729CC;
	sub_8208D070(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208d070
	ctx.lr = 0x821729D8;
	sub_8208D070(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_821729E0:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x821729F4;
	sub_8208CFB0(ctx, base);
loc_821729F4:
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82172A10"))) PPC_WEAK_FUNC(sub_82172A10);
PPC_FUNC_IMPL(__imp__sub_82172A10) {
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
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r5,r11,-27872
	ctx.r5.s64 = ctx.r11.s64 + -27872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stb r10,35(r3)
	PPC_STORE_U8(ctx.r3.u32 + 35, ctx.r10.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// sth r11,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// stb r11,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r11.u8);
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// sth r11,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r11.u16);
	// sth r4,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r4.u16);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82172AA0:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stwcx. r7,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82172aa0
	if (!ctx.cr0.eq) goto loc_82172AA0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82172b2c
	if (ctx.cr6.eq) goto loc_82172B2C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r30,r11,-7224
	ctx.r30.s64 = ctx.r11.s64 + -7224;
	// addi r3,r30,16452
	ctx.r3.s64 = ctx.r30.s64 + 16452;
	// bl 0x823052d8
	ctx.lr = 0x82172ADC;
	sub_823052D8(ctx, base);
	// lhz r9,62(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,16452
	ctx.r3.s64 = ctx.r30.s64 + 16452;
	// lwz r11,16444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16444);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16440(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16440);
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// lwz r11,16440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16440);
	// stwx r31,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r11,16448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16448, ctx.r11.u32);
	// bl 0x823051a8
	ctx.lr = 0x82172B28;
	sub_823051A8(ctx, base);
	// b 0x82172b68
	goto loc_82172B68;
loc_82172B2C:
	// bl 0x82175158
	ctx.lr = 0x82172B30;
	sub_82175158(ctx, base);
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,24576
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24576, ctx.xer);
	// bge cr6,0x82172b64
	if (!ctx.cr6.lt) goto loc_82172B64;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6936
	ctx.r11.s64 = ctx.r11.s64 + 6936;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82172b64
	if (!ctx.cr6.eq) goto loc_82172B64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_82172B64:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82172B68:
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

__attribute__((alias("__imp__sub_82172B84"))) PPC_WEAK_FUNC(sub_82172B84);
PPC_FUNC_IMPL(__imp__sub_82172B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172B88"))) PPC_WEAK_FUNC(sub_82172B88);
PPC_FUNC_IMPL(__imp__sub_82172B88) {
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
	// bl 0x82172be8
	ctx.lr = 0x82172BA8;
	sub_82172BE8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172bc8
	if (ctx.cr6.eq) goto loc_82172BC8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82172bc8
	if (ctx.cr6.eq) goto loc_82172BC8;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82172BC8;
	sub_82080000(ctx, base);
loc_82172BC8:
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

__attribute__((alias("__imp__sub_82172BE4"))) PPC_WEAK_FUNC(sub_82172BE4);
PPC_FUNC_IMPL(__imp__sub_82172BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172BE8"))) PPC_WEAK_FUNC(sub_82172BE8);
PPC_FUNC_IMPL(__imp__sub_82172BE8) {
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-27872
	ctx.r10.s64 = ctx.r11.s64 + -27872;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x820de9b8
	ctx.lr = 0x82172C10;
	sub_820DE9B8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82172c28
	if (ctx.cr6.eq) goto loc_82172C28;
	// bl 0x821750b0
	ctx.lr = 0x82172C20;
	sub_821750B0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82172C28:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82172c50
	if (!ctx.cr6.gt) goto loc_82172C50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172c50
	if (ctx.cr6.eq) goto loc_82172C50;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82172C50;
	sub_82080000(ctx, base);
loc_82172C50:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82172C6C"))) PPC_WEAK_FUNC(sub_82172C6C);
PPC_FUNC_IMPL(__imp__sub_82172C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172C70"))) PPC_WEAK_FUNC(sub_82172C70);
PPC_FUNC_IMPL(__imp__sub_82172C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82172C78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82175018
	ctx.lr = 0x82172C88;
	sub_82175018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172d58
	if (ctx.cr6.eq) goto loc_82172D58;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172cdc
	if (ctx.cr6.eq) goto loc_82172CDC;
loc_82172CA8:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82172cc4
	if (ctx.cr6.eq) goto loc_82172CC4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172ca8
	if (!ctx.cr6.eq) goto loc_82172CA8;
	// b 0x82172cdc
	goto loc_82172CDC;
loc_82172CC4:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82172cd8
	if (ctx.cr6.eq) goto loc_82172CD8;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x82172cdc
	goto loc_82172CDC;
loc_82172CD8:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82172CDC:
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172d20
	if (!ctx.cr6.eq) goto loc_82172D20;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82172d00
	if (ctx.cr6.eq) goto loc_82172D00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82174f48
	ctx.lr = 0x82172D00;
	sub_82174F48(ctx, base);
loc_82172D00:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82172d10
	if (ctx.cr6.eq) goto loc_82172D10;
	// bl 0x821750b0
	ctx.lr = 0x82172D10;
	sub_821750B0(ctx, base);
loc_82172D10:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x821765c8
	ctx.lr = 0x82172D20;
	sub_821765C8(ctx, base);
loc_82172D20:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
loc_82172D28:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82172d50
	if (!ctx.cr6.eq) goto loc_82172D50;
	// stwcx. r29,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82172d28
	if (!ctx.cr0.eq) goto loc_82172D28;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82172D50:
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82172D58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82172D60"))) PPC_WEAK_FUNC(sub_82172D60);
PPC_FUNC_IMPL(__imp__sub_82172D60) {
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
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
loc_82172D7C:
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
	// bne 0x82172d7c
	if (!ctx.cr0.eq) goto loc_82172D7C;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82172dd4
	if (!ctx.cr6.eq) goto loc_82172DD4;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,300
	ctx.r8.u64 = ctx.r10.u64 | 300;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// beq cr6,0x82172dcc
	if (ctx.cr6.eq) goto loc_82172DCC;
	// bl 0x821750b0
	ctx.lr = 0x82172DCC;
	sub_821750B0(ctx, base);
loc_82172DCC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82172DD4:
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

__attribute__((alias("__imp__sub_82172DF0"))) PPC_WEAK_FUNC(sub_82172DF0);
PPC_FUNC_IMPL(__imp__sub_82172DF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x821749b0
	sub_821749B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82172DF8"))) PPC_WEAK_FUNC(sub_82172DF8);
PPC_FUNC_IMPL(__imp__sub_82172DF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82174b00
	sub_82174B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82172E00"))) PPC_WEAK_FUNC(sub_82172E00);
PPC_FUNC_IMPL(__imp__sub_82172E00) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82172e30
	if (!ctx.cr6.eq) goto loc_82172E30;
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
loc_82172E30:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172e60
	if (!ctx.cr6.eq) goto loc_82172E60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82172E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82172E60:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x82173fd0
	ctx.lr = 0x82172E7C;
	sub_82173FD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82172E8C"))) PPC_WEAK_FUNC(sub_82172E8C);
PPC_FUNC_IMPL(__imp__sub_82172E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172E90"))) PPC_WEAK_FUNC(sub_82172E90);
PPC_FUNC_IMPL(__imp__sub_82172E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82172E98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82172ee4
	if (ctx.cr6.eq) goto loc_82172EE4;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82172ee4
	if (ctx.cr6.eq) goto loc_82172EE4;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
loc_82172EC4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82172ec4
	if (!ctx.cr0.eq) goto loc_82172EC4;
	// b 0x82172f24
	goto loc_82172F24;
loc_82172EE4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_82172EEC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82172eec
	if (!ctx.cr0.eq) goto loc_82172EEC;
loc_82172F08:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82172f08
	if (!ctx.cr0.eq) goto loc_82172F08;
loc_82172F24:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-29208
	ctx.r9.s64 = ctx.r11.s64 + -29208;
	// ori r8,r10,49164
	ctx.r8.u64 = ctx.r10.u64 | 49164;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172f60
	if (ctx.cr6.eq) goto loc_82172F60;
	// lwz r31,548(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82172f60
	if (ctx.cr6.eq) goto loc_82172F60;
	// bl 0x82247330
	ctx.lr = 0x82172F50;
	sub_82247330(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82172f60
	if (!ctx.cr6.eq) goto loc_82172F60;
	// bl 0x820ddca8
	ctx.lr = 0x82172F60;
	sub_820DDCA8(ctx, base);
loc_82172F60:
	// bl 0x82169eb0
	ctx.lr = 0x82172F64;
	sub_82169EB0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r29,24
	ctx.r27.s64 = ctx.r29.s64 + 24;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x823052d8
	ctx.lr = 0x82172F94;
	sub_823052D8(ctx, base);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82172fac
	if (ctx.cr6.eq) goto loc_82172FAC;
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// b 0x82172fb0
	goto loc_82172FB0;
loc_82172FAC:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82172FB0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lbz r8,64(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8217301c
	if (ctx.cr6.eq) goto loc_8217301C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r29,56
	ctx.r31.s64 = ctx.r29.s64 + 56;
	// bl 0x822473f8
	ctx.lr = 0x82172FEC;
	sub_822473F8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82172FF0:
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
	// bne 0x82172ff0
	if (!ctx.cr0.eq) goto loc_82172FF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823051a8
	ctx.lr = 0x82173014;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8217301C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,65(r29)
	PPC_STORE_U8(ctx.r29.u32 + 65, ctx.r11.u8);
	// bl 0x823051a8
	ctx.lr = 0x8217302C;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82173034"))) PPC_WEAK_FUNC(sub_82173034);
PPC_FUNC_IMPL(__imp__sub_82173034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173038"))) PPC_WEAK_FUNC(sub_82173038);
PPC_FUNC_IMPL(__imp__sub_82173038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82173040;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82173088
	if (ctx.cr6.eq) goto loc_82173088;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82173088
	if (ctx.cr6.eq) goto loc_82173088;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
loc_82173068:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82173068
	if (!ctx.cr0.eq) goto loc_82173068;
	// b 0x821730c8
	goto loc_821730C8;
loc_82173088:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_82173090:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82173090
	if (!ctx.cr0.eq) goto loc_82173090;
loc_821730AC:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821730ac
	if (!ctx.cr0.eq) goto loc_821730AC;
loc_821730C8:
	// bl 0x82169eb0
	ctx.lr = 0x821730CC;
	sub_82169EB0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r27,r29,24
	ctx.r27.s64 = ctx.r29.s64 + 24;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x823052d8
	ctx.lr = 0x821730FC;
	sub_823052D8(ctx, base);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82173114
	if (ctx.cr6.eq) goto loc_82173114;
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// b 0x82173118
	goto loc_82173118;
loc_82173114:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82173118:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lbz r7,64(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82173188
	if (ctx.cr6.eq) goto loc_82173188;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r29,56
	ctx.r31.s64 = ctx.r29.s64 + 56;
	// bl 0x822473f8
	ctx.lr = 0x82173158;
	sub_822473F8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_8217315C:
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
	// bne 0x8217315c
	if (!ctx.cr0.eq) goto loc_8217315C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823051a8
	ctx.lr = 0x82173180;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82173188:
	// stb r28,65(r29)
	PPC_STORE_U8(ctx.r29.u32 + 65, ctx.r28.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823051a8
	ctx.lr = 0x82173194;
	sub_823051A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217319C"))) PPC_WEAK_FUNC(sub_8217319C);
PPC_FUNC_IMPL(__imp__sub_8217319C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821731A0"))) PPC_WEAK_FUNC(sub_821731A0);
PPC_FUNC_IMPL(__imp__sub_821731A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821731A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
loc_821731BC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821731bc
	if (!ctx.cr0.eq) goto loc_821731BC;
	// bl 0x82169eb0
	ctx.lr = 0x821731DC;
	sub_82169EB0(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// bl 0x823052d8
	ctx.lr = 0x82173210;
	sub_823052D8(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82173228
	if (ctx.cr6.eq) goto loc_82173228;
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// b 0x8217322c
	goto loc_8217322C;
loc_82173228:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8217322C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lbz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8217329c
	if (ctx.cr6.eq) goto loc_8217329C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r30,56
	ctx.r31.s64 = ctx.r30.s64 + 56;
	// bl 0x822473f8
	ctx.lr = 0x8217326C;
	sub_822473F8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82173270:
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
	// bne 0x82173270
	if (!ctx.cr0.eq) goto loc_82173270;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x82173294;
	sub_823051A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8217329C:
	// stb r28,65(r30)
	PPC_STORE_U8(ctx.r30.u32 + 65, ctx.r28.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x821732A8;
	sub_823051A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821732B0"))) PPC_WEAK_FUNC(sub_821732B0);
PPC_FUNC_IMPL(__imp__sub_821732B0) {
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
	// bl 0x82173310
	ctx.lr = 0x821732D0;
	sub_82173310(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821732f0
	if (ctx.cr6.eq) goto loc_821732F0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821732f0
	if (ctx.cr6.eq) goto loc_821732F0;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821732F0;
	sub_82080000(ctx, base);
loc_821732F0:
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

__attribute__((alias("__imp__sub_8217330C"))) PPC_WEAK_FUNC(sub_8217330C);
PPC_FUNC_IMPL(__imp__sub_8217330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173310"))) PPC_WEAK_FUNC(sub_82173310);
PPC_FUNC_IMPL(__imp__sub_82173310) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173334
	if (ctx.cr6.eq) goto loc_82173334;
	// bl 0x82246e18
	ctx.lr = 0x82173334;
	sub_82246E18(ctx, base);
loc_82173334:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217334c
	if (ctx.cr6.eq) goto loc_8217334C;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x8217334C;
	sub_82246E18(ctx, base);
loc_8217334C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4344
	ctx.r9.s64 = ctx.r11.s64 + 4344;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82305448
	ctx.lr = 0x82173368;
	sub_82305448(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,4352
	ctx.r7.s64 = ctx.r8.s64 + 4352;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82173388"))) PPC_WEAK_FUNC(sub_82173388);
PPC_FUNC_IMPL(__imp__sub_82173388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82173390;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x821733A8;
	sub_823052D8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821733ec
	if (ctx.cr6.eq) goto loc_821733EC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821733dc
	if (!ctx.cr6.eq) goto loc_821733DC;
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// b 0x821733e0
	goto loc_821733E0;
loc_821733DC:
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
loc_821733E0:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
loc_821733EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x821733F4;
	sub_823051A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82173408
	if (!ctx.cr6.eq) goto loc_82173408;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82173408:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8217346c
	if (!ctx.cr6.eq) goto loc_8217346C;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82173448
	if (ctx.cr6.eq) goto loc_82173448;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82173448
	if (ctx.cr6.eq) goto loc_82173448;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173458
	if (ctx.cr6.eq) goto loc_82173458;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82174450
	ctx.lr = 0x82173444;
	sub_82174450(ctx, base);
	// b 0x821734e0
	goto loc_821734E0;
loc_82173448:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x8217345c
	if (!ctx.cr6.eq) goto loc_8217345C;
loc_82173458:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8217345C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82174450
	ctx.lr = 0x82173468;
	sub_82174450(ctx, base);
	// b 0x821734e0
	goto loc_821734E0;
loc_8217346C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821734c4
	if (!ctx.cr6.eq) goto loc_821734C4;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x821734a4
	if (ctx.cr6.eq) goto loc_821734A4;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x821734a4
	if (ctx.cr6.eq) goto loc_821734A4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821734b4
	if (ctx.cr6.eq) goto loc_821734B4;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82174810
	ctx.lr = 0x821734A0;
	sub_82174810(ctx, base);
	// b 0x821734e0
	goto loc_821734E0;
loc_821734A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x821734b8
	if (!ctx.cr6.eq) goto loc_821734B8;
loc_821734B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821734B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82174810
	ctx.lr = 0x821734C0;
	sub_82174810(ctx, base);
	// b 0x821734e0
	goto loc_821734E0;
loc_821734C4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821734e0
	if (!ctx.cr6.eq) goto loc_821734E0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821734E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821734E0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82173510
	if (ctx.cr6.eq) goto loc_82173510;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82173510
	if (ctx.cr6.eq) goto loc_82173510;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82172d60
	ctx.lr = 0x821734FC;
	sub_82172D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b508
	ctx.lr = 0x82173504;
	sub_8216B508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82173510:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82174d18
	ctx.lr = 0x82173518;
	sub_82174D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b508
	ctx.lr = 0x82173520;
	sub_8216B508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217352C"))) PPC_WEAK_FUNC(sub_8217352C);
PPC_FUNC_IMPL(__imp__sub_8217352C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173530"))) PPC_WEAK_FUNC(sub_82173530);
PPC_FUNC_IMPL(__imp__sub_82173530) {
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
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82173554;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82173560
	if (!ctx.cr6.eq) goto loc_82173560;
	// bl 0x821b3000
	ctx.lr = 0x82173560;
	sub_821B3000(ctx, base);
loc_82173560:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r3,r11,32768
	ctx.r3.u64 = ctx.r11.u64 | 32768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82173580;
	sub_82082030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82173610
	if (!ctx.cr6.eq) goto loc_82173610;
	// addi r31,r30,56
	ctx.r31.s64 = ctx.r30.s64 + 56;
loc_821735A0:
	// li r4,1000
	ctx.r4.s64 = 1000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82247250
	ctx.lr = 0x821735AC;
	sub_82247250(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821735dc
	if (ctx.cr6.eq) goto loc_821735DC;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
loc_821735C0:
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
	// bne 0x821735c0
	if (!ctx.cr0.eq) goto loc_821735C0;
loc_821735DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821735a0
	if (ctx.cr6.eq) goto loc_821735A0;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82173610
	if (!ctx.cr6.eq) goto loc_82173610;
loc_821735F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82173388
	ctx.lr = 0x821735F8;
	sub_82173388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821735f0
	if (!ctx.cr6.eq) goto loc_821735F0;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821735a0
	if (ctx.cr6.eq) goto loc_821735A0;
loc_82173610:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8217362C"))) PPC_WEAK_FUNC(sub_8217362C);
PPC_FUNC_IMPL(__imp__sub_8217362C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173630"))) PPC_WEAK_FUNC(sub_82173630);
PPC_FUNC_IMPL(__imp__sub_82173630) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82173670
	if (ctx.cr6.eq) goto loc_82173670;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82173670
	if (ctx.cr6.eq) goto loc_82173670;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173680
	if (ctx.cr6.eq) goto loc_82173680;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82173684
	goto loc_82173684;
loc_82173670:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82173684
	if (!ctx.cr6.eq) goto loc_82173684;
loc_82173680:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82173684:
	// lbz r11,22(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82173770
	if (!ctx.cr6.eq) goto loc_82173770;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r11,26128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82173700
	if (!ctx.cr6.eq) goto loc_82173700;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821736B0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821736bc
	if (!ctx.cr6.eq) goto loc_821736BC;
	// bl 0x821b3000
	ctx.lr = 0x821736BC;
	sub_821B3000(ctx, base);
loc_821736BC:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,16384
	ctx.r8.s64 = ctx.r10.s64 + 16384;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821736e4
	if (!ctx.cr6.gt) goto loc_821736E4;
	// lis r10,-13569
	ctx.r10.s64 = -889257984;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,4492
	ctx.r8.s64 = ctx.r9.s64 + 4492;
	// stw r8,-13570(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13570, ctx.r8.u32);
loc_821736E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,16384
	ctx.r8.s64 = ctx.r10.s64 + 16384;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,26128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26128, ctx.r10.u32);
loc_82173700:
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,26124(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26124);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,26124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26124, ctx.r10.u32);
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82173750
	if (ctx.cr6.eq) goto loc_82173750;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82173750
	if (ctx.cr6.eq) goto loc_82173750;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173760
	if (ctx.cr6.eq) goto loc_82173760;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82173764
	goto loc_82173764;
loc_82173750:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82173764
	if (!ctx.cr6.eq) goto loc_82173764;
loc_82173760:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82173764:
	// lbz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r9.u8);
loc_82173770:
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

__attribute__((alias("__imp__sub_82173788"))) PPC_WEAK_FUNC(sub_82173788);
PPC_FUNC_IMPL(__imp__sub_82173788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82173790;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82173968
	if (!ctx.cr6.eq) goto loc_82173968;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,26140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26140);
	// lwz r10,26144(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26144);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26140, ctx.r11.u32);
	// stwx r31,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r31.u32);
	// lbz r6,22(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// ori r5,r6,16
	ctx.r5.u64 = ctx.r6.u64 | 16;
	// stb r5,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r5.u8);
	// bl 0x82174e40
	ctx.lr = 0x821737E0;
	sub_82174E40(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82173968
	if (ctx.cr6.eq) goto loc_82173968;
	// lhz r25,20(r31)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82173960
	if (ctx.cr6.eq) goto loc_82173960;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// addi r29,r11,-20928
	ctx.r29.s64 = ctx.r11.s64 + -20928;
	// lwz r7,26132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26132);
	// lwz r5,26120(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26120);
loc_8217381C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82173844
	if (ctx.cr6.eq) goto loc_82173844;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82173844
	if (ctx.cr6.eq) goto loc_82173844;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173950
	if (ctx.cr6.eq) goto loc_82173950;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82173854
	goto loc_82173854;
loc_82173844:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173950
	if (ctx.cr6.eq) goto loc_82173950;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
loc_82173854:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173950
	if (ctx.cr6.eq) goto loc_82173950;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82173924
	if (!ctx.cr6.eq) goto loc_82173924;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82173950
	if (ctx.cr6.eq) goto loc_82173950;
	// lwz r10,26136(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26136);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
loc_82173884:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x821738b0
	if (ctx.cr6.eq) goto loc_821738B0;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x821738b0
	if (ctx.cr6.eq) goto loc_821738B0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821738c0
	if (ctx.cr6.eq) goto loc_821738C0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x821738c4
	goto loc_821738C4;
loc_821738B0:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x821738c4
	if (!ctx.cr6.eq) goto loc_821738C4;
loc_821738C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821738C4:
	// lhz r4,26(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// lhz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82173974
	if (ctx.cr6.gt) goto loc_82173974;
	// lbz r4,22(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// rlwinm r3,r4,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82173910
	if (!ctx.cr6.eq) goto loc_82173910;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,26132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26132, ctx.r7.u32);
	// stwu r4,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r9.u32 = ea;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// lbz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// ori r4,r10,4
	ctx.r4.u64 = ctx.r10.u64 | 4;
	// stb r4,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r4.u8);
loc_82173910:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82173884
	if (ctx.cr6.lt) goto loc_82173884;
	// b 0x82173950
	goto loc_82173950;
loc_82173924:
	// lhz r11,26(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 26);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173950
	if (ctx.cr6.eq) goto loc_82173950;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82173788
	ctx.lr = 0x8217393C;
	sub_82173788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173974
	if (ctx.cr6.eq) goto loc_82173974;
	// lwz r5,26120(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26120);
	// lwz r7,26132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26132);
loc_82173950:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8217381c
	if (ctx.cr6.lt) goto loc_8217381C;
loc_82173960:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82174d78
	ctx.lr = 0x82173968;
	sub_82174D78(ctx, base);
loc_82173968:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_82173974:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82174d78
	ctx.lr = 0x8217397C;
	sub_82174D78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82173988"))) PPC_WEAK_FUNC(sub_82173988);
PPC_FUNC_IMPL(__imp__sub_82173988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82173990;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82174e40
	ctx.lr = 0x821739A4;
	sub_82174E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173abc
	if (ctx.cr6.eq) goto loc_82173ABC;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r28,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r28.u16);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// sth r28,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r28.u16);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x821739e4
	if (ctx.cr6.eq) goto loc_821739E4;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x821739e4
	if (ctx.cr6.eq) goto loc_821739E4;
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
loc_821739E4:
	// clrlwi r26,r10,24
	ctx.r26.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82173a78
	if (ctx.cr6.eq) goto loc_82173A78;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173a78
	if (ctx.cr6.eq) goto loc_82173A78;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82173A04:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82173a2c
	if (ctx.cr6.eq) goto loc_82173A2C;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82173a2c
	if (ctx.cr6.eq) goto loc_82173A2C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173a3c
	if (ctx.cr6.eq) goto loc_82173A3C;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82173a40
	goto loc_82173A40;
loc_82173A2C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82173a40
	if (!ctx.cr6.eq) goto loc_82173A40;
loc_82173A3C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82173A40:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// beq cr6,0x82173a6c
	if (ctx.cr6.eq) goto loc_82173A6C;
	// rlwinm r11,r11,28,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82173a6c
	if (ctx.cr6.eq) goto loc_82173A6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82174810
	ctx.lr = 0x82173A6C;
	sub_82174810(ctx, base);
loc_82173A6C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82173a04
	if (!ctx.cr0.eq) goto loc_82173A04;
loc_82173A78:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82173aa4
	if (ctx.cr6.eq) goto loc_82173AA4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82173a9c
	if (ctx.cr6.eq) goto loc_82173A9C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82173A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82173A9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82178270
	ctx.lr = 0x82173AA4;
	sub_82178270(ctx, base);
loc_82173AA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82174d78
	ctx.lr = 0x82173AAC;
	sub_82174D78(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82173abc
	if (!ctx.cr6.eq) goto loc_82173ABC;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82174d18
	ctx.lr = 0x82173ABC;
	sub_82174D18(ctx, base);
loc_82173ABC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82173AC4"))) PPC_WEAK_FUNC(sub_82173AC4);
PPC_FUNC_IMPL(__imp__sub_82173AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173AC8"))) PPC_WEAK_FUNC(sub_82173AC8);
PPC_FUNC_IMPL(__imp__sub_82173AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82173AD0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173dac
	if (ctx.cr6.eq) goto loc_82173DAC;
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,26136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26136);
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// stw r10,26132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26132, ctx.r10.u32);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// addi r24,r11,4
	ctx.r24.s64 = ctx.r11.s64 + 4;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lbz r7,22(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// stb r6,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r6.u8);
loc_82173B28:
	// lhz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// stw r11,26140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26140, ctx.r11.u32);
	// cmplwi cr6,r10,264
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 264, ctx.xer);
	// beq cr6,0x82173b5c
	if (ctx.cr6.eq) goto loc_82173B5C;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// beq cr6,0x82173b5c
	if (ctx.cr6.eq) goto loc_82173B5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173b6c
	if (ctx.cr6.eq) goto loc_82173B6C;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// b 0x82173b70
	goto loc_82173B70;
loc_82173B5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82173b70
	if (!ctx.cr6.eq) goto loc_82173B70;
loc_82173B6C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82173B70:
	// cmplwi cr6,r10,264
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 264, ctx.xer);
	// beq cr6,0x82173b90
	if (ctx.cr6.eq) goto loc_82173B90;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// beq cr6,0x82173b90
	if (ctx.cr6.eq) goto loc_82173B90;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173b9c
	if (ctx.cr6.eq) goto loc_82173B9C;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82173ba0
	goto loc_82173BA0;
loc_82173B90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82173ba0
	if (!ctx.cr6.eq) goto loc_82173BA0;
loc_82173B9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82173BA0:
	// bl 0x82173788
	ctx.lr = 0x82173BA4;
	sub_82173788(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,26140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26140);
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 & ctx.r30.u64;
	// beq cr6,0x82173be4
	if (ctx.cr6.eq) goto loc_82173BE4;
	// lwz r10,26144(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82173BCC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lbz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r8,r8,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r8,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r8.u8);
	// bdnz 0x82173bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82173BCC;
loc_82173BE4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r9,26132(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173d40
	if (ctx.cr6.eq) goto loc_82173D40;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82173b28
	if (ctx.cr6.lt) goto loc_82173B28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173d40
	if (ctx.cr6.eq) goto loc_82173D40;
	// lwz r8,26136(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26136);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82173c70
	if (ctx.cr6.eq) goto loc_82173C70;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82173C20:
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82173c48
	if (ctx.cr6.eq) goto loc_82173C48;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82173c48
	if (ctx.cr6.eq) goto loc_82173C48;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173c58
	if (ctx.cr6.eq) goto loc_82173C58;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82173c5c
	goto loc_82173C5C;
loc_82173C48:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82173c5c
	if (!ctx.cr6.eq) goto loc_82173C5C;
loc_82173C58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82173C5C:
	// lbz r7,22(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// stb r6,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r6.u8);
	// bdnz 0x82173c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82173C20;
loc_82173C70:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82173da4
	if (ctx.cr6.eq) goto loc_82173DA4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82173C80:
	// lhzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// add r4,r31,r8
	ctx.r4.u64 = ctx.r31.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82173cac
	if (ctx.cr6.eq) goto loc_82173CAC;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82173cac
	if (ctx.cr6.eq) goto loc_82173CAC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173cbc
	if (ctx.cr6.eq) goto loc_82173CBC;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82173cc0
	goto loc_82173CC0;
loc_82173CAC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82173cc0
	if (!ctx.cr6.eq) goto loc_82173CC0;
loc_82173CBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82173CC0:
	// bl 0x82173988
	ctx.lr = 0x82173CC4;
	sub_82173988(ctx, base);
	// lwz r9,26132(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26132);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r8,26136(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26136);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82173c80
	if (ctx.cr6.lt) goto loc_82173C80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82173da4
	if (ctx.cr6.eq) goto loc_82173DA4;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82173CEC:
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82173d14
	if (ctx.cr6.eq) goto loc_82173D14;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82173d14
	if (ctx.cr6.eq) goto loc_82173D14;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173d24
	if (ctx.cr6.eq) goto loc_82173D24;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82173d28
	goto loc_82173D28;
loc_82173D14:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82173d28
	if (!ctx.cr6.eq) goto loc_82173D28;
loc_82173D24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82173D28:
	// lbz r8,22(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r7,r7,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// bdnz 0x82173cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82173CEC;
loc_82173D40:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82173da4
	if (ctx.cr6.eq) goto loc_82173DA4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82173D50:
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82173d78
	if (ctx.cr6.eq) goto loc_82173D78;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82173d78
	if (ctx.cr6.eq) goto loc_82173D78;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173d88
	if (ctx.cr6.eq) goto loc_82173D88;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82173d8c
	goto loc_82173D8C;
loc_82173D78:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82173d8c
	if (!ctx.cr6.eq) goto loc_82173D8C;
loc_82173D88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82173D8C:
	// lbz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r8,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r8.u8);
	// bdnz 0x82173d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82173D50;
loc_82173DA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,26132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26132, ctx.r11.u32);
loc_82173DAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82173DB4"))) PPC_WEAK_FUNC(sub_82173DB4);
PPC_FUNC_IMPL(__imp__sub_82173DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173DB8"))) PPC_WEAK_FUNC(sub_82173DB8);
PPC_FUNC_IMPL(__imp__sub_82173DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82173DC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// lwz r11,26124(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173fc4
	if (ctx.cr6.eq) goto loc_82173FC4;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82173DE0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82173dec
	if (!ctx.cr6.eq) goto loc_82173DEC;
	// bl 0x821b3000
	ctx.lr = 0x82173DEC;
	sub_821B3000(ctx, base);
loc_82173DEC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// addi r9,r11,4492
	ctx.r9.s64 = ctx.r11.s64 + 4492;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r24,-13569
	ctx.r24.s64 = -889257984;
	// addi r8,r11,8192
	ctx.r8.s64 = ctx.r11.s64 + 8192;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82173e14
	if (!ctx.cr6.gt) goto loc_82173E14;
	// stw r9,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r9.u32);
loc_82173E14:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r10,8192
	ctx.r11.s64 = ctx.r10.s64 + 8192;
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,26136(r26)
	PPC_STORE_U32(ctx.r26.u32 + 26136, ctx.r8.u32);
	// ble cr6,0x82173e44
	if (!ctx.cr6.gt) goto loc_82173E44;
	// stw r9,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r9.u32);
loc_82173E44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// lwz r9,26124(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26124);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r30,26128(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26128);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,26144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26144, ctx.r11.u32);
	// beq cr6,0x82173edc
	if (ctx.cr6.eq) goto loc_82173EDC;
loc_82173E78:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82173ea0
	if (ctx.cr6.eq) goto loc_82173EA0;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82173ea0
	if (ctx.cr6.eq) goto loc_82173EA0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173eb0
	if (ctx.cr6.eq) goto loc_82173EB0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82173eb4
	goto loc_82173EB4;
loc_82173EA0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82173eb4
	if (!ctx.cr6.eq) goto loc_82173EB4;
loc_82173EB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82173EB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82173ac8
	ctx.lr = 0x82173EBC;
	sub_82173AC8(ctx, base);
	// lwz r11,26124(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26124);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82173e78
	if (ctx.cr6.lt) goto loc_82173E78;
	// lwz r8,26136(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26136);
	// lwz r11,26144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26144);
	// lwz r30,26128(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26128);
loc_82173EDC:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r7,r10,4520
	ctx.r7.s64 = ctx.r10.s64 + 4520;
	// beq cr6,0x82173f24
	if (ctx.cr6.eq) goto loc_82173F24;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bge cr6,0x82173efc
	if (!ctx.cr6.lt) goto loc_82173EFC;
	// stw r7,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r7.u32);
loc_82173EFC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82173f18
	if (ctx.cr6.eq) goto loc_82173F18;
	// stw r7,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r7.u32);
loc_82173F18:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82173F24:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,26144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26144, ctx.r11.u32);
	// beq cr6,0x82173f6c
	if (ctx.cr6.eq) goto loc_82173F6C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bge cr6,0x82173f44
	if (!ctx.cr6.lt) goto loc_82173F44;
	// stw r7,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r7.u32);
loc_82173F44:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82173f60
	if (ctx.cr6.eq) goto loc_82173F60;
	// stw r7,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r7.u32);
loc_82173F60:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82173F6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,26136(r26)
	PPC_STORE_U32(ctx.r26.u32 + 26136, ctx.r11.u32);
	// beq cr6,0x82173fb4
	if (ctx.cr6.eq) goto loc_82173FB4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bge cr6,0x82173f8c
	if (!ctx.cr6.lt) goto loc_82173F8C;
	// stw r7,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r7.u32);
loc_82173F8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82173fa8
	if (ctx.cr6.eq) goto loc_82173FA8;
	// stw r7,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r7.u32);
loc_82173FA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82173FB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,26128(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26128, ctx.r11.u32);
	// stw r10,26124(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26124, ctx.r10.u32);
loc_82173FC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82173FCC"))) PPC_WEAK_FUNC(sub_82173FCC);
PPC_FUNC_IMPL(__imp__sub_82173FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173FD0"))) PPC_WEAK_FUNC(sub_82173FD0);
PPC_FUNC_IMPL(__imp__sub_82173FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82173FD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82173ffc
	if (!ctx.cr6.eq) goto loc_82173FFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82173FFC:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r29,r11,6912
	ctx.r29.s64 = ctx.r11.s64 + 6912;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x82174010;
	sub_823052D8(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r11,25550(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25550);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82174040
	if (!ctx.cr6.eq) goto loc_82174040;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r11,25550(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25550, ctx.r11.u8);
	// lwz r11,26156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26156, ctx.r11.u32);
loc_82174040:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82174078
	ctx.lr = 0x8217404C;
	sub_82174078(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174064
	if (ctx.cr6.eq) goto loc_82174064;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,25550(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25550, ctx.r11.u8);
loc_82174064:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x8217406C;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82174078"))) PPC_WEAK_FUNC(sub_82174078);
PPC_FUNC_IMPL(__imp__sub_82174078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82174080;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,26156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26156);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82174180
	if (ctx.cr6.eq) goto loc_82174180;
	// lhz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821740bc
	if (!ctx.cr6.eq) goto loc_821740BC;
loc_821740B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_821740BC:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x821740fc
	if (ctx.cr6.eq) goto loc_821740FC;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x821740fc
	if (ctx.cr6.eq) goto loc_821740FC;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821740fc
	if (ctx.cr6.eq) goto loc_821740FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821740F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821740b0
	if (ctx.cr6.eq) goto loc_821740B0;
loc_821740FC:
	// lhz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82174180
	if (ctx.cr6.eq) goto loc_82174180;
loc_82174110:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x8217414c
	if (ctx.cr6.eq) goto loc_8217414C;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8217414c
	if (ctx.cr6.eq) goto loc_8217414C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174170
	if (ctx.cr6.eq) goto loc_82174170;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821740b0
	if (ctx.cr6.eq) goto loc_821740B0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x8217415c
	goto loc_8217415C;
loc_8217414C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174170
	if (ctx.cr6.eq) goto loc_82174170;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
loc_8217415C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82174078
	ctx.lr = 0x82174164;
	sub_82174078(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821740b0
	if (ctx.cr6.eq) goto loc_821740B0;
loc_82174170:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82174110
	if (ctx.cr6.lt) goto loc_82174110;
loc_82174180:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217418C"))) PPC_WEAK_FUNC(sub_8217418C);
PPC_FUNC_IMPL(__imp__sub_8217418C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174190"))) PPC_WEAK_FUNC(sub_82174190);
PPC_FUNC_IMPL(__imp__sub_82174190) {
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
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r11,26148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821741d8
	if (ctx.cr6.eq) goto loc_821741D8;
	// lwz r10,26152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_821741C4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lbz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// stb r8,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r8.u8);
	// bdnz 0x821741c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821741C4;
loc_821741D8:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821741E4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821741f0
	if (!ctx.cr6.eq) goto loc_821741F0;
	// bl 0x821b3000
	ctx.lr = 0x821741F0;
	sub_821B3000(ctx, base);
loc_821741F0:
	// lwz r8,26152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26152);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82174258
	if (ctx.cr6.eq) goto loc_82174258;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r6,-13569
	ctx.r6.s64 = -889257984;
	// addi r7,r10,4520
	ctx.r7.s64 = ctx.r10.s64 + 4520;
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// bge cr6,0x8217421c
	if (!ctx.cr6.lt) goto loc_8217421C;
	// stw r7,-13570(r6)
	PPC_STORE_U32(ctx.r6.u32 + -13570, ctx.r7.u32);
loc_8217421C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-16384
	ctx.r10.s64 = ctx.r10.s64 + -16384;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82174238
	if (ctx.cr6.eq) goto loc_82174238;
	// stw r7,-13570(r6)
	PPC_STORE_U32(ctx.r6.u32 + -13570, ctx.r7.u32);
loc_82174238:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r8,-16384
	ctx.r8.s64 = ctx.r8.s64 + -16384;
	// stw r10,26152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26152, ctx.r10.u32);
	// stw r9,26148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26148, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x82174268
	goto loc_82174268;
loc_82174258:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,26152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26152, ctx.r11.u32);
	// stw r10,26148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26148, ctx.r10.u32);
loc_82174268:
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

__attribute__((alias("__imp__sub_82174280"))) PPC_WEAK_FUNC(sub_82174280);
PPC_FUNC_IMPL(__imp__sub_82174280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82174288;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82174e40
	ctx.lr = 0x821742A0;
	sub_82174E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82174390
	if (!ctx.cr6.eq) goto loc_82174390;
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82174444
	if (ctx.cr6.gt) goto loc_82174444;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821742e8
	if (!ctx.cr6.eq) goto loc_821742E8;
	// lhz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r9.u16);
	// lhz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// ori r6,r7,14
	ctx.r6.u64 = ctx.r7.u64 | 14;
	// sth r6,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r6.u16);
loc_821742E8:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82174444
	if (ctx.cr6.gt) goto loc_82174444;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,-20928
	ctx.r9.s64 = ctx.r9.s64 + -20928;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82174310:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82174380
	if (!ctx.cr6.eq) goto loc_82174380;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,264
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 264, ctx.xer);
	// beq cr6,0x82174350
	if (ctx.cr6.eq) goto loc_82174350;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// beq cr6,0x82174350
	if (ctx.cr6.eq) goto loc_82174350;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174360
	if (ctx.cr6.eq) goto loc_82174360;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82174364
	goto loc_82174364;
loc_82174350:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82174364
	if (!ctx.cr6.eq) goto loc_82174364;
loc_82174360:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82174364:
	// lhz r10,26(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r8.u16);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhz r5,2(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// ori r4,r5,14
	ctx.r4.u64 = ctx.r5.u64 | 14;
	// sth r4,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r4.u16);
loc_82174380:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82174310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82174310;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82174390:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217443c
	if (ctx.cr6.eq) goto loc_8217443C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821743A4:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174430
	if (ctx.cr6.eq) goto loc_82174430;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x821743dc
	if (ctx.cr6.eq) goto loc_821743DC;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x821743dc
	if (ctx.cr6.eq) goto loc_821743DC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174430
	if (ctx.cr6.eq) goto loc_82174430;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x821743ec
	goto loc_821743EC;
loc_821743DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174430
	if (ctx.cr6.eq) goto loc_82174430;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
loc_821743EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174430
	if (ctx.cr6.eq) goto loc_82174430;
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82174430
	if (!ctx.cr6.eq) goto loc_82174430;
	// rlwinm r11,r10,29,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFF;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82174424
	if (ctx.cr6.eq) goto loc_82174424;
	// rlwinm r11,r10,30,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFF;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82174430
	if (ctx.cr6.eq) goto loc_82174430;
loc_82174424:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82174280
	ctx.lr = 0x82174430;
	sub_82174280(ctx, base);
loc_82174430:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x821743a4
	if (!ctx.cr0.eq) goto loc_821743A4;
loc_8217443C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82174d78
	ctx.lr = 0x82174444;
	sub_82174D78(ctx, base);
loc_82174444:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217444C"))) PPC_WEAK_FUNC(sub_8217444C);
PPC_FUNC_IMPL(__imp__sub_8217444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174450"))) PPC_WEAK_FUNC(sub_82174450);
PPC_FUNC_IMPL(__imp__sub_82174450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82174458;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82174e40
	ctx.lr = 0x82174470;
	sub_82174E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// bne cr6,0x82174564
	if (!ctx.cr6.eq) goto loc_82174564;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// sth r9,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r9.u16);
	// lhz r7,2(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// sth r6,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r6.u16);
	// lhz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r4,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r4.u16);
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// ori r9,r11,14
	ctx.r9.u64 = ctx.r11.u64 | 14;
	// sth r9,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r9.u16);
	// lbz r8,23(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// lwz r10,26120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82174558
	if (!ctx.cr6.lt) goto loc_82174558;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r7,-20928
	ctx.r10.s64 = ctx.r7.s64 + -20928;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_821744E0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x8217450c
	if (ctx.cr6.eq) goto loc_8217450C;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8217450c
	if (ctx.cr6.eq) goto loc_8217450C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217451c
	if (ctx.cr6.eq) goto loc_8217451C;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82174520
	goto loc_82174520;
loc_8217450C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82174520
	if (!ctx.cr6.eq) goto loc_82174520;
loc_8217451C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82174520:
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82174550
	if (!ctx.cr6.eq) goto loc_82174550;
	// lhz r10,26(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r8.u16);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhz r5,2(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// ori r4,r5,14
	ctx.r4.u64 = ctx.r5.u64 | 14;
	// sth r4,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r4.u16);
loc_82174550:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x821744e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821744E0;
loc_82174558:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82174564:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r10.u16);
	// lhz r8,2(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// sth r7,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r7.u16);
	// lbz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// lhz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// ble cr6,0x82174640
	if (!ctx.cr6.gt) goto loc_82174640;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217462c
	if (!ctx.cr6.eq) goto loc_8217462C;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217462c
	if (ctx.cr6.eq) goto loc_8217462C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
loc_821745B0:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82174620
	if (ctx.cr6.eq) goto loc_82174620;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x821745e8
	if (ctx.cr6.eq) goto loc_821745E8;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x821745e8
	if (ctx.cr6.eq) goto loc_821745E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174620
	if (ctx.cr6.eq) goto loc_82174620;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x821745f8
	goto loc_821745F8;
loc_821745E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174620
	if (ctx.cr6.eq) goto loc_82174620;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
loc_821745F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174620
	if (ctx.cr6.eq) goto loc_82174620;
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82174620
	if (!ctx.cr6.eq) goto loc_82174620;
	// lwz r11,26120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26120);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82174280
	ctx.lr = 0x82174620;
	sub_82174280(ctx, base);
loc_82174620:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x821745b0
	if (!ctx.cr0.eq) goto loc_821745B0;
loc_8217462C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82174d78
	ctx.lr = 0x82174634;
	sub_82174D78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82174640:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821746d8
	if (!ctx.cr6.eq) goto loc_821746D8;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r9,26148(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26148);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821746c0
	if (!ctx.cr6.eq) goto loc_821746C0;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82174668;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82174674
	if (!ctx.cr6.eq) goto loc_82174674;
	// bl 0x821b3000
	ctx.lr = 0x82174674;
	sub_821B3000(ctx, base);
loc_82174674:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,16384
	ctx.r8.s64 = ctx.r10.s64 + 16384;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8217469c
	if (!ctx.cr6.gt) goto loc_8217469C;
	// lis r10,-13569
	ctx.r10.s64 = -889257984;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,4492
	ctx.r8.s64 = ctx.r9.s64 + 4492;
	// stw r8,-13570(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13570, ctx.r8.u32);
loc_8217469C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r10,16384
	ctx.r7.s64 = ctx.r10.s64 + 16384;
	// lwz r9,26148(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26148);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,26152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26152, ctx.r10.u32);
	// b 0x821746c4
	goto loc_821746C4;
loc_821746C0:
	// lwz r11,26152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26152);
loc_821746C4:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r11,26148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26148, ctx.r11.u32);
loc_821746D8:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82174734
	if (ctx.cr6.eq) goto loc_82174734;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82174734
	if (ctx.cr6.eq) goto loc_82174734;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82174774
	if (ctx.cr6.eq) goto loc_82174774;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r29,r11,24,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// bl 0x82177ff0
	ctx.lr = 0x82174710;
	sub_82177FF0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82174774
	if (ctx.cr6.eq) goto loc_82174774;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82174730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82174774
	goto loc_82174774;
loc_82174734:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_8217473C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217473c
	if (!ctx.cr0.eq) goto loc_8217473C;
loc_82174758:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82174758
	if (!ctx.cr0.eq) goto loc_82174758;
loc_82174774:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821747ec
	if (ctx.cr6.eq) goto loc_821747EC;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821747ec
	if (ctx.cr6.eq) goto loc_821747EC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82174794:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x821747bc
	if (ctx.cr6.eq) goto loc_821747BC;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x821747bc
	if (ctx.cr6.eq) goto loc_821747BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821747e0
	if (ctx.cr6.eq) goto loc_821747E0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x821747cc
	goto loc_821747CC;
loc_821747BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821747e0
	if (ctx.cr6.eq) goto loc_821747E0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
loc_821747CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821747e0
	if (ctx.cr6.eq) goto loc_821747E0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82174450
	ctx.lr = 0x821747E0;
	sub_82174450(ctx, base);
loc_821747E0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82174794
	if (!ctx.cr0.eq) goto loc_82174794;
loc_821747EC:
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// sth r10,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r10.u16);
	// bl 0x82174d78
	ctx.lr = 0x82174800;
	sub_82174D78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217480C"))) PPC_WEAK_FUNC(sub_8217480C);
PPC_FUNC_IMPL(__imp__sub_8217480C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174810"))) PPC_WEAK_FUNC(sub_82174810);
PPC_FUNC_IMPL(__imp__sub_82174810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82174818;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821749a4
	if (!ctx.cr6.eq) goto loc_821749A4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82174e40
	ctx.lr = 0x8217483C;
	sub_82174E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821749a4
	if (ctx.cr6.eq) goto loc_821749A4;
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// lhz r10,26(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// sth r7,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r7.u16);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82174884
	if (ctx.cr6.gt) goto loc_82174884;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82174894
	if (!ctx.cr6.gt) goto loc_82174894;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82173630
	ctx.lr = 0x82174884;
	sub_82173630(ctx, base);
loc_82174884:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82174d78
	ctx.lr = 0x8217488C;
	sub_82174D78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82174894:
	// lbz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r9,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stb r9,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r9.u8);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x821748cc
	if (ctx.cr6.eq) goto loc_821748CC;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x821748cc
	if (ctx.cr6.eq) goto loc_821748CC;
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
loc_821748CC:
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82174960
	if (ctx.cr6.eq) goto loc_82174960;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174960
	if (ctx.cr6.eq) goto loc_82174960;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821748EC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82174914
	if (ctx.cr6.eq) goto loc_82174914;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82174914
	if (ctx.cr6.eq) goto loc_82174914;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174924
	if (ctx.cr6.eq) goto loc_82174924;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82174928
	goto loc_82174928;
loc_82174914:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82174928
	if (!ctx.cr6.eq) goto loc_82174928;
loc_82174924:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82174928:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// beq cr6,0x82174954
	if (ctx.cr6.eq) goto loc_82174954;
	// rlwinm r11,r11,28,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82174954
	if (ctx.cr6.eq) goto loc_82174954;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82174810
	ctx.lr = 0x82174954;
	sub_82174810(ctx, base);
loc_82174954:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x821748ec
	if (!ctx.cr0.eq) goto loc_821748EC;
loc_82174960:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8217498c
	if (ctx.cr6.eq) goto loc_8217498C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82174984
	if (ctx.cr6.eq) goto loc_82174984;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82174984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82174984:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82178270
	ctx.lr = 0x8217498C;
	sub_82178270(ctx, base);
loc_8217498C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82174d78
	ctx.lr = 0x82174994;
	sub_82174D78(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821749a4
	if (!ctx.cr6.eq) goto loc_821749A4;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82174d18
	ctx.lr = 0x821749A4;
	sub_82174D18(ctx, base);
loc_821749A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821749AC"))) PPC_WEAK_FUNC(sub_821749AC);
PPC_FUNC_IMPL(__imp__sub_821749AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821749B0"))) PPC_WEAK_FUNC(sub_821749B0);
PPC_FUNC_IMPL(__imp__sub_821749B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821749B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174af4
	if (ctx.cr6.eq) goto loc_82174AF4;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r10,1
	ctx.r28.u64 = ctx.r10.u64 | 1;
	// ori r26,r9,6
	ctx.r26.u64 = ctx.r9.u64 | 6;
	// addi r29,r11,-7224
	ctx.r29.s64 = ctx.r11.s64 + -7224;
loc_821749EC:
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// sth r8,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r8.u16);
	// beq cr6,0x82174a3c
	if (ctx.cr6.eq) goto loc_82174A3C;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82174a3c
	if (ctx.cr6.eq) goto loc_82174A3C;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82174a24
	if (!ctx.cr6.eq) goto loc_82174A24;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x82174ae8
	goto loc_82174AE8;
loc_82174A24:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82176780
	ctx.lr = 0x82174A34;
	sub_82176780(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x82174ae8
	goto loc_82174AE8;
loc_82174A3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82174a50
	if (!ctx.cr6.eq) goto loc_82174A50;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x82174ae8
	goto loc_82174AE8;
loc_82174A50:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x820f43c8
	ctx.lr = 0x82174A5C;
	sub_820F43C8(ctx, base);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82174a78
	if (!ctx.cr6.eq) goto loc_82174A78;
	// bl 0x820ddca8
	ctx.lr = 0x82174A68;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174a88
	if (ctx.cr6.eq) goto loc_82174A88;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82174aa8
	goto loc_82174AA8;
loc_82174A78:
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82174ab0
	if (ctx.cr6.eq) goto loc_82174AB0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82174a90
	if (!ctx.cr6.eq) goto loc_82174A90;
loc_82174A88:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82174aa8
	goto loc_82174AA8;
loc_82174A90:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x82174AA4;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82174AA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82174ab8
	if (!ctx.cr6.eq) goto loc_82174AB8;
loc_82174AB0:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x82174ae8
	goto loc_82174AE8;
loc_82174AB8:
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82174ae8
	if (ctx.cr6.eq) goto loc_82174AE8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82174ACC:
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
	// bne 0x82174acc
	if (!ctx.cr0.eq) goto loc_82174ACC;
loc_82174AE8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x821749ec
	if (!ctx.cr0.eq) goto loc_821749EC;
loc_82174AF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82174AFC"))) PPC_WEAK_FUNC(sub_82174AFC);
PPC_FUNC_IMPL(__imp__sub_82174AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174B00"))) PPC_WEAK_FUNC(sub_82174B00);
PPC_FUNC_IMPL(__imp__sub_82174B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82174B08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174ba4
	if (ctx.cr6.eq) goto loc_82174BA4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82174B24:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82174b60
	if (ctx.cr6.eq) goto loc_82174B60;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82174b60
	if (ctx.cr6.eq) goto loc_82174B60;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174b88
	if (ctx.cr6.eq) goto loc_82174B88;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82174b88
	if (ctx.cr6.eq) goto loc_82174B88;
	// bl 0x82172d60
	ctx.lr = 0x82174B5C;
	sub_82172D60(ctx, base);
	// b 0x82174b84
	goto loc_82174B84;
loc_82174B60:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174b88
	if (ctx.cr6.eq) goto loc_82174B88;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82174b88
	if (ctx.cr6.eq) goto loc_82174B88;
	// bl 0x82174c78
	ctx.lr = 0x82174B84;
	sub_82174C78(ctx, base);
loc_82174B84:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82174B88:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82174b24
	if (!ctx.cr0.eq) goto loc_82174B24;
loc_82174BA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82174BAC"))) PPC_WEAK_FUNC(sub_82174BAC);
PPC_FUNC_IMPL(__imp__sub_82174BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174BB0"))) PPC_WEAK_FUNC(sub_82174BB0);
PPC_FUNC_IMPL(__imp__sub_82174BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82174BB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r30,r11,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// sth r30,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r30.u16);
	// li r26,-1
	ctx.r26.s64 = -1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// ble cr6,0x82174c18
	if (!ctx.cr6.gt) goto loc_82174C18;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82174bfc
	if (!ctx.cr6.gt) goto loc_82174BFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82174BFC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82174C0C;
	sub_82082030(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// b 0x82174c1c
	goto loc_82174C1C;
loc_82174C18:
	// stw r31,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r31.u32);
loc_82174C1C:
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82174c70
	if (ctx.cr6.eq) goto loc_82174C70;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82174C2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x82174C34;
	sub_8208D070(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bl 0x8208d070
	ctx.lr = 0x82174C44;
	sub_8208D070(ctx, base);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r28,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r28.u16);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82174c64
	if (!ctx.cr6.eq) goto loc_82174C64;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82174c64
	if (!ctx.cr6.eq) goto loc_82174C64;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
loc_82174C64:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82174c2c
	if (!ctx.cr0.eq) goto loc_82174C2C;
loc_82174C70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82174C78"))) PPC_WEAK_FUNC(sub_82174C78);
PPC_FUNC_IMPL(__imp__sub_82174C78) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82174C94:
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
	// bne 0x82174c94
	if (!ctx.cr0.eq) goto loc_82174C94;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82174d00
	if (!ctx.cr6.eq) goto loc_82174D00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82174d00
	if (ctx.cr6.eq) goto loc_82174D00;
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82174cec
	if (!ctx.cr6.gt) goto loc_82174CEC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174cec
	if (ctx.cr6.eq) goto loc_82174CEC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82174CEC;
	sub_82080000(ctx, base);
loc_82174CEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// sth r11,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r11.u16);
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82174D00;
	sub_82080000(ctx, base);
loc_82174D00:
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

__attribute__((alias("__imp__sub_82174D18"))) PPC_WEAK_FUNC(sub_82174D18);
PPC_FUNC_IMPL(__imp__sub_82174D18) {
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
loc_82174D2C:
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
	// bne 0x82174d2c
	if (!ctx.cr0.eq) goto loc_82174D2C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82174d58
	if (!ctx.cr6.eq) goto loc_82174D58;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82174b00
	ctx.lr = 0x82174D58;
	sub_82174B00(ctx, base);
loc_82174D58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82174c78
	ctx.lr = 0x82174D60;
	sub_82174C78(ctx, base);
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

__attribute__((alias("__imp__sub_82174D74"))) PPC_WEAK_FUNC(sub_82174D74);
PPC_FUNC_IMPL(__imp__sub_82174D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174D78"))) PPC_WEAK_FUNC(sub_82174D78);
PPC_FUNC_IMPL(__imp__sub_82174D78) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r8,r9,-20928
	ctx.r8.s64 = ctx.r9.s64 + -20928;
	// lwz r11,26120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26120);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,26120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26120, ctx.r9.u32);
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,264
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 264, ctx.xer);
	// beq cr6,0x82174dcc
	if (ctx.cr6.eq) goto loc_82174DCC;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// beq cr6,0x82174dcc
	if (ctx.cr6.eq) goto loc_82174DCC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174ddc
	if (ctx.cr6.eq) goto loc_82174DDC;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82174de0
	goto loc_82174DE0;
loc_82174DCC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82174de0
	if (!ctx.cr6.eq) goto loc_82174DE0;
loc_82174DDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82174DE0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// bne cr6,0x82174e24
	if (!ctx.cr6.eq) goto loc_82174E24;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82174e24
	if (!ctx.cr6.eq) goto loc_82174E24;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,26124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174e10
	if (ctx.cr6.eq) goto loc_82174E10;
	// bl 0x82173db8
	ctx.lr = 0x82174E10;
	sub_82173DB8(ctx, base);
loc_82174E10:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,26148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174e24
	if (ctx.cr6.eq) goto loc_82174E24;
	// bl 0x82174190
	ctx.lr = 0x82174E24;
	sub_82174190(ctx, base);
loc_82174E24:
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r3,r11,6892
	ctx.r3.s64 = ctx.r11.s64 + 6892;
	// bl 0x823051a8
	ctx.lr = 0x82174E30;
	sub_823051A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82174E40"))) PPC_WEAK_FUNC(sub_82174E40);
PPC_FUNC_IMPL(__imp__sub_82174E40) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,6892
	ctx.r30.s64 = ctx.r11.s64 + 6892;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823052d8
	ctx.lr = 0x82174E6C;
	sub_823052D8(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82174e94
	if (ctx.cr6.eq) goto loc_82174E94;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82174e94
	if (ctx.cr6.eq) goto loc_82174E94;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174ea4
	if (ctx.cr6.eq) goto loc_82174EA4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82174ea8
	goto loc_82174EA8;
loc_82174E94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82174ea8
	if (!ctx.cr6.eq) goto loc_82174EA8;
loc_82174EA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82174EA8:
	// lbz r11,23(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82174ec4
	if (!ctx.cr6.lt) goto loc_82174EC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823051a8
	ctx.lr = 0x82174EBC;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82174f2c
	goto loc_82174F2C;
loc_82174EC4:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r8,r11,-20928
	ctx.r8.s64 = ctx.r11.s64 + -20928;
	// lwz r10,26120(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26120);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r31.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 264, ctx.xer);
	// beq cr6,0x82174f04
	if (ctx.cr6.eq) goto loc_82174F04;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82174f04
	if (ctx.cr6.eq) goto loc_82174F04;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174f14
	if (ctx.cr6.eq) goto loc_82174F14;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82174f18
	goto loc_82174F18;
loc_82174F04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x82174f18
	if (!ctx.cr6.eq) goto loc_82174F18;
loc_82174F14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82174F18:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r8.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,26120(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26120, ctx.r10.u32);
loc_82174F2C:
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

__attribute__((alias("__imp__sub_82174F44"))) PPC_WEAK_FUNC(sub_82174F44);
PPC_FUNC_IMPL(__imp__sub_82174F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82174F48"))) PPC_WEAK_FUNC(sub_82174F48);
PPC_FUNC_IMPL(__imp__sub_82174F48) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-7224
	ctx.r31.s64 = ctx.r11.s64 + -7224;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,16452
	ctx.r3.s64 = ctx.r31.s64 + 16452;
	// bl 0x823052d8
	ctx.lr = 0x82174F74;
	sub_823052D8(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r10,62(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 62);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,16444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16444);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16440);
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174ff4
	if (ctx.cr6.eq) goto loc_82174FF4;
loc_82174FAC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82174fc8
	if (ctx.cr6.eq) goto loc_82174FC8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82174fac
	if (!ctx.cr6.eq) goto loc_82174FAC;
	// b 0x82174ff4
	goto loc_82174FF4;
loc_82174FC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174ff4
	if (ctx.cr6.eq) goto loc_82174FF4;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82174fe4
	if (ctx.cr6.eq) goto loc_82174FE4;
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// b 0x82174fe8
	goto loc_82174FE8;
loc_82174FE4:
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
loc_82174FE8:
	// lwz r11,16448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16448);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16448, ctx.r11.u32);
loc_82174FF4:
	// addi r3,r31,16452
	ctx.r3.s64 = ctx.r31.s64 + 16452;
	// bl 0x823051a8
	ctx.lr = 0x82174FFC;
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

__attribute__((alias("__imp__sub_82175014"))) PPC_WEAK_FUNC(sub_82175014);
PPC_FUNC_IMPL(__imp__sub_82175014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175018"))) PPC_WEAK_FUNC(sub_82175018);
PPC_FUNC_IMPL(__imp__sub_82175018) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
loc_82175024:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82175048
	if (!ctx.cr6.eq) goto loc_82175048;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82175024
	if (!ctx.cr0.eq) goto loc_82175024;
	// b 0x82175050
	goto loc_82175050;
loc_82175048:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82175050:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821750a0
	if (ctx.cr6.eq) goto loc_821750A0;
loc_8217505C:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821750a8
	if (ctx.cr6.eq) goto loc_821750A8;
loc_82175068:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8217508c
	if (!ctx.cr6.eq) goto loc_8217508C;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82175068
	if (!ctx.cr0.eq) goto loc_82175068;
	// b 0x82175094
	goto loc_82175094;
loc_8217508C:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82175094:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8217505c
	if (!ctx.cr6.eq) goto loc_8217505C;
loc_821750A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821750A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821750B0"))) PPC_WEAK_FUNC(sub_821750B0);
PPC_FUNC_IMPL(__imp__sub_821750B0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,6936
	ctx.r31.s64 = ctx.r11.s64 + 6936;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823052d8
	ctx.lr = 0x821750DC;
	sub_823052D8(ctx, base);
	// rlwinm r11,r30,19,13,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 19) & 0x7FFF8;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82175138
	if (!ctx.cr6.eq) goto loc_82175138;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82175110
	if (!ctx.cr6.eq) goto loc_82175110;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82175110:
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// ori r8,r10,20
	ctx.r8.u64 = ctx.r10.u64 | 20;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r7,20
	ctx.r5.u64 = ctx.r7.u64 | 20;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
loc_82175138:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823051a8
	ctx.lr = 0x82175140;
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

__attribute__((alias("__imp__sub_82175158"))) PPC_WEAK_FUNC(sub_82175158);
PPC_FUNC_IMPL(__imp__sub_82175158) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6936
	ctx.r31.s64 = ctx.r11.s64 + 6936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823052d8
	ctx.lr = 0x8217517C;
	sub_823052D8(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,20
	ctx.r10.u64 = ctx.r11.u64 | 20;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821751c0
	if (!ctx.cr6.eq) goto loc_821751C0;
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
	ctx.lr = 0x821751A8;
	sub_823051A8(ctx, base);
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
loc_821751C0:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,24
	ctx.r10.u64 = ctx.r11.u64 | 24;
	// lwzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,24576
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 24576, ctx.xer);
	// bge cr6,0x82175200
	if (!ctx.cr6.lt) goto loc_82175200;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_821751E4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82175200
	if (ctx.cr6.eq) goto loc_82175200;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// blt cr6,0x821751e4
	if (ctx.cr6.lt) goto loc_821751E4;
loc_82175200:
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bne cr6,0x82175234
	if (!ctx.cr6.eq) goto loc_82175234;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82175234
	if (ctx.cr6.eq) goto loc_82175234;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
loc_82175218:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82175234
	if (ctx.cr6.eq) goto loc_82175234;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82175218
	if (ctx.cr6.lt) goto loc_82175218;
loc_82175234:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r7,r10,20
	ctx.r7.u64 = ctx.r10.u64 | 20;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// stwx r5,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r5.u32);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// ori r9,r6,20
	ctx.r9.u64 = ctx.r6.u64 | 20;
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lwzx r7,r4,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// or r31,r7,r8
	ctx.r31.u64 = ctx.r7.u64 | ctx.r8.u64;
	// bl 0x823051a8
	ctx.lr = 0x8217527C;
	sub_823051A8(ctx, base);
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

__attribute__((alias("__imp__sub_82175294"))) PPC_WEAK_FUNC(sub_82175294);
PPC_FUNC_IMPL(__imp__sub_82175294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82175298"))) PPC_WEAK_FUNC(sub_82175298);
PPC_FUNC_IMPL(__imp__sub_82175298) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821752A4"))) PPC_WEAK_FUNC(sub_821752A4);
PPC_FUNC_IMPL(__imp__sub_821752A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821752A8"))) PPC_WEAK_FUNC(sub_821752A8);
PPC_FUNC_IMPL(__imp__sub_821752A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821752B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-27768
	ctx.r10.s64 = ctx.r11.s64 + -27768;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r30,16388(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16388, ctx.r30.u8);
	// li r9,512
	ctx.r9.s64 = 512;
	// stb r30,16389(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16389, ctx.r30.u8);
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,16392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16392, ctx.r30.u32);
	// addi r3,r3,16392
	ctx.r3.s64 = ctx.r3.s64 + 16392;
	// stw r30,16396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16396, ctx.r30.u32);
	// li r4,2048
	ctx.r4.s64 = 2048;
	// stw r30,16412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16412, ctx.r30.u32);
	// stw r9,16400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16400, ctx.r9.u32);
	// stw r8,16404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16404, ctx.r8.u32);
	// stb r29,16408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16408, ctx.r29.u8);
	// stb r29,16409(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16409, ctx.r29.u8);
	// bl 0x821dbdd8
	ctx.lr = 0x82175304;
	sub_821DBDD8(ctx, base);
	// stw r30,16416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16416, ctx.r30.u32);
	// stw r30,16420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16420, ctx.r30.u32);
	// addi r3,r31,16416
	ctx.r3.s64 = ctx.r31.s64 + 16416;
	// stw r30,16424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16424, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r30.u32);
	// stw r30,16432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16432, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82175324;
	sub_82305000(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,16436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16436, ctx.r7.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r30,16448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16448, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,772
	ctx.r3.s64 = 772;
	// bl 0x82082030
	ctx.lr = 0x82175344;
	sub_82082030(ctx, base);
	// li r10,193
	ctx.r10.s64 = 193;
	// stw r3,16440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16440, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82175354:
	// lwz r9,16440(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16440);
	// stwx r30,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82175354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82175354;
	// stw r10,16444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16444, ctx.r10.u32);
	// addi r3,r31,16452
	ctx.r3.s64 = ctx.r31.s64 + 16452;
	// stw r30,16452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16452, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,16456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16456, ctx.r30.u32);
	// stw r30,16460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16460, ctx.r30.u32);
	// stw r30,16464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16464, ctx.r30.u32);
	// stw r30,16468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16468, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82175388;
	sub_82305000(ctx, base);
	// stw r30,16472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16472, ctx.r30.u32);
	// stw r30,16476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16476, ctx.r30.u32);
	// addi r3,r31,16472
	ctx.r3.s64 = ctx.r31.s64 + 16472;
	// stw r30,16480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16480, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,16484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16484, ctx.r30.u32);
	// stw r30,16488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16488, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x821753A8;
	sub_82305000(ctx, base);
	// stw r30,16492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16492, ctx.r30.u32);
	// stw r30,16496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16496, ctx.r30.u32);
	// addi r3,r31,16492
	ctx.r3.s64 = ctx.r31.s64 + 16492;
	// stw r30,16500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16500, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,16504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16504, ctx.r30.u32);
	// stw r30,16508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16508, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x821753C8;
	sub_82305000(ctx, base);
	// addi r3,r31,16512
	ctx.r3.s64 = ctx.r31.s64 + 16512;
	// bl 0x82169f60
	ctx.lr = 0x821753D0;
	sub_82169F60(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stb r30,16704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16704, ctx.r30.u8);
	// addi r9,r11,21424
	ctx.r9.s64 = ctx.r11.s64 + 21424;
	// stb r30,16705(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16705, ctx.r30.u8);
	// addi r8,r10,-27832
	ctx.r8.s64 = ctx.r10.s64 + -27832;
	// stw r30,16700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16700, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,16708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16708, ctx.r9.u32);
	// stw r8,16696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16696, ctx.r8.u32);
	// addi r11,r31,16696
	ctx.r11.s64 = ctx.r31.s64 + 16696;
	// stw r30,16712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16712, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r7,16716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16716, ctx.r7.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r30,16720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16720, ctx.r30.u32);
	// stw r30,16724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16724, ctx.r30.u32);
	// stw r30,16728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16728, ctx.r30.u32);
	// stw r30,16732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16732, ctx.r30.u32);
	// stw r30,16736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16736, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x82175424;
	sub_82305000(ctx, base);
	// stw r30,16740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16740, ctx.r30.u32);
	// stw r30,16744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16744, ctx.r30.u32);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r30,16748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16748, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,16756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16756, ctx.r30.u32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82247360
	ctx.lr = 0x8217544C;
	sub_82247360(ctx, base);
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// stw r3,16752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16752, ctx.r3.u32);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r11,r6,-21184
	ctx.r11.s64 = ctx.r6.s64 + -21184;
	// stb r29,16760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16760, ctx.r29.u8);
	// stb r30,16761(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16761, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r31.u32);
	// stw r31,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r31.u32);
	// stw r31,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r31.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r31.u32);
	// stw r31,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r31.u32);
	// stw r31,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r31.u32);
	// stw r31,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r31.u32);
	// stw r31,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r31.u32);
	// stw r31,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r31.u32);
	// stw r31,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r31.u32);
	// stw r31,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r31.u32);
	// stw r31,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r31.u32);
	// stw r31,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r31.u32);
	// stw r31,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r31.u32);
	// stw r31,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r31.u32);
	// stw r31,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r31.u32);
	// stw r31,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r31.u32);
	// stw r31,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r31.u32);
	// stw r31,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r31.u32);
	// stw r31,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r31.u32);
	// stw r31,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r31.u32);
	// stw r31,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r31.u32);
	// stw r31,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r31.u32);
	// stw r31,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r31.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x821754E8;
	sub_8233EAF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821754F0;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r28,r9,5752
	ctx.r28.s64 = ctx.r9.s64 + 5752;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,5752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5752, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82163b88
	ctx.lr = 0x82175510;
	sub_82163B88(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82175530;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217553c
	if (!ctx.cr6.eq) goto loc_8217553C;
	// bl 0x821b3000
	ctx.lr = 0x8217553C;
	sub_821B3000(ctx, base);
loc_8217553C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175550
	if (ctx.cr6.eq) goto loc_82175550;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175550:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175558;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,512
	ctx.r11.s64 = 512;
	// addi r28,r9,5808
	ctx.r28.s64 = ctx.r9.s64 + 5808;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r3,512
	ctx.r3.s64 = 512;
	// stw r11,5808(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5808, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82164ae8
	ctx.lr = 0x82175578;
	sub_82164AE8(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175594;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821755a0
	if (!ctx.cr6.eq) goto loc_821755A0;
	// bl 0x821b3000
	ctx.lr = 0x821755A0;
	sub_821B3000(ctx, base);
loc_821755A0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821755b4
	if (ctx.cr6.eq) goto loc_821755B4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821755B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821755BC;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r28,r9,5920
	ctx.r28.s64 = ctx.r9.s64 + 5920;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r11,5920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5920, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82165330
	ctx.lr = 0x821755DC;
	sub_82165330(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821755F8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175604
	if (!ctx.cr6.eq) goto loc_82175604;
	// bl 0x821b3000
	ctx.lr = 0x82175604;
	sub_821B3000(ctx, base);
loc_82175604:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175618
	if (ctx.cr6.eq) goto loc_82175618;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175618:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175620;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,768
	ctx.r11.s64 = 768;
	// addi r28,r9,5976
	ctx.r28.s64 = ctx.r9.s64 + 5976;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r3,768
	ctx.r3.s64 = 768;
	// stw r11,5976(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5976, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82165920
	ctx.lr = 0x82175640;
	sub_82165920(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x8217565C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175668
	if (!ctx.cr6.eq) goto loc_82175668;
	// bl 0x821b3000
	ctx.lr = 0x82175668;
	sub_821B3000(ctx, base);
loc_82175668:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217567c
	if (ctx.cr6.eq) goto loc_8217567C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_8217567C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175684;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// addi r28,r9,6032
	ctx.r28.s64 = ctx.r9.s64 + 6032;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// stw r11,6032(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6032, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82166f30
	ctx.lr = 0x821756A4;
	sub_82166F30(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821756C0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821756cc
	if (!ctx.cr6.eq) goto loc_821756CC;
	// bl 0x821b3000
	ctx.lr = 0x821756CC;
	sub_821B3000(ctx, base);
loc_821756CC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821756e0
	if (ctx.cr6.eq) goto loc_821756E0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821756E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821756E8;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// addi r28,r9,6088
	ctx.r28.s64 = ctx.r9.s64 + 6088;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// stw r11,6088(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6088, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82166fe0
	ctx.lr = 0x82175708;
	sub_82166FE0(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175724;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175730
	if (!ctx.cr6.eq) goto loc_82175730;
	// bl 0x821b3000
	ctx.lr = 0x82175730;
	sub_821B3000(ctx, base);
loc_82175730:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175744
	if (ctx.cr6.eq) goto loc_82175744;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175744:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x8217574C;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r28,r9,6144
	ctx.r28.s64 = ctx.r9.s64 + 6144;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r11,6144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6144, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82167090
	ctx.lr = 0x8217576C;
	sub_82167090(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175788;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175794
	if (!ctx.cr6.eq) goto loc_82175794;
	// bl 0x821b3000
	ctx.lr = 0x82175794;
	sub_821B3000(ctx, base);
loc_82175794:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821757a8
	if (ctx.cr6.eq) goto loc_821757A8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821757A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821757B0;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r28,r9,5864
	ctx.r28.s64 = ctx.r9.s64 + 5864;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,5864(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5864, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82164df0
	ctx.lr = 0x821757D0;
	sub_82164DF0(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821757EC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821757f8
	if (!ctx.cr6.eq) goto loc_821757F8;
	// bl 0x821b3000
	ctx.lr = 0x821757F8;
	sub_821B3000(ctx, base);
loc_821757F8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217580c
	if (ctx.cr6.eq) goto loc_8217580C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_8217580C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175814;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r28,r9,6200
	ctx.r28.s64 = ctx.r9.s64 + 6200;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,6200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6200, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x821674b0
	ctx.lr = 0x82175834;
	sub_821674B0(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175850;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217585c
	if (!ctx.cr6.eq) goto loc_8217585C;
	// bl 0x821b3000
	ctx.lr = 0x8217585C;
	sub_821B3000(ctx, base);
loc_8217585C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175870
	if (ctx.cr6.eq) goto loc_82175870;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175870:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175878;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,384
	ctx.r11.s64 = 384;
	// addi r28,r9,6780
	ctx.r28.s64 = ctx.r9.s64 + 6780;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,384
	ctx.r3.s64 = 384;
	// stw r11,6780(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6780, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82171740
	ctx.lr = 0x82175898;
	sub_82171740(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821758B4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821758c0
	if (!ctx.cr6.eq) goto loc_821758C0;
	// bl 0x821b3000
	ctx.lr = 0x821758C0;
	sub_821B3000(ctx, base);
loc_821758C0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821758d4
	if (ctx.cr6.eq) goto loc_821758D4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821758D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821758DC;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r28,r9,6312
	ctx.r28.s64 = ctx.r9.s64 + 6312;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,6312(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6312, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82169da0
	ctx.lr = 0x821758FC;
	sub_82169DA0(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175918;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175924
	if (!ctx.cr6.eq) goto loc_82175924;
	// bl 0x821b3000
	ctx.lr = 0x82175924;
	sub_821B3000(ctx, base);
loc_82175924:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175938
	if (ctx.cr6.eq) goto loc_82175938;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175938:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175940;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r28,r9,6424
	ctx.r28.s64 = ctx.r9.s64 + 6424;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,6424(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6424, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x8216c980
	ctx.lr = 0x82175960;
	sub_8216C980(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x8217597C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175988
	if (!ctx.cr6.eq) goto loc_82175988;
	// bl 0x821b3000
	ctx.lr = 0x82175988;
	sub_821B3000(ctx, base);
loc_82175988:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217599c
	if (ctx.cr6.eq) goto loc_8217599C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_8217599C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821759A4;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r28,r9,6480
	ctx.r28.s64 = ctx.r9.s64 + 6480;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r11,6480(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6480, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x8216d858
	ctx.lr = 0x821759C4;
	sub_8216D858(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x821759E0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821759ec
	if (!ctx.cr6.eq) goto loc_821759EC;
	// bl 0x821b3000
	ctx.lr = 0x821759EC;
	sub_821B3000(ctx, base);
loc_821759EC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175a00
	if (ctx.cr6.eq) goto loc_82175A00;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175A00:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175A08;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,1536
	ctx.r11.s64 = 1536;
	// addi r28,r9,6536
	ctx.r28.s64 = ctx.r9.s64 + 6536;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r3,1536
	ctx.r3.s64 = 1536;
	// stw r11,6536(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6536, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x8216e720
	ctx.lr = 0x82175A28;
	sub_8216E720(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175A44;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175a50
	if (!ctx.cr6.eq) goto loc_82175A50;
	// bl 0x821b3000
	ctx.lr = 0x82175A50;
	sub_821B3000(ctx, base);
loc_82175A50:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175a64
	if (ctx.cr6.eq) goto loc_82175A64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175A64:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175A6C;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// addi r28,r9,6592
	ctx.r28.s64 = ctx.r9.s64 + 6592;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// stw r11,6592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6592, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x8216e7d0
	ctx.lr = 0x82175A8C;
	sub_8216E7D0(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175AA8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175ab4
	if (!ctx.cr6.eq) goto loc_82175AB4;
	// bl 0x821b3000
	ctx.lr = 0x82175AB4;
	sub_821B3000(ctx, base);
loc_82175AB4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175ac8
	if (ctx.cr6.eq) goto loc_82175AC8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175AC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175AD0;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r28,r9,6648
	ctx.r28.s64 = ctx.r9.s64 + 6648;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,6648(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6648, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82170588
	ctx.lr = 0x82175AF0;
	sub_82170588(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175B0C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175b18
	if (!ctx.cr6.eq) goto loc_82175B18;
	// bl 0x821b3000
	ctx.lr = 0x82175B18;
	sub_821B3000(ctx, base);
loc_82175B18:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175b2c
	if (ctx.cr6.eq) goto loc_82175B2C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175B2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175B34;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r28,r9,6724
	ctx.r28.s64 = ctx.r9.s64 + 6724;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r11,6724(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6724, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82171370
	ctx.lr = 0x82175B54;
	sub_82171370(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175B70;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175b7c
	if (!ctx.cr6.eq) goto loc_82175B7C;
	// bl 0x821b3000
	ctx.lr = 0x82175B7C;
	sub_821B3000(ctx, base);
loc_82175B7C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175b90
	if (ctx.cr6.eq) goto loc_82175B90;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175B90:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175B98;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r28,r9,6836
	ctx.r28.s64 = ctx.r9.s64 + 6836;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r11,6836(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6836, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x821727e0
	ctx.lr = 0x82175BB8;
	sub_821727E0(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175BD4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175be0
	if (!ctx.cr6.eq) goto loc_82175BE0;
	// bl 0x821b3000
	ctx.lr = 0x82175BE0;
	sub_821B3000(ctx, base);
loc_82175BE0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175bf4
	if (ctx.cr6.eq) goto loc_82175BF4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175BF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175BFC;
	sub_82081C00(ctx, base);
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r28,r9,7020
	ctx.r28.s64 = ctx.r9.s64 + 7020;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r11,7020(r9)
	PPC_STORE_U32(ctx.r9.u32 + 7020, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x8217a820
	ctx.lr = 0x82175C1C;
	sub_8217A820(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175C38;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175c44
	if (!ctx.cr6.eq) goto loc_82175C44;
	// bl 0x821b3000
	ctx.lr = 0x82175C44;
	sub_821B3000(ctx, base);
loc_82175C44:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175c58
	if (ctx.cr6.eq) goto loc_82175C58;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175C58:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175C60;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r28,r9,6256
	ctx.r28.s64 = ctx.r9.s64 + 6256;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,6256(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6256, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82167d48
	ctx.lr = 0x82175C80;
	sub_82167D48(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175C9C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175ca8
	if (!ctx.cr6.eq) goto loc_82175CA8;
	// bl 0x821b3000
	ctx.lr = 0x82175CA8;
	sub_821B3000(ctx, base);
loc_82175CA8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175cbc
	if (ctx.cr6.eq) goto loc_82175CBC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175CBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175CC4;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r28,r9,5696
	ctx.r28.s64 = ctx.r9.s64 + 5696;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,5696(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5696, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82162938
	ctx.lr = 0x82175CE4;
	sub_82162938(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175D00;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175d0c
	if (!ctx.cr6.eq) goto loc_82175D0C;
	// bl 0x821b3000
	ctx.lr = 0x82175D0C;
	sub_821B3000(ctx, base);
loc_82175D0C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175d20
	if (ctx.cr6.eq) goto loc_82175D20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175D20:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175D28;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// addi r28,r9,5640
	ctx.r28.s64 = ctx.r9.s64 + 5640;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// stw r11,5640(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5640, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82161db0
	ctx.lr = 0x82175D48;
	sub_82161DB0(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175D64;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175d70
	if (!ctx.cr6.eq) goto loc_82175D70;
	// bl 0x821b3000
	ctx.lr = 0x82175D70;
	sub_821B3000(ctx, base);
loc_82175D70:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175d84
	if (ctx.cr6.eq) goto loc_82175D84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175D84:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175D8C;
	sub_82081C00(ctx, base);
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r28,r9,6964
	ctx.r28.s64 = ctx.r9.s64 + 6964;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,6964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6964, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x82179f48
	ctx.lr = 0x82175DAC;
	sub_82179F48(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175DC8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175dd4
	if (!ctx.cr6.eq) goto loc_82175DD4;
	// bl 0x821b3000
	ctx.lr = 0x82175DD4;
	sub_821B3000(ctx, base);
loc_82175DD4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175de8
	if (ctx.cr6.eq) goto loc_82175DE8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82175DE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82175DF0;
	sub_82081C00(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r28,r9,6368
	ctx.r28.s64 = ctx.r9.s64 + 6368;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r11,6368(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6368, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x8216b7c8
	ctx.lr = 0x82175E10;
	sub_8216B7C8(ctx, base);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// ori r11,r8,128
	ctx.r11.u64 = ctx.r8.u64 | 128;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82388734
	ctx.lr = 0x82175E28;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82175e34
	if (!ctx.cr6.eq) goto loc_82175E34;
	// bl 0x821b3000
	ctx.lr = 0x82175E34;
	sub_821B3000(ctx, base);
loc_82175E34:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82175e50
	if (ctx.cr6.eq) goto loc_82175E50;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82175E50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82175E58"))) PPC_WEAK_FUNC(sub_82175E58);
PPC_FUNC_IMPL(__imp__sub_82175E58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27768
	ctx.r10.s64 = ctx.r11.s64 + -27768;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82175f58
	ctx.lr = 0x82175E7C;
	sub_82175F58(ctx, base);
	// addi r3,r31,16696
	ctx.r3.s64 = ctx.r31.s64 + 16696;
	// bl 0x82173310
	ctx.lr = 0x82175E84;
	sub_82173310(ctx, base);
	// addi r3,r31,16512
	ctx.r3.s64 = ctx.r31.s64 + 16512;
	// bl 0x8216a120
	ctx.lr = 0x82175E8C;
	sub_8216A120(ctx, base);
	// lwz r9,16500(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16500);
	// addi r11,r31,16492
	ctx.r11.s64 = ctx.r31.s64 + 16492;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82175ea4
	if (ctx.cr6.eq) goto loc_82175EA4;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82175EA4;
	sub_82246E18(ctx, base);
loc_82175EA4:
	// lwz r10,16480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16480);
	// addi r11,r31,16472
	ctx.r11.s64 = ctx.r31.s64 + 16472;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82175ebc
	if (ctx.cr6.eq) goto loc_82175EBC;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82175EBC;
	sub_82246E18(ctx, base);
loc_82175EBC:
	// lwz r10,16460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16460);
	// addi r11,r31,16452
	ctx.r11.s64 = ctx.r31.s64 + 16452;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82175ed4
	if (ctx.cr6.eq) goto loc_82175ED4;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82175ED4;
	sub_82246E18(ctx, base);
loc_82175ED4:
	// lwz r11,16440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175eec
	if (ctx.cr6.eq) goto loc_82175EEC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82175EEC;
	sub_82080000(ctx, base);
loc_82175EEC:
	// lwz r10,16424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16424);
	// addi r11,r31,16416
	ctx.r11.s64 = ctx.r31.s64 + 16416;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82175f04
	if (ctx.cr6.eq) goto loc_82175F04;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82246e18
	ctx.lr = 0x82175F04;
	sub_82246E18(ctx, base);
loc_82175F04:
	// addi r3,r31,16392
	ctx.r3.s64 = ctx.r31.s64 + 16392;
	// bl 0x82218450
	ctx.lr = 0x82175F0C;
	sub_82218450(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r11,-28940
	ctx.r9.s64 = ctx.r11.s64 + -28940;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-21184
	ctx.r11.s64 = ctx.r11.s64 + -21184;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82175F2C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82175f3c
	if (!ctx.cr6.eq) goto loc_82175F3C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82175F3C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82175f2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82175F2C;
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

__attribute__((alias("__imp__sub_82175F58"))) PPC_WEAK_FUNC(sub_82175F58);
PPC_FUNC_IMPL(__imp__sub_82175F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82175F60;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// li r25,4096
	ctx.r25.s64 = 4096;
loc_82175F70:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175fc8
	if (ctx.cr6.eq) goto loc_82175FC8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// addi r29,r11,120
	ctx.r29.s64 = ctx.r11.s64 + 120;
	// li r27,30
	ctx.r27.s64 = 30;
loc_82175F88:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82175fb8
	if (ctx.cr6.eq) goto loc_82175FB8;
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
loc_82175F9C:
	// lwzu r3,16(r30)
	ea = 16 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82175FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82175f9c
	if (!ctx.cr0.eq) goto loc_82175F9C;
loc_82175FB8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82175f88
	if (!ctx.cr0.eq) goto loc_82175F88;
loc_82175FC8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82175f70
	if (!ctx.cr0.eq) goto loc_82175F70;
	// lwz r23,16396(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16396);
	// li r25,0
	ctx.r25.s64 = 0;
	// addic r11,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// subfe r26,r11,r23
	temp.u8 = (~ctx.r11.u32 + ctx.r23.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r23.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r26.u64 = ~ctx.r11.u64 + ctx.r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821760dc
	if (ctx.cr6.eq) goto loc_821760DC;
	// li r24,-513
	ctx.r24.s64 = -513;
loc_82175FF4:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821760c4
	if (ctx.cr6.eq) goto loc_821760C4;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_8217600C:
	// lwz r11,16412(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16412);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821760b8
	if (ctx.cr6.eq) goto loc_821760B8;
	// lhz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217606c
	if (!ctx.cr6.eq) goto loc_8217606C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8217606c
	if (ctx.cr6.eq) goto loc_8217606C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82176050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82176050:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r8,r24,r9
	ctx.r8.u64 = ctx.r24.u64 & ctx.r9.u64;
	// stwcx. r8,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82176050
	if (!ctx.cr0.eq) goto loc_82176050;
loc_8217606C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82176080
	if (ctx.cr6.eq) goto loc_82176080;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x821760b8
	goto loc_821760B8;
loc_82176080:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82176098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821760B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,16412(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16412);
	// stwx r25,r29,r7
	PPC_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r25.u32);
loc_821760B8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8217600c
	if (!ctx.cr0.eq) goto loc_8217600C;
loc_821760C4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821760dc
	if (ctx.cr6.eq) goto loc_821760DC;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82175ff4
	if (!ctx.cr6.eq) goto loc_82175FF4;
loc_821760DC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821761dc
	if (ctx.cr6.eq) goto loc_821761DC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821761dc
	if (ctx.cr6.eq) goto loc_821761DC;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// li r26,-257
	ctx.r26.s64 = -257;
loc_821760FC:
	// lwz r11,16412(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16412);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82176190
	if (ctx.cr6.eq) goto loc_82176190;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
loc_82176110:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 & ctx.r11.u64;
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82176110
	if (!ctx.cr0.eq) goto loc_82176110;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r7,r8,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82176168
	if (ctx.cr6.eq) goto loc_82176168;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
loc_82176140:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r25,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r25.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r25,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r25.u16);
	// bl 0x82174810
	ctx.lr = 0x82176158;
	sub_82174810(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82176140
	if (!ctx.cr6.eq) goto loc_82176140;
loc_82176168:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217617C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82176190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82176190:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x821760fc
	if (!ctx.cr0.eq) goto loc_821760FC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821761dc
	if (ctx.cr6.eq) goto loc_821761DC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_821761AC:
	// lwz r11,16412(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16412);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821761d0
	if (ctx.cr6.eq) goto loc_821761D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821761D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821761D0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821761ac
	if (!ctx.cr0.eq) goto loc_821761AC;
loc_821761DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r22,16392
	ctx.r3.s64 = ctx.r22.s64 + 16392;
	// bl 0x821d78a8
	ctx.lr = 0x821761E8;
	sub_821D78A8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821761F0"))) PPC_WEAK_FUNC(sub_821761F0);
PPC_FUNC_IMPL(__imp__sub_821761F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e434
	ctx.lr = 0x821761F8;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r17,r3,4
	ctx.r17.s64 = ctx.r3.s64 + 4;
	// li r16,4096
	ctx.r16.s64 = 4096;
	// li r19,-1
	ctx.r19.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r15,1
	ctx.r15.s64 = 1;
	// addi r22,r10,-7224
	ctx.r22.s64 = ctx.r10.s64 + -7224;
	// addi r18,r11,6936
	ctx.r18.s64 = ctx.r11.s64 + 6936;
loc_82176224:
	// lwz r24,0(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821763c4
	if (ctx.cr6.eq) goto loc_821763C4;
	// addi r21,r23,16472
	ctx.r21.s64 = ctx.r23.s64 + 16472;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823052d8
	ctx.lr = 0x82176240;
	sub_823052D8(ctx, base);
	// addi r20,r23,16452
	ctx.r20.s64 = ctx.r23.s64 + 16452;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823052d8
	ctx.lr = 0x82176250;
	sub_823052D8(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x823052d8
	ctx.lr = 0x8217625C;
	sub_823052D8(ctx, base);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r27,r24,360
	ctx.r27.s64 = ctx.r24.s64 + 360;
	// li r25,30
	ctx.r25.s64 = 30;
loc_82176268:
	// lwz r11,-240(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -240);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821762cc
	if (ctx.cr6.eq) goto loc_821762CC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8217627C:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821762c0
	if (ctx.cr6.eq) goto loc_821762C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172c70
	ctx.lr = 0x82176294;
	sub_82172C70(ctx, base);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821762b8
	if (ctx.cr6.eq) goto loc_821762B8;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r26,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r26.u16);
	// addi r3,r22,16696
	ctx.r3.s64 = ctx.r22.s64 + 16696;
	// sth r26,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r26.u16);
	// bl 0x82173038
	ctx.lr = 0x821762B8;
	sub_82173038(ctx, base);
loc_821762B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x821762C0;
	sub_82172D60(ctx, base);
loc_821762C0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x8217627c
	if (!ctx.cr0.eq) goto loc_8217627C;
loc_821762CC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821762e4
	if (ctx.cr6.eq) goto loc_821762E4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821762E4;
	sub_82080000(ctx, base);
loc_821762E4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r30,480(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176330
	if (ctx.cr6.eq) goto loc_82176330;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_821762F8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82176324
	if (ctx.cr6.eq) goto loc_82176324;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r26,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r26.u16);
	// addi r3,r22,16696
	ctx.r3.s64 = ctx.r22.s64 + 16696;
	// sth r26,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r26.u16);
	// bl 0x82173038
	ctx.lr = 0x8217631C;
	sub_82173038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x82176324;
	sub_82172D60(ctx, base);
loc_82176324:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821762f8
	if (!ctx.cr0.eq) goto loc_821762F8;
loc_82176330:
	// lwz r11,480(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176348
	if (ctx.cr6.eq) goto loc_82176348;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82176348;
	sub_82080000(ctx, base);
loc_82176348:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82176268
	if (!ctx.cr0.eq) goto loc_82176268;
	// lwz r11,600(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176370
	if (ctx.cr6.eq) goto loc_82176370;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82176370;
	sub_82080000(ctx, base);
loc_82176370:
	// lwz r11,612(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176388
	if (ctx.cr6.eq) goto loc_82176388;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82176388;
	sub_82080000(ctx, base);
loc_82176388:
	// addi r4,r24,-16
	ctx.r4.s64 = ctx.r24.s64 + -16;
	// lwz r3,-8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82176394;
	sub_82080000(ctx, base);
	// stw r26,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r26.u32);
	// lwz r11,16396(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821763a8
	if (ctx.cr6.eq) goto loc_821763A8;
	// stb r15,16388(r23)
	PPC_STORE_U8(ctx.r23.u32 + 16388, ctx.r15.u8);
loc_821763A8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823051a8
	ctx.lr = 0x821763B0;
	sub_823051A8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823051a8
	ctx.lr = 0x821763B8;
	sub_823051A8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823051a8
	ctx.lr = 0x821763C0;
	sub_823051A8(ctx, base);
	// stb r26,16389(r23)
	PPC_STORE_U8(ctx.r23.u32 + 16389, ctx.r26.u8);
loc_821763C4:
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// bne 0x82176224
	if (!ctx.cr0.eq) goto loc_82176224;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e484
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821763D8"))) PPC_WEAK_FUNC(sub_821763D8);
PPC_FUNC_IMPL(__imp__sub_821763D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x821763E0;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// rlwinm r18,r11,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r18,r3
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r3.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8217640c
	if (!ctx.cr6.eq) goto loc_8217640C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16389(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16389, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
loc_8217640C:
	// addi r21,r23,16472
	ctx.r21.s64 = ctx.r23.s64 + 16472;
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823052d8
	ctx.lr = 0x82176420;
	sub_823052D8(ctx, base);
	// addi r20,r23,16452
	ctx.r20.s64 = ctx.r23.s64 + 16452;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823052d8
	ctx.lr = 0x82176430;
	sub_823052D8(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r19,r11,6936
	ctx.r19.s64 = ctx.r11.s64 + 6936;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823052d8
	ctx.lr = 0x82176444;
	sub_823052D8(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r26,r24,360
	ctx.r26.s64 = ctx.r24.s64 + 360;
	// li r22,30
	ctx.r22.s64 = 30;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r11,-7224
	ctx.r25.s64 = ctx.r11.s64 + -7224;
loc_8217645C:
	// lwz r11,-240(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -240);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821764c0
	if (ctx.cr6.eq) goto loc_821764C0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82176470:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821764b4
	if (ctx.cr6.eq) goto loc_821764B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172c70
	ctx.lr = 0x82176488;
	sub_82172C70(ctx, base);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821764ac
	if (ctx.cr6.eq) goto loc_821764AC;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// addi r3,r25,16696
	ctx.r3.s64 = ctx.r25.s64 + 16696;
	// sth r27,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// bl 0x82173038
	ctx.lr = 0x821764AC;
	sub_82173038(ctx, base);
loc_821764AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x821764B4;
	sub_82172D60(ctx, base);
loc_821764B4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82176470
	if (!ctx.cr0.eq) goto loc_82176470;
loc_821764C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821764d8
	if (ctx.cr6.eq) goto loc_821764D8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x821764D8;
	sub_82080000(ctx, base);
loc_821764D8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r30,480(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176524
	if (ctx.cr6.eq) goto loc_82176524;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_821764EC:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82176518
	if (ctx.cr6.eq) goto loc_82176518;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r27,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r27.u16);
	// addi r3,r25,16696
	ctx.r3.s64 = ctx.r25.s64 + 16696;
	// sth r27,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r27.u16);
	// bl 0x82173038
	ctx.lr = 0x82176510;
	sub_82173038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x82176518;
	sub_82172D60(ctx, base);
loc_82176518:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821764ec
	if (!ctx.cr0.eq) goto loc_821764EC;
loc_82176524:
	// lwz r11,480(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217653c
	if (ctx.cr6.eq) goto loc_8217653C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217653C;
	sub_82080000(ctx, base);
loc_8217653C:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8217645c
	if (!ctx.cr0.eq) goto loc_8217645C;
	// lwz r11,600(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176564
	if (ctx.cr6.eq) goto loc_82176564;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82176564;
	sub_82080000(ctx, base);
loc_82176564:
	// lwz r11,612(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217657c
	if (ctx.cr6.eq) goto loc_8217657C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217657C;
	sub_82080000(ctx, base);
loc_8217657C:
	// addi r4,r24,-16
	ctx.r4.s64 = ctx.r24.s64 + -16;
	// lwz r3,-8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82176588;
	sub_82080000(ctx, base);
	// stwx r27,r18,r23
	PPC_STORE_U32(ctx.r18.u32 + ctx.r23.u32, ctx.r27.u32);
	// lwz r11,16396(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821765a0
	if (ctx.cr6.eq) goto loc_821765A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16388(r23)
	PPC_STORE_U8(ctx.r23.u32 + 16388, ctx.r11.u8);
loc_821765A0:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823051a8
	ctx.lr = 0x821765A8;
	sub_823051A8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823051a8
	ctx.lr = 0x821765B0;
	sub_823051A8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823051a8
	ctx.lr = 0x821765B8;
	sub_823051A8(ctx, base);
	// stb r27,16389(r23)
	PPC_STORE_U8(ctx.r23.u32 + 16389, ctx.r27.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821765C4"))) PPC_WEAK_FUNC(sub_821765C4);
PPC_FUNC_IMPL(__imp__sub_821765C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821765C8"))) PPC_WEAK_FUNC(sub_821765C8);
PPC_FUNC_IMPL(__imp__sub_821765C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821765D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-7224
	ctx.r31.s64 = ctx.r11.s64 + -7224;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,16472
	ctx.r3.s64 = ctx.r31.s64 + 16472;
	// bl 0x823052d8
	ctx.lr = 0x821765EC;
	sub_823052D8(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r29,r30,72
	ctx.r29.s64 = ctx.r30.s64 + 72;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82176694
	if (!ctx.cr6.eq) goto loc_82176694;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,300
	ctx.r8.u64 = ctx.r10.u64 | 300;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// lwz r11,16396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16396);
	// lwz r10,16392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16392);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8217665c
	if (!ctx.cr6.eq) goto loc_8217665C;
	// lwz r11,16400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217664c
	if (!ctx.cr6.eq) goto loc_8217664C;
	// lis r11,-13569
	ctx.r11.s64 = -889257984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4944
	ctx.r9.s64 = ctx.r10.s64 + 4944;
	// stw r9,-13570(r11)
	PPC_STORE_U32(ctx.r11.u32 + -13570, ctx.r9.u32);
	// lwz r11,16400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// lwz r10,16392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16392);
loc_8217664C:
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,16392
	ctx.r3.s64 = ctx.r31.s64 + 16392;
	// bl 0x821dbdd8
	ctx.lr = 0x82176658;
	sub_821DBDD8(ctx, base);
	// lwz r11,16396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16396);
loc_8217665C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,16412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,16396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16396, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stwx r30,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r30.u32);
loc_82176678:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stwcx. r7,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82176678
	if (!ctx.cr0.eq) goto loc_82176678;
loc_82176694:
	// addi r3,r31,16472
	ctx.r3.s64 = ctx.r31.s64 + 16472;
	// bl 0x823051a8
	ctx.lr = 0x8217669C;
	sub_823051A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821766A4"))) PPC_WEAK_FUNC(sub_821766A4);
PPC_FUNC_IMPL(__imp__sub_821766A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821766A8"))) PPC_WEAK_FUNC(sub_821766A8);
PPC_FUNC_IMPL(__imp__sub_821766A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821766B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82176774
	if (ctx.cr6.eq) goto loc_82176774;
	// bl 0x821768a0
	ctx.lr = 0x821766D0;
	sub_821768A0(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r9,r30,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82176774
	if (!ctx.cr6.eq) goto loc_82176774;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// rlwinm r3,r29,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82176704
	if (!ctx.cr6.gt) goto loc_82176704;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82176704:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82176714;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82176754
	if (ctx.cr6.eq) goto loc_82176754;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8217674c
	if (ctx.cr0.lt) goto loc_8217674C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82176734:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// sth r10,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82176734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82176734;
loc_8217674C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82176758
	goto loc_82176758;
loc_82176754:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82176758:
	// addi r10,r28,60
	ctx.r10.s64 = ctx.r28.s64 + 60;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r9,r28,30
	ctx.r9.s64 = ctx.r28.s64 + 30;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r29.u32);
	// stwx r29,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r29.u32);
loc_82176774:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217677C"))) PPC_WEAK_FUNC(sub_8217677C);
PPC_FUNC_IMPL(__imp__sub_8217677C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176780"))) PPC_WEAK_FUNC(sub_82176780);
PPC_FUNC_IMPL(__imp__sub_82176780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82176788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,16452
	ctx.r29.s64 = ctx.r3.s64 + 16452;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x823052d8
	ctx.lr = 0x821767A8;
	sub_823052D8(ctx, base);
	// lwz r11,16444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16444);
	// lwz r10,16440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16440);
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r6,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821767f0
	if (ctx.cr6.eq) goto loc_821767F0;
loc_821767D0:
	// lhz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82176804
	if (ctx.cr6.eq) goto loc_82176804;
	// lwz r31,44(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821767d0
	if (!ctx.cr6.eq) goto loc_821767D0;
loc_821767F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x821767F8;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82176804:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
loc_82176808:
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
	// bne 0x82176808
	if (!ctx.cr0.eq) goto loc_82176808;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x8217682C;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82176838"))) PPC_WEAK_FUNC(sub_82176838);
PPC_FUNC_IMPL(__imp__sub_82176838) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-7224
	ctx.r3.s64 = ctx.r10.s64 + -7224;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82176780
	ctx.lr = 0x82176860;
	sub_82176780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82176880
	if (!ctx.cr6.eq) goto loc_82176880;
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
loc_82176880:
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82172d60
	ctx.lr = 0x82176888;
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

__attribute__((alias("__imp__sub_821768A0"))) PPC_WEAK_FUNC(sub_821768A0);
PPC_FUNC_IMPL(__imp__sub_821768A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x821768A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217693c
	if (!ctx.cr6.eq) goto loc_8217693C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,616
	ctx.r3.s64 = 616;
	// bl 0x82082030
	ctx.lr = 0x821768D8;
	sub_82082030(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r3,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x821768EC;
	sub_8233EAF0(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8233eaf0
	ctx.lr = 0x821768FC;
	sub_8233EAF0(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x8233eaf0
	ctx.lr = 0x8217690C;
	sub_8233EAF0(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x8233eaf0
	ctx.lr = 0x8217691C;
	sub_8233EAF0(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x8233eaf0
	ctx.lr = 0x8217692C;
	sub_8233EAF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
loc_8217693C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82176944"))) PPC_WEAK_FUNC(sub_82176944);
PPC_FUNC_IMPL(__imp__sub_82176944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82176948"))) PPC_WEAK_FUNC(sub_82176948);
PPC_FUNC_IMPL(__imp__sub_82176948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82176950;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,176(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 176);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r27,3
	ctx.r27.s64 = 3;
	// bl 0x821768a0
	ctx.lr = 0x82176970;
	sub_821768A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x82176b14
	if (ctx.cr6.gt) goto loc_82176B14;
	// lis r12,-32233
	ctx.r12.s64 = -2112421888;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27032
	ctx.r12.s64 = ctx.r12.s64 + 27032;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82176AF8;
	case 1:
		goto loc_82176AF8;
	case 2:
		goto loc_82176AF8;
	case 3:
		goto loc_82176AF8;
	case 4:
		goto loc_82176AF8;
	case 5:
		goto loc_82176A80;
	case 6:
		goto loc_82176B14;
	case 7:
		goto loc_82176AF8;
	case 8:
		goto loc_82176AF8;
	case 9:
		goto loc_82176B14;
	case 10:
		goto loc_82176B14;
	case 11:
		goto loc_82176B14;
	case 12:
		goto loc_82176B14;
	case 13:
		goto loc_82176B14;
	case 14:
		goto loc_82176B14;
	case 15:
		goto loc_82176B14;
	case 16:
		goto loc_82176B14;
	case 17:
		goto loc_82176AF8;
	case 18:
		goto loc_82176B14;
	case 19:
		goto loc_82176B14;
	case 20:
		goto loc_82176B14;
	case 21:
		goto loc_82176B14;
	case 22:
		goto loc_82176AF8;
	case 23:
		goto loc_82176AF8;
	case 24:
		goto loc_82176AF8;
	case 25:
		goto loc_82176AF8;
	case 26:
		goto loc_82176AF8;
	case 27:
		goto loc_82176AF8;
	case 28:
		goto loc_82176B14;
	case 29:
		goto loc_82176AF8;
	case 30:
		goto loc_82176B14;
	case 31:
		goto loc_82176AF8;
	case 32:
		goto loc_82176B14;
	case 33:
		goto loc_82176B14;
	case 34:
		goto loc_82176AF8;
	case 35:
		goto loc_82176B14;
	case 36:
		goto loc_82176B14;
	case 37:
		goto loc_82176B14;
	case 38:
		goto loc_82176B14;
	case 39:
		goto loc_82176B14;
	case 40:
		goto loc_82176B14;
	case 41:
		goto loc_82176B14;
	case 42:
		goto loc_82176B14;
	case 43:
		goto loc_82176B14;
	case 44:
		goto loc_82176B14;
	case 45:
		goto loc_82176AF8;
	case 46:
		goto loc_82176AF8;
	case 47:
		goto loc_82176AF8;
	case 48:
		goto loc_82176AF8;
	case 49:
		goto loc_82176AF8;
	case 50:
		goto loc_82176AF8;
	case 51:
		goto loc_82176B14;
	case 52:
		goto loc_82176AF8;
	case 53:
		goto loc_82176AF8;
	case 54:
		goto loc_82176B14;
	case 55:
		goto loc_82176B14;
	case 56:
		goto loc_82176B14;
	case 57:
		goto loc_82176AF8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27264(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27264);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27412(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27412);
	// lwz r16,27384(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27384);
loc_82176A80:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x82161240
	ctx.lr = 0x82176AAC;
	sub_82161240(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82176aec
	if (ctx.cr6.eq) goto loc_82176AEC;
loc_82176AB8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82177758
	ctx.lr = 0x82176ACC;
	sub_82177758(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82161240
	ctx.lr = 0x82176AE0;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82176ab8
	if (!ctx.cr6.eq) goto loc_82176AB8;
loc_82176AEC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82176AF8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82177758
	ctx.lr = 0x82176B0C;
	sub_82177758(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82176B14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821613d0
	ctx.lr = 0x82176B20;
	sub_821613D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82176B28"))) PPC_WEAK_FUNC(sub_82176B28);
PPC_FUNC_IMPL(__imp__sub_82176B28) {
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
	// lis r12,-32233
	ctx.r12.s64 = -2112421888;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27480
	ctx.r12.s64 = ctx.r12.s64 + 27480;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,27592(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27592);
	// lwz r16,27652(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27652);
	// lwz r16,27736(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27736);
	// lwz r16,27836(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27836);
	// lwz r16,27996(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27996);
	// lwz r16,28208(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28208);
	// lwz r16,28444(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28444);
	// lwz r16,28592(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28592);
	// lwz r16,28800(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28800);
	// lwz r16,30520(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30520);
	// lwz r16,29324(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 29324);
	// lwz r16,28932(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28932);
	// lwz r16,29080(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 29080);
	// lwz r16,29408(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 29408);
	// lwz r16,29548(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 29548);
	// lwz r16,30520(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30520);
	// lwz r16,29780(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 29780);
	// lwz r16,30520(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30520);
	// lwz r16,30520(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30520);
	// lwz r16,30520(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30520);
	// lwz r16,28340(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28340);
	// lwz r16,29220(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 29220);
	// lwz r16,30040(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30040);
	// lwz r16,30160(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30160);
	// lwz r16,30184(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30184);
	// lwz r16,30364(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30364);
	// lwz r16,29916(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 29916);
	// lwz r16,30444(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30444);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,360
	ctx.r3.s64 = 360;
	// bl 0x82082030
	ctx.lr = 0x82176BDC;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82179860
	ctx.lr = 0x82176BF0;
	sub_82179860(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-27708
	ctx.r10.s64 = ctx.r11.s64 + -27708;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82176C0C;
	sub_82081C00(ctx, base);
	// bl 0x82170488
	ctx.lr = 0x82176C10;
	sub_82170488(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82176C20;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82176c2c
	if (!ctx.cr6.eq) goto loc_82176C2C;
	// bl 0x821b3000
	ctx.lr = 0x82176C2C;
	sub_821B3000(ctx, base);
loc_82176C2C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176c40
	if (ctx.cr6.eq) goto loc_82176C40;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82176C40:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179788
	ctx.lr = 0x82176C54;
	sub_82179788(ctx, base);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82176C60;
	sub_82081C00(ctx, base);
	// bl 0x8216d758
	ctx.lr = 0x82176C64;
	sub_8216D758(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82176C74;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82176c80
	if (!ctx.cr6.eq) goto loc_82176C80;
	// bl 0x821b3000
	ctx.lr = 0x82176C80;
	sub_821B3000(ctx, base);
loc_82176C80:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176c94
	if (ctx.cr6.eq) goto loc_82176C94;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82176C94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82179688
	ctx.lr = 0x82176CA8;
	sub_82179688(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-28184
	ctx.r10.s64 = ctx.r11.s64 + -28184;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82176CC4;
	sub_82081C00(ctx, base);
	// bl 0x8217a720
	ctx.lr = 0x82176CC8;
	sub_8217A720(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82176CD8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82176ce4
	if (!ctx.cr6.eq) goto loc_82176CE4;
	// bl 0x821b3000
	ctx.lr = 0x82176CE4;
	sub_821B3000(ctx, base);
loc_82176CE4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176cf8
	if (ctx.cr6.eq) goto loc_82176CF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82176CF8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x82176D10;
	sub_82172A10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,-27760
	ctx.r8.s64 = ctx.r10.s64 + -27760;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// sth r7,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r7.u16);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82176D64;
	sub_82081C00(ctx, base);
	// bl 0x8216e620
	ctx.lr = 0x82176D68;
	sub_8216E620(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82176D78;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82176d84
	if (!ctx.cr6.eq) goto loc_82176D84;
	// bl 0x821b3000
	ctx.lr = 0x82176D84;
	sub_821B3000(ctx, base);
loc_82176D84:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176d98
	if (ctx.cr6.eq) goto loc_82176D98;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82176D98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x82176DB0;
	sub_82172A10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-28128
	ctx.r8.s64 = ctx.r10.s64 + -28128;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// sth r11,148(r31)
	PPC_STORE_U16(ctx.r31.u32 + 148, ctx.r11.u16);
	// sth r11,150(r31)
	PPC_STORE_U16(ctx.r31.u32 + 150, ctx.r11.u16);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// addi r10,r31,180
	ctx.r10.s64 = ctx.r31.s64 + 180;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// sth r11,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r11.u16);
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// sth r11,162(r31)
	PPC_STORE_U16(ctx.r31.u32 + 162, ctx.r11.u16);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// bl 0x82305000
	ctx.lr = 0x82176E28;
	sub_82305000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82176E38;
	sub_82081C00(ctx, base);
	// bl 0x821673b0
	ctx.lr = 0x82176E3C;
	sub_821673B0(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82176E4C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82176e58
	if (!ctx.cr6.eq) goto loc_82176E58;
	// bl 0x821b3000
	ctx.lr = 0x82176E58;
	sub_821B3000(ctx, base);
loc_82176E58:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176e6c
	if (ctx.cr6.eq) goto loc_82176E6C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82176E6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x82176E84;
	sub_82172A10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,-28464
	ctx.r8.s64 = ctx.r10.s64 + -28464;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82176EBC;
	sub_82081C00(ctx, base);
	// bl 0x82171640
	ctx.lr = 0x82176EC0;
	sub_82171640(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82176ED0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82176edc
	if (!ctx.cr6.eq) goto loc_82176EDC;
	// bl 0x821b3000
	ctx.lr = 0x82176EDC;
	sub_821B3000(ctx, base);
loc_82176EDC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176ef0
	if (ctx.cr6.eq) goto loc_82176EF0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82176EF0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x82176F08;
	sub_82172A10(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-27952
	ctx.r10.s64 = ctx.r11.s64 + -27952;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82176F24;
	sub_82081C00(ctx, base);
	// bl 0x8216c880
	ctx.lr = 0x82176F28;
	sub_8216C880(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82176F38;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82176f44
	if (!ctx.cr6.eq) goto loc_82176F44;
	// bl 0x821b3000
	ctx.lr = 0x82176F44;
	sub_821B3000(ctx, base);
loc_82176F44:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176f58
	if (ctx.cr6.eq) goto loc_82176F58;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82176F58:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x82176F70;
	sub_82172A10(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-28276
	ctx.r8.s64 = ctx.r10.s64 + -28276;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82176FB8;
	sub_82081C00(ctx, base);
	// bl 0x821726e0
	ctx.lr = 0x82176FBC;
	sub_821726E0(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82176FCC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82176fd8
	if (!ctx.cr6.eq) goto loc_82176FD8;
	// bl 0x821b3000
	ctx.lr = 0x82176FD8;
	sub_821B3000(ctx, base);
loc_82176FD8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176fec
	if (ctx.cr6.eq) goto loc_82176FEC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82176FEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x82177004;
	sub_82172A10(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// addi r6,r7,-27576
	ctx.r6.s64 = ctx.r7.s64 + -27576;
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stfs f13,320(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stw r8,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r8.u32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82177088;
	sub_82081C00(ctx, base);
	// bl 0x82165230
	ctx.lr = 0x8217708C;
	sub_82165230(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8217709C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821770a8
	if (!ctx.cr6.eq) goto loc_821770A8;
	// bl 0x821b3000
	ctx.lr = 0x821770A8;
	sub_821B3000(ctx, base);
loc_821770A8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821770bc
	if (ctx.cr6.eq) goto loc_821770BC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821770BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x821770D4;
	sub_82172A10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-28728
	ctx.r9.s64 = ctx.r10.s64 + -28728;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x8217710C;
	sub_82081C00(ctx, base);
	// bl 0x821649e8
	ctx.lr = 0x82177110;
	sub_821649E8(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82177120;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217712c
	if (!ctx.cr6.eq) goto loc_8217712C;
	// bl 0x821b3000
	ctx.lr = 0x8217712C;
	sub_821B3000(ctx, base);
loc_8217712C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177140
	if (ctx.cr6.eq) goto loc_82177140;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82177140:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x82177158;
	sub_82172A10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-28812
	ctx.r9.s64 = ctx.r10.s64 + -28812;
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x82177190;
	sub_8233EAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821771A0;
	sub_82081C00(ctx, base);
	// bl 0x82166a00
	ctx.lr = 0x821771A4;
	sub_82166A00(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821771B4;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821771c0
	if (!ctx.cr6.eq) goto loc_821771C0;
	// bl 0x821b3000
	ctx.lr = 0x821771C0;
	sub_821B3000(ctx, base);
loc_821771C0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821771d4
	if (ctx.cr6.eq) goto loc_821771D4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821771D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x821771EC;
	sub_82172A10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-28508
	ctx.r8.s64 = ctx.r10.s64 + -28508;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// sth r11,116(r31)
	PPC_STORE_U16(ctx.r31.u32 + 116, ctx.r11.u16);
	// sth r11,118(r31)
	PPC_STORE_U16(ctx.r31.u32 + 118, ctx.r11.u16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82177214:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82177214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82177214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x8217722C;
	sub_82081C00(ctx, base);
	// bl 0x82164cf0
	ctx.lr = 0x82177230;
	sub_82164CF0(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82177240;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217724c
	if (!ctx.cr6.eq) goto loc_8217724C;
	// bl 0x821b3000
	ctx.lr = 0x8217724C;
	sub_821B3000(ctx, base);
loc_8217724C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177260
	if (ctx.cr6.eq) goto loc_82177260;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82177260:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x82177278;
	sub_82172A10(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-28768
	ctx.r10.s64 = ctx.r11.s64 + -28768;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82177294;
	sub_82081C00(ctx, base);
	// bl 0x82169ca0
	ctx.lr = 0x82177298;
	sub_82169CA0(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821772A8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821772b4
	if (!ctx.cr6.eq) goto loc_821772B4;
	// bl 0x821b3000
	ctx.lr = 0x821772B4;
	sub_821B3000(ctx, base);
loc_821772B4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821772c8
	if (ctx.cr6.eq) goto loc_821772C8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821772C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82167e60
	ctx.lr = 0x821772DC;
	sub_82167E60(ctx, base);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821772E8;
	sub_82081C00(ctx, base);
	// bl 0x82165820
	ctx.lr = 0x821772EC;
	sub_82165820(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821772FC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82177308
	if (!ctx.cr6.eq) goto loc_82177308;
	// bl 0x821b3000
	ctx.lr = 0x82177308;
	sub_821B3000(ctx, base);
loc_82177308:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217731c
	if (ctx.cr6.eq) goto loc_8217731C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_8217731C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x82177334;
	sub_82172A10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,-28664
	ctx.r8.s64 = ctx.r10.s64 + -28664;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82177374;
	sub_82081C00(ctx, base);
	// bl 0x82163a88
	ctx.lr = 0x82177378;
	sub_82163A88(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82177388;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82177394
	if (!ctx.cr6.eq) goto loc_82177394;
	// bl 0x821b3000
	ctx.lr = 0x82177394;
	sub_821B3000(ctx, base);
loc_82177394:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821773a8
	if (ctx.cr6.eq) goto loc_821773A8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821773A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x821773C0;
	sub_82172A10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-28852
	ctx.r8.s64 = ctx.r10.s64 + -28852;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r10,r31,144
	ctx.r10.s64 = ctx.r31.s64 + 144;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82177400:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82177400
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82177400;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// sth r11,100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 100, ctx.r11.u16);
	// sth r11,102(r31)
	PPC_STORE_U16(ctx.r31.u32 + 102, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x8217745C;
	sub_82081C00(ctx, base);
	// bl 0x82171270
	ctx.lr = 0x82177460;
	sub_82171270(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82177470;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217747c
	if (!ctx.cr6.eq) goto loc_8217747C;
	// bl 0x821b3000
	ctx.lr = 0x8217747C;
	sub_821B3000(ctx, base);
loc_8217747C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177490
	if (ctx.cr6.eq) goto loc_82177490;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82177490:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x821774A8;
	sub_82172A10(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// addi r8,r10,-27992
	ctx.r8.s64 = ctx.r10.s64 + -27992;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r7.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stfs f0,564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821774E4;
	sub_82081C00(ctx, base);
	// bl 0x82167c48
	ctx.lr = 0x821774E8;
	sub_82167C48(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x821774F8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82177504
	if (!ctx.cr6.eq) goto loc_82177504;
	// bl 0x821b3000
	ctx.lr = 0x82177504;
	sub_821B3000(ctx, base);
loc_82177504:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177518
	if (ctx.cr6.eq) goto loc_82177518;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82177518:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x82177530;
	sub_82172A10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-28412
	ctx.r9.s64 = ctx.r10.s64 + -28412;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x82177560;
	sub_82081C00(ctx, base);
	// bl 0x82161cb0
	ctx.lr = 0x82177564;
	sub_82161CB0(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82177574;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82177580
	if (!ctx.cr6.eq) goto loc_82177580;
	// bl 0x821b3000
	ctx.lr = 0x82177580;
	sub_821B3000(ctx, base);
loc_82177580:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177594
	if (ctx.cr6.eq) goto loc_82177594;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82177594:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x821775AC;
	sub_82172A10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-28932
	ctx.r9.s64 = ctx.r10.s64 + -28932;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// bl 0x82161ef0
	ctx.lr = 0x821775D4;
	sub_82161EF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82179490
	ctx.lr = 0x821775E4;
	sub_82179490(ctx, base);
	// b 0x8217773c
	goto loc_8217773C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82081c00
	ctx.lr = 0x821775F0;
	sub_82081C00(ctx, base);
	// bl 0x82179e48
	ctx.lr = 0x821775F4;
	sub_82179E48(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82177604;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82177610
	if (!ctx.cr6.eq) goto loc_82177610;
	// bl 0x821b3000
	ctx.lr = 0x82177610;
	sub_821B3000(ctx, base);
loc_82177610:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177624
	if (ctx.cr6.eq) goto loc_82177624;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82177624:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172a10
	ctx.lr = 0x8217763C;
	sub_82172A10(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-27668
	ctx.r8.s64 = ctx.r10.s64 + -27668;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82082030
	ctx.lr = 0x821776B0;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x82172a10
	ctx.lr = 0x821776C8;
	sub_82172A10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-28892
	ctx.r9.s64 = ctx.r10.s64 + -28892;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x8217773c
	goto loc_8217773C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82082030
	ctx.lr = 0x82177700;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177738
	if (ctx.cr6.eq) goto loc_82177738;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82172a10
	ctx.lr = 0x82177718;
	sub_82172A10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-27496
	ctx.r9.s64 = ctx.r10.s64 + -27496;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x8217773c
	goto loc_8217773C;
loc_82177738:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217773C:
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

__attribute__((alias("__imp__sub_82177754"))) PPC_WEAK_FUNC(sub_82177754);
PPC_FUNC_IMPL(__imp__sub_82177754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82177758"))) PPC_WEAK_FUNC(sub_82177758);
PPC_FUNC_IMPL(__imp__sub_82177758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x82177760;
	__savegprlr_17(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// stb r26,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r26.u8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// sth r28,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r28.u16);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// cmplwi cr6,r6,4096
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4096, ctx.xer);
	// sth r28,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r28.u16);
	// stb r26,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// sth r28,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r28.u16);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// sth r28,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// blt cr6,0x821777b4
	if (ctx.cr6.lt) goto loc_821777B4;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// b 0x821777c8
	goto loc_821777C8;
loc_821777B4:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r17,r10,r9
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_821777C8:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// addi r29,r11,-9440
	ctx.r29.s64 = ctx.r11.s64 + -9440;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_821777E4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82177808
	if (ctx.cr6.eq) goto loc_82177808;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r10,600
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 600, ctx.xer);
	// blt cr6,0x821777e4
	if (ctx.cr6.lt) goto loc_821777E4;
	// b 0x8217780c
	goto loc_8217780C;
loc_82177808:
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
loc_8217780C:
	// stb r26,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r26.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// sth r28,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r28.u16);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// sth r28,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r28.u16);
	// bl 0x82161240
	ctx.lr = 0x82177834;
	sub_82161240(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x8217787c
	if (ctx.cr6.lt) goto loc_8217787C;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// lwzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// bne cr6,0x82177888
	if (!ctx.cr6.eq) goto loc_82177888;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82177878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82177888
	goto loc_82177888;
loc_8217787C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307908
	ctx.lr = 0x82177884;
	sub_82307908(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82177888:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82177d68
	if (ctx.cr6.eq) goto loc_82177D68;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lis r18,-32197
	ctx.r18.s64 = -2110062592;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r19,r8,r10
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, -1, ctx.xer);
	// beq cr6,0x821778ec
	if (ctx.cr6.eq) goto loc_821778EC;
	// lwz r3,-27096(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27096);
	// clrlwi r29,r19,24
	ctx.r29.u64 = ctx.r19.u32 & 0xFF;
	// bl 0x82388734
	ctx.lr = 0x821778BC;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821778c8
	if (!ctx.cr6.eq) goto loc_821778C8;
	// bl 0x821b3000
	ctx.lr = 0x821778C8;
	sub_821B3000(ctx, base);
loc_821778C8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x821778ec
	if (!ctx.cr6.lt) goto loc_821778EC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r29,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_821778EC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821766a8
	ctx.lr = 0x82177900;
	sub_821766A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82161240
	ctx.lr = 0x82177910;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r22,-1
	ctx.r22.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177d20
	if (ctx.cr6.eq) goto loc_82177D20;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r27,r10,6936
	ctx.r27.s64 = ctx.r10.s64 + 6936;
loc_82177928:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,5005
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5005, ctx.xer);
	// bne cr6,0x82177c80
	if (!ctx.cr6.eq) goto loc_82177C80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82161240
	ctx.lr = 0x82177944;
	sub_82161240(ctx, base);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r28,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r28.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821728f8
	ctx.lr = 0x82177968;
	sub_821728F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82177a24
	if (!ctx.cr6.eq) goto loc_82177A24;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82177990
	if (!ctx.cr6.lt) goto loc_82177990;
	// stb r26,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
loc_82177990:
	// lbz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82177c64
	if (!ctx.cr6.eq) goto loc_82177C64;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x821779c4
	if (!ctx.cr6.gt) goto loc_821779C4;
	// lhz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x821779c4
	if (!ctx.cr6.eq) goto loc_821779C4;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x821779c4
	if (ctx.cr6.eq) goto loc_821779C4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_821779C4:
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x821779f0
	if (ctx.cr6.lt) goto loc_821779F0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x821779f0
	if (!ctx.cr6.lt) goto loc_821779F0;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// b 0x82177a08
	goto loc_82177A08;
loc_821779F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82177A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82177A08:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82177c64
	if (!ctx.cr6.eq) goto loc_82177C64;
	// stb r26,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
	// b 0x82177c64
	goto loc_82177C64;
loc_82177A24:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82161240
	ctx.lr = 0x82177A34;
	sub_82161240(ctx, base);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82176780
	ctx.lr = 0x82177A48;
	sub_82176780(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177b2c
	if (ctx.cr6.eq) goto loc_82177B2C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82178430
	ctx.lr = 0x82177A70;
	sub_82178430(ctx, base);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82177a8c
	if (!ctx.cr6.lt) goto loc_82177A8C;
	// stb r26,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
loc_82177A8C:
	// lbz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82177b1c
	if (!ctx.cr6.eq) goto loc_82177B1C;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82177ac0
	if (!ctx.cr6.gt) goto loc_82177AC0;
	// lhz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82177ac0
	if (!ctx.cr6.eq) goto loc_82177AC0;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82177ac0
	if (ctx.cr6.eq) goto loc_82177AC0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82177AC0:
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82177aec
	if (ctx.cr6.lt) goto loc_82177AEC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82177aec
	if (!ctx.cr6.lt) goto loc_82177AEC;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// b 0x82177b04
	goto loc_82177B04;
loc_82177AEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82177B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82177B04:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82177b1c
	if (!ctx.cr6.eq) goto loc_82177B1C;
	// stb r26,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
loc_82177B1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82172d60
	ctx.lr = 0x82177B24;
	sub_82172D60(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x82177c64
	goto loc_82177C64;
loc_82177B2C:
	// bl 0x82175158
	ctx.lr = 0x82177B30;
	sub_82175158(ctx, base);
	// addi r4,r25,-1
	ctx.r4.s64 = ctx.r25.s64 + -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 27, ctx.xer);
	// bgt cr6,0x82177b50
	if (ctx.cr6.gt) goto loc_82177B50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82176b28
	ctx.lr = 0x82177B48;
	sub_82176B28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82177b54
	goto loc_82177B54;
loc_82177B50:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82177B54:
	// rlwinm r11,r29,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bge cr6,0x82177b80
	if (!ctx.cr6.lt) goto loc_82177B80;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r27,20
	ctx.r10.s64 = ctx.r27.s64 + 20;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82177b80
	if (!ctx.cr6.eq) goto loc_82177B80;
	// addi r10,r27,24
	ctx.r10.s64 = ctx.r27.s64 + 24;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
loc_82177B80:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// bl 0x821792a8
	ctx.lr = 0x82177B8C;
	sub_821792A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177ba0
	if (ctx.cr6.eq) goto loc_82177BA0;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
loc_82177BA0:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,5020
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5020, ctx.xer);
	// beq cr6,0x82177bb4
	if (ctx.cr6.eq) goto loc_82177BB4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82177bd0
	goto loc_82177BD0;
loc_82177BB4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lhz r6,62(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 62);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82174bb0
	ctx.lr = 0x82177BCC;
	sub_82174BB0(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82177BD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177bec
	if (ctx.cr6.eq) goto loc_82177BEC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82161240
	ctx.lr = 0x82177BEC;
	sub_82161240(ctx, base);
loc_82177BEC:
	// addi r6,r30,68
	ctx.r6.s64 = ctx.r30.s64 + 68;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820dec30
	ctx.lr = 0x82177C00;
	sub_820DEC30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177c1c
	if (ctx.cr6.eq) goto loc_82177C1C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82161240
	ctx.lr = 0x82177C1C;
	sub_82161240(ctx, base);
loc_82177C1C:
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82178430
	ctx.lr = 0x82177C38;
	sub_82178430(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82177C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82161328
	ctx.lr = 0x82177C64;
	sub_82161328(ctx, base);
loc_82177C64:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82161240
	ctx.lr = 0x82177C74;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82177928
	if (!ctx.cr6.eq) goto loc_82177928;
loc_82177C80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177d20
	if (ctx.cr6.eq) goto loc_82177D20;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,5019
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5019, ctx.xer);
	// bne cr6,0x82177d20
	if (!ctx.cr6.eq) goto loc_82177D20;
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r10,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// lwzx r26,r8,r23
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// ble cr6,0x82177cc0
	if (!ctx.cr6.gt) goto loc_82177CC0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82177CC0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82177CD0;
	sub_82082030(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82177d08
	if (ctx.cr6.eq) goto loc_82177D08;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82177CE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208d070
	ctx.lr = 0x82177CEC;
	sub_8208D070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82176780
	ctx.lr = 0x82177CFC;
	sub_82176780(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bne 0x82177ce4
	if (!ctx.cr0.eq) goto loc_82177CE4;
loc_82177D08:
	// addi r11,r25,120
	ctx.r11.s64 = ctx.r25.s64 + 120;
	// addi r10,r25,90
	ctx.r10.s64 = ctx.r25.s64 + 90;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r26
	PPC_STORE_U32(ctx.r9.u32 + ctx.r26.u32, ctx.r27.u32);
	// stwx r28,r8,r26
	PPC_STORE_U32(ctx.r8.u32 + ctx.r26.u32, ctx.r28.u32);
loc_82177D20:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// addi r10,r25,30
	ctx.r10.s64 = ctx.r25.s64 + 30;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, -1, ctx.xer);
	// lwzx r7,r9,r23
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// stwx r24,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r24.u32);
	// beq cr6,0x82177d68
	if (ctx.cr6.eq) goto loc_82177D68;
	// lwz r3,-27096(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82177D48;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82177d54
	if (!ctx.cr6.eq) goto loc_82177D54;
	// bl 0x821b3000
	ctx.lr = 0x82177D54;
	sub_821B3000(ctx, base);
loc_82177D54:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177d68
	if (ctx.cr6.eq) goto loc_82177D68;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82177D68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82161328
	ctx.lr = 0x82177D74;
	sub_82161328(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82177D7C"))) PPC_WEAK_FUNC(sub_82177D7C);
PPC_FUNC_IMPL(__imp__sub_82177D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82177D80"))) PPC_WEAK_FUNC(sub_82177D80);
PPC_FUNC_IMPL(__imp__sub_82177D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82177D88;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r28,r11,-7224
	ctx.r28.s64 = ctx.r11.s64 + -7224;
	// lwz r31,16396(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16396);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177f60
	if (ctx.cr6.eq) goto loc_82177F60;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r28,16472
	ctx.r3.s64 = ctx.r28.s64 + 16472;
	// bl 0x823052d8
	ctx.lr = 0x82177DAC;
	sub_823052D8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// ori r8,r10,300
	ctx.r8.u64 = ctx.r10.u64 | 300;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r28,16696
	ctx.r3.s64 = ctx.r28.s64 + 16696;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwzx r23,r9,r8
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x821063d0
	ctx.lr = 0x82177DD4;
	sub_821063D0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82177ed8
	if (ctx.cr6.eq) goto loc_82177ED8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// li r25,-513
	ctx.r25.s64 = -513;
loc_82177DEC:
	// lwz r10,16412(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16412);
	// lwzx r31,r26,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// lhz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82177e5c
	if (!ctx.cr6.eq) goto loc_82177E5C;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82177e5c
	if (ctx.cr6.eq) goto loc_82177E5C;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// sth r27,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
loc_82177E20:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r9,r25,r10
	ctx.r9.u64 = ctx.r25.u64 & ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82177e20
	if (!ctx.cr0.eq) goto loc_82177E20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,16696
	ctx.r3.s64 = ctx.r28.s64 + 16696;
	// bl 0x821731a0
	ctx.lr = 0x82177E48;
	sub_821731A0(ctx, base);
	// lwz r11,16412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16412);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r31,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x82177ecc
	goto loc_82177ECC;
loc_82177E5C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82177e78
	if (ctx.cr6.eq) goto loc_82177E78;
	// stwx r31,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r31.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x82177ecc
	goto loc_82177ECC;
loc_82177E78:
	// lhz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subf r7,r8,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r8.s64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82177ea0
	if (ctx.cr6.lt) goto loc_82177EA0;
	// stwx r31,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r31.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x82177ecc
	goto loc_82177ECC;
loc_82177EA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82177EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82177ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82177ECC:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82177dec
	if (!ctx.cr0.eq) goto loc_82177DEC;
loc_82177ED8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,16696
	ctx.r3.s64 = ctx.r28.s64 + 16696;
	// bl 0x821063d0
	ctx.lr = 0x82177EE4;
	sub_821063D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r28,16392
	ctx.r3.s64 = ctx.r28.s64 + 16392;
	// bl 0x821d78a8
	ctx.lr = 0x82177EF0;
	sub_821D78A8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82177f50
	if (ctx.cr6.eq) goto loc_82177F50;
	// lwz r11,16396(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16396);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177f44
	if (ctx.cr6.eq) goto loc_82177F44;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// lwz r10,5616(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 5616);
	// lwz r8,984(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 984);
	// addi r5,r8,-60
	ctx.r5.s64 = ctx.r8.s64 + -60;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82177f44
	if (!ctx.cr6.lt) goto loc_82177F44;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lwz r9,5612(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5612);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82177f3c
	if (!ctx.cr6.eq) goto loc_82177F3C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82177F3C:
	// stw r8,5616(r7)
	PPC_STORE_U32(ctx.r7.u32 + 5616, ctx.r8.u32);
	// stw r11,5612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5612, ctx.r11.u32);
loc_82177F44:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82177f58
	if (ctx.cr6.eq) goto loc_82177F58;
loc_82177F50:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stb r27,16388(r28)
	PPC_STORE_U8(ctx.r28.u32 + 16388, ctx.r27.u8);
loc_82177F58:
	// addi r3,r28,16472
	ctx.r3.s64 = ctx.r28.s64 + 16472;
	// bl 0x823051a8
	ctx.lr = 0x82177F60;
	sub_823051A8(ctx, base);
loc_82177F60:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82177F68"))) PPC_WEAK_FUNC(sub_82177F68);
PPC_FUNC_IMPL(__imp__sub_82177F68) {
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
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82177fbc
	if (ctx.cr6.eq) goto loc_82177FBC;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82174450
	ctx.lr = 0x82177FA8;
	sub_82174450(ctx, base);
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
loc_82177FBC:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,-7224
	ctx.r11.s64 = ctx.r11.s64 + -7224;
	// addi r3,r11,16696
	ctx.r3.s64 = ctx.r11.s64 + 16696;
	// bl 0x82172e90
	ctx.lr = 0x82177FCC;
	sub_82172E90(ctx, base);
	// lhz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82177FEC"))) PPC_WEAK_FUNC(sub_82177FEC);
PPC_FUNC_IMPL(__imp__sub_82177FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82177FF0"))) PPC_WEAK_FUNC(sub_82177FF0);
PPC_FUNC_IMPL(__imp__sub_82177FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82177FF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
loc_82178008:
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
	// bne 0x82178008
	if (!ctx.cr0.eq) goto loc_82178008;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178058
	if (ctx.cr6.eq) goto loc_82178058;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
loc_82178038:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// beq cr6,0x82178058
	if (ctx.cr6.eq) goto loc_82178058;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82178038
	if (!ctx.cr6.eq) goto loc_82178038;
loc_82178058:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-29208
	ctx.r30.s64 = ctx.r11.s64 + -29208;
	// ori r9,r10,49164
	ctx.r9.u64 = ctx.r10.u64 | 49164;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r29,r30,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8217809c
	if (ctx.cr6.eq) goto loc_8217809C;
	// lwz r11,548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217809c
	if (ctx.cr6.eq) goto loc_8217809C;
	// lwz r25,20(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82247330
	ctx.lr = 0x82178090;
	sub_82247330(ctx, base);
	// subf r11,r25,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r25.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8217809C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82178108
	if (ctx.cr6.eq) goto loc_82178108;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
loc_821780AC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x821780f0
	if (!ctx.cr6.lt) goto loc_821780F0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821780f0
	if (ctx.cr6.eq) goto loc_821780F0;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821780f0
	if (!ctx.cr6.eq) goto loc_821780F0;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821780f0
	if (ctx.cr6.eq) goto loc_821780F0;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm r7,r11,0,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82178104
	if (ctx.cr6.eq) goto loc_82178104;
loc_821780F0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x821780ac
	if (ctx.cr6.lt) goto loc_821780AC;
	// b 0x82178108
	goto loc_82178108;
loc_82178104:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82178108:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821781f4
	if (!ctx.cr6.eq) goto loc_821781F4;
	// lhz r11,62(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 62);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82178154
	if (ctx.cr6.eq) goto loc_82178154;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82178154
	if (ctx.cr6.eq) goto loc_82178154;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82178154
	if (ctx.cr6.eq) goto loc_82178154;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82178154
	if (ctx.cr6.eq) goto loc_82178154;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82178154
	if (ctx.cr6.eq) goto loc_82178154;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82178154
	if (ctx.cr6.eq) goto loc_82178154;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82178158
	if (!ctx.cr6.eq) goto loc_82178158;
loc_82178154:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82178158:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821781b0
	if (ctx.cr6.eq) goto loc_821781B0;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821781f4
	if (ctx.cr6.eq) goto loc_821781F4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r11,r7,-7224
	ctx.r11.s64 = ctx.r7.s64 + -7224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r11,16512
	ctx.r3.s64 = ctx.r11.s64 + 16512;
	// sth r8,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
	// bl 0x8216a308
	ctx.lr = 0x821781A4;
	sub_8216A308(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_821781B0:
	// addi r11,r27,72
	ctx.r11.s64 = ctx.r27.s64 + 72;
	// li r7,1
	ctx.r7.s64 = 1;
loc_821781B8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821781b8
	if (!ctx.cr0.eq) goto loc_821781B8;
	// li r4,128
	ctx.r4.s64 = 128;
loc_821781D8:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r5,r4,r6
	ctx.r5.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stwcx. r5,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821781d8
	if (!ctx.cr0.eq) goto loc_821781D8;
loc_821781F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82178200"))) PPC_WEAK_FUNC(sub_82178200);
PPC_FUNC_IMPL(__imp__sub_82178200) {
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
	// beq cr6,0x8217825c
	if (ctx.cr6.eq) goto loc_8217825C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bne cr6,0x82178254
	if (!ctx.cr6.eq) goto loc_82178254;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r11,r11,-7224
	ctx.r11.s64 = ctx.r11.s64 + -7224;
	// addi r3,r11,16696
	ctx.r3.s64 = ctx.r11.s64 + 16696;
	// bl 0x82173038
	ctx.lr = 0x82178244;
	sub_82173038(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82178254:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82174810
	ctx.lr = 0x8217825C;
	sub_82174810(ctx, base);
loc_8217825C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217826C"))) PPC_WEAK_FUNC(sub_8217826C);
PPC_FUNC_IMPL(__imp__sub_8217826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178270"))) PPC_WEAK_FUNC(sub_82178270);
PPC_FUNC_IMPL(__imp__sub_82178270) {
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
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r10,20000
	ctx.r8.s64 = ctx.r10.s64 + 20000;
	// ori r7,r9,300
	ctx.r7.u64 = ctx.r9.u64 | 300;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// beq cr6,0x821782dc
	if (ctx.cr6.eq) goto loc_821782DC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x821782dc
	if (ctx.cr6.eq) goto loc_821782DC;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x821782dc
	if (ctx.cr6.eq) goto loc_821782DC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821782dc
	if (ctx.cr6.eq) goto loc_821782DC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x821782dc
	if (ctx.cr6.eq) goto loc_821782DC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x821782dc
	if (ctx.cr6.eq) goto loc_821782DC;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821782e0
	if (!ctx.cr6.eq) goto loc_821782E0;
loc_821782DC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821782E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178374
	if (ctx.cr6.eq) goto loc_82178374;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lbz r9,968(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 968);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217833c
	if (ctx.cr6.eq) goto loc_8217833C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82178314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,-164
	ctx.r7.s64 = -164;
	// addi r5,r31,72
	ctx.r5.s64 = ctx.r31.s64 + 72;
loc_8217831C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 & ctx.r9.u64;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217831c
	if (!ctx.cr0.eq) goto loc_8217831C;
	// b 0x82178398
	goto loc_82178398;
loc_8217833C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r8,-7224
	ctx.r11.s64 = ctx.r8.s64 + -7224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,16512
	ctx.r3.s64 = ctx.r11.s64 + 16512;
	// bl 0x8216a308
	ctx.lr = 0x82178370;
	sub_8216A308(ctx, base);
	// b 0x82178398
	goto loc_82178398;
loc_82178374:
	// li r11,-164
	ctx.r11.s64 = -164;
	// addi r7,r31,72
	ctx.r7.s64 = ctx.r31.s64 + 72;
loc_8217837C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217837c
	if (!ctx.cr0.eq) goto loc_8217837C;
loc_82178398:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x821783A0;
	sub_82172D60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_821783B8"))) PPC_WEAK_FUNC(sub_821783B8);
PPC_FUNC_IMPL(__imp__sub_821783B8) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821783ec
	if (!ctx.cr6.eq) goto loc_821783EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821783EC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,2
	ctx.r9.s64 = 2;
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r7,-7224
	ctx.r11.s64 = ctx.r7.s64 + -7224;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r11,16512
	ctx.r3.s64 = ctx.r11.s64 + 16512;
	// sth r8,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
	// bl 0x8216a308
	ctx.lr = 0x82178418;
	sub_8216A308(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217842C"))) PPC_WEAK_FUNC(sub_8217842C);
PPC_FUNC_IMPL(__imp__sub_8217842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178430"))) PPC_WEAK_FUNC(sub_82178430);
PPC_FUNC_IMPL(__imp__sub_82178430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82178438;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,14
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 14, ctx.xer);
	// beq cr6,0x8217847c
	if (ctx.cr6.eq) goto loc_8217847C;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// beq cr6,0x8217847c
	if (ctx.cr6.eq) goto loc_8217847C;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// beq cr6,0x8217847c
	if (ctx.cr6.eq) goto loc_8217847C;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// beq cr6,0x8217847c
	if (ctx.cr6.eq) goto loc_8217847C;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// beq cr6,0x8217847c
	if (ctx.cr6.eq) goto loc_8217847C;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// beq cr6,0x8217847c
	if (ctx.cr6.eq) goto loc_8217847C;
	// cmplwi cr6,r5,29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 29, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82178480
	if (!ctx.cr6.eq) goto loc_82178480;
loc_8217847C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82178480:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r29,12(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r30,88(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178524
	if (ctx.cr6.eq) goto loc_82178524;
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82178524
	if (ctx.cr6.eq) goto loc_82178524;
	// lwz r8,56(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821784e8
	if (ctx.cr6.eq) goto loc_821784E8;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
loc_821784C0:
	// lhz r4,6(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stwu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r9.u32 = ea;
	// beq cr6,0x821784e0
	if (ctx.cr6.eq) goto loc_821784E0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821784c0
	if (!ctx.cr6.eq) goto loc_821784C0;
loc_821784E0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821784f0
	if (!ctx.cr6.eq) goto loc_821784F0;
loc_821784E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8217851c
	goto loc_8217851C;
loc_821784F0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82178518
	if (ctx.cr6.eq) goto loc_82178518;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82178500:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8217851c
	if (ctx.cr6.eq) goto loc_8217851C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82178500
	if (!ctx.cr6.eq) goto loc_82178500;
loc_82178518:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8217851C:
	// lhz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82178524:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82178604
	if (ctx.cr6.eq) goto loc_82178604;
	// addi r11,r5,-12
	ctx.r11.s64 = ctx.r5.s64 + -12;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r3,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r11.s64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subfe r7,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// lwzx r11,r5,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// and r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 & ctx.r30.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// sth r4,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r4.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
loc_82178570:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82178570
	if (!ctx.cr0.eq) goto loc_82178570;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82175018
	ctx.lr = 0x82178594;
	sub_82175018(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821785e4
	if (ctx.cr6.eq) goto loc_821785E4;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r28,52
	ctx.r6.s64 = ctx.r28.s64 + 52;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r31,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r31.u32);
loc_821785B8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821785dc
	if (!ctx.cr6.eq) goto loc_821785DC;
	// stwcx. r7,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821785b8
	if (!ctx.cr0.eq) goto loc_821785B8;
	// b 0x821785e4
	goto loc_821785E4;
loc_821785DC:
	// stwcx. r10,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_821785E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82178604
	if (ctx.cr6.eq) goto loc_82178604;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82178604
	if (ctx.cr6.eq) goto loc_82178604;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82177f68
	ctx.lr = 0x82178604;
	sub_82177F68(ctx, base);
loc_82178604:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217860C"))) PPC_WEAK_FUNC(sub_8217860C);
PPC_FUNC_IMPL(__imp__sub_8217860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178610"))) PPC_WEAK_FUNC(sub_82178610);
PPC_FUNC_IMPL(__imp__sub_82178610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e438
	ctx.lr = 0x82178618;
	__savegprlr_16(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,608(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 608);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,4096
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4096, ctx.xer);
	// blt cr6,0x8217863c
	if (ctx.cr6.lt) goto loc_8217863C;
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x82178650
	goto loc_82178650;
loc_8217863C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r20,r10,r9
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82178650:
	// addi r16,r20,528
	ctx.r16.s64 = ctx.r20.s64 + 528;
	// lwz r11,160(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 160);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// rlwinm r19,r11,30,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// bl 0x823052d8
	ctx.lr = 0x82178668;
	sub_823052D8(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lwz r3,-27096(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x82178674;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82178680
	if (!ctx.cr6.eq) goto loc_82178680;
	// bl 0x821b3000
	ctx.lr = 0x82178680;
	sub_821B3000(ctx, base);
loc_82178680:
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r25,r3,20
	ctx.r25.s64 = ctx.r3.s64 + 20;
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r17,-13569
	ctx.r17.s64 = -889257984;
	// rlwinm r22,r9,0,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// add r8,r22,r11
	ctx.r8.u64 = ctx.r22.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821786b4
	if (!ctx.cr6.gt) goto loc_821786B4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,4492
	ctx.r10.s64 = ctx.r11.s64 + 4492;
	// stw r10,-13570(r17)
	PPC_STORE_U32(ctx.r17.u32 + -13570, ctx.r10.u32);
loc_821786B4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// add r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// add r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82178780
	if (ctx.cr6.eq) goto loc_82178780;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r23,8
	ctx.r30.s64 = ctx.r23.s64 + 8;
loc_821786E0:
	// lwz r10,612(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 612);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821786F8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821786f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821786F8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82178718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82178770
	if (ctx.cr6.eq) goto loc_82178770;
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82178770
	if (!ctx.cr6.eq) goto loc_82178770;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r24,-1
	ctx.r10.s64 = ctx.r24.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// std r11,-8(r30)
	PPC_STORE_U64(ctx.r30.u32 + -8, ctx.r11.u64);
	// bge cr6,0x82178758
	if (!ctx.cr6.lt) goto loc_82178758;
	// lwz r10,612(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 612);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// b 0x82178760
	goto loc_82178760;
loc_82178758:
	// ld r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r21.u32 + 8);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82178760:
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
loc_82178770:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x821786e0
	if (ctx.cr6.lt) goto loc_821786E0;
loc_82178780:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217879C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8217885c
	if (ctx.cr6.eq) goto loc_8217885C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,128
	ctx.r28.s64 = 128;
	// addi r27,r11,22200
	ctx.r27.s64 = ctx.r11.s64 + 22200;
loc_821787B8:
	// lwz r10,612(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 612);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821787D0:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821787d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821787D0;
	// lbz r11,968(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217885c
	if (!ctx.cr6.eq) goto loc_8217885C;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82178800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217884c
	if (ctx.cr6.eq) goto loc_8217884C;
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8217884c
	if (!ctx.cr6.eq) goto loc_8217884C;
	// addi r9,r31,72
	ctx.r9.s64 = ctx.r31.s64 + 72;
loc_8217881C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 | ctx.r11.u64;
	// stwcx. r10,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217881c
	if (!ctx.cr0.eq) goto loc_8217881C;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8216b1a0
	ctx.lr = 0x8217884C;
	sub_8216B1A0(ctx, base);
loc_8217884C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x821787b8
	if (ctx.cr6.lt) goto loc_821787B8;
loc_8217885C:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82178878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821788c0
	if (ctx.cr6.eq) goto loc_821788C0;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r10.u32, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// ble cr6,0x82178898
	if (!ctx.cr6.gt) goto loc_82178898;
	// stw r9,-13570(r17)
	PPC_STORE_U32(ctx.r17.u32 + -13570, ctx.r9.u32);
loc_82178898:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x821788b4
	if (ctx.cr6.eq) goto loc_821788B4;
	// stw r9,-13570(r17)
	PPC_STORE_U32(ctx.r17.u32 + -13570, ctx.r9.u32);
loc_821788B4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r10,r22,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r22.s64;
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
loc_821788C0:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x823051a8
	ctx.lr = 0x821788C8;
	sub_823051A8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e488
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821788D0"))) PPC_WEAK_FUNC(sub_821788D0);
PPC_FUNC_IMPL(__imp__sub_821788D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x821788D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-7224
	ctx.r10.s64 = ctx.r10.s64 + -7224;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821789b4
	if (ctx.cr6.eq) goto loc_821789B4;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// blt cr6,0x8217890c
	if (ctx.cr6.lt) goto loc_8217890C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8217891c
	goto loc_8217891C;
loc_8217890C:
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// addi r10,r10,-29208
	ctx.r10.s64 = ctx.r10.s64 + -29208;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_8217891C:
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82178954
	if (ctx.cr6.gt) goto loc_82178954;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82178944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82178944;
	// bdzf 4*cr6+eq,0x82178954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82178954;
	// bne cr6,0x8217894c
	if (!ctx.cr6.eq) goto loc_8217894C;
	// li r28,3
	ctx.r28.s64 = 3;
	// b 0x82178958
	goto loc_82178958;
loc_82178944:
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x82178958
	goto loc_82178958;
loc_8217894C:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x82178958
	goto loc_82178958;
loc_82178954:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82178958:
	// addi r29,r9,480
	ctx.r29.s64 = ctx.r9.s64 + 480;
	// li r26,30
	ctx.r26.s64 = 30;
loc_82178960:
	// lwz r11,-120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -120);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821789a8
	if (ctx.cr6.eq) goto loc_821789A8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82178974:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217899c
	if (ctx.cr6.eq) goto loc_8217899C;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r27,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82174450
	ctx.lr = 0x8217899C;
	sub_82174450(ctx, base);
loc_8217899C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82178974
	if (!ctx.cr0.eq) goto loc_82178974;
loc_821789A8:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82178960
	if (!ctx.cr0.eq) goto loc_82178960;
loc_821789B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821789BC"))) PPC_WEAK_FUNC(sub_821789BC);
PPC_FUNC_IMPL(__imp__sub_821789BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821789C0"))) PPC_WEAK_FUNC(sub_821789C0);
PPC_FUNC_IMPL(__imp__sub_821789C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x821789C8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-7224
	ctx.r11.s64 = ctx.r11.s64 + -7224;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82178dcc
	if (ctx.cr6.eq) goto loc_82178DCC;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r28,124
	ctx.r9.s64 = ctx.r28.s64 + 124;
	// li r22,0
	ctx.r22.s64 = 0;
loc_821789FC:
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82178a3c
	if (ctx.cr6.eq) goto loc_82178A3C;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82178a3c
	if (ctx.cr6.eq) goto loc_82178A3C;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82178a3c
	if (ctx.cr6.eq) goto loc_82178A3C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82178a3c
	if (ctx.cr6.eq) goto loc_82178A3C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82178a3c
	if (ctx.cr6.eq) goto loc_82178A3C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82178a3c
	if (ctx.cr6.eq) goto loc_82178A3C;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x82178a40
	if (!ctx.cr6.eq) goto loc_82178A40;
loc_82178A3C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82178A40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178a5c
	if (ctx.cr6.eq) goto loc_82178A5C;
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lwz r10,608(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,608(r28)
	PPC_STORE_U32(ctx.r28.u32 + 608, ctx.r11.u32);
loc_82178A5C:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82178a9c
	if (ctx.cr6.eq) goto loc_82178A9C;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82178a9c
	if (ctx.cr6.eq) goto loc_82178A9C;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82178a9c
	if (ctx.cr6.eq) goto loc_82178A9C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82178a9c
	if (ctx.cr6.eq) goto loc_82178A9C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82178a9c
	if (ctx.cr6.eq) goto loc_82178A9C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82178a9c
	if (ctx.cr6.eq) goto loc_82178A9C;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x82178aa0
	if (!ctx.cr6.eq) goto loc_82178AA0;
loc_82178A9C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82178AA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178abc
	if (ctx.cr6.eq) goto loc_82178ABC;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,608(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,608(r28)
	PPC_STORE_U32(ctx.r28.u32 + 608, ctx.r11.u32);
loc_82178ABC:
	// cmplwi cr6,r8,14
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 14, ctx.xer);
	// beq cr6,0x82178af8
	if (ctx.cr6.eq) goto loc_82178AF8;
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// beq cr6,0x82178af8
	if (ctx.cr6.eq) goto loc_82178AF8;
	// cmplwi cr6,r8,11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 11, ctx.xer);
	// beq cr6,0x82178af8
	if (ctx.cr6.eq) goto loc_82178AF8;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// beq cr6,0x82178af8
	if (ctx.cr6.eq) goto loc_82178AF8;
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// beq cr6,0x82178af8
	if (ctx.cr6.eq) goto loc_82178AF8;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// beq cr6,0x82178af8
	if (ctx.cr6.eq) goto loc_82178AF8;
	// cmplwi cr6,r8,29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 29, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x82178afc
	if (!ctx.cr6.eq) goto loc_82178AFC;
loc_82178AF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82178AFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178b18
	if (ctx.cr6.eq) goto loc_82178B18;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,608(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,608(r28)
	PPC_STORE_U32(ctx.r28.u32 + 608, ctx.r11.u32);
loc_82178B18:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82178b58
	if (ctx.cr6.eq) goto loc_82178B58;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82178b58
	if (ctx.cr6.eq) goto loc_82178B58;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82178b58
	if (ctx.cr6.eq) goto loc_82178B58;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82178b58
	if (ctx.cr6.eq) goto loc_82178B58;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82178b58
	if (ctx.cr6.eq) goto loc_82178B58;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82178b58
	if (ctx.cr6.eq) goto loc_82178B58;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x82178b5c
	if (!ctx.cr6.eq) goto loc_82178B5C;
loc_82178B58:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82178B5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178b78
	if (ctx.cr6.eq) goto loc_82178B78;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,608(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,608(r28)
	PPC_STORE_U32(ctx.r28.u32 + 608, ctx.r11.u32);
loc_82178B78:
	// addi r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 2;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82178bb8
	if (ctx.cr6.eq) goto loc_82178BB8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82178bb8
	if (ctx.cr6.eq) goto loc_82178BB8;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82178bb8
	if (ctx.cr6.eq) goto loc_82178BB8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82178bb8
	if (ctx.cr6.eq) goto loc_82178BB8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82178bb8
	if (ctx.cr6.eq) goto loc_82178BB8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82178bb8
	if (ctx.cr6.eq) goto loc_82178BB8;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x82178bbc
	if (!ctx.cr6.eq) goto loc_82178BBC;
loc_82178BB8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82178BBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178bd8
	if (ctx.cr6.eq) goto loc_82178BD8;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,608(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,608(r28)
	PPC_STORE_U32(ctx.r28.u32 + 608, ctx.r11.u32);
loc_82178BD8:
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82178c18
	if (ctx.cr6.eq) goto loc_82178C18;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82178c18
	if (ctx.cr6.eq) goto loc_82178C18;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82178c18
	if (ctx.cr6.eq) goto loc_82178C18;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82178c18
	if (ctx.cr6.eq) goto loc_82178C18;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82178c18
	if (ctx.cr6.eq) goto loc_82178C18;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82178c18
	if (ctx.cr6.eq) goto loc_82178C18;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x82178c1c
	if (!ctx.cr6.eq) goto loc_82178C1C;
loc_82178C18:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82178C1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178c38
	if (ctx.cr6.eq) goto loc_82178C38;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,608(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,608(r28)
	PPC_STORE_U32(ctx.r28.u32 + 608, ctx.r11.u32);
loc_82178C38:
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// blt cr6,0x821789fc
	if (ctx.cr6.lt) goto loc_821789FC;
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// lwz r11,608(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 608);
	// ori r9,r10,43690
	ctx.r9.u64 = ctx.r10.u64 | 43690;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82178c70
	if (ctx.cr6.gt) goto loc_82178C70;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82178c74
	goto loc_82178C74;
loc_82178C70:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82178C74:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x82178C84;
	sub_82082030(ctx, base);
	// stw r3,612(r28)
	PPC_STORE_U32(ctx.r28.u32 + 612, ctx.r3.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r26,r28,120
	ctx.r26.s64 = ctx.r28.s64 + 120;
	// li r24,30
	ctx.r24.s64 = 30;
	// li r23,129
	ctx.r23.s64 = 129;
loc_82178C98:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178da8
	if (ctx.cr6.eq) goto loc_82178DA8;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82178CB8:
	// lwz r11,-120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -120);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,62(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 62);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// beq cr6,0x82178d04
	if (ctx.cr6.eq) goto loc_82178D04;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x82178d04
	if (ctx.cr6.eq) goto loc_82178D04;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// beq cr6,0x82178d04
	if (ctx.cr6.eq) goto loc_82178D04;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82178d04
	if (ctx.cr6.eq) goto loc_82178D04;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82178d04
	if (ctx.cr6.eq) goto loc_82178D04;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82178d04
	if (ctx.cr6.eq) goto loc_82178D04;
	// cmplwi cr6,r10,29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 29, ctx.xer);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bne cr6,0x82178d08
	if (!ctx.cr6.eq) goto loc_82178D08;
loc_82178D04:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82178D08:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82178d54
	if (ctx.cr6.eq) goto loc_82178D54;
	// lwz r10,612(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 612);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,612(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 612);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r10,612(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 612);
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r7,8(r6)
	PPC_STORE_U16(ctx.r6.u32 + 8, ctx.r7.u16);
	// lwz r11,612(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 612);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// stw r22,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r22.u32);
	// b 0x82178d94
	goto loc_82178D94;
loc_82178D54:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82178D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82178d94
	if (ctx.cr6.eq) goto loc_82178D94;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
loc_82178D78:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 | ctx.r11.u64;
	// stwcx. r10,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82178d78
	if (!ctx.cr0.eq) goto loc_82178D78;
loc_82178D94:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82178cb8
	if (ctx.cr6.lt) goto loc_82178CB8;
loc_82178DA8:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82178c98
	if (!ctx.cr0.eq) goto loc_82178C98;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82178ec0
	ctx.lr = 0x82178DBC;
	sub_82178EC0(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82178610
	ctx.lr = 0x82178DCC;
	sub_82178610(ctx, base);
loc_82178DCC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82178DD4"))) PPC_WEAK_FUNC(sub_82178DD4);
PPC_FUNC_IMPL(__imp__sub_82178DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178DD8"))) PPC_WEAK_FUNC(sub_82178DD8);
PPC_FUNC_IMPL(__imp__sub_82178DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82178DEC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82178e20
	if (!ctx.cr6.lt) goto loc_82178E20;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82178e20
	if (!ctx.cr6.lt) goto loc_82178E20;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82178E20:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r7,r1,-36
	ctx.r7.s64 = ctx.r1.s64 + -36;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82178E60:
	// lwzu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82178e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82178E60;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82178E7C:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82178e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82178E7C;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,-36
	ctx.r11.s64 = ctx.r1.s64 + -36;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82178E98:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82178e98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82178E98;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82178dec
	if (!ctx.cr6.gt) goto loc_82178DEC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82178EBC"))) PPC_WEAK_FUNC(sub_82178EBC);
PPC_FUNC_IMPL(__imp__sub_82178EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82178EC0"))) PPC_WEAK_FUNC(sub_82178EC0);
PPC_FUNC_IMPL(__imp__sub_82178EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82178EC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,608(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// addic. r3,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82178fd8
	if (ctx.cr0.lt) goto loc_82178FD8;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_82178EF0:
	// lwz r5,612(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82178fcc
	if (ctx.cr6.gt) goto loc_82178FCC;
loc_82178F00:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82178f34
	if (!ctx.cr6.lt) goto loc_82178F34;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82178f34
	if (!ctx.cr6.lt) goto loc_82178F34;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82178F34:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82178fcc
	if (!ctx.cr6.lt) goto loc_82178FCC;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r7,r1,76
	ctx.r7.s64 = ctx.r1.s64 + 76;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82178F74:
	// lwzu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82178f74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82178F74;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82178F90:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82178f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82178F90;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82178FAC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82178fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82178FAC;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82178f00
	if (!ctx.cr6.gt) goto loc_82178F00;
loc_82178FCC:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// bge 0x82178ef0
	if (!ctx.cr0.lt) goto loc_82178EF0;
loc_82178FD8:
	// addic. r5,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r5.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8217906c
	if (!ctx.cr0.gt) goto loc_8217906C;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82178FEC:
	// li r8,6
	ctx.r8.s64 = 6;
	// lwz r11,612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82179000:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82179000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82179000;
	// li r9,6
	ctx.r9.s64 = 6;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82179020:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82179020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82179020;
	// lwz r10,612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82179044:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82179044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82179044;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwz r3,612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// bl 0x82178dd8
	ctx.lr = 0x82179064;
	sub_82178DD8(ctx, base);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x82178fec
	if (ctx.cr6.gt) goto loc_82178FEC;
loc_8217906C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82179074"))) PPC_WEAK_FUNC(sub_82179074);
PPC_FUNC_IMPL(__imp__sub_82179074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82179078"))) PPC_WEAK_FUNC(sub_82179078);
PPC_FUNC_IMPL(__imp__sub_82179078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x82179080;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821791a4
	if (ctx.cr6.eq) goto loc_821791A4;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// li r25,2
	ctx.r25.s64 = 2;
	// addi r20,r11,22200
	ctx.r20.s64 = ctx.r11.s64 + 22200;
loc_821790A8:
	// lwz r3,32(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// lwz r24,0(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x8208cf38
	ctx.lr = 0x821790B4;
	sub_8208CF38(ctx, base);
	// lbz r11,93(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 93);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179198
	if (ctx.cr6.eq) goto loc_82179198;
	// li r23,0
	ctx.r23.s64 = 0;
loc_821790CC:
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// li r27,0
	ctx.r27.s64 = 0;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82179184
	if (!ctx.cr6.gt) goto loc_82179184;
	// li r28,0
	ctx.r28.s64 = 0;
loc_821790E8:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82179168
	if (!ctx.cr6.eq) goto loc_82179168;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82179168
	if (ctx.cr6.eq) goto loc_82179168;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179168
	if (ctx.cr6.eq) goto loc_82179168;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82179120:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217915c
	if (ctx.cr6.eq) goto loc_8217915C;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// bl 0x8209c6b8
	ctx.lr = 0x82179150;
	sub_8209C6B8(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
loc_8217915C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82179120
	if (!ctx.cr0.eq) goto loc_82179120;
loc_82179168:
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821790e8
	if (ctx.cr6.lt) goto loc_821790E8;
loc_82179184:
	// lbz r11,93(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 93);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821790cc
	if (ctx.cr6.lt) goto loc_821790CC;
loc_82179198:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// bne 0x821790a8
	if (!ctx.cr0.eq) goto loc_821790A8;
loc_821791A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821791AC"))) PPC_WEAK_FUNC(sub_821791AC);
PPC_FUNC_IMPL(__imp__sub_821791AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821791B0"))) PPC_WEAK_FUNC(sub_821791B0);
PPC_FUNC_IMPL(__imp__sub_821791B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x821791B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// blt cr6,0x821791d0
	if (ctx.cr6.lt) goto loc_821791D0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x821791e4
	goto loc_821791E4;
loc_821791D0:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29208
	ctx.r11.s64 = ctx.r11.s64 + -29208;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_821791E4:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-7224
	ctx.r10.s64 = ctx.r10.s64 + -7224;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwzx r29,r9,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// beq cr6,0x821792a0
	if (ctx.cr6.eq) goto loc_821792A0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821792a0
	if (ctx.cr6.eq) goto loc_821792A0;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821792a0
	if (!ctx.cr6.eq) goto loc_821792A0;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821792a0
	if (ctx.cr6.eq) goto loc_821792A0;
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821792a0
	if (ctx.cr6.eq) goto loc_821792A0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82179238:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82179294
	if (ctx.cr6.eq) goto loc_82179294;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82179294
	if (ctx.cr6.eq) goto loc_82179294;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82179294
	if (ctx.cr6.eq) goto loc_82179294;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r28,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// bgt cr6,0x82179288
	if (ctx.cr6.gt) goto loc_82179288;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
loc_82179288:
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821783b8
	ctx.lr = 0x82179294;
	sub_821783B8(ctx, base);
loc_82179294:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x82179238
	if (!ctx.cr0.eq) goto loc_82179238;
loc_821792A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821792A8"))) PPC_WEAK_FUNC(sub_821792A8);
PPC_FUNC_IMPL(__imp__sub_821792A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// beq cr6,0x821792e4
	if (ctx.cr6.eq) goto loc_821792E4;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x821792e4
	if (ctx.cr6.eq) goto loc_821792E4;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// beq cr6,0x821792e4
	if (ctx.cr6.eq) goto loc_821792E4;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x821792e4
	if (ctx.cr6.eq) goto loc_821792E4;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x821792e4
	if (ctx.cr6.eq) goto loc_821792E4;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x821792e4
	if (ctx.cr6.eq) goto loc_821792E4;
	// cmplwi cr6,r3,29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 29, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821792e8
	if (!ctx.cr6.eq) goto loc_821792E8;
loc_821792E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821792E8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821792F0"))) PPC_WEAK_FUNC(sub_821792F0);
PPC_FUNC_IMPL(__imp__sub_821792F0) {
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
	// addi r10,r11,-27496
	ctx.r10.s64 = ctx.r11.s64 + -27496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x8217931C;
	sub_82172BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82179334
	if (ctx.cr6.eq) goto loc_82179334;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82179334;
	sub_82080000(ctx, base);
loc_82179334:
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

__attribute__((alias("__imp__sub_82179350"))) PPC_WEAK_FUNC(sub_82179350);
PPC_FUNC_IMPL(__imp__sub_82179350) {
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
	// addi r10,r11,-27668
	ctx.r10.s64 = ctx.r11.s64 + -27668;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x8217937C;
	sub_82172BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82179394
	if (ctx.cr6.eq) goto loc_82179394;
	// bl 0x82179d30
	ctx.lr = 0x82179390;
	sub_82179D30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82179394:
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

__attribute__((alias("__imp__sub_821793AC"))) PPC_WEAK_FUNC(sub_821793AC);
PPC_FUNC_IMPL(__imp__sub_821793AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821793B0"))) PPC_WEAK_FUNC(sub_821793B0);
PPC_FUNC_IMPL(__imp__sub_821793B0) {
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
	// bl 0x82179400
	ctx.lr = 0x821793D0;
	sub_82179400(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821793e8
	if (ctx.cr6.eq) goto loc_821793E8;
	// bl 0x821626c0
	ctx.lr = 0x821793E4;
	sub_821626C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821793E8:
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

__attribute__((alias("__imp__sub_82179400"))) PPC_WEAK_FUNC(sub_82179400);
PPC_FUNC_IMPL(__imp__sub_82179400) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27536
	ctx.r10.s64 = ctx.r11.s64 + -27536;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82179448
	if (ctx.cr6.eq) goto loc_82179448;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179448
	if (ctx.cr6.eq) goto loc_82179448;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82179448;
	sub_82080000(ctx, base);
loc_82179448:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82179470
	if (ctx.cr6.eq) goto loc_82179470;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179470
	if (ctx.cr6.eq) goto loc_82179470;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82179470;
	sub_82080000(ctx, base);
loc_82179470:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172be8
	ctx.lr = 0x82179478;
	sub_82172BE8(ctx, base);
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

__attribute__((alias("__imp__sub_8217948C"))) PPC_WEAK_FUNC(sub_8217948C);
PPC_FUNC_IMPL(__imp__sub_8217948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82179490"))) PPC_WEAK_FUNC(sub_82179490);
PPC_FUNC_IMPL(__imp__sub_82179490) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82172a10
	ctx.lr = 0x821794B0;
	sub_82172A10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-27536
	ctx.r9.s64 = ctx.r10.s64 + -27536;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// sth r11,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
	// sth r11,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r11.u16);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// sth r11,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r11.u16);
	// sth r11,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r11.u16);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82179518"))) PPC_WEAK_FUNC(sub_82179518);
PPC_FUNC_IMPL(__imp__sub_82179518) {
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
	// addi r10,r11,-27912
	ctx.r10.s64 = ctx.r11.s64 + -27912;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x82179544;
	sub_82172BE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217955c
	if (ctx.cr6.eq) goto loc_8217955C;
	// bl 0x821725c8
	ctx.lr = 0x82179558;
	sub_821725C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8217955C:
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

__attribute__((alias("__imp__sub_82179574"))) PPC_WEAK_FUNC(sub_82179574);
PPC_FUNC_IMPL(__imp__sub_82179574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82179578"))) PPC_WEAK_FUNC(sub_82179578);
PPC_FUNC_IMPL(__imp__sub_82179578) {
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
	// bl 0x821795c8
	ctx.lr = 0x82179598;
	sub_821795C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821795b0
	if (ctx.cr6.eq) goto loc_821795B0;
	// bl 0x8217a608
	ctx.lr = 0x821795AC;
	sub_8217A608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821795B0:
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

__attribute__((alias("__imp__sub_821795C8"))) PPC_WEAK_FUNC(sub_821795C8);
PPC_FUNC_IMPL(__imp__sub_821795C8) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-27760
	ctx.r10.s64 = ctx.r11.s64 + -27760;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82179600
	if (ctx.cr6.eq) goto loc_82179600;
	// bl 0x82172d60
	ctx.lr = 0x821795F8;
	sub_82172D60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82179600:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-28560
	ctx.r10.s64 = ctx.r11.s64 + -28560;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82172be8
	ctx.lr = 0x82179614;
	sub_82172BE8(ctx, base);
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

__attribute__((alias("__imp__sub_82179628"))) PPC_WEAK_FUNC(sub_82179628);
PPC_FUNC_IMPL(__imp__sub_82179628) {
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
	// addi r10,r11,-27628
	ctx.r10.s64 = ctx.r11.s64 + -27628;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8216caf8
	ctx.lr = 0x82179654;
	sub_8216CAF8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217966c
	if (ctx.cr6.eq) goto loc_8217966C;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217966C;
	sub_82080000(ctx, base);
loc_8217966C:
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

__attribute__((alias("__imp__sub_82179688"))) PPC_WEAK_FUNC(sub_82179688);
PPC_FUNC_IMPL(__imp__sub_82179688) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82172a10
	ctx.lr = 0x821796AC;
	sub_82172A10(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r7,r9,-27628
	ctx.r7.s64 = ctx.r9.s64 + -27628;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// li r5,432
	ctx.r5.s64 = 432;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// sth r30,116(r31)
	PPC_STORE_U16(ctx.r31.u32 + 116, ctx.r30.u16);
	// sth r30,118(r31)
	PPC_STORE_U16(ctx.r31.u32 + 118, ctx.r30.u16);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// sth r30,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r30.u16);
	// sth r30,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r30.u16);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// addi r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 + 132;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// sth r30,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r30.u16);
	// sth r30,162(r31)
	PPC_STORE_U16(ctx.r31.u32 + 162, ctx.r30.u16);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stb r30,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r30.u8);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// sth r8,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r8.u16);
	// bl 0x8233eaf0
	ctx.lr = 0x82179740;
	sub_8233EAF0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r31,188
	ctx.r10.s64 = ctx.r31.s64 + 188;
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82179750:
	// stw r30,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r30.u32);
	// stwu r30,108(r11)
	ea = 108 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// stw r30,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r30.u32);
	// stwu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82179750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82179750;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82179784"))) PPC_WEAK_FUNC(sub_82179784);
PPC_FUNC_IMPL(__imp__sub_82179784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82179788"))) PPC_WEAK_FUNC(sub_82179788);
PPC_FUNC_IMPL(__imp__sub_82179788) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82172a10
	ctx.lr = 0x821797A8;
	sub_82172A10(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-28072
	ctx.r8.s64 = ctx.r10.s64 + -28072;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// sth r11,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
	// sth r11,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r11.u16);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// sth r11,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r11.u16);
	// sth r11,166(r31)
	PPC_STORE_U16(ctx.r31.u32 + 166, ctx.r11.u16);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r7,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r7.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
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

__attribute__((alias("__imp__sub_82179860"))) PPC_WEAK_FUNC(sub_82179860);
PPC_FUNC_IMPL(__imp__sub_82179860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82179868;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82172a10
	ctx.lr = 0x8217987C;
	sub_82172A10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r4,-28032
	ctx.r4.s64 = ctx.r4.s64 + -28032;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r27,8(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r26,12(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r25,0(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r24,4(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r23,8(r8)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// lwz r19,0(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r18,4(r6)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r17,8(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r16,0(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r15,4(r5)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r14,8(r5)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r22,0(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r21,4(r7)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r20,8(r7)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// stw r4,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r4.u32);
	// stw r27,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
	// stw r26,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r26.u32);
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// stw r23,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r23.u32);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r27,8(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r24,8(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r28,12(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r22,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r22.u32);
	// stw r21,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r21.u32);
	// stw r20,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r20.u32);
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// stw r19,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r19.u32);
	// stw r18,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r18.u32);
	// stw r17,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r17.u32);
	// stw r6,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r6.u32);
	// stw r16,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r16.u32);
	// stw r15,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r15.u32);
	// stw r14,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r14.u32);
	// stw r5,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r5.u32);
	// stw r4,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r4.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
	// stw r8,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r8.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r27,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r27.u32);
	// stw r29,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
	// stw r26,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r26.u32);
	// stw r25,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r25.u32);
	// stw r24,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r24.u32);
	// stw r28,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r28.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82179A48"))) PPC_WEAK_FUNC(sub_82179A48);
PPC_FUNC_IMPL(__imp__sub_82179A48) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179a74
	if (ctx.cr6.eq) goto loc_82179A74;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82179A74;
	sub_82080000(ctx, base);
loc_82179A74:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82179A94"))) PPC_WEAK_FUNC(sub_82179A94);
PPC_FUNC_IMPL(__imp__sub_82179A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82179A98"))) PPC_WEAK_FUNC(sub_82179A98);
PPC_FUNC_IMPL(__imp__sub_82179A98) {
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
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82179abc
	if (ctx.cr6.eq) goto loc_82179ABC;
	// bl 0x82172d60
	ctx.lr = 0x82179ABC;
	sub_82172D60(ctx, base);
loc_82179ABC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82179AD8"))) PPC_WEAK_FUNC(sub_82179AD8);
PPC_FUNC_IMPL(__imp__sub_82179AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82179AE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r27,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r27.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// sth r30,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r30.u16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// sth r30,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r30.u16);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bl 0x82161240
	ctx.lr = 0x82179B20;
	sub_82161240(ctx, base);
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// addi r28,r11,31376
	ctx.r28.s64 = ctx.r11.s64 + 31376;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82179b50
	if (!ctx.cr6.eq) goto loc_82179B50;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x8208cfb0
	ctx.lr = 0x82179B44;
	sub_8208CFB0(ctx, base);
	// lfs f0,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// b 0x82179b58
	goto loc_82179B58;
loc_82179B50:
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x8208cfb0
	ctx.lr = 0x82179B58;
	sub_8208CFB0(ctx, base);
loc_82179B58:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82179b70
	if (ctx.cr6.eq) goto loc_82179B70;
	// stw r27,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r27.u32);
loc_82179B70:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179b88
	if (ctx.cr6.eq) goto loc_82179B88;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
loc_82179B88:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// bl 0x82176780
	ctx.lr = 0x82179B9C;
	sub_82176780(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lfs f0,244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r5,r11,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// rlwinm r4,r10,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r5,r10,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// lfd f5,112(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f11
	ctx.f3.f64 = double(ctx.f11.s64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 188);
	// ld r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 180);
	// lfs f6,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// fcfid f11,f8
	ctx.f11.f64 = double(ctx.f8.s64);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// fcfid f2,f12
	ctx.f2.f64 = double(ctx.f12.s64);
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// std r11,124(r31)
	PPC_STORE_U64(ctx.r31.u32 + 124, ctx.r11.u64);
	// fcfid f13,f10
	ctx.f13.f64 = double(ctx.f10.s64);
	// std r10,132(r31)
	PPC_STORE_U64(ctx.r31.u32 + 132, ctx.r10.u64);
	// fcfid f10,f7
	ctx.f10.f64 = double(ctx.f7.s64);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// fcfid f12,f9
	ctx.f12.f64 = double(ctx.f9.s64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f1,f10
	ctx.f1.f64 = double(float(ctx.f10.f64));
	// frsp f3,f12
	ctx.f3.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f11,92(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f10,104(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f9,108(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// fmuls f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f7,116(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f5,120(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// fmuls f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f8,112(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f6,152(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// bl 0x8217a068
	ctx.lr = 0x82179CC4;
	sub_8217A068(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r5,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// bl 0x8217a068
	ctx.lr = 0x82179CF4;
	sub_8217A068(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f4,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f3.f64 = double(temp.f32);
	// stw r4,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f4,144(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f3,148(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82179D2C"))) PPC_WEAK_FUNC(sub_82179D2C);
PPC_FUNC_IMPL(__imp__sub_82179D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82179D30"))) PPC_WEAK_FUNC(sub_82179D30);
PPC_FUNC_IMPL(__imp__sub_82179D30) {
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
	// beq cr6,0x82179e2c
	if (ctx.cr6.eq) goto loc_82179E2C;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6964
	ctx.r31.s64 = ctx.r11.s64 + 6964;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82179D64;
	sub_823052D8(ctx, base);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
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
	// bne cr6,0x82179e20
	if (!ctx.cr6.eq) goto loc_82179E20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82179e20
	if (ctx.cr6.eq) goto loc_82179E20;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82179e20
	if (!ctx.cr6.lt) goto loc_82179E20;
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
	// beq cr6,0x82179df8
	if (ctx.cr6.eq) goto loc_82179DF8;
loc_82179DD0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82179df0
	if (ctx.cr6.eq) goto loc_82179DF0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82179dd0
	if (!ctx.cr6.eq) goto loc_82179DD0;
	// b 0x82179df8
	goto loc_82179DF8;
loc_82179DF0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82179DF8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82179e10
	if (!ctx.cr6.eq) goto loc_82179E10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82179E10:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x82179E1C;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82179E20:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82179E2C;
	sub_823051A8(ctx, base);
loc_82179E2C:
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

__attribute__((alias("__imp__sub_82179E44"))) PPC_WEAK_FUNC(sub_82179E44);
PPC_FUNC_IMPL(__imp__sub_82179E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82179E48"))) PPC_WEAK_FUNC(sub_82179E48);
PPC_FUNC_IMPL(__imp__sub_82179E48) {
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
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,6964
	ctx.r31.s64 = ctx.r11.s64 + 6964;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x82179E70;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179e94
	if (ctx.cr6.eq) goto loc_82179E94;
loc_82179E7C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82179ec4
	if (!ctx.cr6.eq) goto loc_82179EC4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82179e7c
	if (!ctx.cr6.eq) goto loc_82179E7C;
loc_82179E94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82179eec
	if (!ctx.cr6.eq) goto loc_82179EEC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82179f48
	ctx.lr = 0x82179EA8;
	sub_82179F48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82179eec
	if (!ctx.cr6.eq) goto loc_82179EEC;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82179EBC;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82179f30
	goto loc_82179F30;
loc_82179EC4:
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
	// b 0x82179f20
	goto loc_82179F20;
loc_82179EEC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,156
	ctx.r10.s64 = ctx.r11.s64 + 156;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
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
loc_82179F20:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x82179F2C;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82179F30:
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

__attribute__((alias("__imp__sub_82179F48"))) PPC_WEAK_FUNC(sub_82179F48);
PPC_FUNC_IMPL(__imp__sub_82179F48) {
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
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82082030
	ctx.lr = 0x82179F7C;
	sub_82082030(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r11,r11,6964
	ctx.r11.s64 = ctx.r11.s64 + 6964;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82179f98
	if (ctx.cr6.eq) goto loc_82179F98;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x82179f9c
	goto loc_82179F9C;
loc_82179F98:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82179F9C:
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
	// beq cr6,0x82179fdc
	if (ctx.cr6.eq) goto loc_82179FDC;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82179FD4:
	// stwu r3,160(r10)
	ea = 160 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82179fd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82179FD4;
loc_82179FDC:
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

__attribute__((alias("__imp__sub_82179FFC"))) PPC_WEAK_FUNC(sub_82179FFC);
PPC_FUNC_IMPL(__imp__sub_82179FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217A000"))) PPC_WEAK_FUNC(sub_8217A000);
PPC_FUNC_IMPL(__imp__sub_8217A000) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8217a038
	if (ctx.cr6.gt) goto loc_8217A038;
	// lfs f0,476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8217A038:
	// lfs f0,480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	ctx.f0.f64 = double(temp.f32);
	// lfd f2,488(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 488);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8233c318
	ctx.lr = 0x8217A050;
	sub_8233C318(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217A064"))) PPC_WEAK_FUNC(sub_8217A064);
PPC_FUNC_IMPL(__imp__sub_8217A064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217A068"))) PPC_WEAK_FUNC(sub_8217A068);
PPC_FUNC_IMPL(__imp__sub_8217A068) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f31,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8217a000
	ctx.lr = 0x8217A09C;
	sub_8217A000(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8217a000
	ctx.lr = 0x8217A0A8;
	sub_8217A000(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8217a000
	ctx.lr = 0x8217A0B4;
	sub_8217A000(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,8(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
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

__attribute__((alias("__imp__sub_8217A0EC"))) PPC_WEAK_FUNC(sub_8217A0EC);
PPC_FUNC_IMPL(__imp__sub_8217A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217A0F0"))) PPC_WEAK_FUNC(sub_8217A0F0);
PPC_FUNC_IMPL(__imp__sub_8217A0F0) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217a174
	if (!ctx.cr6.eq) goto loc_8217A174;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82082030
	ctx.lr = 0x8217A124;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217a16c
	if (ctx.cr6.eq) goto loc_8217A16C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r11.u8);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r9,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r9.u8);
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// b 0x8217a170
	goto loc_8217A170;
loc_8217A16C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8217A170:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_8217A174:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8217A18C"))) PPC_WEAK_FUNC(sub_8217A18C);
PPC_FUNC_IMPL(__imp__sub_8217A18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217A190"))) PPC_WEAK_FUNC(sub_8217A190);
PPC_FUNC_IMPL(__imp__sub_8217A190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8217A198;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r30.u8);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82161240
	ctx.lr = 0x8217A1D0;
	sub_82161240(ctx, base);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217a204
	if (ctx.cr6.eq) goto loc_8217A204;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
loc_8217A1E4:
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// beq cr6,0x8217a204
	if (ctx.cr6.eq) goto loc_8217A204;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217a1e4
	if (!ctx.cr6.eq) goto loc_8217A1E4;
loc_8217A204:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217a264
	if (ctx.cr6.eq) goto loc_8217A264;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r11,-29208
	ctx.r7.s64 = ctx.r11.s64 + -29208;
loc_8217A21C:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// blt cr6,0x8217a230
	if (ctx.cr6.lt) goto loc_8217A230;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8217a23c
	goto loc_8217A23C;
loc_8217A230:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r7,8
	ctx.r6.s64 = ctx.r7.s64 + 8;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
loc_8217A23C:
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm r6,r11,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8217a260
	if (ctx.cr6.eq) goto loc_8217A260;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8217a21c
	if (ctx.cr6.lt) goto loc_8217A21C;
	// b 0x8217a264
	goto loc_8217A264;
loc_8217A260:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8217A264:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82119e50
	ctx.lr = 0x8217A27C;
	sub_82119E50(ctx, base);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// beq cr6,0x8217a2b0
	if (ctx.cr6.eq) goto loc_8217A2B0;
	// stw r10,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r10.u32);
	// b 0x8217a2b4
	goto loc_8217A2B4;
loc_8217A2B0:
	// stw r10,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r10.u32);
loc_8217A2B4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r7,-33
	ctx.r7.s64 = -33;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r5,r29,72
	ctx.r5.s64 = ctx.r29.s64 + 72;
	// stw r6,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r6.u32);
	// stw r6,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r6.u32);
loc_8217A2CC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stwcx. r9,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217a2cc
	if (!ctx.cr0.eq) goto loc_8217A2CC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217A2F0"))) PPC_WEAK_FUNC(sub_8217A2F0);
PPC_FUNC_IMPL(__imp__sub_8217A2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8217A2F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217a3a8
	if (ctx.cr6.eq) goto loc_8217A3A8;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwimi r11,r29,2,28,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 2) & 0xE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// beq cr6,0x8217a340
	if (ctx.cr6.eq) goto loc_8217A340;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821783b8
	ctx.lr = 0x8217A338;
	sub_821783B8(ctx, base);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
loc_8217A340:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82082030
	ctx.lr = 0x8217A354;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217a36c
	if (ctx.cr6.eq) goto loc_8217A36C;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82155038
	ctx.lr = 0x8217A364;
	sub_82155038(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8217a370
	goto loc_8217A370;
loc_8217A36C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8217A370:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211a048
	ctx.lr = 0x8217A384;
	sub_8211A048(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821783b8
	ctx.lr = 0x8217A398;
	sub_821783B8(ctx, base);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8217A3A8:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217a450
	if (ctx.cr6.eq) goto loc_8217A450;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwimi r11,r10,3,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwimi r11,r10,3,28,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0xC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF3);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// beq cr6,0x8217a3e8
	if (ctx.cr6.eq) goto loc_8217A3E8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821783b8
	ctx.lr = 0x8217A3E0;
	sub_821783B8(ctx, base);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
loc_8217A3E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82082030
	ctx.lr = 0x8217A3FC;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217a414
	if (ctx.cr6.eq) goto loc_8217A414;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82155038
	ctx.lr = 0x8217A40C;
	sub_82155038(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8217a418
	goto loc_8217A418;
loc_8217A414:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8217A418:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211a208
	ctx.lr = 0x8217A42C;
	sub_8211A208(ctx, base);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821783b8
	ctx.lr = 0x8217A440;
	sub_821783B8(ctx, base);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8217A450:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217a470
	if (ctx.cr6.eq) goto loc_8217A470;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// b 0x8217a48c
	goto loc_8217A48C;
loc_8217A470:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217a4ac
	if (ctx.cr6.eq) goto loc_8217A4AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_8217A48C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// beq cr6,0x8217a4ac
	if (ctx.cr6.eq) goto loc_8217A4AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211a4e0
	ctx.lr = 0x8217A4A0;
	sub_8211A4E0(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217A4AC;
	sub_82080000(ctx, base);
loc_8217A4AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217A4B4"))) PPC_WEAK_FUNC(sub_8217A4B4);
PPC_FUNC_IMPL(__imp__sub_8217A4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217A4B8"))) PPC_WEAK_FUNC(sub_8217A4B8);
PPC_FUNC_IMPL(__imp__sub_8217A4B8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217a50c
	if (ctx.cr6.eq) goto loc_8217A50C;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211a4e0
	ctx.lr = 0x8217A4F8;
	sub_8211A4E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217a50c
	if (ctx.cr6.eq) goto loc_8217A50C;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217A50C;
	sub_82080000(ctx, base);
loc_8217A50C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8217A534"))) PPC_WEAK_FUNC(sub_8217A534);
PPC_FUNC_IMPL(__imp__sub_8217A534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217A538"))) PPC_WEAK_FUNC(sub_8217A538);
PPC_FUNC_IMPL(__imp__sub_8217A538) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217a558
	if (ctx.cr6.eq) goto loc_8217A558;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x8211a4e0
	ctx.lr = 0x8217A558;
	sub_8211A4E0(ctx, base);
loc_8217A558:
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
}

__attribute__((alias("__imp__sub_8217A56C"))) PPC_WEAK_FUNC(sub_8217A56C);
PPC_FUNC_IMPL(__imp__sub_8217A56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217A570"))) PPC_WEAK_FUNC(sub_8217A570);
PPC_FUNC_IMPL(__imp__sub_8217A570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217a584
	if (ctx.cr6.eq) goto loc_8217A584;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82172e00
	sub_82172E00(ctx, base);
	return;
loc_8217A584:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217A590"))) PPC_WEAK_FUNC(sub_8217A590);
PPC_FUNC_IMPL(__imp__sub_8217A590) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217a5c4
	if (ctx.cr6.eq) goto loc_8217A5C4;
	// bl 0x82172d60
	ctx.lr = 0x8217A5BC;
	sub_82172D60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8217A5C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217a5f0
	if (ctx.cr6.eq) goto loc_8217A5F0;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
loc_8217A5D0:
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
	// bne 0x8217a5d0
	if (!ctx.cr0.eq) goto loc_8217A5D0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_8217A5F0:
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

__attribute__((alias("__imp__sub_8217A608"))) PPC_WEAK_FUNC(sub_8217A608);
PPC_FUNC_IMPL(__imp__sub_8217A608) {
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
	// beq cr6,0x8217a704
	if (ctx.cr6.eq) goto loc_8217A704;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,7020
	ctx.r31.s64 = ctx.r11.s64 + 7020;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8217A63C;
	sub_823052D8(ctx, base);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
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
	// bne cr6,0x8217a6f8
	if (!ctx.cr6.eq) goto loc_8217A6F8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8217a6f8
	if (ctx.cr6.eq) goto loc_8217A6F8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8217a6f8
	if (!ctx.cr6.lt) goto loc_8217A6F8;
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
	// beq cr6,0x8217a6d0
	if (ctx.cr6.eq) goto loc_8217A6D0;
loc_8217A6A8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217a6c8
	if (ctx.cr6.eq) goto loc_8217A6C8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8217a6a8
	if (!ctx.cr6.eq) goto loc_8217A6A8;
	// b 0x8217a6d0
	goto loc_8217A6D0;
loc_8217A6C8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8217A6D0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8217a6e8
	if (!ctx.cr6.eq) goto loc_8217A6E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8217A6E8:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217A6F4;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8217A6F8:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8217A704;
	sub_823051A8(ctx, base);
loc_8217A704:
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

__attribute__((alias("__imp__sub_8217A71C"))) PPC_WEAK_FUNC(sub_8217A71C);
PPC_FUNC_IMPL(__imp__sub_8217A71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217A720"))) PPC_WEAK_FUNC(sub_8217A720);
PPC_FUNC_IMPL(__imp__sub_8217A720) {
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
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,7020
	ctx.r31.s64 = ctx.r11.s64 + 7020;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8217A748;
	sub_823052D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217a76c
	if (ctx.cr6.eq) goto loc_8217A76C;
loc_8217A754:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217a79c
	if (!ctx.cr6.eq) goto loc_8217A79C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217a754
	if (!ctx.cr6.eq) goto loc_8217A754;
loc_8217A76C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217a7c4
	if (!ctx.cr6.eq) goto loc_8217A7C4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8217a820
	ctx.lr = 0x8217A780;
	sub_8217A820(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217a7c4
	if (!ctx.cr6.eq) goto loc_8217A7C4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8217A794;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217a808
	goto loc_8217A808;
loc_8217A79C:
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
	// b 0x8217a7f8
	goto loc_8217A7F8;
loc_8217A7C4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,120
	ctx.r10.s64 = ctx.r11.s64 + 120;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
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
loc_8217A7F8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8217A804;
	sub_823051A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8217A808:
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

__attribute__((alias("__imp__sub_8217A820"))) PPC_WEAK_FUNC(sub_8217A820);
PPC_FUNC_IMPL(__imp__sub_8217A820) {
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
	ctx.lr = 0x8217A84C;
	sub_82082030(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r11,r11,7020
	ctx.r11.s64 = ctx.r11.s64 + 7020;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217a868
	if (ctx.cr6.eq) goto loc_8217A868;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8217a86c
	goto loc_8217A86C;
loc_8217A868:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8217A86C:
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
	// beq cr6,0x8217a8ac
	if (ctx.cr6.eq) goto loc_8217A8AC;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8217A8A4:
	// stwu r3,128(r10)
	ea = 128 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8217a8a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217A8A4;
loc_8217A8AC:
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

__attribute__((alias("__imp__sub_8217A8CC"))) PPC_WEAK_FUNC(sub_8217A8CC);
PPC_FUNC_IMPL(__imp__sub_8217A8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217A8D0"))) PPC_WEAK_FUNC(sub_8217A8D0);
PPC_FUNC_IMPL(__imp__sub_8217A8D0) {
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
	// addi r10,r11,-27456
	ctx.r10.s64 = ctx.r11.s64 + -27456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82165440
	ctx.lr = 0x8217A8FC;
	sub_82165440(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217a914
	if (ctx.cr6.eq) goto loc_8217A914;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217A914;
	sub_82080000(ctx, base);
loc_8217A914:
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

__attribute__((alias("__imp__sub_8217A930"))) PPC_WEAK_FUNC(sub_8217A930);
PPC_FUNC_IMPL(__imp__sub_8217A930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8217A938;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82161240
	ctx.lr = 0x8217A970;
	sub_82161240(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,1024
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1024, ctx.xer);
	// bne cr6,0x8217a99c
	if (!ctx.cr6.eq) goto loc_8217A99C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821654a8
	ctx.lr = 0x8217A98C;
	sub_821654A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82161240
	ctx.lr = 0x8217A99C;
	sub_82161240(ctx, base);
loc_8217A99C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82082030
	ctx.lr = 0x8217A9B0;
	sub_82082030(ctx, base);
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8217A9C0;
	sub_8233EAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,96(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x8208d070
	ctx.lr = 0x8217A9CC;
	sub_8208D070(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8217A9E4;
	sub_8208CFB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217A9EC;
	sub_8208D070(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8208d070
	ctx.lr = 0x8217AA00;
	sub_8208D070(ctx, base);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8208cfb0
	ctx.lr = 0x8217AA20;
	sub_8208CFB0(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrldi r11,r7,62
	ctx.r11.u64 = ctx.r7.u64 & 0x3;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8217aa48
	if (ctx.cr6.eq) goto loc_8217AA48;
	// li r5,1
	ctx.r5.s64 = 1;
	// subfic r4,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r4.s64 = 4 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82119d10
	ctx.lr = 0x8217AA48;
	sub_82119D10(ctx, base);
loc_8217AA48:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82165578
	ctx.lr = 0x8217AA58;
	sub_82165578(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,2047
	ctx.r10.s64 = ctx.r11.s64 + 2047;
	// rlwinm r29,r10,0,0,20
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82082030
	ctx.lr = 0x8217AA7C;
	sub_82082030(ctx, base);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8208cfb0
	ctx.lr = 0x8217AA98;
	sub_8208CFB0(ctx, base);
	// lwz r7,96(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r29,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217AAA8"))) PPC_WEAK_FUNC(sub_8217AAA8);
PPC_FUNC_IMPL(__imp__sub_8217AAA8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217aad4
	if (!ctx.cr6.eq) goto loc_8217AAD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217ab34
	goto loc_8217AB34;
loc_8217AAD4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217aaec
	if (ctx.cr6.eq) goto loc_8217AAEC;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217AAEC;
	sub_82080000(ctx, base);
loc_8217AAEC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ab04
	if (ctx.cr6.eq) goto loc_8217AB04;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217AB04;
	sub_82080000(ctx, base);
loc_8217AB04:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// beq cr6,0x8217ab2c
	if (ctx.cr6.eq) goto loc_8217AB2C;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217AB2C;
	sub_82080000(ctx, base);
loc_8217AB2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_8217AB34:
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

__attribute__((alias("__imp__sub_8217AB4C"))) PPC_WEAK_FUNC(sub_8217AB4C);
PPC_FUNC_IMPL(__imp__sub_8217AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217AB50"))) PPC_WEAK_FUNC(sub_8217AB50);
PPC_FUNC_IMPL(__imp__sub_8217AB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8217AB58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8217ac0c
	if (!ctx.cr6.gt) goto loc_8217AC0C;
	// addi r28,r3,220
	ctx.r28.s64 = ctx.r3.s64 + 220;
loc_8217AB78:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r28,-8
	ctx.r27.s64 = ctx.r28.s64 + -8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217abf8
	if (ctx.cr6.eq) goto loc_8217ABF8;
	// lhz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + -4);
	// lhz r9,-6(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + -6);
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217abd8
	if (ctx.cr0.eq) goto loc_8217ABD8;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8217ABA8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217abc8
	if (ctx.cr6.eq) goto loc_8217ABC8;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217ABC8;
	sub_82080000(ctx, base);
loc_8217ABC8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r26,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r26.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8217aba8
	if (!ctx.cr0.eq) goto loc_8217ABA8;
loc_8217ABD8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217abf4
	if (ctx.cr6.eq) goto loc_8217ABF4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217ABF4;
	sub_82080000(ctx, base);
loc_8217ABF4:
	// stw r26,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r26.u32);
loc_8217ABF8:
	// lwz r11,148(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 148);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,108
	ctx.r28.s64 = ctx.r28.s64 + 108;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8217ab78
	if (ctx.cr6.lt) goto loc_8217AB78;
loc_8217AC0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217AC14"))) PPC_WEAK_FUNC(sub_8217AC14);
PPC_FUNC_IMPL(__imp__sub_8217AC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217AC18"))) PPC_WEAK_FUNC(sub_8217AC18);
PPC_FUNC_IMPL(__imp__sub_8217AC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8217AC20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8217ae28
	if (!ctx.cr6.gt) goto loc_8217AE28;
	// addi r30,r3,316
	ctx.r30.s64 = ctx.r3.s64 + 316;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_8217AC44:
	// lwz r31,-4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r29,r30,-104
	ctx.r29.s64 = ctx.r30.s64 + -104;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217ac78
	if (ctx.cr6.eq) goto loc_8217AC78;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,2
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bl 0x822472e0
	ctx.lr = 0x8217AC68;
	sub_822472E0(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217AC74;
	sub_82080000(ctx, base);
	// stw r26,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r26.u32);
loc_8217AC78:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217aca8
	if (ctx.cr6.eq) goto loc_8217ACA8;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,2
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bl 0x822472e0
	ctx.lr = 0x8217AC98;
	sub_822472E0(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217ACA4;
	sub_82080000(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_8217ACA8:
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8217ae14
	if (ctx.cr6.eq) goto loc_8217AE14;
	// lhz r9,-102(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + -102);
	// lhz r11,-100(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -100);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r8,-84(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -84);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8217ad8c
	if (ctx.cr6.eq) goto loc_8217AD8C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217ad70
	if (ctx.cr6.eq) goto loc_8217AD70;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8217ACE8:
	// lwz r11,-96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -96);
	// lwzx r8,r11,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217ad0c
	if (!ctx.cr6.eq) goto loc_8217AD0C;
	// stw r27,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r27.u32);
	// b 0x8217ad68
	goto loc_8217AD68;
loc_8217AD0C:
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// lhz r10,152(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217ad5c
	if (ctx.cr6.eq) goto loc_8217AD5C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8217AD28:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217ad3c
	if (!ctx.cr6.eq) goto loc_8217AD3C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x8217ad48
	goto loc_8217AD48;
loc_8217AD3C:
	// lwz r5,-84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -84);
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
loc_8217AD48:
	// lhz r10,152(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 152);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8217ad28
	if (ctx.cr6.lt) goto loc_8217AD28;
loc_8217AD5C:
	// lwz r11,-84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -84);
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// stw r10,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
loc_8217AD68:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x8217ace8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217ACE8;
loc_8217AD70:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ad88
	if (ctx.cr6.eq) goto loc_8217AD88;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217AD88;
	sub_82080000(ctx, base);
loc_8217AD88:
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
loc_8217AD8C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ae14
	if (ctx.cr6.eq) goto loc_8217AE14;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217adf8
	if (ctx.cr6.eq) goto loc_8217ADF8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_8217ADA8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8217adc8
	if (!ctx.cr6.eq) goto loc_8217ADC8;
	// stw r27,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r27.u32);
	// b 0x8217adf0
	goto loc_8217ADF0;
loc_8217ADC8:
	// rlwinm r8,r10,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217ade4
	if (!ctx.cr6.eq) goto loc_8217ADE4;
	// stw r27,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r27.u32);
	// b 0x8217adf0
	goto loc_8217ADF0;
loc_8217ADE4:
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
loc_8217ADF0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8217ada8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217ADA8;
loc_8217ADF8:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ae10
	if (ctx.cr6.eq) goto loc_8217AE10;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217AE10;
	sub_82080000(ctx, base);
loc_8217AE10:
	// stw r26,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r26.u32);
loc_8217AE14:
	// lwz r11,148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8217ac44
	if (ctx.cr6.lt) goto loc_8217AC44;
loc_8217AE28:
	// li r11,-9
	ctx.r11.s64 = -9;
	// addi r7,r28,72
	ctx.r7.s64 = ctx.r28.s64 + 72;
loc_8217AE30:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217ae30
	if (!ctx.cr0.eq) goto loc_8217AE30;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217AE54"))) PPC_WEAK_FUNC(sub_8217AE54);
PPC_FUNC_IMPL(__imp__sub_8217AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217AE58"))) PPC_WEAK_FUNC(sub_8217AE58);
PPC_FUNC_IMPL(__imp__sub_8217AE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x8217AE60;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r4,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x82388734
	ctx.lr = 0x8217AE8C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217ae98
	if (!ctx.cr6.eq) goto loc_8217AE98;
	// bl 0x821b3000
	ctx.lr = 0x8217AE98;
	sub_821B3000(ctx, base);
loc_8217AE98:
	// li r16,0
	ctx.r16.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r16,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r16.u16);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
	// sth r16,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r16.u16);
	// bl 0x82161240
	ctx.lr = 0x8217AEC4;
	sub_82161240(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217aee4
	if (!ctx.cr6.eq) goto loc_8217AEE4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_8217AEE4:
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// ble cr6,0x8217af00
	if (!ctx.cr6.gt) goto loc_8217AF00;
	// bl 0x8208d070
	ctx.lr = 0x8217AEF8;
	sub_8208D070(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8217af08
	goto loc_8217AF08;
loc_8217AF00:
	// bl 0x8210aa10
	ctx.lr = 0x8217AF04;
	sub_8210AA10(ctx, base);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
loc_8217AF08:
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// ble cr6,0x8217af24
	if (!ctx.cr6.gt) goto loc_8217AF24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217AF1C;
	sub_8208D070(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8217af28
	goto loc_8217AF28;
loc_8217AF24:
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_8217AF28:
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// ble cr6,0x8217af44
	if (!ctx.cr6.gt) goto loc_8217AF44;
	// bl 0x8208d070
	ctx.lr = 0x8217AF3C;
	sub_8208D070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8217af4c
	goto loc_8217AF4C;
loc_8217AF44:
	// bl 0x8210aa10
	ctx.lr = 0x8217AF48;
	sub_8210AA10(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
loc_8217AF4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217AF54;
	sub_8208D070(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r31,r11,212
	ctx.r31.s64 = ctx.r11.s64 + 212;
	// bl 0x8208d070
	ctx.lr = 0x8217AF70;
	sub_8208D070(ctx, base);
	// rlwinm r10,r3,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217af88
	if (!ctx.cr6.eq) goto loc_8217AF88;
	// oris r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 65536;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8217AF88:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217afb0
	if (!ctx.cr6.eq) goto loc_8217AFB0;
	// rlwinm r10,r11,0,10,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300000;
	// lis r9,48
	ctx.r9.s64 = 3145728;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8217afb0
	if (!ctx.cr6.eq) goto loc_8217AFB0;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8217AFB0:
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// sth r27,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r27.u16);
	// mr r15,r16
	ctx.r15.u64 = ctx.r16.u64;
	// add. r14,r10,r27
	ctx.r14.u64 = ctx.r10.u64 + ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// sth r28,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r28.u16);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// rlwinm r10,r14,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r6,r10,15
	ctx.r6.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r6,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r5.u32);
	// beq 0x8217b1d4
	if (ctx.cr0.eq) goto loc_8217B1D4;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// b 0x8217aff4
	goto loc_8217AFF4;
loc_8217AFF0:
	// lwz r25,300(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
loc_8217AFF4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82161240
	ctx.lr = 0x8217B004;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217b1e0
	if (ctx.cr6.eq) goto loc_8217B1E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B018;
	sub_8208D070(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B024;
	sub_8208D070(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B030;
	sub_8208D070(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B03C;
	sub_8208D070(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B048;
	sub_8208D070(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B054;
	sub_8208D070(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B060;
	sub_8208D070(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B06C;
	sub_8208D070(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B078;
	sub_8208D070(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B084;
	sub_8208D070(ctx, base);
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bge cr6,0x8217b09c
	if (!ctx.cr6.lt) goto loc_8217B09C;
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// b 0x8217b0a8
	goto loc_8217B0A8;
loc_8217B09C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B0A4;
	sub_8208D070(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
loc_8217B0A8:
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x8217b0bc
	if (!ctx.cr6.lt) goto loc_8217B0BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8217b0c4
	goto loc_8217B0C4;
loc_8217B0BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B0C4;
	sub_8208D070(ctx, base);
loc_8217B0C4:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mulli r10,r27,960
	ctx.r10.s64 = ctx.r27.s64 * 960;
	// lwz r7,292(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stwx r11,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r5,r6,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// addi r4,r9,67
	ctx.r4.s64 = ctx.r9.s64 + 67;
	// stw r27,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r27.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r4,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF0;
	// lwzx r6,r8,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r26,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r26.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r11,r4,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stw r24,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r24.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r4,r6,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// stw r23,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r18,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r18.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r6,r8,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r22,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r22.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r11,r4,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// stw r21,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r21.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stw r28,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r28.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r4,r6,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// stw r20,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r20.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r3,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r3.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r6,r8,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r19,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r19.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r3,r4,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// stw r16,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r16.u32);
	// lwz r11,84(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// stw r5,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r5.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217b1ac
	if (ctx.cr6.eq) goto loc_8217B1AC;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_8217B1AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x8208cfb0
	ctx.lr = 0x8217B1C4;
	sub_8208CFB0(ctx, base);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r15,r14
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x8217aff0
	if (ctx.cr6.lt) goto loc_8217AFF0;
loc_8217B1D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_8217B1E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217B1EC"))) PPC_WEAK_FUNC(sub_8217B1EC);
PPC_FUNC_IMPL(__imp__sub_8217B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217B1F0"))) PPC_WEAK_FUNC(sub_8217B1F0);
PPC_FUNC_IMPL(__imp__sub_8217B1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x8217B1F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// sth r30,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// sth r30,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82161240
	ctx.lr = 0x8217B230;
	sub_82161240(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217b248
	if (!ctx.cr6.eq) goto loc_8217B248;
loc_8217B23C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8217B248:
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// ble cr6,0x8217b264
	if (!ctx.cr6.gt) goto loc_8217B264;
	// bl 0x8208d070
	ctx.lr = 0x8217B25C;
	sub_8208D070(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8217b26c
	goto loc_8217B26C;
loc_8217B264:
	// bl 0x8210aa10
	ctx.lr = 0x8217B268;
	sub_8210AA10(ctx, base);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
loc_8217B26C:
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// ble cr6,0x8217b288
	if (!ctx.cr6.gt) goto loc_8217B288;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B280;
	sub_8208D070(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8217b28c
	goto loc_8217B28C;
loc_8217B288:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8217B28C:
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// ble cr6,0x8217b2a8
	if (!ctx.cr6.gt) goto loc_8217B2A8;
	// bl 0x8208d070
	ctx.lr = 0x8217B2A0;
	sub_8208D070(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8217b2b0
	goto loc_8217B2B0;
loc_8217B2A8:
	// bl 0x8210aa10
	ctx.lr = 0x8217B2AC;
	sub_8210AA10(ctx, base);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
loc_8217B2B0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B2B8;
	sub_8208D070(ctx, base);
	// mulli r11,r3,108
	ctx.r11.s64 = ctx.r3.s64 * 108;
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// addi r31,r11,212
	ctx.r31.s64 = ctx.r11.s64 + 212;
	// ble cr6,0x8217b31c
	if (!ctx.cr6.gt) goto loc_8217B31C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208d070
	ctx.lr = 0x8217B2D8;
	sub_8208D070(ctx, base);
	// rlwinm r11,r3,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217b2f0
	if (!ctx.cr6.eq) goto loc_8217B2F0;
	// oris r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 65536;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8217B2F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217b320
	if (!ctx.cr6.eq) goto loc_8217B320;
	// rlwinm r10,r11,0,10,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300000;
	// lis r9,48
	ctx.r9.s64 = 3145728;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8217b320
	if (!ctx.cr6.eq) goto loc_8217B320;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8217b320
	goto loc_8217B320;
loc_8217B31C:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8217B320:
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r25,r11,r27
	ctx.r25.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82161240
	ctx.lr = 0x8217B338;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217b23c
	if (ctx.cr6.eq) goto loc_8217B23C;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217B360:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8217b360
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217B360;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822980f8
	ctx.lr = 0x8217B384;
	sub_822980F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8217B398;
	sub_82082030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8217B3B0;
	sub_8208CFB0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8217b3e0
	if (!ctx.cr6.gt) goto loc_8217B3E0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8217B3D4:
	// dcbf r10,r4
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x8217b3d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217B3D4;
loc_8217B3E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822986a8
	ctx.lr = 0x8217B3E8;
	sub_822986A8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82161240
	ctx.lr = 0x8217B3F8;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217b23c
	if (ctx.cr6.eq) goto loc_8217B23C;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217B420:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8217b420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217B420;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82298060
	ctx.lr = 0x8217B440;
	sub_82298060(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8217B454;
	sub_82082030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8217B46C;
	sub_8208CFB0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8217b49c
	if (!ctx.cr6.gt) goto loc_8217B49C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8217B490:
	// dcbf r10,r4
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x8217b490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217B490;
loc_8217B49C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822986a8
	ctx.lr = 0x8217B4A4;
	sub_822986A8(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// bl 0x82161240
	ctx.lr = 0x8217B4C4;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217b5ac
	if (ctx.cr6.eq) goto loc_8217B5AC;
loc_8217B4D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,814
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 814, ctx.xer);
	// beq cr6,0x8217b574
	if (ctx.cr6.eq) goto loc_8217B574;
	// cmpwi cr6,r11,822
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 822, ctx.xer);
	// bne cr6,0x8217b590
	if (!ctx.cr6.eq) goto loc_8217B590;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217b590
	if (ctx.cr6.eq) goto loc_8217B590;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8217B508;
	sub_82082030(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8217B51C;
	sub_8208CFB0(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8217b590
	if (ctx.cr6.eq) goto loc_8217B590;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_8217B52C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8217b548
	if (!ctx.cr6.eq) goto loc_8217B548;
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// b 0x8217b568
	goto loc_8217B568;
loc_8217B548:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ori r6,r7,64
	ctx.r6.u64 = ctx.r7.u64 | 64;
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
loc_8217B568:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8217b52c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217B52C;
	// b 0x8217b590
	goto loc_8217B590;
loc_8217B574:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x8217b680
	ctx.lr = 0x8217B590;
	sub_8217B680(ctx, base);
loc_8217B590:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82161240
	ctx.lr = 0x8217B5A0;
	sub_82161240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217b4d0
	if (!ctx.cr6.eq) goto loc_8217B4D0;
loc_8217B5AC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217b5c4
	if (!ctx.cr6.eq) goto loc_8217B5C4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217b5e8
	if (ctx.cr6.eq) goto loc_8217B5E8;
loc_8217B5C4:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r7,r23,72
	ctx.r7.s64 = ctx.r23.s64 + 72;
loc_8217B5CC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217b5cc
	if (!ctx.cr0.eq) goto loc_8217B5CC;
loc_8217B5E8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8217b670
	if (ctx.cr6.eq) goto loc_8217B670;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8217B5F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,84(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r9,r9,960
	ctx.r9.s64 = ctx.r9.s64 * 960;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r6,r7,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8217b664
	if (ctx.cr6.eq) goto loc_8217B664;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82082030
	ctx.lr = 0x8217B638;
	sub_82082030(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stw r3,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r3.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lwz r3,48(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8217B664;
	sub_8233E4E0(ctx, base);
loc_8217B664:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8217b5f4
	if (!ctx.cr0.eq) goto loc_8217B5F4;
loc_8217B670:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217B67C"))) PPC_WEAK_FUNC(sub_8217B67C);
PPC_FUNC_IMPL(__imp__sub_8217B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217B680"))) PPC_WEAK_FUNC(sub_8217B680);
PPC_FUNC_IMPL(__imp__sub_8217B680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8217B688;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,8(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82082030
	ctx.lr = 0x8217B6B4;
	sub_82082030(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8208cfb0
	ctx.lr = 0x8217B6CC;
	sub_8208CFB0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217b768
	if (ctx.cr6.eq) goto loc_8217B768;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_8217B6E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8217b6fc
	if (!ctx.cr6.eq) goto loc_8217B6FC;
	// stw r6,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r6.u32);
	// b 0x8217b760
	goto loc_8217B760;
loc_8217B6FC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// ori r5,r9,32
	ctx.r5.u64 = ctx.r9.u64 | 32;
	// stw r5,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// lhz r4,152(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 152);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217b760
	if (ctx.cr6.eq) goto loc_8217B760;
loc_8217B72C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8217b740
	if (!ctx.cr6.eq) goto loc_8217B740;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// b 0x8217b74c
	goto loc_8217B74C;
loc_8217B740:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8217B74C:
	// lhz r10,152(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 152);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8217b72c
	if (ctx.cr6.lt) goto loc_8217B72C;
loc_8217B760:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8217b6e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217B6E0;
loc_8217B768:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217B770"))) PPC_WEAK_FUNC(sub_8217B770);
PPC_FUNC_IMPL(__imp__sub_8217B770) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8208cfb0
	ctx.lr = 0x8217B79C;
	sub_8208CFB0(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x8233e4e0
	ctx.lr = 0x8217B7AC;
	sub_8233E4E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r11.u8);
	// bl 0x8208d070
	ctx.lr = 0x8217B7BC;
	sub_8208D070(ctx, base);
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

__attribute__((alias("__imp__sub_8217B7D4"))) PPC_WEAK_FUNC(sub_8217B7D4);
PPC_FUNC_IMPL(__imp__sub_8217B7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217B7D8"))) PPC_WEAK_FUNC(sub_8217B7D8);
PPC_FUNC_IMPL(__imp__sub_8217B7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x8217B7E0;
	__savegprlr_19(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,160(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r3,548
	ctx.r4.s64 = ctx.r3.s64 + 548;
	// addi r31,r11,31376
	ctx.r31.s64 = ctx.r11.s64 + 31376;
	// lfs f12,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,368(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// addi r27,r3,516
	ctx.r27.s64 = ctx.r3.s64 + 516;
	// addi r7,r3,436
	ctx.r7.s64 = ctx.r3.s64 + 436;
	// stfs f12,360(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 360, temp.u32);
	// addi r26,r3,580
	ctx.r26.s64 = ctx.r3.s64 + 580;
	// stfs f13,364(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// addi r9,r3,164
	ctx.r9.s64 = ctx.r3.s64 + 164;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r3,152
	ctx.r6.s64 = ctx.r3.s64 + 152;
	// lfs f11,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f11.f64 = double(temp.f32);
	// addi r23,r3,500
	ctx.r23.s64 = ctx.r3.s64 + 500;
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfs f0,356(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 356, temp.u32);
	// addi r25,r3,532
	ctx.r25.s64 = ctx.r3.s64 + 532;
	// addi r24,r3,372
	ctx.r24.s64 = ctx.r3.s64 + 372;
	// addi r22,r3,564
	ctx.r22.s64 = ctx.r3.s64 + 564;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r10,r7,8
	ctx.r10.s64 = ctx.r7.s64 + 8;
	// addi r11,r3,200
	ctx.r11.s64 = ctx.r3.s64 + 200;
	// subf r29,r4,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r4.s64;
	// subf r28,r4,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r4.s64;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8217B858:
	// lfs f10,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x8217b888
	if (ctx.cr6.gt) goto loc_8217B888;
	// stfsx f0,r29,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, temp.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// stfsx f0,r28,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r8.u32, temp.u32);
	// b 0x8217b944
	goto loc_8217B944;
loc_8217B888:
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsubs f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// addi r21,r10,-8
	ctx.r21.s64 = ctx.r10.s64 + -8;
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// stfsx f5,r29,r8
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, temp.u32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fmuls f1,f2,f9
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// stfs f1,0(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fsubs f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fsubs f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fsubs f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f2,f1,f7
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// stfs f2,-124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// fmuls f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// stfs f1,-128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// fmuls f10,f3,f7
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// stfs f10,-116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// fmuls f13,f4,f7
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// stfs f13,-120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// lwz r21,4(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r20,8(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r19,12(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r31.u32);
	// stw r21,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r21.u32);
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r19.u32);
	// lfs f8,124(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// stfsx f5,r28,r8
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r8.u32, temp.u32);
loc_8217B944:
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x8217b858
	if (!ctx.cr0.eq) goto loc_8217B858;
	// stfs f0,12(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stfs f0,60(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 60, temp.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stfs f0,56(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 56, temp.u32);
	// addi r6,r3,148
	ctx.r6.s64 = ctx.r3.s64 + 148;
	// stfs f0,52(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 52, temp.u32);
	// addi r11,r3,220
	ctx.r11.s64 = ctx.r3.s64 + 220;
	// stfs f0,48(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 48, temp.u32);
	// subf r7,r25,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r25.s64;
	// stfs f0,12(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// subf r5,r25,r22
	ctx.r5.s64 = ctx.r22.s64 - ctx.r25.s64;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8217B9A0:
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x8217b9f0
	if (ctx.cr6.gt) goto loc_8217B9F0;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r11,-24
	ctx.r31.s64 = ctx.r11.s64 + -24;
	// stfsx f0,r7,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r31,-24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// lwz r31,-20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r31,-16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// lwz r31,-12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// lfs f12,124(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r5,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// b 0x8217bab4
	goto loc_8217BAB4;
loc_8217B9F0:
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fnmsubs f7,f8,f10,f12
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f10.f64 - ctx.f12.f64)));
	// stfsx f7,r7,r8
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// lfs f5,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fnmsubs f3,f4,f10,f6
	ctx.f3.f64 = double(float(-(ctx.f4.f64 * ctx.f10.f64 - ctx.f6.f64)));
	// stfs f3,0(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f5,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmuls f0,f7,f10
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fsubs f6,f9,f2
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f8,-116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// fmuls f12,f6,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fsubs f5,f5,f7
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// stfs f5,-120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// fsubs f9,f1,f4
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// stfs f9,-128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// fsubs f6,f2,f12
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// stfs f6,-124(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// lfs f3,124(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,128(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fnmsubs f1,f2,f10,f3
	ctx.f1.f64 = double(float(-(ctx.f2.f64 * ctx.f10.f64 - ctx.f3.f64)));
	// stfsx f1,r5,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
loc_8217BAB4:
	// lfsu f13,4(r6)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r6.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x8217b9a0
	if (!ctx.cr0.eq) goto loc_8217B9A0;
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r24,48
	ctx.r11.s64 = ctx.r24.s64 + 48;
	// stfs f0,12(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 12, temp.u32);
	// lfs f13,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// lwz r10,244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// stw r10,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r10.u32);
	// lwz r9,248(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// stw r9,52(r24)
	PPC_STORE_U32(ctx.r24.u32 + 52, ctx.r9.u32);
	// lwz r8,252(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// stw r8,56(r24)
	PPC_STORE_U32(ctx.r24.u32 + 56, ctx.r8.u32);
	// lwz r7,256(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// stw r7,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r7.u32);
	// lfs f12,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r22)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r22.u32 + 12, temp.u32);
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217BB10"))) PPC_WEAK_FUNC(sub_8217BB10);
PPC_FUNC_IMPL(__imp__sub_8217BB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8217BB18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27392
	ctx.r10.s64 = ctx.r11.s64 + -27392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8217bb58
	if (ctx.cr6.eq) goto loc_8217BB58;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217bb58
	if (ctx.cr6.eq) goto loc_8217BB58;
	// bl 0x82087078
	ctx.lr = 0x8217BB50;
	sub_82087078(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x8217bb5c
	goto loc_8217BB5C;
loc_8217BB58:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_8217BB5C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8217bbbc
	if (ctx.cr6.eq) goto loc_8217BBBC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217bbbc
	if (ctx.cr6.eq) goto loc_8217BBBC;
	// bl 0x82087078
	ctx.lr = 0x8217BBB4;
	sub_82087078(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x8217bbc0
	goto loc_8217BBC0;
loc_8217BBBC:
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_8217BBC0:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r6,72(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r5,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
	// lbz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 84);
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r11,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r6,87(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 87);
	// lbz r5,86(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 86);
	// lbz r4,85(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 85);
	// lbz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r6.s64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfe r10,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r5.s64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r4.s64;
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// and r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	// subfe r10,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 | ctx.r11.u64;
	// and r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 & ctx.r7.u64;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,0,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF0;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8217bca0
	if (ctx.cr6.eq) goto loc_8217BCA0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217bca0
	if (ctx.cr6.eq) goto loc_8217BCA0;
	// bl 0x82087078
	ctx.lr = 0x8217BC98;
	sub_82087078(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// b 0x8217bca4
	goto loc_8217BCA4;
loc_8217BCA0:
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
loc_8217BCA4:
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217BCC0"))) PPC_WEAK_FUNC(sub_8217BCC0);
PPC_FUNC_IMPL(__imp__sub_8217BCC0) {
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
	// bl 0x8217bd20
	ctx.lr = 0x8217BCE0;
	sub_8217BD20(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217bd00
	if (ctx.cr6.eq) goto loc_8217BD00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217bd00
	if (ctx.cr6.eq) goto loc_8217BD00;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217BD00;
	sub_82080000(ctx, base);
loc_8217BD00:
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

__attribute__((alias("__imp__sub_8217BD1C"))) PPC_WEAK_FUNC(sub_8217BD1C);
PPC_FUNC_IMPL(__imp__sub_8217BD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217BD20"))) PPC_WEAK_FUNC(sub_8217BD20);
PPC_FUNC_IMPL(__imp__sub_8217BD20) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-27392
	ctx.r10.s64 = ctx.r11.s64 + -27392;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8217bd50
	if (ctx.cr6.eq) goto loc_8217BD50;
	// bl 0x82172d60
	ctx.lr = 0x8217BD50;
	sub_82172D60(ctx, base);
loc_8217BD50:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217bd60
	if (ctx.cr6.eq) goto loc_8217BD60;
	// bl 0x82172d60
	ctx.lr = 0x8217BD60;
	sub_82172D60(ctx, base);
loc_8217BD60:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217bd70
	if (ctx.cr6.eq) goto loc_8217BD70;
	// bl 0x82172d60
	ctx.lr = 0x8217BD70;
	sub_82172D60(ctx, base);
loc_8217BD70:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217bd88
	if (ctx.cr6.eq) goto loc_8217BD88;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217BD88;
	sub_82080000(ctx, base);
loc_8217BD88:
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

__attribute__((alias("__imp__sub_8217BD9C"))) PPC_WEAK_FUNC(sub_8217BD9C);
PPC_FUNC_IMPL(__imp__sub_8217BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217BDA0"))) PPC_WEAK_FUNC(sub_8217BDA0);
PPC_FUNC_IMPL(__imp__sub_8217BDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8217BDA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217bdd0
	if (ctx.cr6.eq) goto loc_8217BDD0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217BDD0;
	sub_82080000(ctx, base);
loc_8217BDD0:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// beq cr6,0x8217bea8
	if (ctx.cr6.eq) goto loc_8217BEA8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8217bea8
	if (ctx.cr6.eq) goto loc_8217BEA8;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217be1c
	if (ctx.cr6.eq) goto loc_8217BE1C;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_8217BE08:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bdnz 0x8217be08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217BE08;
loc_8217BE1C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mulli r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 * 84;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8217BE3C;
	sub_82082030(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r10,84
	ctx.r5.s64 = ctx.r10.s64 * 84;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8217BE58;
	sub_8233EAF0(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217bea8
	if (ctx.cr6.eq) goto loc_8217BEA8;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r8,r27,-4
	ctx.r8.s64 = ctx.r27.s64 + -4;
loc_8217BE74:
	// lwzu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// mulli r6,r9,84
	ctx.r6.s64 = ctx.r9.s64 * 84;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bdnz 0x8217be74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217BE74;
loc_8217BEA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217BEB0"))) PPC_WEAK_FUNC(sub_8217BEB0);
PPC_FUNC_IMPL(__imp__sub_8217BEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8217BEB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lis r29,-32197
	ctx.r29.s64 = -2110062592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r10,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r10.u32);
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8217BEE0;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217beec
	if (!ctx.cr6.eq) goto loc_8217BEEC;
	// bl 0x821b3000
	ctx.lr = 0x8217BEEC;
	sub_821B3000(ctx, base);
loc_8217BEEC:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r27,-13569
	ctx.r27.s64 = -889257984;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r8,r8,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8217bf24
	if (!ctx.cr6.gt) goto loc_8217BF24;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r10,4492
	ctx.r9.s64 = ctx.r10.s64 + 4492;
	// stw r9,-13570(r27)
	PPC_STORE_U32(ctx.r27.u32 + -13570, ctx.r9.u32);
loc_8217BF24:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217bf70
	if (ctx.cr6.eq) goto loc_8217BF70;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
loc_8217BF50:
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8217bf50
	if (ctx.cr6.lt) goto loc_8217BF50;
loc_8217BF70:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217bda0
	ctx.lr = 0x8217BF7C;
	sub_8217BDA0(ctx, base);
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8217BF84;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217bf90
	if (!ctx.cr6.eq) goto loc_8217BF90;
	// bl 0x821b3000
	ctx.lr = 0x8217BF90;
	sub_821B3000(ctx, base);
loc_8217BF90:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217bfec
	if (ctx.cr6.eq) goto loc_8217BFEC;
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,4520
	ctx.r7.s64 = ctx.r10.s64 + 4520;
	// addi r6,r9,15
	ctx.r6.s64 = ctx.r9.s64 + 15;
	// rlwinm r10,r6,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8217bfc4
	if (!ctx.cr6.gt) goto loc_8217BFC4;
	// stw r7,-13570(r27)
	PPC_STORE_U32(ctx.r27.u32 + -13570, ctx.r7.u32);
loc_8217BFC4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8217bfe0
	if (ctx.cr6.eq) goto loc_8217BFE0;
	// stw r7,-13570(r27)
	PPC_STORE_U32(ctx.r27.u32 + -13570, ctx.r7.u32);
loc_8217BFE0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_8217BFEC:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mulli r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 * 84;
	// lwz r3,92(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// bl 0x8233e4e0
	ctx.lr = 0x8217C000;
	sub_8233E4E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217C008"))) PPC_WEAK_FUNC(sub_8217C008);
PPC_FUNC_IMPL(__imp__sub_8217C008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8217C010;
	__savegprlr_29(ctx, base);
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
	// bne cr6,0x8217c030
	if (!ctx.cr6.eq) goto loc_8217C030;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8217C030:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c040
	if (ctx.cr6.eq) goto loc_8217C040;
	// bl 0x82172d60
	ctx.lr = 0x8217C040;
	sub_82172D60(ctx, base);
loc_8217C040:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217c064
	if (ctx.cr6.eq) goto loc_8217C064;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8217c064
	if (ctx.cr6.eq) goto loc_8217C064;
	// bl 0x82087078
	ctx.lr = 0x8217C05C;
	sub_82087078(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x8217c068
	goto loc_8217C068;
loc_8217C064:
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_8217C068:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c078
	if (ctx.cr6.eq) goto loc_8217C078;
	// bl 0x82172d60
	ctx.lr = 0x8217C078;
	sub_82172D60(ctx, base);
loc_8217C078:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217c098
	if (ctx.cr6.eq) goto loc_8217C098;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8217c098
	if (ctx.cr6.eq) goto loc_8217C098;
	// bl 0x82087078
	ctx.lr = 0x8217C090;
	sub_82087078(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x8217c09c
	goto loc_8217C09C;
loc_8217C098:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_8217C09C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c0ac
	if (ctx.cr6.eq) goto loc_8217C0AC;
	// bl 0x82172d60
	ctx.lr = 0x8217C0AC;
	sub_82172D60(ctx, base);
loc_8217C0AC:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217c0cc
	if (ctx.cr6.eq) goto loc_8217C0CC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8217c0cc
	if (ctx.cr6.eq) goto loc_8217C0CC;
	// bl 0x82087078
	ctx.lr = 0x8217C0C4;
	sub_82087078(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// b 0x8217c0d0
	goto loc_8217C0D0;
loc_8217C0CC:
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
loc_8217C0D0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// lwz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lwz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r4,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r4.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lbz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 84);
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subfe r5,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r5.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lbz r6,85(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 85);
	// lbz r4,87(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 87);
	// lbz r11,86(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 86);
	// lbz r30,88(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// subfic r30,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r30.s64 = 0 - ctx.r30.s64;
	// subfe r30,r30,r30
	temp.u8 = (~ctx.r30.u32 + ctx.r30.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r30.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r4,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r4.s64;
	// and r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 & ctx.r10.u64;
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// and r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 & ctx.r9.u64;
	// subfe r4,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r11,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r6.s64;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// subfe r9,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// and r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 & ctx.r7.u64;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r4,r6,0,24,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217C1DC"))) PPC_WEAK_FUNC(sub_8217C1DC);
PPC_FUNC_IMPL(__imp__sub_8217C1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217C1E0"))) PPC_WEAK_FUNC(sub_8217C1E0);
PPC_FUNC_IMPL(__imp__sub_8217C1E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8217c1f4
	if (!ctx.cr6.eq) goto loc_8217C1F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8217C1F4:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217c210
	if (ctx.cr6.eq) goto loc_8217C210;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r10.u32);
	// b 0x8217c214
	goto loc_8217C214;
loc_8217C210:
	// stw r9,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r9.u32);
loc_8217C214:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217c22c
	if (ctx.cr6.eq) goto loc_8217C22C;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// b 0x8217c230
	goto loc_8217C230;
loc_8217C22C:
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
loc_8217C230:
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217c248
	if (ctx.cr6.eq) goto loc_8217C248;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r10.u32);
	// b 0x8217c24c
	goto loc_8217C24C;
loc_8217C248:
	// stw r9,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r9.u32);
loc_8217C24C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r8,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r8.u32);
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r7,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r7.u32);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r5,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r5.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r9,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r9.u32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r8.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r7,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r7.u32);
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r6,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r6.u32);
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r5,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r5.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r9,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r9.u32);
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r8,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r8.u32);
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r7,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r7.u32);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// stb r5,84(r4)
	PPC_STORE_U8(ctx.r4.u32 + 84, ctx.r5.u8);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r10,r11,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// rlwinm r9,r10,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r7,r10,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// stb r9,85(r4)
	PPC_STORE_U8(ctx.r4.u32 + 85, ctx.r9.u8);
	// rlwinm r6,r10,25,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// stb r8,86(r4)
	PPC_STORE_U8(ctx.r4.u32 + 86, ctx.r8.u8);
	// stb r7,87(r4)
	PPC_STORE_U8(ctx.r4.u32 + 87, ctx.r7.u8);
	// stb r6,88(r4)
	PPC_STORE_U8(ctx.r4.u32 + 88, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217C308"))) PPC_WEAK_FUNC(sub_8217C308);
PPC_FUNC_IMPL(__imp__sub_8217C308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8217C310;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// bge cr6,0x8217c348
	if (!ctx.cr6.lt) goto loc_8217C348;
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
loc_8217C348:
	// lfs f11,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8217c368
	if (!ctx.cr6.gt) goto loc_8217C368;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
loc_8217C368:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8217c384
	if (!ctx.cr6.lt) goto loc_8217C384;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_8217C384:
	// lfs f7,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8217c3a4
	if (!ctx.cr6.gt) goto loc_8217C3A4;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
loc_8217C3A4:
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fdivs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f12,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fdivs f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f1.f64));
	// fdivs f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 / ctx.f8.f64));
	// fdivs f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 / ctx.f10.f64));
	// fmuls f3,f5,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f3,0(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfs f2,4(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// bl 0x8214de08
	ctx.lr = 0x8217C3FC;
	sub_8214DE08(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8213fcc8
	ctx.lr = 0x8217C450;
	sub_8213FCC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217C458"))) PPC_WEAK_FUNC(sub_8217C458);
PPC_FUNC_IMPL(__imp__sub_8217C458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8217C460;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8217c488
	if (!ctx.cr6.eq) goto loc_8217C488;
loc_8217C478:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8217C488:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8217c4b4
	if (!ctx.cr6.eq) goto loc_8217C4B4;
	// bl 0x820ddca8
	ctx.lr = 0x8217C49C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c4ac
	if (ctx.cr6.eq) goto loc_8217C4AC;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8217c4d0
	goto loc_8217C4D0;
loc_8217C4AC:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8217c4d0
	goto loc_8217C4D0;
loc_8217C4B4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8217c4e0
	if (!ctx.cr6.eq) goto loc_8217C4E0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217c478
	if (ctx.cr6.eq) goto loc_8217C478;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_8217C4D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217c4f8
	if (ctx.cr6.eq) goto loc_8217C4F8;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x8217c4f8
	goto loc_8217C4F8;
loc_8217C4E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x8217C4F4;
	sub_820F3178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8217C4F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217c478
	if (ctx.cr6.eq) goto loc_8217C478;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8217c518
	if (!ctx.cr6.eq) goto loc_8217C518;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x8217C514;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_8217C518:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// beq cr6,0x8217c54c
	if (ctx.cr6.eq) goto loc_8217C54C;
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// bne cr6,0x8217c558
	if (!ctx.cr6.eq) goto loc_8217C558;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r11,64
	ctx.r4.u64 = ctx.r11.u64 | 64;
	// bl 0x820ec400
	ctx.lr = 0x8217C544;
	sub_820EC400(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8217C54C:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e4870
	ctx.lr = 0x8217C558;
	sub_820E4870(ctx, base);
loc_8217C558:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217C560"))) PPC_WEAK_FUNC(sub_8217C560);
PPC_FUNC_IMPL(__imp__sub_8217C560) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8217c59c
	if (!ctx.cr6.eq) goto loc_8217C59C;
	// bl 0x820ddca8
	ctx.lr = 0x8217C58C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c5ac
	if (ctx.cr6.eq) goto loc_8217C5AC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8217c5d8
	goto loc_8217C5D8;
loc_8217C59C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8217c5b4
	if (!ctx.cr6.eq) goto loc_8217C5B4;
loc_8217C5AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217c5d8
	goto loc_8217C5D8;
loc_8217C5B4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8217c5c4
	if (!ctx.cr6.eq) goto loc_8217C5C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217c5d8
	goto loc_8217C5D8;
loc_8217C5C4:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3178
	ctx.lr = 0x8217C5D8;
	sub_820F3178(ctx, base);
loc_8217C5D8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x8217c624
	if (ctx.cr6.eq) goto loc_8217C624;
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// beq cr6,0x8217c61c
	if (ctx.cr6.eq) goto loc_8217C61C;
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// bne cr6,0x8217c624
	if (!ctx.cr6.eq) goto loc_8217C624;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r4,r11,0,26,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x820ec400
	ctx.lr = 0x8217C608;
	sub_820EC400(ctx, base);
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
loc_8217C61C:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// bl 0x820e48e0
	ctx.lr = 0x8217C624;
	sub_820E48E0(ctx, base);
loc_8217C624:
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

__attribute__((alias("__imp__sub_8217C638"))) PPC_WEAK_FUNC(sub_8217C638);
PPC_FUNC_IMPL(__imp__sub_8217C638) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// bne cr6,0x8217c66c
	if (!ctx.cr6.eq) goto loc_8217C66C;
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
loc_8217C66C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// beq cr6,0x8217c6c0
	if (ctx.cr6.eq) goto loc_8217C6C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8217c458
	ctx.lr = 0x8217C6C0;
	sub_8217C458(ctx, base);
loc_8217C6C0:
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
}

__attribute__((alias("__imp__sub_8217C6D4"))) PPC_WEAK_FUNC(sub_8217C6D4);
PPC_FUNC_IMPL(__imp__sub_8217C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217C6D8"))) PPC_WEAK_FUNC(sub_8217C6D8);
PPC_FUNC_IMPL(__imp__sub_8217C6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8217c6ec
	if (!ctx.cr6.eq) goto loc_8217C6EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8217C6EC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r8.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r7,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r7.u32);
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r6,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r6.u32);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r5,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r5.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217C734"))) PPC_WEAK_FUNC(sub_8217C734);
PPC_FUNC_IMPL(__imp__sub_8217C734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217C738"))) PPC_WEAK_FUNC(sub_8217C738);
PPC_FUNC_IMPL(__imp__sub_8217C738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8217C740;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// std r6,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r6.u64);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217c958
	ctx.lr = 0x8217C768;
	sub_8217C958(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,-26328
	ctx.r11.s64 = ctx.r11.s64 + -26328;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r11,8228
	ctx.r8.s64 = ctx.r11.s64 + 8228;
	// addi r7,r11,8224
	ctx.r7.s64 = ctx.r11.s64 + 8224;
	// addi r31,r10,31376
	ctx.r31.s64 = ctx.r10.s64 + 31376;
	// lis r6,-32179
	ctx.r6.s64 = -2108882944;
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r4,r6,20000
	ctx.r4.s64 = ctx.r6.s64 + 20000;
	// lwzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lfsx f12,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fdivs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 / ctx.f3.f64));
	// fdivs f13,f12,f2
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f2.f64));
	// fmuls f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// bne cr6,0x8217c88c
	if (!ctx.cr6.eq) goto loc_8217C88C;
	// fdivs f10,f31,f2
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f2.f64));
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fdivs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// b 0x8217c89c
	goto loc_8217C89C;
loc_8217C88C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f4,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x820b7070
	ctx.lr = 0x8217C89C;
	sub_820B7070(ctx, base);
loc_8217C89C:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82257540
	ctx.lr = 0x8217C8AC;
	sub_82257540(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82257540
	ctx.lr = 0x8217C8BC;
	sub_82257540(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// fnmsubs f13,f11,f0,f0
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f8,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,4(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// beq cr6,0x8217c920
	if (ctx.cr6.eq) goto loc_8217C920;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fadds f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmr f11,f7
	ctx.f11.f64 = ctx.f7.f64;
loc_8217C920:
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217c94c
	if (!ctx.cr6.eq) goto loc_8217C94C;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f10,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
loc_8217C94C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217C958"))) PPC_WEAK_FUNC(sub_8217C958);
PPC_FUNC_IMPL(__imp__sub_8217C958) {
	PPC_FUNC_PROLOGUE();
	// li r9,-3
	ctx.r9.s64 = -3;
	// li r8,-2
	ctx.r8.s64 = -2;
loc_8217C960:
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8217c978
	if (ctx.cr6.lt) goto loc_8217C978;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8217c97c
	if (!ctx.cr6.gt) goto loc_8217C97C;
loc_8217C978:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8217C97C:
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217c998
	if (!ctx.cr6.eq) goto loc_8217C998;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8217c9ac
	if (ctx.cr6.eq) goto loc_8217C9AC;
loc_8217C998:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217c960
	if (ctx.cr6.eq) goto loc_8217C960;
	// subfic r3,r10,-2
	ctx.xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r3.s64 = -2 - ctx.r10.s64;
	// blr 
	return;
loc_8217C9AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217C9B4"))) PPC_WEAK_FUNC(sub_8217C9B4);
PPC_FUNC_IMPL(__imp__sub_8217C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217C9B8"))) PPC_WEAK_FUNC(sub_8217C9B8);
PPC_FUNC_IMPL(__imp__sub_8217C9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x8217C9C0;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8217C9F8;
	sub_82305000(ctx, base);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r30,8220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8220, ctx.r30.u32);
	// stw r10,8216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8216, ctx.r10.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217CA10:
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stwu r25,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8217ca10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217CA10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,2180
	ctx.r3.s64 = 2180;
	// bl 0x82082030
	ctx.lr = 0x8217CA30;
	sub_82082030(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r29,109
	ctx.r29.s64 = 109;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217ca58
	if (ctx.cr6.eq) goto loc_8217CA58;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
loc_8217CA4C:
	// stwu r30,20(r11)
	ea = 20 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8217ca4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217CA4C;
	// b 0x8217ca5c
	goto loc_8217CA5C;
loc_8217CA58:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8217CA5C:
	// stw r10,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_8217CA6C:
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// bdnz 0x8217ca6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217CA6C;
	// stw r29,8244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8244, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,8248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8248, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,2180
	ctx.r3.s64 = 2180;
	// bl 0x82082030
	ctx.lr = 0x8217CAA0;
	sub_82082030(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217cac4
	if (ctx.cr6.eq) goto loc_8217CAC4;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
loc_8217CAB8:
	// stwu r30,20(r11)
	ea = 20 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8217cab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217CAB8;
	// b 0x8217cac8
	goto loc_8217CAC8;
loc_8217CAC4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8217CAC8:
	// stw r10,8252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8252, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_8217CAD8:
	// lwz r11,8252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8252);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// bdnz 0x8217cad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217CAD8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,8256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8256, ctx.r29.u32);
	// stw r30,8260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8260, ctx.r30.u32);
	// addi r3,r31,8264
	ctx.r3.s64 = ctx.r31.s64 + 8264;
	// stw r30,8264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8264, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,8268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8268, ctx.r30.u32);
	// stw r11,8272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8272, ctx.r11.u32);
	// stw r11,8276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8276, ctx.r11.u32);
	// stb r25,8280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8280, ctx.r25.u8);
	// stb r25,8281(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8281, ctx.r25.u8);
	// stw r30,8284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8284, ctx.r30.u32);
	// bl 0x821dbdd8
	ctx.lr = 0x8217CB24;
	sub_821DBDD8(ctx, base);
	// stw r30,8288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8288, ctx.r30.u32);
	// stw r30,8292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8292, ctx.r30.u32);
	// addi r3,r31,8288
	ctx.r3.s64 = ctx.r31.s64 + 8288;
	// stw r30,8296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8296, ctx.r30.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,8300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8300, ctx.r30.u32);
	// stw r30,8304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8304, ctx.r30.u32);
	// bl 0x82305000
	ctx.lr = 0x8217CB44;
	sub_82305000(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// lfs f30,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// stfs f30,8308(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8308, temp.u32);
	// stfs f30,8312(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8312, temp.u32);
	// stfs f31,8316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8316, temp.u32);
	// stfs f31,8320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8320, temp.u32);
	// bl 0x820c6548
	ctx.lr = 0x8217CB6C;
	sub_820C6548(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ori r9,r9,1025
	ctx.r9.u64 = ctx.r9.u64 | 1025;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// lwz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// lwz r22,4(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r23,-2
	ctx.r23.s64 = -2;
	// lwz r21,8(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// li r3,328
	ctx.r3.s64 = 328;
	// lwz r20,0(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r24,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r24.u32);
	// stw r22,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r22.u32);
	// stw r21,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r21.u32);
	// stw r28,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r28.u32);
	// stw r26,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r26.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r20,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r20.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
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
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f30,220(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x82082030
	ctx.lr = 0x8217CC48;
	sub_82082030(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,-27384
	ctx.r26.s64 = ctx.r11.s64 + -27384;
	// beq cr6,0x8217cc70
	if (ctx.cr6.eq) goto loc_8217CC70;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82181e30
	ctx.lr = 0x8217CC64;
	sub_82181E30(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// b 0x8217cc74
	goto loc_8217CC74;
loc_8217CC70:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8217CC74:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,8224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8224, ctx.r30.u32);
	// stw r30,8228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8228, ctx.r30.u32);
	// bl 0x820c6548
	ctx.lr = 0x8217CC88;
	sub_820C6548(ctx, base);
	// lis r11,-15404
	ctx.r11.s64 = -1009516544;
	// lfs f0,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-15404
	ctx.r10.s64 = -1009516544;
	// lfs f13,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// ori r9,r11,6
	ctx.r9.u64 = ctx.r11.u64 | 6;
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r8,92
	ctx.r8.s64 = 92;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ori r7,r10,5
	ctx.r7.u64 = ctx.r10.u64 | 5;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r11,76
	ctx.r11.s64 = 76;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r3,328
	ctx.r3.s64 = 328;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stb r30,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r30.u8);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r30,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r30.u8);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r30,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r30.u8);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stb r30,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r30.u8);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stb r30,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r30.u8);
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stfs f31,256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stfs f31,260(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stw r27,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r27.u32);
	// stfs f13,264(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stw r27,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r27.u32);
	// stfs f13,268(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stw r25,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r25.u32);
	// stfs f31,272(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stw r25,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r25.u32);
	// stfs f30,300(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stw r25,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r25.u32);
	// stfs f30,304(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stw r7,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r7.u32);
	// stfs f30,308(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// stfs f30,312(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f0,332(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f31,348(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f31,352(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f31,356(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f31,360(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// bl 0x82082030
	ctx.lr = 0x8217CD88;
	sub_82082030(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217cda8
	if (ctx.cr6.eq) goto loc_8217CDA8;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x82181e30
	ctx.lr = 0x8217CD9C;
	sub_82181E30(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// b 0x8217cdac
	goto loc_8217CDAC;
loc_8217CDA8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8217CDAC:
	// stw r11,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82082030
	ctx.lr = 0x8217CDC4;
	sub_82082030(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217cdf0
	if (ctx.cr6.eq) goto loc_8217CDF0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,8236(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x8217bb10
	ctx.lr = 0x8217CDDC;
	sub_8217BB10(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// addi r10,r11,-27404
	ctx.r10.s64 = ctx.r11.s64 + -27404;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x8217cdf4
	goto loc_8217CDF4;
loc_8217CDF0:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_8217CDF4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82082030
	ctx.lr = 0x8217CE08;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217ce6c
	if (ctx.cr6.eq) goto loc_8217CE6C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,8236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r6,r10,-31304
	ctx.r6.s64 = ctx.r10.s64 + -31304;
	// lwz r7,256(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r5,260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stfs f30,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r29,272(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// b 0x8217ce70
	goto loc_8217CE70;
loc_8217CE6C:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8217CE70:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82082030
	ctx.lr = 0x8217CE84;
	sub_82082030(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217ceac
	if (ctx.cr6.eq) goto loc_8217CEAC;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r5,8236(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// bl 0x8217e360
	ctx.lr = 0x8217CE9C;
	sub_8217E360(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r10,r11,-27388
	ctx.r10.s64 = ctx.r11.s64 + -27388;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_8217CEAC:
	// lwz r11,8236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r26.u32);
	// lwz r10,8236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// stw r28,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r28.u32);
	// lwz r9,8236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// stw r30,68(r9)
	PPC_STORE_U32(ctx.r9.u32 + 68, ctx.r30.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217CED8"))) PPC_WEAK_FUNC(sub_8217CED8);
PPC_FUNC_IMPL(__imp__sub_8217CED8) {
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
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-26328
	ctx.r31.s64 = ctx.r11.s64 + -26328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-26328(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26328);
	// bl 0x8217d388
	ctx.lr = 0x8217CF00;
	sub_8217D388(ctx, base);
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217cf20
	if (ctx.cr6.eq) goto loc_8217CF20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217CF20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217CF20:
	// lwz r11,8296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217cf34
	if (ctx.cr6.eq) goto loc_8217CF34;
	// lwz r3,8296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8296);
	// bl 0x82246e18
	ctx.lr = 0x8217CF34;
	sub_82246E18(ctx, base);
loc_8217CF34:
	// lbz r11,8281(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8281);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217cf60
	if (ctx.cr6.eq) goto loc_8217CF60;
	// lwz r11,8284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217cf58
	if (ctx.cr6.eq) goto loc_8217CF58;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217CF58;
	sub_82080000(ctx, base);
loc_8217CF58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8284, ctx.r11.u32);
loc_8217CF60:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8264, ctx.r11.u32);
	// addi r3,r31,8252
	ctx.r3.s64 = ctx.r31.s64 + 8252;
	// stw r10,8268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8268, ctx.r10.u32);
	// bl 0x8217dec0
	ctx.lr = 0x8217CF78;
	sub_8217DEC0(ctx, base);
	// lwz r11,8252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217cf90
	if (ctx.cr6.eq) goto loc_8217CF90;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217CF90;
	sub_82080000(ctx, base);
loc_8217CF90:
	// addi r3,r31,8240
	ctx.r3.s64 = ctx.r31.s64 + 8240;
	// bl 0x8217ddc0
	ctx.lr = 0x8217CF98;
	sub_8217DDC0(ctx, base);
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217cfb0
	if (ctx.cr6.eq) goto loc_8217CFB0;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217CFB0;
	sub_82080000(ctx, base);
loc_8217CFB0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217cfc4
	if (ctx.cr6.eq) goto loc_8217CFC4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82246e18
	ctx.lr = 0x8217CFC4;
	sub_82246E18(ctx, base);
loc_8217CFC4:
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

__attribute__((alias("__imp__sub_8217CFD8"))) PPC_WEAK_FUNC(sub_8217CFD8);
PPC_FUNC_IMPL(__imp__sub_8217CFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8217CFE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x820c7008
	ctx.lr = 0x8217CFF8;
	sub_820C7008(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217d00c
	if (!ctx.cr6.eq) goto loc_8217D00C;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8217D00C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r31,128
	ctx.r31.s64 = 128;
	// bl 0x8217c958
	ctx.lr = 0x8217D018;
	sub_8217C958(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,20000
	ctx.r9.s64 = ctx.r11.s64 + 20000;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r30,r10,31376
	ctx.r30.s64 = ctx.r10.s64 + 31376;
	// addi r7,r11,-16
	ctx.r7.s64 = ctx.r11.s64 + -16;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lfs f0,204(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8217d050
	if (!ctx.cr6.lt) goto loc_8217D050;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8217D050:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217d060
	if (ctx.cr6.eq) goto loc_8217D060;
	// li r31,160
	ctx.r31.s64 = 160;
loc_8217D060:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820c6548
	ctx.lr = 0x8217D068;
	sub_820C6548(ctx, base);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bgt cr6,0x8217d338
	if (ctx.cr6.gt) goto loc_8217D338;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8217d0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8217D0D0;
	// bdzf 4*cr6+eq,0x8217d1c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8217D1C4;
	// bne cr6,0x8217d258
	if (!ctx.cr6.eq) goto loc_8217D258;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,328
	ctx.r3.s64 = 328;
	// bl 0x82082030
	ctx.lr = 0x8217D0A4;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217d0c8
	if (ctx.cr6.eq) goto loc_8217D0C8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82181e30
	ctx.lr = 0x8217D0B8;
	sub_82181E30(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-27384
	ctx.r10.s64 = ctx.r11.s64 + -27384;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8217d338
	goto loc_8217D338;
loc_8217D0C8:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8217d338
	goto loc_8217D338;
loc_8217D0D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,328
	ctx.r3.s64 = 328;
	// bl 0x82082030
	ctx.lr = 0x8217D0E4;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217d108
	if (ctx.cr6.eq) goto loc_8217D108;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82181e30
	ctx.lr = 0x8217D0F8;
	sub_82181E30(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-27384
	ctx.r10.s64 = ctx.r11.s64 + -27384;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8217d10c
	goto loc_8217D10C;
loc_8217D108:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8217D10C:
	// lis r10,-15404
	ctx.r10.s64 = -1009516544;
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lfs f13,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// ori r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 | 5;
	// lfs f12,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// li r8,76
	ctx.r8.s64 = 76;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r3,184
	ctx.r3.s64 = 184;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82082030
	ctx.lr = 0x8217D188;
	sub_82082030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217d1b8
	if (ctx.cr6.eq) goto loc_8217D1B8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8217e360
	ctx.lr = 0x8217D1A0;
	sub_8217E360(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,-27388
	ctx.r9.s64 = ctx.r10.s64 + -27388;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// b 0x8217d338
	goto loc_8217D338;
loc_8217D1B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x8217d338
	goto loc_8217D338;
loc_8217D1C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,328
	ctx.r3.s64 = 328;
	// bl 0x82082030
	ctx.lr = 0x8217D1D8;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217d1fc
	if (ctx.cr6.eq) goto loc_8217D1FC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82181e30
	ctx.lr = 0x8217D1EC;
	sub_82181E30(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-27384
	ctx.r10.s64 = ctx.r11.s64 + -27384;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8217d200
	goto loc_8217D200;
loc_8217D1FC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8217D200:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820c64b8
	ctx.lr = 0x8217D208;
	sub_820C64B8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82082030
	ctx.lr = 0x8217D21C;
	sub_82082030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217d24c
	if (ctx.cr6.eq) goto loc_8217D24C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8217bb10
	ctx.lr = 0x8217D234;
	sub_8217BB10(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,-27404
	ctx.r9.s64 = ctx.r10.s64 + -27404;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// b 0x8217d338
	goto loc_8217D338;
loc_8217D24C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x8217d338
	goto loc_8217D338;
loc_8217D258:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,328
	ctx.r3.s64 = 328;
	// bl 0x82082030
	ctx.lr = 0x8217D26C;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217d290
	if (ctx.cr6.eq) goto loc_8217D290;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82181e30
	ctx.lr = 0x8217D280;
	sub_82181E30(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-27384
	ctx.r10.s64 = ctx.r11.s64 + -27384;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8217d294
	goto loc_8217D294;
loc_8217D290:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8217D294:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f13,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82082030
	ctx.lr = 0x8217D2C8;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217d330
	if (ctx.cr6.eq) goto loc_8217D330;
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r5,r9,-31304
	ctx.r5.s64 = ctx.r9.s64 + -31304;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r29,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// b 0x8217d334
	goto loc_8217D334;
loc_8217D330:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8217D334:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_8217D338:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-26328
	ctx.r11.s64 = ctx.r11.s64 + -26328;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8217dcb0
	ctx.lr = 0x8217D34C;
	sub_8217DCB0(ctx, base);
	// oris r10,r3,32768
	ctx.r10.u64 = ctx.r3.u64 | 2147483648;
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ori r4,r9,1024
	ctx.r4.u64 = ctx.r9.u64 | 1024;
	// bl 0x821835e0
	ctx.lr = 0x8217D368;
	sub_821835E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82182a88
	ctx.lr = 0x8217D378;
	sub_82182A88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217D384"))) PPC_WEAK_FUNC(sub_8217D384);
PPC_FUNC_IMPL(__imp__sub_8217D384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217D388"))) PPC_WEAK_FUNC(sub_8217D388);
PPC_FUNC_IMPL(__imp__sub_8217D388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8217D390;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8217d3b4
	if (!ctx.cr6.eq) goto loc_8217D3B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8217D3B4:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217d3d0
	if (!ctx.cr6.eq) goto loc_8217D3D0;
	// lhz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 60);
	// clrlwi r27,r11,20
	ctx.r27.u64 = ctx.r11.u32 & 0xFFF;
	// b 0x8217d3d4
	goto loc_8217D3D4;
loc_8217D3D0:
	// lwz r27,64(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
loc_8217D3D4:
	// lwz r31,84(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217d448
	if (ctx.cr6.eq) goto loc_8217D448;
loc_8217D3E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821829f0
	ctx.lr = 0x8217D3F0;
	sub_821829F0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217d40c
	if (!ctx.cr6.eq) goto loc_8217D40C;
	// lhz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// b 0x8217d410
	goto loc_8217D410;
loc_8217D40C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_8217D410:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8217d43c
	if (!ctx.cr6.eq) goto loc_8217D43C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217d42c
	if (ctx.cr6.eq) goto loc_8217D42C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217d43c
	if (ctx.cr6.eq) goto loc_8217D43C;
loc_8217D42C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8217d388
	ctx.lr = 0x8217D43C;
	sub_8217D388(ctx, base);
loc_8217D43C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8217d3e0
	if (!ctx.cr6.eq) goto loc_8217D3E0;
loc_8217D448:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217d45c
	if (ctx.cr6.eq) goto loc_8217D45C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821829f0
	ctx.lr = 0x8217D45C;
	sub_821829F0(ctx, base);
loc_8217D45C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217d4e0
	if (ctx.cr6.eq) goto loc_8217D4E0;
	// addi r31,r26,4
	ctx.r31.s64 = ctx.r26.s64 + 4;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r11,1
	ctx.r29.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x823052d8
	ctx.lr = 0x8217D484;
	sub_823052D8(ctx, base);
	// rlwinm r11,r29,19,13,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 19) & 0x7FFF8;
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r29,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8217d4d8
	if (!ctx.cr6.eq) goto loc_8217D4D8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8217d4bc
	if (!ctx.cr6.eq) goto loc_8217D4BC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_8217D4BC:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,8212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8212);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8212, ctx.r8.u32);
loc_8217D4D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823051a8
	ctx.lr = 0x8217D4E0;
	sub_823051A8(ctx, base);
loc_8217D4E0:
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
	ctx.lr = 0x8217D4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217D504"))) PPC_WEAK_FUNC(sub_8217D504);
PPC_FUNC_IMPL(__imp__sub_8217D504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217D508"))) PPC_WEAK_FUNC(sub_8217D508);
PPC_FUNC_IMPL(__imp__sub_8217D508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8217D510;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217d544
	if (!ctx.cr6.eq) goto loc_8217D544;
	// lhz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 60);
	// clrlwi r6,r11,20
	ctx.r6.u64 = ctx.r11.u32 & 0xFFF;
	// b 0x8217d548
	goto loc_8217D548;
loc_8217D544:
	// lwz r6,64(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
loc_8217D548:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,56(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x8217cfd8
	ctx.lr = 0x8217D554;
	sub_8217CFD8(ctx, base);
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8217d568
	if (!ctx.cr6.eq) goto loc_8217D568;
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
loc_8217D568:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r11.u32);
	// bl 0x820c6548
	ctx.lr = 0x8217D574;
	sub_820C6548(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82182e98
	ctx.lr = 0x8217D580;
	sub_82182E98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82182c50
	ctx.lr = 0x8217D58C;
	sub_82182C50(ctx, base);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r11.u32);
	// beq cr6,0x8217d5d8
	if (ctx.cr6.eq) goto loc_8217D5D8;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8217D5A0:
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
	// bne 0x8217d5a0
	if (!ctx.cr0.eq) goto loc_8217D5A0;
loc_8217D5BC:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217d5bc
	if (!ctx.cr0.eq) goto loc_8217D5BC;
loc_8217D5D8:
	// lwz r31,72(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8217d648
	if (ctx.cr6.eq) goto loc_8217D648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c64b8
	ctx.lr = 0x8217D5EC;
	sub_820C64B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217c1e0
	ctx.lr = 0x8217D5F8;
	sub_8217C1E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82082030
	ctx.lr = 0x8217D60C;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217d634
	if (ctx.cr6.eq) goto loc_8217D634;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8217bb10
	ctx.lr = 0x8217D624;
	sub_8217BB10(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-27404
	ctx.r10.s64 = ctx.r11.s64 + -27404;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8217d638
	goto loc_8217D638;
loc_8217D634:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8217D638:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x8217beb0
	ctx.lr = 0x8217D644;
	sub_8217BEB0(ctx, base);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
loc_8217D648:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r31,r11,31376
	ctx.r31.s64 = ctx.r11.s64 + 31376;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f30,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8217d72c
	if (ctx.cr6.eq) goto loc_8217D72C;
	// lis r11,-15404
	ctx.r11.s64 = -1009516544;
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// li r10,40
	ctx.r10.s64 = 40;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ori r9,r11,7
	ctx.r9.u64 = ctx.r11.u64 | 7;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8217c6d8
	ctx.lr = 0x8217D6A8;
	sub_8217C6D8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82082030
	ctx.lr = 0x8217D6BC;
	sub_82082030(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217d724
	if (ctx.cr6.eq) goto loc_8217D724;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r5,r9,-31304
	ctx.r5.s64 = ctx.r9.s64 + -31304;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r26,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r26.u32);
	// stw r25,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r25.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// b 0x8217d728
	goto loc_8217D728;
loc_8217D724:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8217D728:
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
loc_8217D72C:
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217d7f4
	if (ctx.cr6.eq) goto loc_8217D7F4;
	// lis r10,-15404
	ctx.r10.s64 = -1009516544;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ori r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 | 5;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r8,76
	ctx.r8.s64 = 76;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x8217e890
	ctx.lr = 0x8217D7A0;
	sub_8217E890(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82082030
	ctx.lr = 0x8217D7B4;
	sub_82082030(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217d7dc
	if (ctx.cr6.eq) goto loc_8217D7DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8217e360
	ctx.lr = 0x8217D7CC;
	sub_8217E360(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,-27388
	ctx.r10.s64 = ctx.r11.s64 + -27388;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8217d7e0
	goto loc_8217D7E0;
loc_8217D7DC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8217D7E0:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8217e6c0
	ctx.lr = 0x8217D7F0;
	sub_8217E6C0(ctx, base);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
loc_8217D7F4:
	// lwz r4,84(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217d82c
	if (ctx.cr6.eq) goto loc_8217D82C;
loc_8217D800:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r31,88(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// bl 0x8217d508
	ctx.lr = 0x8217D810;
	sub_8217D508(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82182a88
	ctx.lr = 0x8217D820;
	sub_82182A88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8217d800
	if (!ctx.cr6.eq) goto loc_8217D800;
loc_8217D82C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217D840"))) PPC_WEAK_FUNC(sub_8217D840);
PPC_FUNC_IMPL(__imp__sub_8217D840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8217D848;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,84(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217d8b4
	if (ctx.cr6.eq) goto loc_8217D8B4;
loc_8217D860:
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r29,88(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217d880
	if (!ctx.cr6.eq) goto loc_8217D880;
	// lhz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 60);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// b 0x8217d884
	goto loc_8217D884;
loc_8217D880:
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
loc_8217D884:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8217d89c
	if (!ctx.cr6.eq) goto loc_8217D89C;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8217d388
	ctx.lr = 0x8217D898;
	sub_8217D388(ctx, base);
	// b 0x8217d8a8
	goto loc_8217D8A8;
loc_8217D89C:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8217d840
	ctx.lr = 0x8217D8A8;
	sub_8217D840(ctx, base);
loc_8217D8A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8217d860
	if (!ctx.cr6.eq) goto loc_8217D860;
loc_8217D8B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217D8BC"))) PPC_WEAK_FUNC(sub_8217D8BC);
PPC_FUNC_IMPL(__imp__sub_8217D8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217D8C0"))) PPC_WEAK_FUNC(sub_8217D8C0);
PPC_FUNC_IMPL(__imp__sub_8217D8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8217D8C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r11,-26328
	ctx.r29.s64 = ctx.r11.s64 + -26328;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,8244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217d984
	if (ctx.cr6.eq) goto loc_8217D984;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8217D8F0:
	// lwz r11,8240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8240);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f63e0
	ctx.lr = 0x8217D900;
	sub_820F63E0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8217d96c
	if (ctx.cr6.eq) goto loc_8217D96C;
loc_8217D90C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi r10,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 20;
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8217d960
	if (!ctx.cr6.eq) goto loc_8217D960;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bl 0x8217dfc0
	ctx.lr = 0x8217D940;
	sub_8217DFC0(ctx, base);
	// addi r5,r29,8248
	ctx.r5.s64 = ctx.r29.s64 + 8248;
loc_8217D944:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217d944
	if (!ctx.cr0.eq) goto loc_8217D944;
loc_8217D960:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8217d90c
	if (!ctx.cr6.eq) goto loc_8217D90C;
loc_8217D96C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// lwz r11,8244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8244);
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8217d8f0
	if (ctx.cr6.lt) goto loc_8217D8F0;
loc_8217D984:
	// lwz r11,8256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8256);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217da28
	if (ctx.cr6.eq) goto loc_8217DA28;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8217D998:
	// lwz r11,8252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8252);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f63e0
	ctx.lr = 0x8217D9A8;
	sub_820F63E0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8217da10
	if (ctx.cr6.eq) goto loc_8217DA10;
loc_8217D9B4:
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8217da04
	if (!ctx.cr6.eq) goto loc_8217DA04;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bl 0x8217e0d8
	ctx.lr = 0x8217D9E4;
	sub_8217E0D8(ctx, base);
	// addi r5,r29,8260
	ctx.r5.s64 = ctx.r29.s64 + 8260;
loc_8217D9E8:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217d9e8
	if (!ctx.cr0.eq) goto loc_8217D9E8;
loc_8217DA04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8217d9b4
	if (!ctx.cr6.eq) goto loc_8217D9B4;
loc_8217DA10:
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// lwz r11,8256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8256);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8217d998
	if (ctx.cr6.lt) goto loc_8217D998;
loc_8217DA28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217DA30"))) PPC_WEAK_FUNC(sub_8217DA30);
PPC_FUNC_IMPL(__imp__sub_8217DA30) {
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
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-26328
	ctx.r11.s64 = ctx.r11.s64 + -26328;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,8224
	ctx.r8.s64 = ctx.r11.s64 + 8224;
	// addi r31,r11,8228
	ctx.r31.s64 = ctx.r11.s64 + 8228;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,100
	ctx.r6.s64 = 100;
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82183098
	ctx.lr = 0x8217DAC4;
	sub_82183098(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217dae0
	if (ctx.cr6.eq) goto loc_8217DAE0;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x8217dae4
	goto loc_8217DAE4;
loc_8217DAE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217DAE4:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
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

__attribute__((alias("__imp__sub_8217DAFC"))) PPC_WEAK_FUNC(sub_8217DAFC);
PPC_FUNC_IMPL(__imp__sub_8217DAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217DB00"))) PPC_WEAK_FUNC(sub_8217DB00);
PPC_FUNC_IMPL(__imp__sub_8217DB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8217DB08;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r31,r11,-26328
	ctx.r31.s64 = ctx.r11.s64 + -26328;
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r30,r11,444
	ctx.r30.s64 = ctx.r11.s64 + 444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82108260
	ctx.lr = 0x8217DB28;
	sub_82108260(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r29,r11,468
	ctx.r29.s64 = ctx.r11.s64 + 468;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82108260
	ctx.lr = 0x8217DB38;
	sub_82108260(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r28,r11,492
	ctx.r28.s64 = ctx.r11.s64 + 492;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82108260
	ctx.lr = 0x8217DB48;
	sub_82108260(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r27,r11,516
	ctx.r27.s64 = ctx.r11.s64 + 516;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82108260
	ctx.lr = 0x8217DB58;
	sub_82108260(ctx, base);
	// lwz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8232);
	// addi r26,r11,540
	ctx.r26.s64 = ctx.r11.s64 + 540;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82108260
	ctx.lr = 0x8217DB68;
	sub_82108260(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,8288
	ctx.r3.s64 = ctx.r31.s64 + 8288;
	// bl 0x823052d8
	ctx.lr = 0x8217DB74;
	sub_823052D8(ctx, base);
	// lwz r11,8268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217dc9c
	if (ctx.cr6.eq) goto loc_8217DC9C;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
loc_8217DB94:
	// lwz r11,8284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8284);
	// lwzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,31,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF81;
	// cmplwi cr6,r9,129
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 129, ctx.xer);
	// bne cr6,0x8217dc90
	if (!ctx.cr6.eq) goto loc_8217DC90;
	// lwz r9,352(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217dc90
	if (ctx.cr6.eq) goto loc_8217DC90;
	// rlwinm r8,r10,14,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8217dc90
	if (ctx.cr6.eq) goto loc_8217DC90;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r7,r10,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// lwz r6,84(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lfs f0,324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// beq cr6,0x8217dc18
	if (ctx.cr6.eq) goto loc_8217DC18;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x8217dc90
	if (!ctx.cr6.lt) goto loc_8217DC90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x8217dc88
	goto loc_8217DC88;
loc_8217DC18:
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217dc38
	if (ctx.cr6.eq) goto loc_8217DC38;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x8217dc90
	if (!ctx.cr6.lt) goto loc_8217DC90;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x8217dc88
	goto loc_8217DC88;
loc_8217DC38:
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217dc58
	if (ctx.cr6.eq) goto loc_8217DC58;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x8217dc90
	if (!ctx.cr6.lt) goto loc_8217DC90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8217dc88
	goto loc_8217DC88;
loc_8217DC58:
	// rlwinm r11,r10,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217dc78
	if (ctx.cr6.eq) goto loc_8217DC78;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8217dc90
	if (!ctx.cr6.lt) goto loc_8217DC90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8217dc88
	goto loc_8217DC88;
loc_8217DC78:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x8217dc90
	if (!ctx.cr6.lt) goto loc_8217DC90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8217DC88:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821081b8
	ctx.lr = 0x8217DC90;
	sub_821081B8(ctx, base);
loc_8217DC90:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x8217db94
	if (!ctx.cr0.eq) goto loc_8217DB94;
loc_8217DC9C:
	// addi r3,r31,8288
	ctx.r3.s64 = ctx.r31.s64 + 8288;
	// bl 0x823051a8
	ctx.lr = 0x8217DCA4;
	sub_823051A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217DCB0"))) PPC_WEAK_FUNC(sub_8217DCB0);
PPC_FUNC_IMPL(__imp__sub_8217DCB0) {
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
	ctx.lr = 0x8217DCD4;
	sub_823052D8(ctx, base);
	// lwz r11,8212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217dd00
	if (!ctx.cr6.eq) goto loc_8217DD00;
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
	ctx.lr = 0x8217DCF8;
	sub_823051A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217dda8
	goto loc_8217DDA8;
loc_8217DD00:
	// lwz r9,8216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8216);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,1024
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1024, ctx.xer);
	// bge cr6,0x8217dd38
	if (!ctx.cr6.lt) goto loc_8217DD38;
	// addi r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_8217DD1C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8217dd38
	if (ctx.cr6.eq) goto loc_8217DD38;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// blt cr6,0x8217dd1c
	if (ctx.cr6.lt) goto loc_8217DD1C;
loc_8217DD38:
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bne cr6,0x8217dd70
	if (!ctx.cr6.eq) goto loc_8217DD70;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217dd70
	if (ctx.cr6.eq) goto loc_8217DD70;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
loc_8217DD50:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217dd70
	if (ctx.cr6.eq) goto loc_8217DD70;
	// lwz r9,8216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8216);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8217dd50
	if (ctx.cr6.lt) goto loc_8217DD50;
loc_8217DD70:
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
	// lwz r11,8212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8212);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r4,20(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stw r5,8212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8212, ctx.r5.u32);
	// or r31,r4,r6
	ctx.r31.u64 = ctx.r4.u64 | ctx.r6.u64;
	// bl 0x823051a8
	ctx.lr = 0x8217DDA4;
	sub_823051A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8217DDA8:
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

__attribute__((alias("__imp__sub_8217DDC0"))) PPC_WEAK_FUNC(sub_8217DDC0);
PPC_FUNC_IMPL(__imp__sub_8217DDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8217DDC8;
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
	// ble cr6,0x8217deb0
	if (!ctx.cr6.gt) goto loc_8217DEB0;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8217DDEC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
loc_8217DDF8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8217de1c
	if (!ctx.cr6.eq) goto loc_8217DE1C;
	// stwcx. r26,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217ddf8
	if (!ctx.cr0.eq) goto loc_8217DDF8;
	// b 0x8217de24
	goto loc_8217DE24;
loc_8217DE1C:
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8217DE24:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8217de70
	if (!ctx.cr6.eq) goto loc_8217DE70;
loc_8217DE30:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82247328
	ctx.lr = 0x8217DE38;
	sub_82247328(ctx, base);
loc_8217DE38:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8217de5c
	if (!ctx.cr6.eq) goto loc_8217DE5C;
	// stwcx. r26,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217de38
	if (!ctx.cr0.eq) goto loc_8217DE38;
	// b 0x8217de64
	goto loc_8217DE64;
loc_8217DE5C:
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8217DE64:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8217de30
	if (ctx.cr6.eq) goto loc_8217DE30;
loc_8217DE70:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8217de90
	if (ctx.cr6.eq) goto loc_8217DE90;
loc_8217DE7C:
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8217dfc0
	ctx.lr = 0x8217DE84;
	sub_8217DFC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8217de7c
	if (!ctx.cr6.eq) goto loc_8217DE7C;
loc_8217DE90:
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
	// blt cr6,0x8217ddec
	if (ctx.cr6.lt) goto loc_8217DDEC;
loc_8217DEB0:
	// stw r28,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217DEBC"))) PPC_WEAK_FUNC(sub_8217DEBC);
PPC_FUNC_IMPL(__imp__sub_8217DEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217DEC0"))) PPC_WEAK_FUNC(sub_8217DEC0);
PPC_FUNC_IMPL(__imp__sub_8217DEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8217DEC8;
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
	// ble cr6,0x8217dfb0
	if (!ctx.cr6.gt) goto loc_8217DFB0;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8217DEEC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
loc_8217DEF8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8217df1c
	if (!ctx.cr6.eq) goto loc_8217DF1C;
	// stwcx. r26,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217def8
	if (!ctx.cr0.eq) goto loc_8217DEF8;
	// b 0x8217df24
	goto loc_8217DF24;
loc_8217DF1C:
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8217DF24:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8217df70
	if (!ctx.cr6.eq) goto loc_8217DF70;
loc_8217DF30:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82247328
	ctx.lr = 0x8217DF38;
	sub_82247328(ctx, base);
loc_8217DF38:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8217df5c
	if (!ctx.cr6.eq) goto loc_8217DF5C;
	// stwcx. r26,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217df38
	if (!ctx.cr0.eq) goto loc_8217DF38;
	// b 0x8217df64
	goto loc_8217DF64;
loc_8217DF5C:
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8217DF64:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8217df30
	if (ctx.cr6.eq) goto loc_8217DF30;
loc_8217DF70:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8217df90
	if (ctx.cr6.eq) goto loc_8217DF90;
loc_8217DF7C:
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8217e0d8
	ctx.lr = 0x8217DF84;
	sub_8217E0D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8217df7c
	if (!ctx.cr6.eq) goto loc_8217DF7C;
loc_8217DF90:
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
	// blt cr6,0x8217deec
	if (ctx.cr6.lt) goto loc_8217DEEC;
loc_8217DFB0:
	// stw r28,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217DFBC"))) PPC_WEAK_FUNC(sub_8217DFBC);
PPC_FUNC_IMPL(__imp__sub_8217DFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217DFC0"))) PPC_WEAK_FUNC(sub_8217DFC0);
PPC_FUNC_IMPL(__imp__sub_8217DFC0) {
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
	// beq cr6,0x8217e0bc
	if (ctx.cr6.eq) goto loc_8217E0BC;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,10832
	ctx.r31.s64 = ctx.r11.s64 + 10832;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8217DFF4;
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
	// bne cr6,0x8217e0b0
	if (!ctx.cr6.eq) goto loc_8217E0B0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8217e0b0
	if (ctx.cr6.eq) goto loc_8217E0B0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8217e0b0
	if (!ctx.cr6.lt) goto loc_8217E0B0;
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
	// beq cr6,0x8217e088
	if (ctx.cr6.eq) goto loc_8217E088;
loc_8217E060:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217e080
	if (ctx.cr6.eq) goto loc_8217E080;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8217e060
	if (!ctx.cr6.eq) goto loc_8217E060;
	// b 0x8217e088
	goto loc_8217E088;
loc_8217E080:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8217E088:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8217e0a0
	if (!ctx.cr6.eq) goto loc_8217E0A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8217E0A0:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217E0AC;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8217E0B0:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8217E0BC;
	sub_823051A8(ctx, base);
loc_8217E0BC:
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

__attribute__((alias("__imp__sub_8217E0D4"))) PPC_WEAK_FUNC(sub_8217E0D4);
PPC_FUNC_IMPL(__imp__sub_8217E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217E0D8"))) PPC_WEAK_FUNC(sub_8217E0D8);
PPC_FUNC_IMPL(__imp__sub_8217E0D8) {
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
	// beq cr6,0x8217e1d4
	if (ctx.cr6.eq) goto loc_8217E1D4;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r31,r11,10776
	ctx.r31.s64 = ctx.r11.s64 + 10776;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823052d8
	ctx.lr = 0x8217E10C;
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
	// bne cr6,0x8217e1c8
	if (!ctx.cr6.eq) goto loc_8217E1C8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8217e1c8
	if (ctx.cr6.eq) goto loc_8217E1C8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8217e1c8
	if (!ctx.cr6.lt) goto loc_8217E1C8;
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
	// beq cr6,0x8217e1a0
	if (ctx.cr6.eq) goto loc_8217E1A0;
loc_8217E178:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217e198
	if (ctx.cr6.eq) goto loc_8217E198;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8217e178
	if (!ctx.cr6.eq) goto loc_8217E178;
	// b 0x8217e1a0
	goto loc_8217E1A0;
loc_8217E198:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8217E1A0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8217e1b8
	if (!ctx.cr6.eq) goto loc_8217E1B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8217E1B8:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217E1C4;
	sub_82080000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8217E1C8:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823051a8
	ctx.lr = 0x8217E1D4;
	sub_823051A8(ctx, base);
loc_8217E1D4:
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

__attribute__((alias("__imp__sub_8217E1EC"))) PPC_WEAK_FUNC(sub_8217E1EC);
PPC_FUNC_IMPL(__imp__sub_8217E1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217E1F0"))) PPC_WEAK_FUNC(sub_8217E1F0);
PPC_FUNC_IMPL(__imp__sub_8217E1F0) {
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
	ctx.lr = 0x8217E224;
	sub_82082030(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,10776
	ctx.r11.s64 = ctx.r11.s64 + 10776;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217e240
	if (ctx.cr6.eq) goto loc_8217E240;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8217e244
	goto loc_8217E244;
loc_8217E240:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8217E244:
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
	// beq cr6,0x8217e284
	if (ctx.cr6.eq) goto loc_8217E284;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8217E27C:
	// stwu r3,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8217e27c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217E27C;
loc_8217E284:
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

__attribute__((alias("__imp__sub_8217E2A4"))) PPC_WEAK_FUNC(sub_8217E2A4);
PPC_FUNC_IMPL(__imp__sub_8217E2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217E2A8"))) PPC_WEAK_FUNC(sub_8217E2A8);
PPC_FUNC_IMPL(__imp__sub_8217E2A8) {
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
	ctx.lr = 0x8217E2DC;
	sub_82082030(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,10832
	ctx.r11.s64 = ctx.r11.s64 + 10832;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217e2f8
	if (ctx.cr6.eq) goto loc_8217E2F8;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x8217e2fc
	goto loc_8217E2FC;
loc_8217E2F8:
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_8217E2FC:
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
	// beq cr6,0x8217e33c
	if (ctx.cr6.eq) goto loc_8217E33C;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8217E334:
	// stwu r3,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8217e334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217E334;
loc_8217E33C:
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

__attribute__((alias("__imp__sub_8217E35C"))) PPC_WEAK_FUNC(sub_8217E35C);
PPC_FUNC_IMPL(__imp__sub_8217E35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217E360"))) PPC_WEAK_FUNC(sub_8217E360);
PPC_FUNC_IMPL(__imp__sub_8217E360) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r6,r11,31376
	ctx.r6.s64 = ctx.r11.s64 + 31376;
	// addi r5,r7,-27388
	ctx.r5.s64 = ctx.r7.s64 + -27388;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfs f0,80(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1024
	ctx.r7.s64 = 1024;
	// lfs f13,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lfs f31,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r7,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r7.u32);
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// stfs f31,168(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f31,172(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f31,176(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f31,180(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// bl 0x8217e590
	ctx.lr = 0x8217E41C;
	sub_8217E590(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// stw r4,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r4.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217E508"))) PPC_WEAK_FUNC(sub_8217E508);
PPC_FUNC_IMPL(__imp__sub_8217E508) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-27388
	ctx.r10.s64 = ctx.r11.s64 + -27388;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8217e540
	if (ctx.cr6.eq) goto loc_8217E540;
	// bl 0x82172d60
	ctx.lr = 0x8217E540;
	sub_82172D60(ctx, base);
loc_8217E540:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217e558
	if (ctx.cr6.eq) goto loc_8217E558;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217E558;
	sub_82080000(ctx, base);
loc_8217E558:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217e570
	if (ctx.cr6.eq) goto loc_8217E570;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217E570;
	sub_82080000(ctx, base);
loc_8217E570:
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

__attribute__((alias("__imp__sub_8217E58C"))) PPC_WEAK_FUNC(sub_8217E58C);
PPC_FUNC_IMPL(__imp__sub_8217E58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217E590"))) PPC_WEAK_FUNC(sub_8217E590);
PPC_FUNC_IMPL(__imp__sub_8217E590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8217E598;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8217e5c0
	if (!ctx.cr6.eq) goto loc_8217E5C0;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217e62c
	if (!ctx.cr6.eq) goto loc_8217E62C;
loc_8217E5C0:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217e5d8
	if (ctx.cr6.eq) goto loc_8217E5D8;
	// bl 0x82172d60
	ctx.lr = 0x8217E5D4;
	sub_82172D60(ctx, base);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_8217E5D8:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217e5e8
	if (!ctx.cr6.eq) goto loc_8217E5E8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8217E5E8:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217e5fc
	if (ctx.cr6.eq) goto loc_8217E5FC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8217e61c
	if (!ctx.cr6.eq) goto loc_8217E61C;
loc_8217E5FC:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lwz r11,-9488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217e628
	if (ctx.cr6.eq) goto loc_8217E628;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8217e628
	if (ctx.cr6.eq) goto loc_8217E628;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8217E61C:
	// bl 0x82087078
	ctx.lr = 0x8217E620;
	sub_82087078(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// b 0x8217e62c
	goto loc_8217E62C;
loc_8217E628:
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_8217E62C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f12,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f11,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,156(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217E6BC"))) PPC_WEAK_FUNC(sub_8217E6BC);
PPC_FUNC_IMPL(__imp__sub_8217E6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217E6C0"))) PPC_WEAK_FUNC(sub_8217E6C0);
PPC_FUNC_IMPL(__imp__sub_8217E6C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r3,24
	ctx.r6.s64 = ctx.r3.s64 + 24;
	// addi r5,r3,28
	ctx.r5.s64 = ctx.r3.s64 + 28;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217f890
	ctx.lr = 0x8217E6F0;
	sub_8217F890(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// rlwinm r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8217e734
	if (ctx.cr6.eq) goto loc_8217E734;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8217f4f8
	ctx.lr = 0x8217E72C;
	sub_8217F4F8(ctx, base);
	// stfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f1,44(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_8217E734:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r31,84(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stb r30,269(r11)
	PPC_STORE_U8(ctx.r11.u32 + 269, ctx.r30.u8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217e764
	if (ctx.cr6.eq) goto loc_8217E764;
loc_8217E74C:
	// stb r30,269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 269, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c6fb0
	ctx.lr = 0x8217E758;
	sub_820C6FB0(ctx, base);
	// lwz r31,88(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8217e74c
	if (!ctx.cr6.eq) goto loc_8217E74C;
loc_8217E764:
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

__attribute__((alias("__imp__sub_8217E77C"))) PPC_WEAK_FUNC(sub_8217E77C);
PPC_FUNC_IMPL(__imp__sub_8217E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217E780"))) PPC_WEAK_FUNC(sub_8217E780);
PPC_FUNC_IMPL(__imp__sub_8217E780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x8217E788;
	__savegprlr_21(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8217e7a8
	if (!ctx.cr6.eq) goto loc_8217E7A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
loc_8217E7A8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r9,-15404
	ctx.r9.s64 = -1009516544;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// ori r9,r9,5
	ctx.r9.u64 = ctx.r9.u64 | 5;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r28,76
	ctx.r28.s64 = 76;
	// lwz r27,28(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r26,32(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// ld r25,52(r11)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r11.u32 + 52);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lwz r24,60(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lwz r23,64(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r22,68(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r21,72(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r30.u32);
	// stw r29,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r29.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// std r25,164(r1)
	PPC_STORE_U64(ctx.r1.u32 + 164, ctx.r25.u64);
	// stw r24,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r24.u32);
	// stw r23,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r23.u32);
	// stw r22,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r22.u32);
	// stw r21,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r21.u32);
	// bl 0x8217e590
	ctx.lr = 0x8217E854;
	sub_8217E590(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8217e874
	if (ctx.cr6.eq) goto loc_8217E874;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217f420
	ctx.lr = 0x8217E870;
	sub_8217F420(ctx, base);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
loc_8217E874:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r30,269(r3)
	PPC_STORE_U8(ctx.r3.u32 + 269, ctx.r30.u8);
	// bl 0x820c6fb0
	ctx.lr = 0x8217E880;
	sub_820C6FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217E88C"))) PPC_WEAK_FUNC(sub_8217E88C);
PPC_FUNC_IMPL(__imp__sub_8217E88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217E890"))) PPC_WEAK_FUNC(sub_8217E890);
PPC_FUNC_IMPL(__imp__sub_8217E890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8217e8a0
	if (!ctx.cr6.eq) goto loc_8217E8A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8217E8A0:
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
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// stw r10,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r10.u32);
	// lfs f10,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f9,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f8,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f7,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,48(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217e9d4
	if (ctx.cr6.eq) goto loc_8217E9D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// rlwinm r8,r9,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8217e924
	if (ctx.cr6.eq) goto loc_8217E924;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stw r11,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r11.u32);
	// b 0x8217e930
	goto loc_8217E930;
loc_8217E924:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r10.u32);
loc_8217E930:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217e950
	if (ctx.cr6.eq) goto loc_8217E950;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// stw r11,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// b 0x8217e95c
	goto loc_8217E95C;
loc_8217E950:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
loc_8217E95C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217e9a0
	if (ctx.cr6.eq) goto loc_8217E9A0;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addi r10,r3,168
	ctx.r10.s64 = ctx.r3.s64 + 168;
	// addi r9,r4,60
	ctx.r9.s64 = ctx.r4.s64 + 60;
	// stw r11,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r11.u32);
	// lwz r8,172(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// stw r8,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r8.u32);
	// lwz r7,176(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// stw r7,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r7.u32);
	// lwz r6,180(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r6.u32);
	// blr 
	return;
loc_8217E9A0:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r4,60
	ctx.r10.s64 = ctx.r4.s64 + 60;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r9,r11,92
	ctx.r9.s64 = ctx.r11.s64 + 92;
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r8,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r8.u32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r7,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r7.u32);
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r6,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r6.u32);
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r5,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r5.u32);
	// blr 
	return;
loc_8217E9D4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r3,168
	ctx.r10.s64 = ctx.r3.s64 + 168;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stw r9,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r9.u32);
	// lwz r8,164(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// stw r8,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r8.u32);
	// lwz r7,168(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r7,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r7.u32);
	// lwz r6,172(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// stw r6,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r6.u32);
	// lwz r5,176(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// stw r5,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r5.u32);
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// stw r3,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217EA18"))) PPC_WEAK_FUNC(sub_8217EA18);
PPC_FUNC_IMPL(__imp__sub_8217EA18) {
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
	// lis r9,-15404
	ctx.r9.s64 = -1009516544;
	// addi r8,r11,31376
	ctx.r8.s64 = ctx.r11.s64 + 31376;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r7,r9,5
	ctx.r7.u64 = ctx.r9.u64 | 5;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r6,76
	ctx.r6.s64 = 76;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f0,48(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lfs f13,80(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lfs f12,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x8217e890
	ctx.lr = 0x8217EAA8;
	sub_8217E890(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8217ead8
	if (ctx.cr6.eq) goto loc_8217EAD8;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// bl 0x82176780
	ctx.lr = 0x8217EAC4;
	sub_82176780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217ead8
	if (ctx.cr6.eq) goto loc_8217EAD8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82172d60
	ctx.lr = 0x8217EAD8;
	sub_82172D60(ctx, base);
loc_8217EAD8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8217eaec
	if (ctx.cr6.eq) goto loc_8217EAEC;
	// bl 0x820c66a8
	ctx.lr = 0x8217EAE8;
	sub_820C66A8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_8217EAEC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217e780
	ctx.lr = 0x8217EAF8;
	sub_8217E780(ctx, base);
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

__attribute__((alias("__imp__sub_8217EB0C"))) PPC_WEAK_FUNC(sub_8217EB0C);
PPC_FUNC_IMPL(__imp__sub_8217EB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217EB10"))) PPC_WEAK_FUNC(sub_8217EB10);
PPC_FUNC_IMPL(__imp__sub_8217EB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8217EB18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,36(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8217eb3c
	if (!ctx.cr6.eq) goto loc_8217EB3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8217EB3C:
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217c958
	ctx.lr = 0x8217EB48;
	sub_8217C958(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// rlwinm r9,r11,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// addi r11,r10,-26328
	ctx.r11.s64 = ctx.r10.s64 + -26328;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r11,8228
	ctx.r6.s64 = ctx.r11.s64 + 8228;
	// addi r4,r11,8224
	ctx.r4.s64 = ctx.r11.s64 + 8224;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// rlwinm r10,r11,20,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x2;
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// lwzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwzx r4,r8,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8217f170
	ctx.lr = 0x8217EBB0;
	sub_8217F170(ctx, base);
	// stfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r10,r5,31376
	ctx.r10.s64 = ctx.r5.s64 + 31376;
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lfs f13,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8217ec2c
	if (!ctx.cr6.eq) goto loc_8217EC2C;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ec2c
	if (ctx.cr6.eq) goto loc_8217EC2C;
	// lfs f12,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8217ec30
	goto loc_8217EC30;
loc_8217EC2C:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_8217EC30:
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8217ec4c
	if (!ctx.cr6.eq) goto loc_8217EC4C;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ec4c
	if (ctx.cr6.eq) goto loc_8217EC4C;
	// lfs f0,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
loc_8217EC4C:
	// stfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f12,60(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,52(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// rlwinm r5,r6,0,15,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8217ec8c
	if (ctx.cr6.eq) goto loc_8217EC8C;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// b 0x8217ec90
	goto loc_8217EC90;
loc_8217EC8C:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
loc_8217EC90:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217ecb0
	if (ctx.cr6.eq) goto loc_8217ECB0;
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// b 0x8217ecb4
	goto loc_8217ECB4;
loc_8217ECB0:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
loc_8217ECB4:
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ed04
	if (ctx.cr6.eq) goto loc_8217ED04;
	// lwz r10,140(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217ecdc
	if (ctx.cr6.eq) goto loc_8217ECDC;
	// lfs f0,144(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8217ece0
	goto loc_8217ECE0;
loc_8217ECDC:
	// lfs f0,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
loc_8217ECE0:
	// stfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r10,140(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217ecfc
	if (ctx.cr6.eq) goto loc_8217ECFC;
	// lfs f0,148(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8217ed00
	goto loc_8217ED00;
loc_8217ECFC:
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
loc_8217ED00:
	// stfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_8217ED04:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r31,148
	ctx.r9.s64 = ctx.r31.s64 + 148;
	// beq cr6,0x8217ed40
	if (ctx.cr6.eq) goto loc_8217ED40;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r8,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r7,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// b 0x8217ed60
	goto loc_8217ED60;
loc_8217ED40:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addi r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 + 92;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r8,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// stw r7,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// lwz r6,104(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
loc_8217ED60:
	// stw r6,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r31,164
	ctx.r9.s64 = ctx.r31.s64 + 164;
	// beq cr6,0x8217eda0
	if (ctx.cr6.eq) goto loc_8217EDA0;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// b 0x8217edc0
	goto loc_8217EDC0;
loc_8217EDA0:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addi r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 + 92;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// lwz r6,104(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
loc_8217EDC0:
	// stw r6,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r31,180
	ctx.r9.s64 = ctx.r31.s64 + 180;
	// beq cr6,0x8217ee00
	if (ctx.cr6.eq) goto loc_8217EE00;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r8,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r8.u32);
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r7,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r7.u32);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// b 0x8217ee20
	goto loc_8217EE20;
loc_8217EE00:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addi r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 + 92;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r8,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r8.u32);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// stw r7,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r7.u32);
	// lwz r6,104(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
loc_8217EE20:
	// stw r6,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r31,196
	ctx.r9.s64 = ctx.r31.s64 + 196;
	// beq cr6,0x8217ee60
	if (ctx.cr6.eq) goto loc_8217EE60;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r8,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r7,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r7.u32);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// b 0x8217ee80
	goto loc_8217EE80;
loc_8217EE60:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addi r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 + 92;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r8,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// stw r7,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r7.u32);
	// lwz r6,104(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
loc_8217EE80:
	// stw r6,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r31,212
	ctx.r9.s64 = ctx.r31.s64 + 212;
	// beq cr6,0x8217eec0
	if (ctx.cr6.eq) goto loc_8217EEC0;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r8,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r7,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r7.u32);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// b 0x8217eee0
	goto loc_8217EEE0;
loc_8217EEC0:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addi r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 + 92;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r8,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// stw r7,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r7.u32);
	// lwz r6,104(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
loc_8217EEE0:
	// stw r6,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r31,228
	ctx.r9.s64 = ctx.r31.s64 + 228;
	// beq cr6,0x8217ef20
	if (ctx.cr6.eq) goto loc_8217EF20;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r8,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r8.u32);
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r7,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r7.u32);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// b 0x8217ef40
	goto loc_8217EF40;
loc_8217EF20:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addi r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 + 92;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r8,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r8.u32);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// stw r7,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r7.u32);
	// lwz r6,104(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
loc_8217EF40:
	// stw r6,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r31,244
	ctx.r9.s64 = ctx.r31.s64 + 244;
	// beq cr6,0x8217ef80
	if (ctx.cr6.eq) goto loc_8217EF80;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r8,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r8.u32);
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r7,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r7.u32);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// b 0x8217efa0
	goto loc_8217EFA0;
loc_8217EF80:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addi r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 + 92;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r8,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r8.u32);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// stw r7,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r7.u32);
	// lwz r6,104(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
loc_8217EFA0:
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r31,260
	ctx.r9.s64 = ctx.r31.s64 + 260;
	// beq cr6,0x8217efe0
	if (ctx.cr6.eq) goto loc_8217EFE0;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r8,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r8.u32);
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r7,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r7.u32);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// b 0x8217f000
	goto loc_8217F000;
loc_8217EFE0:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addi r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 + 92;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r8,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r8.u32);
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// stw r7,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r7.u32);
	// lwz r6,104(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
loc_8217F000:
	// stw r6,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r6.u32);
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// addi r9,r31,84
	ctx.r9.s64 = ctx.r31.s64 + 84;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// lwz r7,76(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r4,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lwz r8,104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// lwz r7,108(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// lwz r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// lwz r5,116(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r5,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r5.u32);
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217F098"))) PPC_WEAK_FUNC(sub_8217F098);
PPC_FUNC_IMPL(__imp__sub_8217F098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8217F0A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821822d8
	ctx.lr = 0x8217F0BC;
	sub_821822D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// bl 0x8217eb10
	ctx.lr = 0x8217F0D4;
	sub_8217EB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217f0f4
	if (!ctx.cr6.eq) goto loc_8217F0F4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8217F0F4:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8217fcd0
	ctx.lr = 0x8217F104;
	sub_8217FCD0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8217f114
	if (!ctx.cr6.eq) goto loc_8217F114;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_8217F114:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x8217f13c
	if (!ctx.cr6.eq) goto loc_8217F13C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f13c
	if (ctx.cr6.eq) goto loc_8217F13C;
	// lfs f0,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
loc_8217F13C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217f158
	if (ctx.cr6.eq) goto loc_8217F158;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821802b8
	ctx.lr = 0x8217F158;
	sub_821802B8(ctx, base);
loc_8217F158:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f12.f64));
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217F170"))) PPC_WEAK_FUNC(sub_8217F170);
PPC_FUNC_IMPL(__imp__sub_8217F170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f13,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8217f198
	if (ctx.cr6.eq) goto loc_8217F198;
	// lfs f0,468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8217f19c
	goto loc_8217F19C;
loc_8217F198:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_8217F19C:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fdivs f4,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fdivs f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 / ctx.f0.f64));
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F1D8"))) PPC_WEAK_FUNC(sub_8217F1D8);
PPC_FUNC_IMPL(__imp__sub_8217F1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8217F1E0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8217f20c
	if (!ctx.cr6.eq) goto loc_8217F20C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f26c
	if (ctx.cr6.eq) goto loc_8217F26C;
	// lwz r31,64(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// b 0x8217f21c
	goto loc_8217F21C;
loc_8217F20C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8217f728
	ctx.lr = 0x8217F218;
	sub_8217F728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8217F21C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x821822d8
	ctx.lr = 0x8217F228;
	sub_821822D8(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x820d9860
	ctx.lr = 0x8217F240;
	sub_820D9860(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bl 0x8217eb10
	ctx.lr = 0x8217F258;
	sub_8217EB10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217f284
	if (!ctx.cr6.eq) goto loc_8217F284;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820d91e0
	ctx.lr = 0x8217F26C;
	sub_820D91E0(ctx, base);
loc_8217F26C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8217F284:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f31,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bne cr6,0x8217f2ac
	if (!ctx.cr6.eq) goto loc_8217F2AC;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
loc_8217F2AC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x82181998
	ctx.lr = 0x8217F2C0;
	sub_82181998(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217f2e4
	if (!ctx.cr6.eq) goto loc_8217F2E4;
	// bl 0x820d91e0
	ctx.lr = 0x8217F2D4;
	sub_820D91E0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8217F2E4:
	// bl 0x820d91e0
	ctx.lr = 0x8217F2E8;
	sub_820D91E0(ctx, base);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217F300"))) PPC_WEAK_FUNC(sub_8217F300);
PPC_FUNC_IMPL(__imp__sub_8217F300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8217F308;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8217f338
	if (!ctx.cr6.eq) goto loc_8217F338;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8217f338
	if (!ctx.cr6.eq) goto loc_8217F338;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8217F338:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// beq cr6,0x8217f34c
	if (ctx.cr6.eq) goto loc_8217F34C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_8217F34C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x821822d8
	ctx.lr = 0x8217F358;
	sub_821822D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// bl 0x8217eb10
	ctx.lr = 0x8217F370;
	sub_8217EB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f410
	if (ctx.cr6.eq) goto loc_8217F410;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8217fcd0
	ctx.lr = 0x8217F38C;
	sub_8217FCD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_8217F398:
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8217f3bc
	if (!ctx.cr6.eq) goto loc_8217F3BC;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f3bc
	if (ctx.cr6.eq) goto loc_8217F3BC;
	// lfs f0,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
loc_8217F3BC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217ffc0
	ctx.lr = 0x8217F3E8;
	sub_8217FFC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217f40c
	if (ctx.cr6.eq) goto loc_8217F40C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217f400
	if (ctx.cr6.eq) goto loc_8217F400;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8217F400:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x8217f398
	goto loc_8217F398;
loc_8217F40C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8217F410:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217F41C"))) PPC_WEAK_FUNC(sub_8217F41C);
PPC_FUNC_IMPL(__imp__sub_8217F41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F420"))) PPC_WEAK_FUNC(sub_8217F420);
PPC_FUNC_IMPL(__imp__sub_8217F420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stb r5,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r5.u8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8217f468
	ctx.lr = 0x8217F458;
	sub_8217F468(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F468"))) PPC_WEAK_FUNC(sub_8217F468);
PPC_FUNC_IMPL(__imp__sub_8217F468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8217F470;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x820d9148
	ctx.lr = 0x8217F48C;
	sub_820D9148(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82181480
	ctx.lr = 0x8217F4B8;
	sub_82181480(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217e6c0
	ctx.lr = 0x8217F4C8;
	sub_8217E6C0(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8217f4e0
	if (!ctx.cr6.eq) goto loc_8217F4E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_8217F4E0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820d91e0
	ctx.lr = 0x8217F4E8;
	sub_820D91E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217F4F4"))) PPC_WEAK_FUNC(sub_8217F4F4);
PPC_FUNC_IMPL(__imp__sub_8217F4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F4F8"))) PPC_WEAK_FUNC(sub_8217F4F8);
PPC_FUNC_IMPL(__imp__sub_8217F4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8217F500;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8233fa14
	ctx.lr = 0x8217F508;
	__savefpr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lfs f21,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f21.f64 = double(temp.f32);
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// lfs f20,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f20.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f19,f1
	ctx.f19.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f22,f2
	ctx.f22.f64 = ctx.f2.f64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// fmr f24,f3
	ctx.f24.f64 = ctx.f3.f64;
	// fmr f23,f4
	ctx.f23.f64 = ctx.f4.f64;
	// lfs f28,328(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	ctx.f28.f64 = double(temp.f32);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// stfs f28,40(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f28,44(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// rlwinm r26,r8,21,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1;
	// bl 0x8217f300
	ctx.lr = 0x8217F558;
	sub_8217F300(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8217f564
	if (ctx.cr6.gt) goto loc_8217F564;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8217F564:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bgt cr6,0x8217f574
	if (ctx.cr6.gt) goto loc_8217F574;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8217F574:
	// lfs f31,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217f098
	ctx.lr = 0x8217F590;
	sub_8217F098(ctx, base);
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8217f5b0
	if (!ctx.cr6.eq) goto loc_8217F5B0;
loc_8217F59C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8233fa60
	ctx.lr = 0x8217F5AC;
	__restfpr_19(ctx, base);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8217F5B0:
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f19
	ctx.cr6.compare(ctx.f0.f64, ctx.f19.f64);
	// bge cr6,0x8217f5ec
	if (!ctx.cr6.lt) goto loc_8217F5EC;
	// stfs f21,40(r31)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// stfs f20,44(r31)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8233fa60
	ctx.lr = 0x8217F5E8;
	__restfpr_19(ctx, base);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_8217F5EC:
	// lfs f26,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f27.f64 = double(temp.f32);
	// fadds f31,f0,f26
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// lfs f25,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f25.f64 = double(temp.f32);
loc_8217F5FC:
	// fcmpu cr6,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f22.f64);
	// ble cr6,0x8217f608
	if (!ctx.cr6.gt) goto loc_8217F608;
	// fmr f31,f22
	ctx.f31.f64 = ctx.f22.f64;
loc_8217F608:
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217f300
	ctx.lr = 0x8217F61C;
	sub_8217F300(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x8217f670
	if (ctx.cr6.gt) goto loc_8217F670;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217f1d8
	ctx.lr = 0x8217F630;
	sub_8217F1D8(ctx, base);
	// fcmpu cr6,f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f23.f64);
	// ble cr6,0x8217f648
	if (!ctx.cr6.gt) goto loc_8217F648;
	// fadds f0,f1,f26
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f26.f64));
	// fdivs f13,f23,f0
	ctx.f13.f64 = double(float(ctx.f23.f64 / ctx.f0.f64));
	// fmuls f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// b 0x8217f5fc
	goto loc_8217F5FC;
loc_8217F648:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217f098
	ctx.lr = 0x8217F658;
	sub_8217F098(ctx, base);
	// fcmpu cr6,f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f24.f64);
	// ble cr6,0x8217f6f4
	if (!ctx.cr6.gt) goto loc_8217F6F4;
	// fadds f0,f1,f26
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f26.f64));
	// fdivs f13,f24,f0
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f0.f64));
	// fmuls f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// b 0x8217f5fc
	goto loc_8217F5FC;
loc_8217F670:
	// fmr f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f25.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// fsubs f29,f31,f25
	ctx.f29.f64 = double(float(ctx.f31.f64 - ctx.f25.f64));
loc_8217F67C:
	// fadds f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fmuls f31,f0,f27
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f28
	ctx.cr6.compare(ctx.f11.f64, ctx.f28.f64);
	// blt cr6,0x8217f6ec
	if (ctx.cr6.lt) goto loc_8217F6EC;
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217f300
	ctx.lr = 0x8217F6AC;
	sub_8217F300(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8217f6c0
	if (!ctx.cr6.gt) goto loc_8217F6C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x8217f6dc
	goto loc_8217F6DC;
loc_8217F6C0:
	// cmplwi cr6,r30,10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 10, ctx.xer);
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8217f6d8
	if (ctx.cr6.lt) goto loc_8217F6D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8217F6D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8217F6DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217f67c
	if (!ctx.cr6.eq) goto loc_8217F67C;
	// b 0x8217f5fc
	goto loc_8217F5FC;
loc_8217F6EC:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x8217f5fc
	goto loc_8217F5FC;
loc_8217F6F4:
	// stfs f21,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fcmpu cr6,f31,f22
	ctx.cr6.compare(ctx.f31.f64, ctx.f22.f64);
	// stfs f20,44(r31)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// blt cr6,0x8217f708
	if (ctx.cr6.lt) goto loc_8217F708;
	// fmr f31,f22
	ctx.f31.f64 = ctx.f22.f64;
loc_8217F708:
	// fcmpu cr6,f31,f19
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f19.f64);
	// bgt cr6,0x8217f59c
	if (ctx.cr6.gt) goto loc_8217F59C;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8233fa60
	ctx.lr = 0x8217F720;
	__restfpr_19(ctx, base);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217F724"))) PPC_WEAK_FUNC(sub_8217F724);
PPC_FUNC_IMPL(__imp__sub_8217F724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F728"))) PPC_WEAK_FUNC(sub_8217F728);
PPC_FUNC_IMPL(__imp__sub_8217F728) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217f764
	if (!ctx.cr6.eq) goto loc_8217F764;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217f75c
	if (ctx.cr6.eq) goto loc_8217F75C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8217F75C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217f7fc
	goto loc_8217F7FC;
loc_8217F764:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d240
	ctx.lr = 0x8217F76C;
	sub_8233D240(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217f77c
	if (ctx.cr6.eq) goto loc_8217F77C;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8217F77C:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217f7fc
	if (ctx.cr6.eq) goto loc_8217F7FC;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r7,r8,57346
	ctx.r7.u64 = ctx.r8.u64 | 57346;
	// ori r6,r11,57348
	ctx.r6.u64 = ctx.r11.u64 | 57348;
	// ori r8,r5,57349
	ctx.r8.u64 = ctx.r5.u64 | 57349;
loc_8217F7A4:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f7fc
	if (ctx.cr6.eq) goto loc_8217F7FC;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x8217f830
	if (ctx.cr6.gt) goto loc_8217F830;
	// cmplwi cr6,r11,57348
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57348, ctx.xer);
	// beq cr6,0x8217f828
	if (ctx.cr6.eq) goto loc_8217F828;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8217f81c
	if (ctx.cr6.gt) goto loc_8217F81C;
	// cmplwi cr6,r11,57346
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57346, ctx.xer);
	// beq cr6,0x8217f814
	if (ctx.cr6.eq) goto loc_8217F814;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x8217f7e8
	if (ctx.cr6.lt) goto loc_8217F7E8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x8217f7ec
	if (!ctx.cr6.gt) goto loc_8217F7EC;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8217f7ec
	if (ctx.cr6.eq) goto loc_8217F7EC;
loc_8217F7E8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8217F7EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8217f7a4
	if (ctx.cr6.lt) goto loc_8217F7A4;
loc_8217F7FC:
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
loc_8217F814:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// b 0x8217f7ec
	goto loc_8217F7EC;
loc_8217F81C:
	// cmplwi cr6,r11,57347
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57347, ctx.xer);
	// beq cr6,0x8217f7ec
	if (ctx.cr6.eq) goto loc_8217F7EC;
	// b 0x8217f7e8
	goto loc_8217F7E8;
loc_8217F828:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x8217f7ec
	goto loc_8217F7EC;
loc_8217F830:
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8217f7e8
	if (ctx.cr6.gt) goto loc_8217F7E8;
	// lis r12,-32232
	ctx.r12.s64 = -2112356352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1964
	ctx.r12.s64 = ctx.r12.s64 + -1964;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8217F7EC;
	case 1:
		goto loc_8217F7EC;
	case 2:
		goto loc_8217F7EC;
	case 3:
		goto loc_8217F7EC;
	case 4:
		goto loc_8217F7EC;
	case 5:
		goto loc_8217F7EC;
	case 6:
		goto loc_8217F7EC;
	case 7:
		goto loc_8217F7EC;
	case 8:
		goto loc_8217F7EC;
	case 9:
		goto loc_8217F7E8;
	case 10:
		goto loc_8217F7EC;
	case 11:
		goto loc_8217F7EC;
	case 12:
		goto loc_8217F7EC;
	case 13:
		goto loc_8217F7EC;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
	// lwz r16,-2072(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2072);
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
	// lwz r16,-2068(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2068);
}

__attribute__((alias("__imp__sub_8217F88C"))) PPC_WEAK_FUNC(sub_8217F88C);
PPC_FUNC_IMPL(__imp__sub_8217F88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F890"))) PPC_WEAK_FUNC(sub_8217F890);
PPC_FUNC_IMPL(__imp__sub_8217F890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8217F898;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8217f728
	ctx.lr = 0x8217F8B4;
	sub_8217F728(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r31,r27,1
	ctx.r31.s64 = ctx.r27.s64 + 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8217f914
	if (!ctx.cr6.gt) goto loc_8217F914;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f8e4
	if (ctx.cr6.eq) goto loc_8217F8E4;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x8217F8E4;
	sub_82080000(ctx, base);
loc_8217F8E4:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8217f8fc
	if (!ctx.cr6.gt) goto loc_8217F8FC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8217F8FC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82082030
	ctx.lr = 0x8217F90C;
	sub_82082030(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_8217F914:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x8217f930
	if (!ctx.cr6.eq) goto loc_8217F930;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8217F930:
	// rlwinm r31,r27,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8217F944;
	sub_8233E4E0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// sthx r11,r31,r10
	PPC_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217F958"))) PPC_WEAK_FUNC(sub_8217F958);
PPC_FUNC_IMPL(__imp__sub_8217F958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stb r5,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r5.u8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8217f9a0
	ctx.lr = 0x8217F990;
	sub_8217F9A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F9A0"))) PPC_WEAK_FUNC(sub_8217F9A0);
PPC_FUNC_IMPL(__imp__sub_8217F9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8217F9A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217fa48
	if (!ctx.cr6.eq) goto loc_8217FA48;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82082030
	ctx.lr = 0x8217F9DC;
	sub_82082030(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8217F9EC;
	sub_8233EAF0(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
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
loc_8217FA48:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x8217FA54;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217fa60
	if (!ctx.cr6.eq) goto loc_8217FA60;
	// bl 0x821b3000
	ctx.lr = 0x8217FA60;
	sub_821B3000(ctx, base);
loc_8217FA60:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// lis r24,-13569
	ctx.r24.s64 = -889257984;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8217fa90
	if (!ctx.cr6.gt) goto loc_8217FA90;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,4492
	ctx.r10.s64 = ctx.r11.s64 + 4492;
	// stw r10,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r10.u32);
loc_8217FA90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82181480
	ctx.lr = 0x8217FACC;
	sub_82181480(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217f890
	ctx.lr = 0x8217FAE8;
	sub_8217F890(ctx, base);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8217fb0c
	if (!ctx.cr6.eq) goto loc_8217FB0C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// b 0x8217fb10
	goto loc_8217FB10;
loc_8217FB0C:
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
loc_8217FB10:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8217fb58
	if (ctx.cr6.eq) goto loc_8217FB58;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// bge cr6,0x8217fb30
	if (!ctx.cr6.lt) goto loc_8217FB30;
	// stw r9,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r9.u32);
loc_8217FB30:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8217fb4c
	if (ctx.cr6.eq) goto loc_8217FB4C;
	// stw r9,-13570(r24)
	PPC_STORE_U32(ctx.r24.u32 + -13570, ctx.r9.u32);
loc_8217FB4C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8217FB58:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217FB64"))) PPC_WEAK_FUNC(sub_8217FB64);
PPC_FUNC_IMPL(__imp__sub_8217FB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217FB68"))) PPC_WEAK_FUNC(sub_8217FB68);
PPC_FUNC_IMPL(__imp__sub_8217FB68) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217fc10
	if (!ctx.cr6.eq) goto loc_8217FC10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82082030
	ctx.lr = 0x8217FBA4;
	sub_82082030(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8217FBB4;
	sub_8233EAF0(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r10,31376
	ctx.r9.s64 = ctx.r10.s64 + 31376;
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
loc_8217FC10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x8217f890
	ctx.lr = 0x8217FC28;
	sub_8217F890(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8217FC4C"))) PPC_WEAK_FUNC(sub_8217FC4C);
PPC_FUNC_IMPL(__imp__sub_8217FC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217FC50"))) PPC_WEAK_FUNC(sub_8217FC50);
PPC_FUNC_IMPL(__imp__sub_8217FC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x8217FC58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8217FC64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217fc64
	if (!ctx.cr6.eq) goto loc_8217FC64;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217fcb4
	if (ctx.cr6.eq) goto loc_8217FCB4;
loc_8217FC90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r31,r28
	ctx.r3.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bl 0x8233d708
	ctx.lr = 0x8217FC9C;
	sub_8233D708(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8217fcc0
	if (ctx.cr6.lt) goto loc_8217FCC0;
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8217fc90
	if (ctx.cr6.lt) goto loc_8217FC90;
loc_8217FCB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_8217FCC0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217FCCC"))) PPC_WEAK_FUNC(sub_8217FCCC);
PPC_FUNC_IMPL(__imp__sub_8217FCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217FCD0"))) PPC_WEAK_FUNC(sub_8217FCD0);
PPC_FUNC_IMPL(__imp__sub_8217FCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lfs f0,36(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lfs f11,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lwz r31,16(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lfs f12,-20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lfs f13,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lfs f9,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,28(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lfs f10,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// fadds f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// fadds f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lfs f3,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f6.f64 = double(temp.f32);
	// lwz r8,32(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lfs f5,-20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f5.f64 = double(temp.f32);
	// stw r3,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r3.u32);
	// lfs f4,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f1,f12,f4,f9
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// lwz r11,80(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// fmadds f2,f13,f3,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fnmsubs f13,f6,f13,f8
	ctx.f13.f64 = double(float(-(ctx.f6.f64 * ctx.f13.f64 - ctx.f8.f64)));
	// stfs f1,28(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// fnmsubs f12,f5,f12,f7
	ctx.f12.f64 = double(float(-(ctx.f5.f64 * ctx.f12.f64 - ctx.f7.f64)));
	// stfs f2,20(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f13,24(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stw r3,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r3.u32);
	// stfs f12,32(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f1,76(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// stw r3,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r3.u32);
	// stfs f2,48(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stfs f1,52(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// beq cr6,0x8217fda8
	if (ctx.cr6.eq) goto loc_8217FDA8;
	// lfs f13,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
loc_8217FDA8:
	// lfs f12,56(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f10,72(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f9,76(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f13,12(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stw r10,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r10.u32);
	// beq cr6,0x8217fddc
	if (ctx.cr6.eq) goto loc_8217FDDC;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r11,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r11.u32);
loc_8217FDDC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f10,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,68(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f11,72(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f8,12(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// stfs f7,84(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217FE20"))) PPC_WEAK_FUNC(sub_8217FE20);
PPC_FUNC_IMPL(__imp__sub_8217FE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x8217FE28;
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r26,44(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r24,48(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f30,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8217FE64:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// lfs f1,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// not r6,r10
	ctx.r6.u64 = ~ctx.r10.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8217ffc0
	ctx.lr = 0x8217FEA0;
	sub_8217FFC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8217ff6c
	if (ctx.cr6.lt) goto loc_8217FF6C;
	// add r11,r24,r26
	ctx.r11.u64 = ctx.r24.u64 + ctx.r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8217ff6c
	if (!ctx.cr6.lt) goto loc_8217FF6C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217ff84
	if (ctx.cr6.eq) goto loc_8217FF84;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8217fee4
	if (ctx.cr6.eq) goto loc_8217FEE4;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_8217FEE4:
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82180528
	ctx.lr = 0x8217FF08;
	sub_82180528(ctx, base);
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bgt cr6,0x8217ff2c
	if (ctx.cr6.gt) goto loc_8217FF2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821809f0
	ctx.lr = 0x8217FF2C;
	sub_821809F0(ctx, base);
loc_8217FF2C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8217ff3c
	if (!ctx.cr6.eq) goto loc_8217FF3C;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_8217FF3C:
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stfs f30,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// b 0x8217fe64
	goto loc_8217FE64;
loc_8217FF6C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8217ff84
	if (ctx.cr6.eq) goto loc_8217FF84;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8217fe64
	goto loc_8217FE64;
loc_8217FF84:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8217ff9c
	if (!ctx.cr6.eq) goto loc_8217FF9C;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x8217fe64
	goto loc_8217FE64;
loc_8217FF9C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82180b48
	ctx.lr = 0x8217FFAC;
	sub_82180B48(ctx, base);
	// addi r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 2;
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

__attribute__((alias("__imp__sub_8217FFC0"))) PPC_WEAK_FUNC(sub_8217FFC0);
PPC_FUNC_IMPL(__imp__sub_8217FFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x8217FFC8;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8233fa20
	ctx.lr = 0x8217FFD0;
	__savefpr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f22,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f22.f64 = double(temp.f32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stfs f22,0(r7)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f26,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f26.f64 = double(temp.f32);
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// beq cr6,0x82180014
	if (ctx.cr6.eq) goto loc_82180014;
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f23,f0,f13
	ctx.f23.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82180018
	goto loc_82180018;
loc_82180014:
	// lfs f23,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f23.f64 = double(temp.f32);
loc_82180018:
	// lwz r26,0(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f0,68(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// fmr f24,f26
	ctx.f24.f64 = ctx.f26.f64;
	// li r25,0
	ctx.r25.s64 = 0;
	// fmuls f28,f0,f1
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82180058
	if (!ctx.cr6.eq) goto loc_82180058;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8233fa6c
	ctx.lr = 0x82180054;
	__restfpr_22(ctx, base);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_82180058:
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lfs f30,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f25,f26
	ctx.f25.f64 = ctx.f26.f64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f29,152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	ctx.f29.f64 = double(temp.f32);
loc_8218007C:
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,57346
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 57346, ctx.xer);
	// bgt cr6,0x82180140
	if (ctx.cr6.gt) goto loc_82180140;
	// beq cr6,0x82180134
	if (ctx.cr6.eq) goto loc_82180134;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821800fc
	if (ctx.cr6.eq) goto loc_821800FC;
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// beq cr6,0x821800fc
	if (ctx.cr6.eq) goto loc_821800FC;
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// bne cr6,0x82180158
	if (!ctx.cr6.eq) goto loc_82180158;
	// fadds f0,f23,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f23.f64 + ctx.f27.f64));
	// fsubs f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821800cc
	if (ctx.cr6.gt) goto loc_821800CC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821800c0
	if (ctx.cr6.eq) goto loc_821800C0;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_821800C0:
	// add r28,r27,r31
	ctx.r28.u64 = ctx.r27.u64 + ctx.r31.u64;
	// fmr f24,f31
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f31.f64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_821800CC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fcmpu cr6,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f26.f64);
	// ble cr6,0x821800e4
	if (!ctx.cr6.gt) goto loc_821800E4;
	// fmadds f13,f29,f28,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f28.f64 + ctx.f30.f64));
	// fadds f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// b 0x821800e8
	goto loc_821800E8;
loc_821800E4:
	// fadds f31,f22,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f22.f64 + ctx.f31.f64));
loc_821800E8:
	// fsubs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821801b8
	if (ctx.cr6.lt) goto loc_821801B8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x821801b8
	goto loc_821801B8;
loc_821800FC:
	// fadds f0,f23,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f23.f64 + ctx.f27.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82180128
	if (ctx.cr6.gt) goto loc_82180128;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82180114
	if (ctx.cr6.eq) goto loc_82180114;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82180114:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82180120
	if (ctx.cr6.eq) goto loc_82180120;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82180120:
	// add r28,r27,r31
	ctx.r28.u64 = ctx.r27.u64 + ctx.r31.u64;
	// fmr f24,f31
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f31.f64;
loc_82180128:
	// li r23,0
	ctx.r23.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x821801b8
	goto loc_821801B8;
loc_82180134:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r27,r27,5
	ctx.r27.s64 = ctx.r27.s64 + 5;
	// b 0x821801b8
	goto loc_821801B8;
loc_82180140:
	// cmplwi cr6,r4,57347
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 57347, ctx.xer);
	// beq cr6,0x821801b4
	if (ctx.cr6.eq) goto loc_821801B4;
	// cmplwi cr6,r4,57348
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 57348, ctx.xer);
	// beq cr6,0x821801a8
	if (ctx.cr6.eq) goto loc_821801A8;
	// cmplwi cr6,r4,57349
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 57349, ctx.xer);
	// beq cr6,0x821801b4
	if (ctx.cr6.eq) goto loc_821801B4;
loc_82180158:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82181dd0
	ctx.lr = 0x82180160;
	sub_82181DD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180174
	if (ctx.cr6.eq) goto loc_82180174;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmr f25,f0
	ctx.f25.f64 = ctx.f0.f64;
	// b 0x82180178
	goto loc_82180178;
loc_82180174:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_82180178:
	// fcmpu cr6,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f26.f64);
	// ble cr6,0x82180194
	if (!ctx.cr6.gt) goto loc_82180194;
	// fmadds f0,f29,f28,f30
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f28.f64 + ctx.f30.f64));
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x821801b8
	goto loc_821801B8;
loc_82180194:
	// fmadds f0,f0,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f30.f64));
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x821801b8
	goto loc_821801B8;
loc_821801A8:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// b 0x821801b8
	goto loc_821801B8;
loc_821801B4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_821801B8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218007c
	if (ctx.cr6.eq) goto loc_8218007C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// beq cr6,0x821801e8
	if (ctx.cr6.eq) goto loc_821801E8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821801e0
	if (!ctx.cr6.eq) goto loc_821801E0;
	// fmr f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f26.f64;
loc_821801E0:
	// fsubs f0,f24,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f30.f64));
	// b 0x821801f8
	goto loc_821801F8;
loc_821801E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821801f4
	if (!ctx.cr6.eq) goto loc_821801F4;
	// fmr f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f26.f64;
loc_821801F4:
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
loc_821801F8:
	// stfs f0,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x8218020c
	if (!ctx.cr6.eq) goto loc_8218020C;
	// add r3,r27,r31
	ctx.r3.u64 = ctx.r27.u64 + ctx.r31.u64;
loc_8218020C:
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r8,r10,r22
	ctx.r8.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lhzx r7,r10,r22
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r22.u32);
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bne cr6,0x82180260
	if (!ctx.cr6.eq) goto loc_82180260;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82180228:
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180244
	if (ctx.cr6.eq) goto loc_82180244;
	// lhzu r10,-2(r9)
	ea = -2 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x82180228
	if (ctx.cr6.eq) goto loc_82180228;
loc_82180244:
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bne cr6,0x82180260
	if (!ctx.cr6.eq) goto loc_82180260;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82180250:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x82180250
	if (ctx.cr6.eq) goto loc_82180250;
loc_82180260:
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180270
	if (ctx.cr6.eq) goto loc_82180270;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82180270:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x821802a8
	if (!ctx.cr6.gt) goto loc_821802A8;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821802a8
	if (ctx.cr6.eq) goto loc_821802A8;
	// extsw r11,r24
	ctx.r11.s64 = ctx.r24.s32;
	// fsubs f0,f23,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f23.f64 - ctx.f0.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fadds f9,f10,f22
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f22.f64));
	// stfs f9,0(r20)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r20.u32 + 0, temp.u32);
loc_821802A8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8233fa6c
	ctx.lr = 0x821802B4;
	__restfpr_22(ctx, base);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

