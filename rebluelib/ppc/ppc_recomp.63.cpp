#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82373040"))) PPC_WEAK_FUNC(sub_82373040);
PPC_FUNC_IMPL(__imp__sub_82373040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-13936(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13936);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82373050;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8236ba30
	ctx.lr = 0x8237307C;
	sub_8236BA30(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lhz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// bl 0x8236d8a0
	ctx.lr = 0x82373090;
	sub_8236D8A0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236b838
	ctx.lr = 0x82373098;
	sub_8236B838(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,82
	ctx.r9.s64 = ctx.r31.s64 + 82;
	// sth r10,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r10.u16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r11,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r11.u16);
loc_823730B4:
	// addi r11,r31,82
	ctx.r11.s64 = ctx.r31.s64 + 82;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823730b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823730B4;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823730FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,82
	ctx.r11.s64 = ctx.r31.s64 + 82;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x8237311C;
	sub_8236B838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82373124;
	sub_82375128(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373048"))) PPC_WEAK_FUNC(sub_82373048);
PPC_FUNC_IMPL(__imp__sub_82373048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82373050;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8236ba30
	ctx.lr = 0x8237307C;
	sub_8236BA30(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lhz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// bl 0x8236d8a0
	ctx.lr = 0x82373090;
	sub_8236D8A0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236b838
	ctx.lr = 0x82373098;
	sub_8236B838(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,82
	ctx.r9.s64 = ctx.r31.s64 + 82;
	// sth r10,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r10.u16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r11,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r11.u16);
loc_823730B4:
	// addi r11,r31,82
	ctx.r11.s64 = ctx.r31.s64 + 82;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823730b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823730B4;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823730FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,82
	ctx.r11.s64 = ctx.r31.s64 + 82;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x8237311C;
	sub_8236B838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82373124;
	sub_82375128(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373130"))) PPC_WEAK_FUNC(sub_82373130);
PPC_FUNC_IMPL(__imp__sub_82373130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82375128
	ctx.lr = 0x82373148;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373158"))) PPC_WEAK_FUNC(sub_82373158);
PPC_FUNC_IMPL(__imp__sub_82373158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8236b838
	ctx.lr = 0x82373170;
	sub_8236B838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373180"))) PPC_WEAK_FUNC(sub_82373180);
PPC_FUNC_IMPL(__imp__sub_82373180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821cc648
	ctx.lr = 0x82373198;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823731A8"))) PPC_WEAK_FUNC(sub_823731A8);
PPC_FUNC_IMPL(__imp__sub_823731A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-13816(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13816);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x823731B8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8236d820
	ctx.lr = 0x823731D8;
	sub_8236D820(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823731F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r9,r31,82
	ctx.r9.s64 = ctx.r31.s64 + 82;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82373210:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82373210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82373210;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// bl 0x8234f138
	ctx.lr = 0x8237323C;
	sub_8234F138(ctx, base);
	// bl 0x8236b8a0
	ctx.lr = 0x82373240;
	sub_8236B8A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82373398
	if (ctx.cr0.eq) goto loc_82373398;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8234f138
	ctx.lr = 0x82373250;
	sub_8234F138(ctx, base);
	// bl 0x82363e08
	ctx.lr = 0x82373254;
	sub_82363E08(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// addi r5,r31,104
	ctx.r5.s64 = ctx.r31.s64 + 104;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// bl 0x822b1478
	ctx.lr = 0x82373264;
	sub_822B1478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237337c
	if (!ctx.cr0.eq) goto loc_8237337C;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8236a338
	ctx.lr = 0x82373274;
	sub_8236A338(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// beq 0x823732dc
	if (ctx.cr0.eq) goto loc_823732DC;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823732bc
	if (ctx.cr6.eq) goto loc_823732BC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8237329C:
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
	// bne 0x8237329c
	if (!ctx.cr0.eq) goto loc_8237329C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823732BC:
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x8236be60
	ctx.lr = 0x823732C4;
	sub_8236BE60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bf40
	ctx.lr = 0x823732D8;
	sub_8236BF40(ctx, base);
	// b 0x823732e0
	goto loc_823732E0;
loc_823732DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823732E0:
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373310
	if (ctx.cr6.eq) goto loc_82373310;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_823732F0:
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
	// bne 0x823732f0
	if (!ctx.cr0.eq) goto loc_823732F0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82373310:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373340
	if (ctx.cr6.eq) goto loc_82373340;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82373320:
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
	// bne 0x82373320
	if (!ctx.cr0.eq) goto loc_82373320;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82373340:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r31,104
	ctx.r5.s64 = ctx.r31.s64 + 104;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82374728
	ctx.lr = 0x82373354;
	sub_82374728(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236d968
	ctx.lr = 0x82373360;
	sub_8236D968(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82373bf0
	ctx.lr = 0x82373370;
	sub_82373BF0(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82373378;
	sub_821C0630(ctx, base);
	// b 0x82373398
	goto loc_82373398;
loc_8237337C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82373e80
	ctx.lr = 0x8237338C;
	sub_82373E80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82373398
	if (!ctx.cr0.eq) goto loc_82373398;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82373398:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236b838
	ctx.lr = 0x823733A0;
	sub_8236B838(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823731B0"))) PPC_WEAK_FUNC(sub_823731B0);
PPC_FUNC_IMPL(__imp__sub_823731B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x823731B8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8236d820
	ctx.lr = 0x823731D8;
	sub_8236D820(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823731F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// sth r11,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// addi r9,r31,82
	ctx.r9.s64 = ctx.r31.s64 + 82;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82373210:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82373210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82373210;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// bl 0x8234f138
	ctx.lr = 0x8237323C;
	sub_8234F138(ctx, base);
	// bl 0x8236b8a0
	ctx.lr = 0x82373240;
	sub_8236B8A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82373398
	if (ctx.cr0.eq) goto loc_82373398;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8234f138
	ctx.lr = 0x82373250;
	sub_8234F138(ctx, base);
	// bl 0x82363e08
	ctx.lr = 0x82373254;
	sub_82363E08(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// addi r5,r31,104
	ctx.r5.s64 = ctx.r31.s64 + 104;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// bl 0x822b1478
	ctx.lr = 0x82373264;
	sub_822B1478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237337c
	if (!ctx.cr0.eq) goto loc_8237337C;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8236a338
	ctx.lr = 0x82373274;
	sub_8236A338(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// beq 0x823732dc
	if (ctx.cr0.eq) goto loc_823732DC;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823732bc
	if (ctx.cr6.eq) goto loc_823732BC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8237329C:
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
	// bne 0x8237329c
	if (!ctx.cr0.eq) goto loc_8237329C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823732BC:
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x8236be60
	ctx.lr = 0x823732C4;
	sub_8236BE60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bf40
	ctx.lr = 0x823732D8;
	sub_8236BF40(ctx, base);
	// b 0x823732e0
	goto loc_823732E0;
loc_823732DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823732E0:
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373310
	if (ctx.cr6.eq) goto loc_82373310;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_823732F0:
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
	// bne 0x823732f0
	if (!ctx.cr0.eq) goto loc_823732F0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82373310:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373340
	if (ctx.cr6.eq) goto loc_82373340;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82373320:
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
	// bne 0x82373320
	if (!ctx.cr0.eq) goto loc_82373320;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82373340:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r31,104
	ctx.r5.s64 = ctx.r31.s64 + 104;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82374728
	ctx.lr = 0x82373354;
	sub_82374728(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236d968
	ctx.lr = 0x82373360;
	sub_8236D968(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82373bf0
	ctx.lr = 0x82373370;
	sub_82373BF0(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x82373378;
	sub_821C0630(ctx, base);
	// b 0x82373398
	goto loc_82373398;
loc_8237337C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82373e80
	ctx.lr = 0x8237338C;
	sub_82373E80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82373398
	if (!ctx.cr0.eq) goto loc_82373398;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82373398:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236b838
	ctx.lr = 0x823733A0;
	sub_8236B838(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823733AC"))) PPC_WEAK_FUNC(sub_823733AC);
PPC_FUNC_IMPL(__imp__sub_823733AC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821cc648
	ctx.lr = 0x823733C4;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823733D4"))) PPC_WEAK_FUNC(sub_823733D4);
PPC_FUNC_IMPL(__imp__sub_823733D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82350110
	ctx.lr = 0x823733EC;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823733FC"))) PPC_WEAK_FUNC(sub_823733FC);
PPC_FUNC_IMPL(__imp__sub_823733FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x821c0630
	ctx.lr = 0x82373414;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373424"))) PPC_WEAK_FUNC(sub_82373424);
PPC_FUNC_IMPL(__imp__sub_82373424) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821c0630
	ctx.lr = 0x8237343C;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237344C"))) PPC_WEAK_FUNC(sub_8237344C);
PPC_FUNC_IMPL(__imp__sub_8237344C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373450"))) PPC_WEAK_FUNC(sub_82373450);
PPC_FUNC_IMPL(__imp__sub_82373450) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82373464:
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
	// bne 0x82373464
	if (!ctx.cr0.eq) goto loc_82373464;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373488"))) PPC_WEAK_FUNC(sub_82373488);
PPC_FUNC_IMPL(__imp__sub_82373488) {
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
	// b 0x823734b4
	goto loc_823734B4;
loc_823734A4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8236a3f0
	ctx.lr = 0x823734B0;
	sub_8236A3F0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_823734B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823734a4
	if (!ctx.cr6.eq) goto loc_823734A4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823734E0"))) PPC_WEAK_FUNC(sub_823734E0);
PPC_FUNC_IMPL(__imp__sub_823734E0) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82373524
	if (!ctx.cr6.gt) goto loc_82373524;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82373564
	if (!ctx.cr6.gt) goto loc_82373564;
loc_82373524:
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,13988
	ctx.r6.s64 = ctx.r8.s64 + 13988;
	// addi r9,r11,13944
	ctx.r9.s64 = ctx.r11.s64 + 13944;
	// addi r7,r10,-13696
	ctx.r7.s64 = ctx.r10.s64 + -13696;
	// addi r5,r5,13840
	ctx.r5.s64 = ctx.r5.s64 + 13840;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,479
	ctx.r8.s64 = 479;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82373558;
	sub_82372320(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82373564:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8236b768
	ctx.lr = 0x82373574;
	sub_8236B768(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x8236a338
	ctx.lr = 0x823735A8;
	sub_8236A338(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233eaf0
	ctx.lr = 0x823735BC;
	sub_8233EAF0(ctx, base);
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

__attribute__((alias("__imp__sub_823735D8"))) PPC_WEAK_FUNC(sub_823735D8);
PPC_FUNC_IMPL(__imp__sub_823735D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-13576(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13576);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x821c0630
	ctx.lr = 0x82373608;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375128
	ctx.lr = 0x82373610;
	sub_82375128(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823735E0"))) PPC_WEAK_FUNC(sub_823735E0);
PPC_FUNC_IMPL(__imp__sub_823735E0) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x821c0630
	ctx.lr = 0x82373608;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375128
	ctx.lr = 0x82373610;
	sub_82375128(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373628"))) PPC_WEAK_FUNC(sub_82373628);
PPC_FUNC_IMPL(__imp__sub_82373628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82375128
	ctx.lr = 0x82373640;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373650"))) PPC_WEAK_FUNC(sub_82373650);
PPC_FUNC_IMPL(__imp__sub_82373650) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82373488
	sub_82373488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373658"))) PPC_WEAK_FUNC(sub_82373658);
PPC_FUNC_IMPL(__imp__sub_82373658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82373660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8237368c
	if (ctx.cr6.eq) goto loc_8237368C;
loc_82373678:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x82373680;
	sub_82375128(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82373678
	if (!ctx.cr0.eq) goto loc_82373678;
loc_8237368C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x82373694;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823736AC"))) PPC_WEAK_FUNC(sub_823736AC);
PPC_FUNC_IMPL(__imp__sub_823736AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823736B0"))) PPC_WEAK_FUNC(sub_823736B0);
PPC_FUNC_IMPL(__imp__sub_823736B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x823736B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82373720
	if (!ctx.cr6.gt) goto loc_82373720;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_823736D8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x823736fc
	goto loc_823736FC;
loc_823736E4:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r29,16(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823735e0
	ctx.lr = 0x823736F4;
	sub_823735E0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x823736FC;
	sub_8236A3F0(ctx, base);
loc_823736FC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x823736e4
	if (!ctx.cr6.eq) goto loc_823736E4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823736d8
	if (ctx.cr6.lt) goto loc_823736D8;
loc_82373720:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237372C"))) PPC_WEAK_FUNC(sub_8237372C);
PPC_FUNC_IMPL(__imp__sub_8237372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373730"))) PPC_WEAK_FUNC(sub_82373730);
PPC_FUNC_IMPL(__imp__sub_82373730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-13512(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13512);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82373658
	ctx.lr = 0x82373760;
	sub_82373658(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x82373768;
	sub_821C0630(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373738"))) PPC_WEAK_FUNC(sub_82373738);
PPC_FUNC_IMPL(__imp__sub_82373738) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82373658
	ctx.lr = 0x82373760;
	sub_82373658(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x82373768;
	sub_821C0630(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373780"))) PPC_WEAK_FUNC(sub_82373780);
PPC_FUNC_IMPL(__imp__sub_82373780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x821c0630
	ctx.lr = 0x82373798;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823737A8"))) PPC_WEAK_FUNC(sub_823737A8);
PPC_FUNC_IMPL(__imp__sub_823737A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-13384(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13384);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-13456
	ctx.r11.s64 = ctx.r11.s64 + -13456;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// bl 0x823736b0
	ctx.lr = 0x823737E4;
	sub_823736B0(ctx, base);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x8236a3f0
	ctx.lr = 0x823737EC;
	sub_8236A3F0(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82373488
	ctx.lr = 0x823737F8;
	sub_82373488(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82373738
	ctx.lr = 0x82373800;
	sub_82373738(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x821c0630
	ctx.lr = 0x82373808;
	sub_821C0630(ctx, base);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x8236a3f0
	ctx.lr = 0x82373818;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823737B0"))) PPC_WEAK_FUNC(sub_823737B0);
PPC_FUNC_IMPL(__imp__sub_823737B0) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-13456
	ctx.r11.s64 = ctx.r11.s64 + -13456;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// bl 0x823736b0
	ctx.lr = 0x823737E4;
	sub_823736B0(ctx, base);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x8236a3f0
	ctx.lr = 0x823737EC;
	sub_8236A3F0(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82373488
	ctx.lr = 0x823737F8;
	sub_82373488(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82373738
	ctx.lr = 0x82373800;
	sub_82373738(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x821c0630
	ctx.lr = 0x82373808;
	sub_821C0630(ctx, base);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x8236a3f0
	ctx.lr = 0x82373818;
	sub_8236A3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373840"))) PPC_WEAK_FUNC(sub_82373840);
PPC_FUNC_IMPL(__imp__sub_82373840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8236a878
	ctx.lr = 0x8237385C;
	sub_8236A878(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237386C"))) PPC_WEAK_FUNC(sub_8237386C);
PPC_FUNC_IMPL(__imp__sub_8237386C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x821c0630
	ctx.lr = 0x82373888;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373898"))) PPC_WEAK_FUNC(sub_82373898);
PPC_FUNC_IMPL(__imp__sub_82373898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x82373738
	ctx.lr = 0x823738B4;
	sub_82373738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823738C4"))) PPC_WEAK_FUNC(sub_823738C4);
PPC_FUNC_IMPL(__imp__sub_823738C4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x82373650
	ctx.lr = 0x823738E0;
	sub_82373650(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823738F0"))) PPC_WEAK_FUNC(sub_823738F0);
PPC_FUNC_IMPL(__imp__sub_823738F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-13272(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13272);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82373900;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-13456
	ctx.r11.s64 = ctx.r11.s64 + -13456;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82374b60
	ctx.lr = 0x82373944;
	sub_82374B60(ctx, base);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x823746c0
	ctx.lr = 0x82373958;
	sub_823746C0(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x8234f138
	ctx.lr = 0x82373960;
	sub_8234F138(ctx, base);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82374d10
	ctx.lr = 0x82373968;
	sub_82374D10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f1,-1612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1612);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823734e0
	ctx.lr = 0x8237397C;
	sub_823734E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823738F8"))) PPC_WEAK_FUNC(sub_823738F8);
PPC_FUNC_IMPL(__imp__sub_823738F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82373900;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-13456
	ctx.r11.s64 = ctx.r11.s64 + -13456;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82374b60
	ctx.lr = 0x82373944;
	sub_82374B60(ctx, base);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x823746c0
	ctx.lr = 0x82373958;
	sub_823746C0(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x8234f138
	ctx.lr = 0x82373960;
	sub_8234F138(ctx, base);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82374d10
	ctx.lr = 0x82373968;
	sub_82374D10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f1,-1612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1612);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823734e0
	ctx.lr = 0x8237397C;
	sub_823734E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373988"))) PPC_WEAK_FUNC(sub_82373988);
PPC_FUNC_IMPL(__imp__sub_82373988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8236a878
	ctx.lr = 0x823739A4;
	sub_8236A878(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823739B4"))) PPC_WEAK_FUNC(sub_823739B4);
PPC_FUNC_IMPL(__imp__sub_823739B4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x821c0630
	ctx.lr = 0x823739D0;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823739E0"))) PPC_WEAK_FUNC(sub_823739E0);
PPC_FUNC_IMPL(__imp__sub_823739E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x82373738
	ctx.lr = 0x823739FC;
	sub_82373738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373A0C"))) PPC_WEAK_FUNC(sub_82373A0C);
PPC_FUNC_IMPL(__imp__sub_82373A0C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x82373650
	ctx.lr = 0x82373A28;
	sub_82373650(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373A38"))) PPC_WEAK_FUNC(sub_82373A38);
PPC_FUNC_IMPL(__imp__sub_82373A38) {
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
	// bl 0x823737b0
	ctx.lr = 0x82373A58;
	sub_823737B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82373a68
	if (ctx.cr0.eq) goto loc_82373A68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82373A68;
	sub_8236A3F0(ctx, base);
loc_82373A68:
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

__attribute__((alias("__imp__sub_82373A84"))) PPC_WEAK_FUNC(sub_82373A84);
PPC_FUNC_IMPL(__imp__sub_82373A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373A88"))) PPC_WEAK_FUNC(sub_82373A88);
PPC_FUNC_IMPL(__imp__sub_82373A88) {
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
	// bl 0x822b1410
	ctx.lr = 0x82373A98;
	sub_822B1410(ctx, base);
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

__attribute__((alias("__imp__sub_82373AB0"))) PPC_WEAK_FUNC(sub_82373AB0);
PPC_FUNC_IMPL(__imp__sub_82373AB0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x822b1420
	ctx.lr = 0x82373AC8;
	sub_822B1420(ctx, base);
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

__attribute__((alias("__imp__sub_82373AE0"))) PPC_WEAK_FUNC(sub_82373AE0);
PPC_FUNC_IMPL(__imp__sub_82373AE0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373b18
	if (ctx.cr6.eq) goto loc_82373B18;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82373b18
	if (ctx.cr6.eq) goto loc_82373B18;
	// bl 0x82373be0
	ctx.lr = 0x82373B10;
	sub_82373BE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82373b4c
	goto loc_82373B4C;
loc_82373B18:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-13104
	ctx.r6.s64 = ctx.r8.s64 + -13104;
	// addi r9,r11,-13132
	ctx.r9.s64 = ctx.r11.s64 + -13132;
	// addi r7,r10,-13168
	ctx.r7.s64 = ctx.r10.s64 + -13168;
	// addi r5,r5,-13192
	ctx.r5.s64 = ctx.r5.s64 + -13192;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,31
	ctx.r8.s64 = 31;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82373B4C;
	sub_82372320(ctx, base);
loc_82373B4C:
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

__attribute__((alias("__imp__sub_82373B64"))) PPC_WEAK_FUNC(sub_82373B64);
PPC_FUNC_IMPL(__imp__sub_82373B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373B68"))) PPC_WEAK_FUNC(sub_82373B68);
PPC_FUNC_IMPL(__imp__sub_82373B68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373B74"))) PPC_WEAK_FUNC(sub_82373B74);
PPC_FUNC_IMPL(__imp__sub_82373B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373B78"))) PPC_WEAK_FUNC(sub_82373B78);
PPC_FUNC_IMPL(__imp__sub_82373B78) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82373bc0
	if (ctx.cr6.eq) goto loc_82373BC0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82373BA0:
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
	// bne 0x82373ba0
	if (!ctx.cr0.eq) goto loc_82373BA0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82373BC0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82375128
	ctx.lr = 0x82373BC8;
	sub_82375128(ctx, base);
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

__attribute__((alias("__imp__sub_82373BE0"))) PPC_WEAK_FUNC(sub_82373BE0);
PPC_FUNC_IMPL(__imp__sub_82373BE0) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x8237da60
	sub_8237DA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373BEC"))) PPC_WEAK_FUNC(sub_82373BEC);
PPC_FUNC_IMPL(__imp__sub_82373BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373BF0"))) PPC_WEAK_FUNC(sub_82373BF0);
PPC_FUNC_IMPL(__imp__sub_82373BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// sth r5,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r5.u16);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373C00"))) PPC_WEAK_FUNC(sub_82373C00);
PPC_FUNC_IMPL(__imp__sub_82373C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-13048(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13048);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82373C10;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// bl 0x8236ba30
	ctx.lr = 0x82373C38;
	sub_8236BA30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lhz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 24);
	// bl 0x8236d8a0
	ctx.lr = 0x82373C48;
	sub_8236D8A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236b838
	ctx.lr = 0x82373C58;
	sub_8236B838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373C08"))) PPC_WEAK_FUNC(sub_82373C08);
PPC_FUNC_IMPL(__imp__sub_82373C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82373C10;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// bl 0x8236ba30
	ctx.lr = 0x82373C38;
	sub_8236BA30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lhz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 24);
	// bl 0x8236d8a0
	ctx.lr = 0x82373C48;
	sub_8236D8A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236b838
	ctx.lr = 0x82373C58;
	sub_8236B838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373C64"))) PPC_WEAK_FUNC(sub_82373C64);
PPC_FUNC_IMPL(__imp__sub_82373C64) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236b838
	ctx.lr = 0x82373C7C;
	sub_8236B838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373C8C"))) PPC_WEAK_FUNC(sub_82373C8C);
PPC_FUNC_IMPL(__imp__sub_82373C8C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82373cbc
	if (ctx.cr0.eq) goto loc_82373CBC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x821cc648
	ctx.lr = 0x82373CBC;
	sub_821CC648(ctx, base);
loc_82373CBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373CCC"))) PPC_WEAK_FUNC(sub_82373CCC);
PPC_FUNC_IMPL(__imp__sub_82373CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373CD0"))) PPC_WEAK_FUNC(sub_82373CD0);
PPC_FUNC_IMPL(__imp__sub_82373CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-12960(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12960);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82373CE0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-12984
	ctx.r11.s64 = ctx.r11.s64 + -12984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82373d40
	if (ctx.cr6.eq) goto loc_82373D40;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82373D20:
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
	// bne 0x82373d20
	if (!ctx.cr0.eq) goto loc_82373D20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82373D40:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8237d9d8
	ctx.lr = 0x82373D4C;
	sub_8237D9D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82373D54;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373CD8"))) PPC_WEAK_FUNC(sub_82373CD8);
PPC_FUNC_IMPL(__imp__sub_82373CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82373CE0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-12984
	ctx.r11.s64 = ctx.r11.s64 + -12984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82373d40
	if (ctx.cr6.eq) goto loc_82373D40;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82373D20:
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
	// bne 0x82373d20
	if (!ctx.cr0.eq) goto loc_82373D20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82373D40:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8237d9d8
	ctx.lr = 0x82373D4C;
	sub_8237D9D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82373D54;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373D60"))) PPC_WEAK_FUNC(sub_82373D60);
PPC_FUNC_IMPL(__imp__sub_82373D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x821c0630
	ctx.lr = 0x82373D78;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373D88"))) PPC_WEAK_FUNC(sub_82373D88);
PPC_FUNC_IMPL(__imp__sub_82373D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8236db30
	ctx.lr = 0x82373DA0;
	sub_8236DB30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373DB0"))) PPC_WEAK_FUNC(sub_82373DB0);
PPC_FUNC_IMPL(__imp__sub_82373DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-12872(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12872);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x821c0630
	ctx.lr = 0x82373DE0;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236db30
	ctx.lr = 0x82373DE8;
	sub_8236DB30(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373DB8"))) PPC_WEAK_FUNC(sub_82373DB8);
PPC_FUNC_IMPL(__imp__sub_82373DB8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x821c0630
	ctx.lr = 0x82373DE0;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236db30
	ctx.lr = 0x82373DE8;
	sub_8236DB30(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373E00"))) PPC_WEAK_FUNC(sub_82373E00);
PPC_FUNC_IMPL(__imp__sub_82373E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8236db30
	ctx.lr = 0x82373E18;
	sub_8236DB30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373E28"))) PPC_WEAK_FUNC(sub_82373E28);
PPC_FUNC_IMPL(__imp__sub_82373E28) {
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
	// bl 0x82373db8
	ctx.lr = 0x82373E48;
	sub_82373DB8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82373e58
	if (ctx.cr0.eq) goto loc_82373E58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82373E58;
	sub_8236A3F0(ctx, base);
loc_82373E58:
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

__attribute__((alias("__imp__sub_82373E74"))) PPC_WEAK_FUNC(sub_82373E74);
PPC_FUNC_IMPL(__imp__sub_82373E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373E78"))) PPC_WEAK_FUNC(sub_82373E78);
PPC_FUNC_IMPL(__imp__sub_82373E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-12680(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12680);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82373E88;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82373f90
	if (ctx.cr6.eq) goto loc_82373F90;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82373EB8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// beq cr6,0x82373ef4
	if (ctx.cr6.eq) goto loc_82373EF4;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
loc_82373ED4:
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
	// bne 0x82373ed4
	if (!ctx.cr0.eq) goto loc_82373ED4;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82373EF4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82373f18
	if (ctx.cr6.eq) goto loc_82373F18;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82373c08
	ctx.lr = 0x82373F04;
	sub_82373C08(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8236d920
	ctx.lr = 0x82373F0C;
	sub_8236D920(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x82373F18;
	sub_8236B838(ctx, base);
loc_82373F18:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82373f3c
	if (ctx.cr0.eq) goto loc_82373F3C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82373f38
	if (!ctx.cr6.eq) goto loc_82373F38;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// bl 0x823689c8
	ctx.lr = 0x82373F38;
	sub_823689C8(ctx, base);
loc_82373F38:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82373F3C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82373F44;
	sub_82375128(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82373eb8
	if (!ctx.cr0.eq) goto loc_82373EB8;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// ble cr6,0x82373f90
	if (!ctx.cr6.gt) goto loc_82373F90;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r10,-12728
	ctx.r7.s64 = ctx.r10.s64 + -12728;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12804
	ctx.r9.s64 = ctx.r11.s64 + -12804;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r8,86
	ctx.r8.s64 = 86;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82373F90;
	sub_82372320(ctx, base);
loc_82373F90:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373E80"))) PPC_WEAK_FUNC(sub_82373E80);
PPC_FUNC_IMPL(__imp__sub_82373E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82373E88;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82373f90
	if (ctx.cr6.eq) goto loc_82373F90;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82373EB8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// beq cr6,0x82373ef4
	if (ctx.cr6.eq) goto loc_82373EF4;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
loc_82373ED4:
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
	// bne 0x82373ed4
	if (!ctx.cr0.eq) goto loc_82373ED4;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82373EF4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82373f18
	if (ctx.cr6.eq) goto loc_82373F18;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82373c08
	ctx.lr = 0x82373F04;
	sub_82373C08(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8236d920
	ctx.lr = 0x82373F0C;
	sub_8236D920(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236b838
	ctx.lr = 0x82373F18;
	sub_8236B838(ctx, base);
loc_82373F18:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82373f3c
	if (ctx.cr0.eq) goto loc_82373F3C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82373f38
	if (!ctx.cr6.eq) goto loc_82373F38;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// bl 0x823689c8
	ctx.lr = 0x82373F38;
	sub_823689C8(ctx, base);
loc_82373F38:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82373F3C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82373F44;
	sub_82375128(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82373eb8
	if (!ctx.cr0.eq) goto loc_82373EB8;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// ble cr6,0x82373f90
	if (!ctx.cr6.gt) goto loc_82373F90;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r10,-12728
	ctx.r7.s64 = ctx.r10.s64 + -12728;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12804
	ctx.r9.s64 = ctx.r11.s64 + -12804;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r8,86
	ctx.r8.s64 = 86;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82373F90;
	sub_82372320(ctx, base);
loc_82373F90:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373F9C"))) PPC_WEAK_FUNC(sub_82373F9C);
PPC_FUNC_IMPL(__imp__sub_82373F9C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82373FB4;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373FC4"))) PPC_WEAK_FUNC(sub_82373FC4);
PPC_FUNC_IMPL(__imp__sub_82373FC4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821cc648
	ctx.lr = 0x82373FDC;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373FEC"))) PPC_WEAK_FUNC(sub_82373FEC);
PPC_FUNC_IMPL(__imp__sub_82373FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373FF0"))) PPC_WEAK_FUNC(sub_82373FF0);
PPC_FUNC_IMPL(__imp__sub_82373FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-12504(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12504);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82374000;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x822b1478
	ctx.lr = 0x82374028;
	sub_822B1478(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x823740cc
	if (ctx.cr0.eq) goto loc_823740CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823740b4
	if (ctx.cr6.eq) goto loc_823740B4;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8236a338
	ctx.lr = 0x82374048;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823740a4
	if (ctx.cr0.eq) goto loc_823740A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82374088
	if (ctx.cr6.eq) goto loc_82374088;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82374068:
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
	// bne 0x82374068
	if (!ctx.cr0.eq) goto loc_82374068;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82374088:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lhz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// bl 0x8236bf40
	ctx.lr = 0x8237409C;
	sub_8236BF40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823740a8
	goto loc_823740A8;
loc_823740A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823740A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82350190
	ctx.lr = 0x823740B0;
	sub_82350190(ctx, base);
	// b 0x82374100
	goto loc_82374100;
loc_823740B4:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12528
	ctx.r9.s64 = ctx.r11.s64 + -12528;
	// li r8,167
	ctx.r8.s64 = 167;
	// b 0x823740e0
	goto loc_823740E0;
loc_823740CC:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12552
	ctx.r9.s64 = ctx.r11.s64 + -12552;
	// li r8,172
	ctx.r8.s64 = 172;
loc_823740E0:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r10,-12584
	ctx.r7.s64 = ctx.r10.s64 + -12584;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82374100;
	sub_82372320(ctx, base);
loc_82374100:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373FF8"))) PPC_WEAK_FUNC(sub_82373FF8);
PPC_FUNC_IMPL(__imp__sub_82373FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82374000;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x822b1478
	ctx.lr = 0x82374028;
	sub_822B1478(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x823740cc
	if (ctx.cr0.eq) goto loc_823740CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823740b4
	if (ctx.cr6.eq) goto loc_823740B4;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8236a338
	ctx.lr = 0x82374048;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823740a4
	if (ctx.cr0.eq) goto loc_823740A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82374088
	if (ctx.cr6.eq) goto loc_82374088;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82374068:
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
	// bne 0x82374068
	if (!ctx.cr0.eq) goto loc_82374068;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82374088:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lhz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// bl 0x8236bf40
	ctx.lr = 0x8237409C;
	sub_8236BF40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823740a8
	goto loc_823740A8;
loc_823740A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823740A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82350190
	ctx.lr = 0x823740B0;
	sub_82350190(ctx, base);
	// b 0x82374100
	goto loc_82374100;
loc_823740B4:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12528
	ctx.r9.s64 = ctx.r11.s64 + -12528;
	// li r8,167
	ctx.r8.s64 = 167;
	// b 0x823740e0
	goto loc_823740E0;
loc_823740CC:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12552
	ctx.r9.s64 = ctx.r11.s64 + -12552;
	// li r8,172
	ctx.r8.s64 = 172;
loc_823740E0:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r10,-12584
	ctx.r7.s64 = ctx.r10.s64 + -12584;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82374100;
	sub_82372320(ctx, base);
loc_82374100:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237410C"))) PPC_WEAK_FUNC(sub_8237410C);
PPC_FUNC_IMPL(__imp__sub_8237410C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82350110
	ctx.lr = 0x82374124;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374134"))) PPC_WEAK_FUNC(sub_82374134);
PPC_FUNC_IMPL(__imp__sub_82374134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374138"))) PPC_WEAK_FUNC(sub_82374138);
PPC_FUNC_IMPL(__imp__sub_82374138) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x822b1490
	ctx.lr = 0x82374160;
	sub_822B1490(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82374188
	if (!ctx.cr0.eq) goto loc_82374188;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8237416C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237416c
	if (!ctx.cr6.eq) goto loc_8237416C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82374188:
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

__attribute__((alias("__imp__sub_823741A4"))) PPC_WEAK_FUNC(sub_823741A4);
PPC_FUNC_IMPL(__imp__sub_823741A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823741A8"))) PPC_WEAK_FUNC(sub_823741A8);
PPC_FUNC_IMPL(__imp__sub_823741A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-12336(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12336);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82374214
	if (!ctx.cr6.eq) goto loc_82374214;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12388
	ctx.r9.s64 = ctx.r11.s64 + -12388;
	// addi r7,r10,-12424
	ctx.r7.s64 = ctx.r10.s64 + -12424;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,254
	ctx.r8.s64 = 254;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82374210;
	sub_82372320(ctx, base);
	// b 0x8237421c
	goto loc_8237421C;
loc_82374214:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823689c8
	ctx.lr = 0x8237421C;
	sub_823689C8(ctx, base);
loc_8237421C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x82374224;
	sub_821C0630(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823741B0"))) PPC_WEAK_FUNC(sub_823741B0);
PPC_FUNC_IMPL(__imp__sub_823741B0) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82374214
	if (!ctx.cr6.eq) goto loc_82374214;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12388
	ctx.r9.s64 = ctx.r11.s64 + -12388;
	// addi r7,r10,-12424
	ctx.r7.s64 = ctx.r10.s64 + -12424;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,254
	ctx.r8.s64 = 254;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82374210;
	sub_82372320(ctx, base);
	// b 0x8237421c
	goto loc_8237421C;
loc_82374214:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823689c8
	ctx.lr = 0x8237421C;
	sub_823689C8(ctx, base);
loc_8237421C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x82374224;
	sub_821C0630(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237423C"))) PPC_WEAK_FUNC(sub_8237423C);
PPC_FUNC_IMPL(__imp__sub_8237423C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x821c0630
	ctx.lr = 0x82374254;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374264"))) PPC_WEAK_FUNC(sub_82374264);
PPC_FUNC_IMPL(__imp__sub_82374264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374268"))) PPC_WEAK_FUNC(sub_82374268);
PPC_FUNC_IMPL(__imp__sub_82374268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-12224(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12224);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82374278;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823742d8
	if (!ctx.cr6.eq) goto loc_823742D8;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12280
	ctx.r9.s64 = ctx.r11.s64 + -12280;
	// addi r7,r10,-12728
	ctx.r7.s64 = ctx.r10.s64 + -12728;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,107
	ctx.r8.s64 = 107;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x823742D4;
	sub_82372320(ctx, base);
	// b 0x823743f4
	goto loc_823743F4;
loc_823742D8:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823742E0:
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
	// bne 0x823742e0
	if (!ctx.cr0.eq) goto loc_823742E0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8237d9d8
	ctx.lr = 0x8237430C;
	sub_8237D9D8(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823743ec
	if (ctx.cr6.eq) goto loc_823743EC;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82374324:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82374360
	if (ctx.cr6.eq) goto loc_82374360;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82374340:
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
	// bne 0x82374340
	if (!ctx.cr0.eq) goto loc_82374340;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82374360:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82374374
	if (ctx.cr6.eq) goto loc_82374374;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8237da60
	ctx.lr = 0x82374374;
	sub_8237DA60(ctx, base);
loc_82374374:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82374398
	if (ctx.cr0.eq) goto loc_82374398;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82374394
	if (!ctx.cr6.eq) goto loc_82374394;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x823689c8
	ctx.lr = 0x82374394;
	sub_823689C8(ctx, base);
loc_82374394:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82374398:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x823743A0;
	sub_82375128(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82374324
	if (!ctx.cr0.eq) goto loc_82374324;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x823743ec
	if (!ctx.cr6.gt) goto loc_823743EC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r10,-12728
	ctx.r7.s64 = ctx.r10.s64 + -12728;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12804
	ctx.r9.s64 = ctx.r11.s64 + -12804;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r8,138
	ctx.r8.s64 = 138;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823743EC;
	sub_82372320(ctx, base);
loc_823743EC:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x823743F4;
	sub_821C0630(ctx, base);
loc_823743F4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c0630
	ctx.lr = 0x823743FC;
	sub_821C0630(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82374270"))) PPC_WEAK_FUNC(sub_82374270);
PPC_FUNC_IMPL(__imp__sub_82374270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82374278;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823742d8
	if (!ctx.cr6.eq) goto loc_823742D8;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12280
	ctx.r9.s64 = ctx.r11.s64 + -12280;
	// addi r7,r10,-12728
	ctx.r7.s64 = ctx.r10.s64 + -12728;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,107
	ctx.r8.s64 = 107;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x823742D4;
	sub_82372320(ctx, base);
	// b 0x823743f4
	goto loc_823743F4;
loc_823742D8:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823742E0:
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
	// bne 0x823742e0
	if (!ctx.cr0.eq) goto loc_823742E0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8237d9d8
	ctx.lr = 0x8237430C;
	sub_8237D9D8(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823743ec
	if (ctx.cr6.eq) goto loc_823743EC;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82374324:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82374360
	if (ctx.cr6.eq) goto loc_82374360;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82374340:
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
	// bne 0x82374340
	if (!ctx.cr0.eq) goto loc_82374340;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82374360:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82374374
	if (ctx.cr6.eq) goto loc_82374374;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8237da60
	ctx.lr = 0x82374374;
	sub_8237DA60(ctx, base);
loc_82374374:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82374398
	if (ctx.cr0.eq) goto loc_82374398;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82374394
	if (!ctx.cr6.eq) goto loc_82374394;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x823689c8
	ctx.lr = 0x82374394;
	sub_823689C8(ctx, base);
loc_82374394:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82374398:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x823743A0;
	sub_82375128(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82374324
	if (!ctx.cr0.eq) goto loc_82374324;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x823743ec
	if (!ctx.cr6.gt) goto loc_823743EC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r10,-12728
	ctx.r7.s64 = ctx.r10.s64 + -12728;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12804
	ctx.r9.s64 = ctx.r11.s64 + -12804;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r8,138
	ctx.r8.s64 = 138;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823743EC;
	sub_82372320(ctx, base);
loc_823743EC:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x821c0630
	ctx.lr = 0x823743F4;
	sub_821C0630(ctx, base);
loc_823743F4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c0630
	ctx.lr = 0x823743FC;
	sub_821C0630(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82374408"))) PPC_WEAK_FUNC(sub_82374408);
PPC_FUNC_IMPL(__imp__sub_82374408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x821c0630
	ctx.lr = 0x82374420;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374430"))) PPC_WEAK_FUNC(sub_82374430);
PPC_FUNC_IMPL(__imp__sub_82374430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823502c0
	ctx.lr = 0x82374448;
	sub_823502C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374458"))) PPC_WEAK_FUNC(sub_82374458);
PPC_FUNC_IMPL(__imp__sub_82374458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82374470;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374480"))) PPC_WEAK_FUNC(sub_82374480);
PPC_FUNC_IMPL(__imp__sub_82374480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82374488;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823744a4
	if (ctx.cr6.gt) goto loc_823744A4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823744A4:
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x823744d0
	if (ctx.cr0.eq) goto loc_823744D0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8236a338
	ctx.lr = 0x823744B8;
	sub_8236A338(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823502c8
	ctx.lr = 0x823744D0;
	sub_823502C8(ctx, base);
loc_823744D0:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823744f4
	if (ctx.cr6.eq) goto loc_823744F4;
loc_823744E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x823744E8;
	sub_82375128(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x823744e0
	if (!ctx.cr0.eq) goto loc_823744E0;
loc_823744F4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x823744FC;
	sub_8236A3F0(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237450C"))) PPC_WEAK_FUNC(sub_8237450C);
PPC_FUNC_IMPL(__imp__sub_8237450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374510"))) PPC_WEAK_FUNC(sub_82374510);
PPC_FUNC_IMPL(__imp__sub_82374510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82374518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823745b4
	if (!ctx.cr6.gt) goto loc_823745B4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82374544
	if (ctx.cr6.gt) goto loc_82374544;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82374544:
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82374554
	if (ctx.cr6.gt) goto loc_82374554;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82374554:
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x82374584
	if (ctx.cr0.eq) goto loc_82374584;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8236a338
	ctx.lr = 0x8237456C;
	sub_8236A338(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823502c8
	ctx.lr = 0x82374584;
	sub_823502C8(ctx, base);
loc_82374584:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823745a8
	if (ctx.cr6.eq) goto loc_823745A8;
loc_82374594:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x8237459C;
	sub_82375128(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82374594
	if (!ctx.cr0.eq) goto loc_82374594;
loc_823745A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236a3f0
	ctx.lr = 0x823745B0;
	sub_8236A3F0(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_823745B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823745BC"))) PPC_WEAK_FUNC(sub_823745BC);
PPC_FUNC_IMPL(__imp__sub_823745BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823745C0"))) PPC_WEAK_FUNC(sub_823745C0);
PPC_FUNC_IMPL(__imp__sub_823745C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823745f4
	if (!ctx.cr6.eq) goto loc_823745F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82374480
	ctx.lr = 0x823745F4;
	sub_82374480(ctx, base);
loc_823745F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8237463c
	if (ctx.cr0.eq) goto loc_8237463C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8237463c
	if (ctx.cr6.eq) goto loc_8237463C;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8237461C:
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
	// bne 0x8237461c
	if (!ctx.cr0.eq) goto loc_8237461C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8237463C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82374660"))) PPC_WEAK_FUNC(sub_82374660);
PPC_FUNC_IMPL(__imp__sub_82374660) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823746a4
	if (ctx.cr6.eq) goto loc_823746A4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82375128
	ctx.lr = 0x82374698;
	sub_82375128(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82374510
	ctx.lr = 0x823746A4;
	sub_82374510(ctx, base);
loc_823746A4:
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

__attribute__((alias("__imp__sub_823746B8"))) PPC_WEAK_FUNC(sub_823746B8);
PPC_FUNC_IMPL(__imp__sub_823746B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-12128(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12128);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// stwu r1,-32(r1)
	ea = -32 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r31,32
	ctx.r1.s64 = ctx.r31.s64 + 32;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823746C0"))) PPC_WEAK_FUNC(sub_823746C0);
PPC_FUNC_IMPL(__imp__sub_823746C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// stwu r1,-32(r1)
	ea = -32 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r31,32
	ctx.r1.s64 = ctx.r31.s64 + 32;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823746F4"))) PPC_WEAK_FUNC(sub_823746F4);
PPC_FUNC_IMPL(__imp__sub_823746F4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-32
	ctx.r31.s64 = ctx.r12.s64 + -32;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-32(r1)
	ea = -32 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x821c0630
	ctx.lr = 0x8237470C;
	sub_821C0630(ctx, base);
	// addi r1,r1,32
	ctx.r1.s64 = ctx.r1.s64 + 32;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237471C"))) PPC_WEAK_FUNC(sub_8237471C);
PPC_FUNC_IMPL(__imp__sub_8237471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374720"))) PPC_WEAK_FUNC(sub_82374720);
PPC_FUNC_IMPL(__imp__sub_82374720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-12072(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12072);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82374730;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82374780
	if (ctx.cr6.eq) goto loc_82374780;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82374760:
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
	// bne 0x82374760
	if (!ctx.cr0.eq) goto loc_82374760;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82374780:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82374270
	ctx.lr = 0x82374794;
	sub_82374270(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82374888
	if (!ctx.cr0.eq) goto loc_82374888;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8236a338
	ctx.lr = 0x823747A8;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823747fc
	if (ctx.cr0.eq) goto loc_823747FC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823747e8
	if (ctx.cr6.eq) goto loc_823747E8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823747C8:
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
	// bne 0x823747c8
	if (!ctx.cr0.eq) goto loc_823747C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823747E8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82373cd8
	ctx.lr = 0x823747F4;
	sub_82373CD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82374800
	goto loc_82374800;
loc_823747FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82374800:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82350190
	ctx.lr = 0x82374808;
	sub_82350190(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82363e20
	ctx.lr = 0x82374810;
	sub_82363E20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// beq 0x82374844
	if (ctx.cr0.eq) goto loc_82374844;
	// bl 0x82363e20
	ctx.lr = 0x82374820;
	sub_82363E20(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8236be50
	ctx.lr = 0x82374830;
	sub_8236BE50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// bl 0x822b1460
	ctx.lr = 0x82374840;
	sub_822B1460(ctx, base);
	// b 0x82374854
	goto loc_82374854;
loc_82374844:
	// bl 0x8236be50
	ctx.lr = 0x82374848;
	sub_8236BE50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// bl 0x822b1430
	ctx.lr = 0x82374854;
	sub_822B1430(ctx, base);
loc_82374854:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8237487c
	if (ctx.cr0.eq) goto loc_8237487C;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8236be60
	ctx.lr = 0x8237486C;
	sub_8236BE60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82373bf0
	ctx.lr = 0x8237487C;
	sub_82373BF0(ctx, base);
loc_8237487C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x823745c0
	ctx.lr = 0x82374888;
	sub_823745C0(ctx, base);
loc_82374888:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82374890;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82374728"))) PPC_WEAK_FUNC(sub_82374728);
PPC_FUNC_IMPL(__imp__sub_82374728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82374730;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82374780
	if (ctx.cr6.eq) goto loc_82374780;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82374760:
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
	// bne 0x82374760
	if (!ctx.cr0.eq) goto loc_82374760;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82374780:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82374270
	ctx.lr = 0x82374794;
	sub_82374270(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82374888
	if (!ctx.cr0.eq) goto loc_82374888;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8236a338
	ctx.lr = 0x823747A8;
	sub_8236A338(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823747fc
	if (ctx.cr0.eq) goto loc_823747FC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823747e8
	if (ctx.cr6.eq) goto loc_823747E8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823747C8:
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
	// bne 0x823747c8
	if (!ctx.cr0.eq) goto loc_823747C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823747E8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82373cd8
	ctx.lr = 0x823747F4;
	sub_82373CD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82374800
	goto loc_82374800;
loc_823747FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82374800:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82350190
	ctx.lr = 0x82374808;
	sub_82350190(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82363e20
	ctx.lr = 0x82374810;
	sub_82363E20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// beq 0x82374844
	if (ctx.cr0.eq) goto loc_82374844;
	// bl 0x82363e20
	ctx.lr = 0x82374820;
	sub_82363E20(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8236be50
	ctx.lr = 0x82374830;
	sub_8236BE50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// bl 0x822b1460
	ctx.lr = 0x82374840;
	sub_822B1460(ctx, base);
	// b 0x82374854
	goto loc_82374854;
loc_82374844:
	// bl 0x8236be50
	ctx.lr = 0x82374848;
	sub_8236BE50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// bl 0x822b1430
	ctx.lr = 0x82374854;
	sub_822B1430(ctx, base);
loc_82374854:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8237487c
	if (ctx.cr0.eq) goto loc_8237487C;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8236be60
	ctx.lr = 0x8237486C;
	sub_8236BE60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82373bf0
	ctx.lr = 0x8237487C;
	sub_82373BF0(ctx, base);
loc_8237487C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x823745c0
	ctx.lr = 0x82374888;
	sub_823745C0(ctx, base);
loc_82374888:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c0630
	ctx.lr = 0x82374890;
	sub_821C0630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237489C"))) PPC_WEAK_FUNC(sub_8237489C);
PPC_FUNC_IMPL(__imp__sub_8237489C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x821c0630
	ctx.lr = 0x823748B4;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823748C4"))) PPC_WEAK_FUNC(sub_823748C4);
PPC_FUNC_IMPL(__imp__sub_823748C4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82350110
	ctx.lr = 0x823748DC;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823748EC"))) PPC_WEAK_FUNC(sub_823748EC);
PPC_FUNC_IMPL(__imp__sub_823748EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823748F0"))) PPC_WEAK_FUNC(sub_823748F0);
PPC_FUNC_IMPL(__imp__sub_823748F0) {
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
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82374934
	if (!ctx.cr6.lt) goto loc_82374934;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// bl 0x823689c8
	ctx.lr = 0x8237492C;
	sub_823689C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82374660
	ctx.lr = 0x82374934;
	sub_82374660(ctx, base);
loc_82374934:
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

__attribute__((alias("__imp__sub_82374948"))) PPC_WEAK_FUNC(sub_82374948);
PPC_FUNC_IMPL(__imp__sub_82374948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-11832(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11832);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82374958;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823749b4
	if (!ctx.cr6.eq) goto loc_823749B4;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-11896
	ctx.r9.s64 = ctx.r11.s64 + -11896;
	// addi r7,r10,-11928
	ctx.r7.s64 = ctx.r10.s64 + -11928;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,184
	ctx.r8.s64 = 184;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x823749AC;
	sub_82372320(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x82374b28
	goto loc_82374B28;
loc_823749B4:
	// lis r10,32512
	ctx.r10.s64 = 2130706432;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823749fc
	if (!ctx.cr0.eq) goto loc_823749FC;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x822b14c8
	ctx.lr = 0x823749E0;
	sub_822B14C8(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x823749fc
	if (ctx.cr6.eq) goto loc_823749FC;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x822b14a8
	ctx.lr = 0x823749F4;
	sub_822B14A8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r24,r11,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_823749FC:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82374af4
	if (ctx.cr6.eq) goto loc_82374AF4;
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82374A1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82374a54
	if (ctx.cr6.eq) goto loc_82374A54;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82374A34:
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
	// bne 0x82374a34
	if (!ctx.cr0.eq) goto loc_82374A34;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82374A54:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82374a68
	if (ctx.cr6.eq) goto loc_82374A68;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82373be0
	ctx.lr = 0x82374A64;
	sub_82373BE0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82374A68:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82374a8c
	if (ctx.cr0.eq) goto loc_82374A8C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823748f0
	ctx.lr = 0x82374A7C;
	sub_823748F0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82374A8C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82374A94;
	sub_82375128(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82374a1c
	if (ctx.cr6.lt) goto loc_82374A1C;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x82374aec
	if (!ctx.cr6.gt) goto loc_82374AEC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r10,-11928
	ctx.r7.s64 = ctx.r10.s64 + -11928;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12804
	ctx.r9.s64 = ctx.r11.s64 + -12804;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r8,221
	ctx.r8.s64 = 221;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82374AE8;
	sub_82372320(ctx, base);
	// b 0x82374b28
	goto loc_82374B28;
loc_82374AEC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82374b28
	if (!ctx.cr6.eq) goto loc_82374B28;
loc_82374AF4:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-11976
	ctx.r9.s64 = ctx.r11.s64 + -11976;
	// addi r7,r10,-11928
	ctx.r7.s64 = ctx.r10.s64 + -11928;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,226
	ctx.r8.s64 = 226;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82374B28;
	sub_82372320(ctx, base);
loc_82374B28:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82374950"))) PPC_WEAK_FUNC(sub_82374950);
PPC_FUNC_IMPL(__imp__sub_82374950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82374958;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823749b4
	if (!ctx.cr6.eq) goto loc_823749B4;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-11896
	ctx.r9.s64 = ctx.r11.s64 + -11896;
	// addi r7,r10,-11928
	ctx.r7.s64 = ctx.r10.s64 + -11928;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,184
	ctx.r8.s64 = 184;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x823749AC;
	sub_82372320(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x82374b28
	goto loc_82374B28;
loc_823749B4:
	// lis r10,32512
	ctx.r10.s64 = 2130706432;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823749fc
	if (!ctx.cr0.eq) goto loc_823749FC;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x822b14c8
	ctx.lr = 0x823749E0;
	sub_822B14C8(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x823749fc
	if (ctx.cr6.eq) goto loc_823749FC;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x822b14a8
	ctx.lr = 0x823749F4;
	sub_822B14A8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r24,r11,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_823749FC:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82374af4
	if (ctx.cr6.eq) goto loc_82374AF4;
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82374A1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82374a54
	if (ctx.cr6.eq) goto loc_82374A54;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82374A34:
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
	// bne 0x82374a34
	if (!ctx.cr0.eq) goto loc_82374A34;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82374A54:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82374a68
	if (ctx.cr6.eq) goto loc_82374A68;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82373be0
	ctx.lr = 0x82374A64;
	sub_82373BE0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82374A68:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82374a8c
	if (ctx.cr0.eq) goto loc_82374A8C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823748f0
	ctx.lr = 0x82374A7C;
	sub_823748F0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82374A8C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82374A94;
	sub_82375128(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82374a1c
	if (ctx.cr6.lt) goto loc_82374A1C;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x82374aec
	if (!ctx.cr6.gt) goto loc_82374AEC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r10,-11928
	ctx.r7.s64 = ctx.r10.s64 + -11928;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-12804
	ctx.r9.s64 = ctx.r11.s64 + -12804;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r8,221
	ctx.r8.s64 = 221;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82374AE8;
	sub_82372320(ctx, base);
	// b 0x82374b28
	goto loc_82374B28;
loc_82374AEC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82374b28
	if (!ctx.cr6.eq) goto loc_82374B28;
loc_82374AF4:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-12752
	ctx.r6.s64 = ctx.r8.s64 + -12752;
	// addi r9,r11,-11976
	ctx.r9.s64 = ctx.r11.s64 + -11976;
	// addi r7,r10,-11928
	ctx.r7.s64 = ctx.r10.s64 + -11928;
	// addi r5,r5,-12816
	ctx.r5.s64 = ctx.r5.s64 + -12816;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,226
	ctx.r8.s64 = 226;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82374B28;
	sub_82372320(ctx, base);
loc_82374B28:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82374B34"))) PPC_WEAK_FUNC(sub_82374B34);
PPC_FUNC_IMPL(__imp__sub_82374B34) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82375128
	ctx.lr = 0x82374B4C;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374B5C"))) PPC_WEAK_FUNC(sub_82374B5C);
PPC_FUNC_IMPL(__imp__sub_82374B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374B60"))) PPC_WEAK_FUNC(sub_82374B60);
PPC_FUNC_IMPL(__imp__sub_82374B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lfs f0,-11752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11752);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374B80"))) PPC_WEAK_FUNC(sub_82374B80);
PPC_FUNC_IMPL(__imp__sub_82374B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-11736(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11736);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8236d820
	ctx.lr = 0x82374BB8;
	sub_8236D820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374B88"))) PPC_WEAK_FUNC(sub_82374B88);
PPC_FUNC_IMPL(__imp__sub_82374B88) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8236d820
	ctx.lr = 0x82374BB8;
	sub_8236D820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374BD4"))) PPC_WEAK_FUNC(sub_82374BD4);
PPC_FUNC_IMPL(__imp__sub_82374BD4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x821c0630
	ctx.lr = 0x82374BEC;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374BFC"))) PPC_WEAK_FUNC(sub_82374BFC);
PPC_FUNC_IMPL(__imp__sub_82374BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374C00"))) PPC_WEAK_FUNC(sub_82374C00);
PPC_FUNC_IMPL(__imp__sub_82374C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-11680(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11680);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8236b838
	ctx.lr = 0x82374C30;
	sub_8236B838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x82374C38;
	sub_821C0630(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374C08"))) PPC_WEAK_FUNC(sub_82374C08);
PPC_FUNC_IMPL(__imp__sub_82374C08) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8236b838
	ctx.lr = 0x82374C30;
	sub_8236B838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0630
	ctx.lr = 0x82374C38;
	sub_821C0630(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374C50"))) PPC_WEAK_FUNC(sub_82374C50);
PPC_FUNC_IMPL(__imp__sub_82374C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x821c0630
	ctx.lr = 0x82374C68;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374C78"))) PPC_WEAK_FUNC(sub_82374C78);
PPC_FUNC_IMPL(__imp__sub_82374C78) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82374cf8
	if (ctx.cr0.eq) goto loc_82374CF8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82374cb8
	if (!ctx.cr6.eq) goto loc_82374CB8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82374cc4
	goto loc_82374CC4;
loc_82374CB8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82374CC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82374cdc
	if (!ctx.cr6.eq) goto loc_82374CDC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82374ce8
	goto loc_82374CE8;
loc_82374CDC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82374CE8:
	// bl 0x8236a3f0
	ctx.lr = 0x82374CEC;
	sub_8236A3F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82374CF8:
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

__attribute__((alias("__imp__sub_82374D0C"))) PPC_WEAK_FUNC(sub_82374D0C);
PPC_FUNC_IMPL(__imp__sub_82374D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374D10"))) PPC_WEAK_FUNC(sub_82374D10);
PPC_FUNC_IMPL(__imp__sub_82374D10) {
	PPC_FUNC_PROLOGUE();
	// li r10,16384
	ctx.r10.s64 = 16384;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374D30"))) PPC_WEAK_FUNC(sub_82374D30);
PPC_FUNC_IMPL(__imp__sub_82374D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-11616(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11616);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82374D40;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,4(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// beq cr6,0x82374f50
	if (ctx.cr6.eq) goto loc_82374F50;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-17952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17952);
	ctx.f31.f64 = double(temp.f32);
loc_82374D68:
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82374f40
	if (ctx.cr6.eq) goto loc_82374F40;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82374f0c
	if (ctx.cr6.eq) goto loc_82374F0C;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r27,8
	ctx.r29.s64 = ctx.r27.s64 + 8;
loc_82374D9C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82374e64
	if (ctx.cr0.eq) goto loc_82374E64;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82374e64
	if (ctx.cr0.eq) goto loc_82374E64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r9,r28,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82374e64
	if (ctx.cr6.eq) goto loc_82374E64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82374b88
	ctx.lr = 0x82374DC8;
	sub_82374B88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x823689c8
	ctx.lr = 0x82374DD8;
	sub_823689C8(ctx, base);
	// lhz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// stb r10,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r10.u8);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82374E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82350190
	ctx.lr = 0x82374E4C;
	sub_82350190(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82374c08
	ctx.lr = 0x82374E60;
	sub_82374C08(ctx, base);
	// b 0x82374ef4
	goto loc_82374EF4;
loc_82374E64:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82374ef4
	if (ctx.cr6.eq) goto loc_82374EF4;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82374ef4
	if (!ctx.cr0.eq) goto loc_82374EF4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82374ef4
	if (ctx.cr6.eq) goto loc_82374EF4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// beq cr6,0x82374ec0
	if (ctx.cr6.eq) goto loc_82374EC0;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_82374EA0:
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
	// bne 0x82374ea0
	if (!ctx.cr0.eq) goto loc_82374EA0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82374EC0:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82374ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82350190
	ctx.lr = 0x82374EE8;
	sub_82350190(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_82374EF4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82374d9c
	if (ctx.cr6.lt) goto loc_82374D9C;
loc_82374F0C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82374f40
	if (!ctx.cr6.eq) goto loc_82374F40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82351430
	ctx.lr = 0x82374F24;
	sub_82351430(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82374F2C;
	sub_8236A3F0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82374c78
	ctx.lr = 0x82374F38;
	sub_82374C78(ctx, base);
	// lwz r25,80(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82374f48
	goto loc_82374F48;
loc_82374F40:
	// lwz r25,4(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
loc_82374F48:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82374d68
	if (!ctx.cr6.eq) goto loc_82374D68;
loc_82374F50:
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82374D38"))) PPC_WEAK_FUNC(sub_82374D38);
PPC_FUNC_IMPL(__imp__sub_82374D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82374D40;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,4(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// beq cr6,0x82374f50
	if (ctx.cr6.eq) goto loc_82374F50;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-17952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17952);
	ctx.f31.f64 = double(temp.f32);
loc_82374D68:
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82374f40
	if (ctx.cr6.eq) goto loc_82374F40;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82374f0c
	if (ctx.cr6.eq) goto loc_82374F0C;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r27,8
	ctx.r29.s64 = ctx.r27.s64 + 8;
loc_82374D9C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82374e64
	if (ctx.cr0.eq) goto loc_82374E64;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82374e64
	if (ctx.cr0.eq) goto loc_82374E64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r9,r28,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82374e64
	if (ctx.cr6.eq) goto loc_82374E64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82374b88
	ctx.lr = 0x82374DC8;
	sub_82374B88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x823689c8
	ctx.lr = 0x82374DD8;
	sub_823689C8(ctx, base);
	// lhz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// stb r10,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r10.u8);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82374E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82350190
	ctx.lr = 0x82374E4C;
	sub_82350190(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82374c08
	ctx.lr = 0x82374E60;
	sub_82374C08(ctx, base);
	// b 0x82374ef4
	goto loc_82374EF4;
loc_82374E64:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82374ef4
	if (ctx.cr6.eq) goto loc_82374EF4;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82374ef4
	if (!ctx.cr0.eq) goto loc_82374EF4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82374ef4
	if (ctx.cr6.eq) goto loc_82374EF4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// beq cr6,0x82374ec0
	if (ctx.cr6.eq) goto loc_82374EC0;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_82374EA0:
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
	// bne 0x82374ea0
	if (!ctx.cr0.eq) goto loc_82374EA0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82374EC0:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82374ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82350190
	ctx.lr = 0x82374EE8;
	sub_82350190(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_82374EF4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82374d9c
	if (ctx.cr6.lt) goto loc_82374D9C;
loc_82374F0C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82374f40
	if (!ctx.cr6.eq) goto loc_82374F40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82351430
	ctx.lr = 0x82374F24;
	sub_82351430(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82374F2C;
	sub_8236A3F0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82374c78
	ctx.lr = 0x82374F38;
	sub_82374C78(ctx, base);
	// lwz r25,80(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82374f48
	goto loc_82374F48;
loc_82374F40:
	// lwz r25,4(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
loc_82374F48:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82374d68
	if (!ctx.cr6.eq) goto loc_82374D68;
loc_82374F50:
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82374F5C"))) PPC_WEAK_FUNC(sub_82374F5C);
PPC_FUNC_IMPL(__imp__sub_82374F5C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82374c08
	ctx.lr = 0x82374F74;
	sub_82374C08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374F84"))) PPC_WEAK_FUNC(sub_82374F84);
PPC_FUNC_IMPL(__imp__sub_82374F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374F88"))) PPC_WEAK_FUNC(sub_82374F88);
PPC_FUNC_IMPL(__imp__sub_82374F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-11536
	ctx.r11.s64 = ctx.r11.s64 + -11536;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374F98"))) PPC_WEAK_FUNC(sub_82374F98);
PPC_FUNC_IMPL(__imp__sub_82374F98) {
	PPC_FUNC_PROLOGUE();
	// b 0x823750c8
	sub_823750C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82374F9C"))) PPC_WEAK_FUNC(sub_82374F9C);
PPC_FUNC_IMPL(__imp__sub_82374F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374FA0"))) PPC_WEAK_FUNC(sub_82374FA0);
PPC_FUNC_IMPL(__imp__sub_82374FA0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11536
	ctx.r11.s64 = ctx.r11.s64 + -11536;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82374fcc
	if (ctx.cr0.eq) goto loc_82374FCC;
	// bl 0x8236a3f0
	ctx.lr = 0x82374FCC;
	sub_8236A3F0(ctx, base);
loc_82374FCC:
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

__attribute__((alias("__imp__sub_82374FE4"))) PPC_WEAK_FUNC(sub_82374FE4);
PPC_FUNC_IMPL(__imp__sub_82374FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374FE8"))) PPC_WEAK_FUNC(sub_82374FE8);
PPC_FUNC_IMPL(__imp__sub_82374FE8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x823750c8
	sub_823750C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82374FF0"))) PPC_WEAK_FUNC(sub_82374FF0);
PPC_FUNC_IMPL(__imp__sub_82374FF0) {
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
	// bl 0x823750c8
	ctx.lr = 0x82375008;
	sub_823750C8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-11480
	ctx.r11.s64 = ctx.r11.s64 + -11480;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82375034"))) PPC_WEAK_FUNC(sub_82375034);
PPC_FUNC_IMPL(__imp__sub_82375034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82375038"))) PPC_WEAK_FUNC(sub_82375038);
PPC_FUNC_IMPL(__imp__sub_82375038) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x8236e278
	sub_8236E278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82375048"))) PPC_WEAK_FUNC(sub_82375048);
PPC_FUNC_IMPL(__imp__sub_82375048) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82375050"))) PPC_WEAK_FUNC(sub_82375050);
PPC_FUNC_IMPL(__imp__sub_82375050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-11456(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11456);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82375060;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8236dfc8
	ctx.lr = 0x8237507C;
	sub_8236DFC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375128
	ctx.lr = 0x82375094;
	sub_82375128(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82375058"))) PPC_WEAK_FUNC(sub_82375058);
PPC_FUNC_IMPL(__imp__sub_82375058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82375060;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8236dfc8
	ctx.lr = 0x8237507C;
	sub_8236DFC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375128
	ctx.lr = 0x82375094;
	sub_82375128(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823750A0"))) PPC_WEAK_FUNC(sub_823750A0);
PPC_FUNC_IMPL(__imp__sub_823750A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82375128
	ctx.lr = 0x823750B8;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823750C8"))) PPC_WEAK_FUNC(sub_823750C8);
PPC_FUNC_IMPL(__imp__sub_823750C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-11392
	ctx.r11.s64 = ctx.r11.s64 + -11392;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823750D8"))) PPC_WEAK_FUNC(sub_823750D8);
PPC_FUNC_IMPL(__imp__sub_823750D8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11392
	ctx.r11.s64 = ctx.r11.s64 + -11392;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82375104
	if (ctx.cr0.eq) goto loc_82375104;
	// bl 0x8236a3f0
	ctx.lr = 0x82375104;
	sub_8236A3F0(ctx, base);
loc_82375104:
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

__attribute__((alias("__imp__sub_8237511C"))) PPC_WEAK_FUNC(sub_8237511C);
PPC_FUNC_IMPL(__imp__sub_8237511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82375120"))) PPC_WEAK_FUNC(sub_82375120);
PPC_FUNC_IMPL(__imp__sub_82375120) {
	PPC_FUNC_PROLOGUE();
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82375128"))) PPC_WEAK_FUNC(sub_82375128);
PPC_FUNC_IMPL(__imp__sub_82375128) {
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
	// beq cr6,0x8237519c
	if (ctx.cr6.eq) goto loc_8237519C;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8237514C:
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
	// bne 0x8237514c
	if (!ctx.cr0.eq) goto loc_8237514C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8237519c
	if (!ctx.cr6.eq) goto loc_8237519C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82375194
	if (ctx.cr6.eq) goto loc_82375194;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82375194:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8237519C:
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

__attribute__((alias("__imp__sub_823751B0"))) PPC_WEAK_FUNC(sub_823751B0);
PPC_FUNC_IMPL(__imp__sub_823751B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-11264(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11264);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x823751C0;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82375220
	if (!ctx.cr6.eq) goto loc_82375220;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-11304
	ctx.r6.s64 = ctx.r8.s64 + -11304;
	// addi r9,r11,-11340
	ctx.r9.s64 = ctx.r11.s64 + -11340;
	// addi r7,r10,-11364
	ctx.r7.s64 = ctx.r10.s64 + -11364;
	// addi r5,r5,-11380
	ctx.r5.s64 = ctx.r5.s64 + -11380;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,141
	ctx.r8.s64 = 141;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82375218;
	sub_82372320(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8237529c
	goto loc_8237529C;
loc_82375220:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r30,100
	ctx.r28.s64 = ctx.r30.s64 + 100;
	// stb r11,260(r30)
	PPC_STORE_U8(ctx.r30.u32 + 260, ctx.r11.u8);
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82375238;
	sub_8233E4E0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r29,r30,96
	ctx.r29.s64 = ctx.r30.s64 + 96;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237529c
	if (!ctx.cr6.eq) goto loc_8237529C;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8236a338
	ctx.lr = 0x82375250;
	sub_8236A338(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// beq 0x82375280
	if (ctx.cr0.eq) goto loc_82375280;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d858
	ctx.lr = 0x82375268;
	sub_8236D858(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82377d10
	ctx.lr = 0x82375278;
	sub_82377D10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82375284
	goto loc_82375284;
loc_82375280:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82375284:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82350190
	ctx.lr = 0x8237528C;
	sub_82350190(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82378a60
	ctx.lr = 0x82375298;
	sub_82378A60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8237529C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236b838
	ctx.lr = 0x823752A4;
	sub_8236B838(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823751B8"))) PPC_WEAK_FUNC(sub_823751B8);
PPC_FUNC_IMPL(__imp__sub_823751B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x823751C0;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82375220
	if (!ctx.cr6.eq) goto loc_82375220;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-11304
	ctx.r6.s64 = ctx.r8.s64 + -11304;
	// addi r9,r11,-11340
	ctx.r9.s64 = ctx.r11.s64 + -11340;
	// addi r7,r10,-11364
	ctx.r7.s64 = ctx.r10.s64 + -11364;
	// addi r5,r5,-11380
	ctx.r5.s64 = ctx.r5.s64 + -11380;
	// addi r4,r4,12188
	ctx.r4.s64 = ctx.r4.s64 + 12188;
	// li r8,141
	ctx.r8.s64 = 141;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82375218;
	sub_82372320(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8237529c
	goto loc_8237529C;
loc_82375220:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r30,100
	ctx.r28.s64 = ctx.r30.s64 + 100;
	// stb r11,260(r30)
	PPC_STORE_U8(ctx.r30.u32 + 260, ctx.r11.u8);
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82375238;
	sub_8233E4E0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r29,r30,96
	ctx.r29.s64 = ctx.r30.s64 + 96;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237529c
	if (!ctx.cr6.eq) goto loc_8237529C;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8236a338
	ctx.lr = 0x82375250;
	sub_8236A338(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// beq 0x82375280
	if (ctx.cr0.eq) goto loc_82375280;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8236d858
	ctx.lr = 0x82375268;
	sub_8236D858(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82377d10
	ctx.lr = 0x82375278;
	sub_82377D10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82375284
	goto loc_82375284;
loc_82375280:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82375284:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82350190
	ctx.lr = 0x8237528C;
	sub_82350190(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82378a60
	ctx.lr = 0x82375298;
	sub_82378A60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8237529C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236b838
	ctx.lr = 0x823752A4;
	sub_8236B838(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823752B0"))) PPC_WEAK_FUNC(sub_823752B0);
PPC_FUNC_IMPL(__imp__sub_823752B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x821cc648
	ctx.lr = 0x823752C8;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823752D8"))) PPC_WEAK_FUNC(sub_823752D8);
PPC_FUNC_IMPL(__imp__sub_823752D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82350110
	ctx.lr = 0x823752F0;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82375300"))) PPC_WEAK_FUNC(sub_82375300);
PPC_FUNC_IMPL(__imp__sub_82375300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-11176(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11176);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82375310;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236d858
	ctx.lr = 0x82375330;
	sub_8236D858(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823751b8
	ctx.lr = 0x82375340;
	sub_823751B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b838
	ctx.lr = 0x8237534C;
	sub_8236B838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82375308"))) PPC_WEAK_FUNC(sub_82375308);
PPC_FUNC_IMPL(__imp__sub_82375308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82375310;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8236d858
	ctx.lr = 0x82375330;
	sub_8236D858(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823751b8
	ctx.lr = 0x82375340;
	sub_823751B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b838
	ctx.lr = 0x8237534C;
	sub_8236B838(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82375358"))) PPC_WEAK_FUNC(sub_82375358);
PPC_FUNC_IMPL(__imp__sub_82375358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x821cc648
	ctx.lr = 0x82375370;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82375380"))) PPC_WEAK_FUNC(sub_82375380);
PPC_FUNC_IMPL(__imp__sub_82375380) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82375390
	if (!ctx.cr6.eq) goto loc_82375390;
	// blr 
	return;
loc_82375390:
	// b 0x82367438
	sub_82367438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82375394"))) PPC_WEAK_FUNC(sub_82375394);
PPC_FUNC_IMPL(__imp__sub_82375394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82375398"))) PPC_WEAK_FUNC(sub_82375398);
PPC_FUNC_IMPL(__imp__sub_82375398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-11056(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11056);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82375414
	if (ctx.cr6.eq) goto loc_82375414;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x82367438
	ctx.lr = 0x823753D0;
	sub_82367438(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82375414
	if (!ctx.cr6.eq) goto loc_82375414;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237540c
	if (!ctx.cr6.eq) goto loc_8237540C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8236a338
	ctx.lr = 0x823753EC;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82375404
	if (ctx.cr0.eq) goto loc_82375404;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8236e760
	ctx.lr = 0x82375400;
	sub_8236E760(ctx, base);
	// b 0x82375408
	goto loc_82375408;
loc_82375404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82375408:
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
loc_8237540C:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// b 0x8237544c
	goto loc_8237544C;
loc_82375414:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-11304
	ctx.r6.s64 = ctx.r8.s64 + -11304;
	// addi r9,r11,-11112
	ctx.r9.s64 = ctx.r11.s64 + -11112;
	// addi r7,r10,-11096
	ctx.r7.s64 = ctx.r10.s64 + -11096;
	// addi r5,r5,-11380
	ctx.r5.s64 = ctx.r5.s64 + -11380;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,574
	ctx.r8.s64 = 574;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82375448;
	sub_82372320(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237544C:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823753A0"))) PPC_WEAK_FUNC(sub_823753A0);
PPC_FUNC_IMPL(__imp__sub_823753A0) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82375414
	if (ctx.cr6.eq) goto loc_82375414;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x82367438
	ctx.lr = 0x823753D0;
	sub_82367438(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82375414
	if (!ctx.cr6.eq) goto loc_82375414;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237540c
	if (!ctx.cr6.eq) goto loc_8237540C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8236a338
	ctx.lr = 0x823753EC;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82375404
	if (ctx.cr0.eq) goto loc_82375404;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8236e760
	ctx.lr = 0x82375400;
	sub_8236E760(ctx, base);
	// b 0x82375408
	goto loc_82375408;
loc_82375404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82375408:
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
loc_8237540C:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// b 0x8237544c
	goto loc_8237544C;
loc_82375414:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-11304
	ctx.r6.s64 = ctx.r8.s64 + -11304;
	// addi r9,r11,-11112
	ctx.r9.s64 = ctx.r11.s64 + -11112;
	// addi r7,r10,-11096
	ctx.r7.s64 = ctx.r10.s64 + -11096;
	// addi r5,r5,-11380
	ctx.r5.s64 = ctx.r5.s64 + -11380;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,574
	ctx.r8.s64 = 574;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82375448;
	sub_82372320(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237544C:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82375464"))) PPC_WEAK_FUNC(sub_82375464);
PPC_FUNC_IMPL(__imp__sub_82375464) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82350110
	ctx.lr = 0x8237547C;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237548C"))) PPC_WEAK_FUNC(sub_8237548C);
PPC_FUNC_IMPL(__imp__sub_8237548C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82375490"))) PPC_WEAK_FUNC(sub_82375490);
PPC_FUNC_IMPL(__imp__sub_82375490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82375498;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823790f0
	ctx.lr = 0x823754A4;
	sub_823790F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-11000
	ctx.r11.s64 = ctx.r11.s64 + -11000;
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
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
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x82375530;
	sub_8233EAF0(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,136
	ctx.r3.s64 = ctx.r29.s64 + 136;
	// bl 0x8233eaf0
	ctx.lr = 0x82375540;
	sub_8233EAF0(ctx, base);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82375550"))) PPC_WEAK_FUNC(sub_82375550);
PPC_FUNC_IMPL(__imp__sub_82375550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-10880(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10880);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82375560;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8235cff8
	ctx.lr = 0x82375584;
	sub_8235CFF8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,200
	ctx.r9.s64 = 200;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// addi r9,r31,92
	ctx.r9.s64 = ctx.r31.s64 + 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8237559C:
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8237559c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237559C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236db50
	ctx.lr = 0x823755C0;
	sub_8236DB50(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82377f48
	ctx.lr = 0x823755C8;
	sub_82377F48(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823755DC:
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823755dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823755DC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236db50
	ctx.lr = 0x82375600;
	sub_8236DB50(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82378a28
	ctx.lr = 0x82375610;
	sub_82378A28(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,36
	ctx.r3.s64 = 36;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// bl 0x8236a338
	ctx.lr = 0x82375620;
	sub_8236A338(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82375644
	if (ctx.cr0.eq) goto loc_82375644;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x8236b290
	ctx.lr = 0x8237563C;
	sub_8236B290(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82375648
	goto loc_82375648;
loc_82375644:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82375648:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82375678
	if (ctx.cr6.eq) goto loc_82375678;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82375658:
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
	// bne 0x82375658
	if (!ctx.cr0.eq) goto loc_82375658;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82375678:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a410
	ctx.lr = 0x82375684;
	sub_8236A410(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c06d8
	ctx.lr = 0x82375690;
	sub_821C06D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a410
	ctx.lr = 0x8237569C;
	sub_8236A410(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x821c0740
	ctx.lr = 0x823756A8;
	sub_821C0740(ctx, base);
	// lbz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 260);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823756c0
	if (ctx.cr0.eq) goto loc_823756C0;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// b 0x823756c4
	goto loc_823756C4;
loc_823756C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823756C4:
	// bl 0x821c0740
	ctx.lr = 0x823756C8;
	sub_821C0740(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r28,108
	ctx.r4.s64 = ctx.r28.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b048
	ctx.lr = 0x823756D8;
	sub_8236B048(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823756F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x8236a338
	ctx.lr = 0x82375700;
	sub_8236A338(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82375750
	if (ctx.cr0.eq) goto loc_82375750;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82375740
	if (ctx.cr6.eq) goto loc_82375740;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82375720:
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
	// bne 0x82375720
	if (!ctx.cr0.eq) goto loc_82375720;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82375740:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lbz r5,260(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 260);
	// bl 0x8237a140
	ctx.lr = 0x8237574C;
	sub_8237A140(ctx, base);
	// b 0x82375754
	goto loc_82375754;
loc_82375750:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82375754:
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-11304
	ctx.r6.s64 = ctx.r8.s64 + -11304;
	// addi r9,r11,-10956
	ctx.r9.s64 = ctx.r11.s64 + -10956;
	// addi r7,r10,-10984
	ctx.r7.s64 = ctx.r10.s64 + -10984;
	// addi r5,r5,-11380
	ctx.r5.s64 = ctx.r5.s64 + -11380;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,734
	ctx.r8.s64 = 734;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x8237578C;
	sub_82372320(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82375794;
	sub_821C0630(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236de20
	ctx.lr = 0x8237579C;
	sub_8236DE20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x823757A4;
	sub_82375128(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82375558"))) PPC_WEAK_FUNC(sub_82375558);
PPC_FUNC_IMPL(__imp__sub_82375558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82375560;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8235cff8
	ctx.lr = 0x82375584;
	sub_8235CFF8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,200
	ctx.r9.s64 = 200;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// addi r9,r31,92
	ctx.r9.s64 = ctx.r31.s64 + 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8237559C:
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8237559c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237559C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236db50
	ctx.lr = 0x823755C0;
	sub_8236DB50(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82377f48
	ctx.lr = 0x823755C8;
	sub_82377F48(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823755DC:
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823755dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823755DC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236db50
	ctx.lr = 0x82375600;
	sub_8236DB50(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82378a28
	ctx.lr = 0x82375610;
	sub_82378A28(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,36
	ctx.r3.s64 = 36;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// bl 0x8236a338
	ctx.lr = 0x82375620;
	sub_8236A338(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82375644
	if (ctx.cr0.eq) goto loc_82375644;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x8236b290
	ctx.lr = 0x8237563C;
	sub_8236B290(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82375648
	goto loc_82375648;
loc_82375644:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82375648:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82375678
	if (ctx.cr6.eq) goto loc_82375678;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82375658:
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
	// bne 0x82375658
	if (!ctx.cr0.eq) goto loc_82375658;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82375678:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a410
	ctx.lr = 0x82375684;
	sub_8236A410(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c06d8
	ctx.lr = 0x82375690;
	sub_821C06D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a410
	ctx.lr = 0x8237569C;
	sub_8236A410(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x821c0740
	ctx.lr = 0x823756A8;
	sub_821C0740(ctx, base);
	// lbz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 260);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823756c0
	if (ctx.cr0.eq) goto loc_823756C0;
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// b 0x823756c4
	goto loc_823756C4;
loc_823756C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823756C4:
	// bl 0x821c0740
	ctx.lr = 0x823756C8;
	sub_821C0740(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r28,108
	ctx.r4.s64 = ctx.r28.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b048
	ctx.lr = 0x823756D8;
	sub_8236B048(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823756F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x8236a338
	ctx.lr = 0x82375700;
	sub_8236A338(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82375750
	if (ctx.cr0.eq) goto loc_82375750;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82375740
	if (ctx.cr6.eq) goto loc_82375740;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82375720:
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
	// bne 0x82375720
	if (!ctx.cr0.eq) goto loc_82375720;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82375740:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lbz r5,260(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 260);
	// bl 0x8237a140
	ctx.lr = 0x8237574C;
	sub_8237A140(ctx, base);
	// b 0x82375754
	goto loc_82375754;
loc_82375750:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82375754:
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-11304
	ctx.r6.s64 = ctx.r8.s64 + -11304;
	// addi r9,r11,-10956
	ctx.r9.s64 = ctx.r11.s64 + -10956;
	// addi r7,r10,-10984
	ctx.r7.s64 = ctx.r10.s64 + -10984;
	// addi r5,r5,-11380
	ctx.r5.s64 = ctx.r5.s64 + -11380;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,734
	ctx.r8.s64 = 734;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x8237578C;
	sub_82372320(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x82375794;
	sub_821C0630(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236de20
	ctx.lr = 0x8237579C;
	sub_8236DE20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x823757A4;
	sub_82375128(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823757AC"))) PPC_WEAK_FUNC(sub_823757AC);
PPC_FUNC_IMPL(__imp__sub_823757AC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82375128
	ctx.lr = 0x823757C4;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823757D4"))) PPC_WEAK_FUNC(sub_823757D4);
PPC_FUNC_IMPL(__imp__sub_823757D4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8236de20
	ctx.lr = 0x823757EC;
	sub_8236DE20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823757FC"))) PPC_WEAK_FUNC(sub_823757FC);
PPC_FUNC_IMPL(__imp__sub_823757FC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82350110
	ctx.lr = 0x82375814;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82375824"))) PPC_WEAK_FUNC(sub_82375824);
PPC_FUNC_IMPL(__imp__sub_82375824) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x821c0630
	ctx.lr = 0x8237583C;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237584C"))) PPC_WEAK_FUNC(sub_8237584C);
PPC_FUNC_IMPL(__imp__sub_8237584C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82350110
	ctx.lr = 0x82375864;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82375874"))) PPC_WEAK_FUNC(sub_82375874);
PPC_FUNC_IMPL(__imp__sub_82375874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82375878"))) PPC_WEAK_FUNC(sub_82375878);
PPC_FUNC_IMPL(__imp__sub_82375878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-10648(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10648);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-11304
	ctx.r6.s64 = ctx.r8.s64 + -11304;
	// addi r9,r11,-10696
	ctx.r9.s64 = ctx.r11.s64 + -10696;
	// addi r7,r10,-10728
	ctx.r7.s64 = ctx.r10.s64 + -10728;
	// addi r5,r5,-11380
	ctx.r5.s64 = ctx.r5.s64 + -11380;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,740
	ctx.r8.s64 = 740;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823758D4;
	sub_82372320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375128
	ctx.lr = 0x823758DC;
	sub_82375128(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82375880"))) PPC_WEAK_FUNC(sub_82375880);
PPC_FUNC_IMPL(__imp__sub_82375880) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r6,r8,-11304
	ctx.r6.s64 = ctx.r8.s64 + -11304;
	// addi r9,r11,-10696
	ctx.r9.s64 = ctx.r11.s64 + -10696;
	// addi r7,r10,-10728
	ctx.r7.s64 = ctx.r10.s64 + -10728;
	// addi r5,r5,-11380
	ctx.r5.s64 = ctx.r5.s64 + -11380;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,740
	ctx.r8.s64 = 740;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823758D4;
	sub_82372320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82375128
	ctx.lr = 0x823758DC;
	sub_82375128(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823758F4"))) PPC_WEAK_FUNC(sub_823758F4);
PPC_FUNC_IMPL(__imp__sub_823758F4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82375128
	ctx.lr = 0x8237590C;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237591C"))) PPC_WEAK_FUNC(sub_8237591C);
PPC_FUNC_IMPL(__imp__sub_8237591C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82375920"))) PPC_WEAK_FUNC(sub_82375920);
PPC_FUNC_IMPL(__imp__sub_82375920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82375928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82375958
	if (ctx.cr6.eq) goto loc_82375958;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82375958:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375978
	if (ctx.cr6.eq) goto loc_82375978;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358118
	ctx.lr = 0x8237596C;
	sub_82358118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375974;
	sub_8236A3F0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82375978:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375998
	if (ctx.cr6.eq) goto loc_82375998;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234f138
	ctx.lr = 0x8237598C;
	sub_8234F138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375994;
	sub_8236A3F0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_82375998:
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823759b8
	if (ctx.cr6.eq) goto loc_823759B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358118
	ctx.lr = 0x823759AC;
	sub_82358118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x823759B4;
	sub_8236A3F0(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_823759B8:
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823759d8
	if (ctx.cr6.eq) goto loc_823759D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358118
	ctx.lr = 0x823759CC;
	sub_82358118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x823759D4;
	sub_8236A3F0(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_823759D8:
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823759f8
	if (ctx.cr6.eq) goto loc_823759F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358118
	ctx.lr = 0x823759EC;
	sub_82358118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x823759F4;
	sub_8236A3F0(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_823759F8:
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375a18
	if (ctx.cr6.eq) goto loc_82375A18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234f138
	ctx.lr = 0x82375A0C;
	sub_8234F138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375A14;
	sub_8236A3F0(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82375A18:
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375a38
	if (ctx.cr6.eq) goto loc_82375A38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358118
	ctx.lr = 0x82375A2C;
	sub_82358118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375A34;
	sub_8236A3F0(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82375A38:
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375a58
	if (ctx.cr6.eq) goto loc_82375A58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358118
	ctx.lr = 0x82375A4C;
	sub_82358118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375A54;
	sub_8236A3F0(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82375A58:
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375a78
	if (ctx.cr6.eq) goto loc_82375A78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234f138
	ctx.lr = 0x82375A6C;
	sub_8234F138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375A74;
	sub_8236A3F0(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_82375A78:
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375a98
	if (ctx.cr6.eq) goto loc_82375A98;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358118
	ctx.lr = 0x82375A8C;
	sub_82358118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375A94;
	sub_8236A3F0(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82375A98:
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375ab8
	if (ctx.cr6.eq) goto loc_82375AB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234f138
	ctx.lr = 0x82375AAC;
	sub_8234F138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375AB4;
	sub_8236A3F0(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82375AB8:
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375ad8
	if (ctx.cr6.eq) goto loc_82375AD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234f138
	ctx.lr = 0x82375ACC;
	sub_8234F138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375AD4;
	sub_8236A3F0(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82375AD8:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82375afc
	if (ctx.cr6.eq) goto loc_82375AFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82375AFC:
	// lwz r29,60(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375b1c
	if (ctx.cr6.eq) goto loc_82375B1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358118
	ctx.lr = 0x82375B10;
	sub_82358118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375B18;
	sub_8236A3F0(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_82375B1C:
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375b3c
	if (ctx.cr6.eq) goto loc_82375B3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358118
	ctx.lr = 0x82375B30;
	sub_82358118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375B38;
	sub_8236A3F0(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_82375B3C:
	// lwz r29,68(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375b5c
	if (ctx.cr6.eq) goto loc_82375B5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234f138
	ctx.lr = 0x82375B50;
	sub_8234F138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375B58;
	sub_8236A3F0(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_82375B5C:
	// lwz r29,72(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375b7c
	if (ctx.cr6.eq) goto loc_82375B7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234f138
	ctx.lr = 0x82375B70;
	sub_8234F138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375B78;
	sub_8236A3F0(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_82375B7C:
	// lwz r29,76(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375b9c
	if (ctx.cr6.eq) goto loc_82375B9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234f138
	ctx.lr = 0x82375B90;
	sub_8234F138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375B98;
	sub_8236A3F0(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_82375B9C:
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375bbc
	if (ctx.cr6.eq) goto loc_82375BBC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234f138
	ctx.lr = 0x82375BB0;
	sub_8234F138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375BB8;
	sub_8236A3F0(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_82375BBC:
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82375bdc
	if (ctx.cr6.eq) goto loc_82375BDC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234f138
	ctx.lr = 0x82375BD0;
	sub_8234F138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82375BD8;
	sub_8236A3F0(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
loc_82375BDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82350190
	ctx.lr = 0x82375BE8;
	sub_82350190(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82375BF0"))) PPC_WEAK_FUNC(sub_82375BF0);
PPC_FUNC_IMPL(__imp__sub_82375BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-10392(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10392);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82375C00;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-5088
	ctx.r31.s64 = ctx.r1.s64 + -5088;
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5088(r1)
	ea = -5088 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,5116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5116, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// bl 0x8236e040
	ctx.lr = 0x82375C2C;
	sub_8236E040(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x82375c80
	if (!ctx.cr6.eq) goto loc_82375C80;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82375c70
	if (ctx.cr6.eq) goto loc_82375C70;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82375C50:
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
	// bne 0x82375c50
	if (!ctx.cr0.eq) goto loc_82375C50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82375C70:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82379da0
	ctx.lr = 0x82375C7C;
	sub_82379DA0(ctx, base);
	// b 0x82376564
	goto loc_82376564;
loc_82375C80:
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82375c94
	if (!ctx.cr6.eq) goto loc_82375C94;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82376568
	goto loc_82376568;
loc_82375C94:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bgt cr6,0x82376564
	if (ctx.cr6.gt) goto loc_82376564;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-10592
	ctx.r12.s64 = ctx.r12.s64 + -10592;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// addi r12,r12,23752
	ctx.r12.s64 = ctx.r12.s64 + 23752;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82375CC8;
	case 1:
		goto loc_82375CE0;
	case 2:
		goto loc_82375CF4;
	case 3:
		goto loc_82375D04;
	case 4:
		goto loc_82375D04;
	case 5:
		goto loc_82375E98;
	case 6:
		goto loc_82375F48;
	case 7:
		goto loc_82375F48;
	case 8:
		goto loc_82376020;
	case 9:
		goto loc_82376020;
	case 10:
		goto loc_82375D94;
	case 11:
		goto loc_82375D94;
	case 12:
		goto loc_8237629C;
	case 13:
		goto loc_82376344;
	case 14:
		goto loc_823760B8;
	case 15:
		goto loc_82376180;
	case 16:
		goto loc_82376404;
	case 17:
		goto loc_82376524;
	case 18:
		goto loc_82376564;
	case 19:
		goto loc_82376564;
	case 20:
		goto loc_82376564;
	case 21:
		goto loc_82376564;
	case 22:
		goto loc_82376564;
	case 23:
		goto loc_82376564;
	case 24:
		goto loc_82376564;
	case 25:
		goto loc_82376564;
	case 26:
		goto loc_82376564;
	case 27:
		goto loc_82376564;
	case 28:
		goto loc_82376534;
	default:
		__builtin_unreachable();
	}
loc_82375CC8:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82375CD8:
	// bctrl 
	ctx.lr = 0x82375CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376564
	goto loc_82376564;
loc_82375CE0:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_82375CEC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82375cd8
	goto loc_82375CD8;
loc_82375CF4:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82375cec
	goto loc_82375CEC;
loc_82375D04:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r29.u64);
	// beq 0x82375d28
	if (ctx.cr0.eq) goto loc_82375D28;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82375D1C;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne 0x82375d2c
	if (!ctx.cr0.eq) goto loc_82375D2C;
loc_82375D28:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82375D2C:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82375D40:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82375d40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82375D40;
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// beq 0x82375d64
	if (ctx.cr0.eq) goto loc_82375D64;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// bl 0x8236e110
	ctx.lr = 0x82375D64;
	sub_8236E110(ctx, base);
loc_82375D64:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// ld r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// addi r5,r31,208
	ctx.r5.s64 = ctx.r31.s64 + 208;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x82375d8c
	if (ctx.cr6.eq) goto loc_82375D8C;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82375D8C:
	// bctrl 
	ctx.lr = 0x82375D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376564
	goto loc_82376564;
loc_82375D94:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r29.u64);
	// beq 0x82375db8
	if (ctx.cr0.eq) goto loc_82375DB8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82375DAC;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x82375dbc
	if (!ctx.cr0.eq) goto loc_82375DBC;
loc_82375DB8:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82375DBC:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,284
	ctx.r11.s64 = ctx.r31.s64 + 284;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82375DCC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82375dcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82375DCC;
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// beq 0x82375dfc
	if (ctx.cr0.eq) goto loc_82375DFC;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// bl 0x8236e110
	ctx.lr = 0x82375DF0;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82375e00
	if (!ctx.cr0.eq) goto loc_82375E00;
loc_82375DFC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82375E00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r29.u64);
	// beq 0x82375e24
	if (ctx.cr0.eq) goto loc_82375E24;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82375E18;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne 0x82375e28
	if (!ctx.cr0.eq) goto loc_82375E28;
loc_82375E24:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82375E28:
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r31,364
	ctx.r10.s64 = ctx.r31.s64 + 364;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82375E3C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82375e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82375E3C;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// beq 0x82375e60
	if (ctx.cr0.eq) goto loc_82375E60;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,368
	ctx.r4.s64 = ctx.r31.s64 + 368;
	// bl 0x8236e110
	ctx.lr = 0x82375E60;
	sub_8236E110(ctx, base);
loc_82375E60:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// ld r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// addi r7,r31,368
	ctx.r7.s64 = ctx.r31.s64 + 368;
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// addi r5,r31,288
	ctx.r5.s64 = ctx.r31.s64 + 288;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x82375e90
	if (ctx.cr6.eq) goto loc_82375E90;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82375E90:
	// bctrl 
	ctx.lr = 0x82375E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376564
	goto loc_82376564;
loc_82375E98:
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x8237aa00
	ctx.lr = 0x82375EA0;
	sub_8237AA00(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// beq cr6,0x82375ed4
	if (ctx.cr6.eq) goto loc_82375ED4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82375EB4:
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
	// bne 0x82375eb4
	if (!ctx.cr0.eq) goto loc_82375EB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82375ED4:
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x8237aac8
	ctx.lr = 0x82375EE0;
	sub_8237AAC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82375f08
	if (!ctx.cr6.eq) goto loc_82375F08;
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// addi r4,r31,848
	ctx.r4.s64 = ctx.r31.s64 + 848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82375f3c
	goto loc_82375F3C;
loc_82375F08:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-11304
	ctx.r6.s64 = ctx.r8.s64 + -11304;
	// addi r9,r11,-10448
	ctx.r9.s64 = ctx.r11.s64 + -10448;
	// addi r7,r10,-10484
	ctx.r7.s64 = ctx.r10.s64 + -10484;
	// addi r5,r5,-11380
	ctx.r5.s64 = ctx.r5.s64 + -11380;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,965
	ctx.r8.s64 = 965;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82375F3C;
	sub_82372320(ctx, base);
loc_82375F3C:
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x8237a970
	ctx.lr = 0x82375F44;
	sub_8237A970(ctx, base);
	// b 0x82376564
	goto loc_82376564;
loc_82375F48:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r29.u64);
	// beq 0x82375f6c
	if (ctx.cr0.eq) goto loc_82375F6C;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82375F60;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82375f70
	if (!ctx.cr0.eq) goto loc_82375F70;
loc_82375F6C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82375F70:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82375f94
	if (ctx.cr0.eq) goto loc_82375F94;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// bl 0x8236e110
	ctx.lr = 0x82375F88;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82375f98
	if (!ctx.cr0.eq) goto loc_82375F98;
loc_82375F94:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82375F98:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x82375fbc
	if (ctx.cr0.eq) goto loc_82375FBC;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82375FB0;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82375fc0
	if (!ctx.cr0.eq) goto loc_82375FC0;
loc_82375FBC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82375FC0:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r3,r31,4016
	ctx.r3.s64 = ctx.r31.s64 + 4016;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8233eaf0
	ctx.lr = 0x82375FDC;
	sub_8233EAF0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82375ff4
	if (ctx.cr0.eq) goto loc_82375FF4;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,4016
	ctx.r4.s64 = ctx.r31.s64 + 4016;
	// bl 0x8236e1a8
	ctx.lr = 0x82375FF4;
	sub_8236E1A8(ctx, base);
loc_82375FF4:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// addi r7,r31,4016
	ctx.r7.s64 = ctx.r31.s64 + 4016;
	// addi r6,r31,144
	ctx.r6.s64 = ctx.r31.s64 + 144;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// ld r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237601C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376564
	goto loc_82376564;
loc_82376020:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x82376044
	if (ctx.cr0.eq) goto loc_82376044;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82376038;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82376048
	if (!ctx.cr0.eq) goto loc_82376048;
loc_82376044:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82376048:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237606c
	if (ctx.cr0.eq) goto loc_8237606C;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// bl 0x8236e110
	ctx.lr = 0x82376060;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82376070
	if (!ctx.cr0.eq) goto loc_82376070;
loc_8237606C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82376070:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r29.u64);
	// beq 0x82376088
	if (ctx.cr0.eq) goto loc_82376088;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82376088;
	sub_8236E0A8(ctx, base);
loc_82376088:
	// addi r11,r30,-9
	ctx.r11.s64 = ctx.r30.s64 + -9;
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// addi r6,r31,144
	ctx.r6.s64 = ctx.r31.s64 + 144;
	// ld r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823760B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376564
	goto loc_82376564;
loc_823760B8:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x823760dc
	if (ctx.cr0.eq) goto loc_823760DC;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x823760D0;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x823760e0
	if (!ctx.cr0.eq) goto loc_823760E0;
loc_823760DC:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_823760E0:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,568
	ctx.r10.s64 = ctx.r31.s64 + 568;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823760F0:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823760f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823760F0;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237611c
	if (ctx.cr0.eq) goto loc_8237611C;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,576
	ctx.r4.s64 = ctx.r31.s64 + 576;
	// bl 0x8236e110
	ctx.lr = 0x82376110;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82376120
	if (!ctx.cr0.eq) goto loc_82376120;
loc_8237611C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82376120:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r3,r31,1968
	ctx.r3.s64 = ctx.r31.s64 + 1968;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8233eaf0
	ctx.lr = 0x8237613C;
	sub_8233EAF0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82376154
	if (ctx.cr0.eq) goto loc_82376154;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,1968
	ctx.r4.s64 = ctx.r31.s64 + 1968;
	// bl 0x8236e1a8
	ctx.lr = 0x82376154;
	sub_8236E1A8(ctx, base);
loc_82376154:
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r31,1968
	ctx.r6.s64 = ctx.r31.s64 + 1968;
	// addi r5,r31,576
	ctx.r5.s64 = ctx.r31.s64 + 576;
loc_82376164:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82376170:
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237617C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376564
	goto loc_82376564;
loc_82376180:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r29.u64);
	// beq 0x823761a4
	if (ctx.cr0.eq) goto loc_823761A4;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82376198;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x823761a8
	if (!ctx.cr0.eq) goto loc_823761A8;
loc_823761A4:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_823761A8:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,632
	ctx.r10.s64 = ctx.r31.s64 + 632;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823761B8:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823761b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823761B8;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823761e4
	if (ctx.cr0.eq) goto loc_823761E4;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,640
	ctx.r4.s64 = ctx.r31.s64 + 640;
	// bl 0x8236e110
	ctx.lr = 0x823761D8;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823761e8
	if (!ctx.cr0.eq) goto loc_823761E8;
loc_823761E4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823761E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x8237620c
	if (ctx.cr0.eq) goto loc_8237620C;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82376200;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x82376210
	if (!ctx.cr0.eq) goto loc_82376210;
loc_8237620C:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82376210:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,764
	ctx.r11.s64 = ctx.r31.s64 + 764;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82376220:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82376220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82376220;
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// beq 0x82376250
	if (ctx.cr0.eq) goto loc_82376250;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,768
	ctx.r4.s64 = ctx.r31.s64 + 768;
	// bl 0x8236e110
	ctx.lr = 0x82376244;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82376254
	if (!ctx.cr0.eq) goto loc_82376254;
loc_82376250:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82376254:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r3,r31,2992
	ctx.r3.s64 = ctx.r31.s64 + 2992;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8233eaf0
	ctx.lr = 0x82376270;
	sub_8233EAF0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82376288
	if (ctx.cr0.eq) goto loc_82376288;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,2992
	ctx.r4.s64 = ctx.r31.s64 + 2992;
	// bl 0x8236e1a8
	ctx.lr = 0x82376288;
	sub_8236E1A8(ctx, base);
loc_82376288:
	// ld r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// addi r6,r31,2992
	ctx.r6.s64 = ctx.r31.s64 + 2992;
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// addi r5,r31,640
	ctx.r5.s64 = ctx.r31.s64 + 640;
	// b 0x82376164
	goto loc_82376164;
loc_8237629C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x823762c0
	if (ctx.cr0.eq) goto loc_823762C0;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x823762B4;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x823762c4
	if (!ctx.cr0.eq) goto loc_823762C4;
loc_823762C0:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_823762C4:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,504
	ctx.r10.s64 = ctx.r31.s64 + 504;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823762D4:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823762d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823762D4;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376300
	if (ctx.cr0.eq) goto loc_82376300;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,512
	ctx.r4.s64 = ctx.r31.s64 + 512;
	// bl 0x8236e110
	ctx.lr = 0x823762F4;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82376304
	if (!ctx.cr0.eq) goto loc_82376304;
loc_82376300:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82376304:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// beq 0x82376324
	if (ctx.cr0.eq) goto loc_82376324;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,848
	ctx.r4.s64 = ctx.r31.s64 + 848;
	// bl 0x8236e1a8
	ctx.lr = 0x82376324;
	sub_8236E1A8(ctx, base);
loc_82376324:
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r31,512
	ctx.r5.s64 = ctx.r31.s64 + 512;
loc_82376330:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// addi r6,r31,848
	ctx.r6.s64 = ctx.r31.s64 + 848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82376170
	goto loc_82376170;
loc_82376344:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x82376368
	if (ctx.cr0.eq) goto loc_82376368;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x8237635C;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8237636c
	if (!ctx.cr0.eq) goto loc_8237636C;
loc_82376368:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8237636C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r29.u64);
	// beq 0x82376390
	if (ctx.cr0.eq) goto loc_82376390;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82376384;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x82376394
	if (!ctx.cr0.eq) goto loc_82376394;
loc_82376390:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82376394:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,440
	ctx.r10.s64 = ctx.r31.s64 + 440;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823763A4:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823763a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823763A4;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823763d0
	if (ctx.cr0.eq) goto loc_823763D0;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,448
	ctx.r4.s64 = ctx.r31.s64 + 448;
	// bl 0x8236e110
	ctx.lr = 0x823763C4;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823763d4
	if (!ctx.cr0.eq) goto loc_823763D4;
loc_823763D0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823763D4:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// beq 0x823763f4
	if (ctx.cr0.eq) goto loc_823763F4;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,848
	ctx.r4.s64 = ctx.r31.s64 + 848;
	// bl 0x8236e1a8
	ctx.lr = 0x823763F4;
	sub_8236E1A8(ctx, base);
loc_823763F4:
	// ld r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// addi r5,r31,448
	ctx.r5.s64 = ctx.r31.s64 + 448;
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// b 0x82376330
	goto loc_82376330;
loc_82376404:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x82376428
	if (ctx.cr0.eq) goto loc_82376428;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x8237641C;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x8237642c
	if (!ctx.cr0.eq) goto loc_8237642C;
loc_82376428:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_8237642C:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,696
	ctx.r10.s64 = ctx.r31.s64 + 696;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8237643C:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8237643c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237643C;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376468
	if (ctx.cr0.eq) goto loc_82376468;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,704
	ctx.r4.s64 = ctx.r31.s64 + 704;
	// bl 0x8236e110
	ctx.lr = 0x8237645C;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8237646c
	if (!ctx.cr0.eq) goto loc_8237646C;
loc_82376468:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8237646C:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8237a7b8
	ctx.lr = 0x82376478;
	sub_8237A7B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq 0x823764a4
	if (ctx.cr0.eq) goto loc_823764A4;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// bl 0x8236e1a8
	ctx.lr = 0x82376498;
	sub_8236E1A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823764a8
	if (!ctx.cr0.eq) goto loc_823764A8;
loc_823764A4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823764A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823764e4
	if (!ctx.cr6.eq) goto loc_823764E4;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8237a820
	ctx.lr = 0x823764C0;
	sub_8237A820(ctx, base);
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823764E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376518
	goto loc_82376518;
loc_823764E4:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-11304
	ctx.r6.s64 = ctx.r8.s64 + -11304;
	// addi r9,r11,-10532
	ctx.r9.s64 = ctx.r11.s64 + -10532;
	// addi r7,r10,-10484
	ctx.r7.s64 = ctx.r10.s64 + -10484;
	// addi r5,r5,-11380
	ctx.r5.s64 = ctx.r5.s64 + -11380;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,1080
	ctx.r8.s64 = 1080;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82376518;
	sub_82372320(ctx, base);
loc_82376518:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823750c8
	ctx.lr = 0x82376520;
	sub_823750C8(ctx, base);
	// b 0x82376564
	goto loc_82376564;
loc_82376524:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82375cec
	goto loc_82375CEC;
loc_82376534:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x8237654c
	if (ctx.cr0.eq) goto loc_8237654C;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x8237654C;
	sub_8236E0A8(ctx, base);
loc_8237654C:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82376564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82376564:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82376568:
	// bl 0x82375128
	ctx.lr = 0x8237656C;
	sub_82375128(ctx, base);
	// addi r1,r31,5088
	ctx.r1.s64 = ctx.r31.s64 + 5088;
}

__attribute__((alias("__imp__sub_82375BF8"))) PPC_WEAK_FUNC(sub_82375BF8);
PPC_FUNC_IMPL(__imp__sub_82375BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82375C00;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-5088
	ctx.r31.s64 = ctx.r1.s64 + -5088;
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5088(r1)
	ea = -5088 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,5116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5116, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// bl 0x8236e040
	ctx.lr = 0x82375C2C;
	sub_8236E040(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x82375c80
	if (!ctx.cr6.eq) goto loc_82375C80;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82375c70
	if (ctx.cr6.eq) goto loc_82375C70;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82375C50:
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
	// bne 0x82375c50
	if (!ctx.cr0.eq) goto loc_82375C50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82375C70:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82379da0
	ctx.lr = 0x82375C7C;
	sub_82379DA0(ctx, base);
	// b 0x82376564
	goto loc_82376564;
loc_82375C80:
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82375c94
	if (!ctx.cr6.eq) goto loc_82375C94;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82376568
	goto loc_82376568;
loc_82375C94:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bgt cr6,0x82376564
	if (ctx.cr6.gt) goto loc_82376564;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-10592
	ctx.r12.s64 = ctx.r12.s64 + -10592;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// addi r12,r12,23752
	ctx.r12.s64 = ctx.r12.s64 + 23752;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82375CC8;
	case 1:
		goto loc_82375CE0;
	case 2:
		goto loc_82375CF4;
	case 3:
		goto loc_82375D04;
	case 4:
		goto loc_82375D04;
	case 5:
		goto loc_82375E98;
	case 6:
		goto loc_82375F48;
	case 7:
		goto loc_82375F48;
	case 8:
		goto loc_82376020;
	case 9:
		goto loc_82376020;
	case 10:
		goto loc_82375D94;
	case 11:
		goto loc_82375D94;
	case 12:
		goto loc_8237629C;
	case 13:
		goto loc_82376344;
	case 14:
		goto loc_823760B8;
	case 15:
		goto loc_82376180;
	case 16:
		goto loc_82376404;
	case 17:
		goto loc_82376524;
	case 18:
		goto loc_82376564;
	case 19:
		goto loc_82376564;
	case 20:
		goto loc_82376564;
	case 21:
		goto loc_82376564;
	case 22:
		goto loc_82376564;
	case 23:
		goto loc_82376564;
	case 24:
		goto loc_82376564;
	case 25:
		goto loc_82376564;
	case 26:
		goto loc_82376564;
	case 27:
		goto loc_82376564;
	case 28:
		goto loc_82376534;
	default:
		__builtin_unreachable();
	}
loc_82375CC8:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82375CD8:
	// bctrl 
	ctx.lr = 0x82375CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376564
	goto loc_82376564;
loc_82375CE0:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_82375CEC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82375cd8
	goto loc_82375CD8;
loc_82375CF4:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82375cec
	goto loc_82375CEC;
loc_82375D04:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r29.u64);
	// beq 0x82375d28
	if (ctx.cr0.eq) goto loc_82375D28;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82375D1C;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne 0x82375d2c
	if (!ctx.cr0.eq) goto loc_82375D2C;
loc_82375D28:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82375D2C:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82375D40:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82375d40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82375D40;
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// beq 0x82375d64
	if (ctx.cr0.eq) goto loc_82375D64;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// bl 0x8236e110
	ctx.lr = 0x82375D64;
	sub_8236E110(ctx, base);
loc_82375D64:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// ld r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// addi r5,r31,208
	ctx.r5.s64 = ctx.r31.s64 + 208;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x82375d8c
	if (ctx.cr6.eq) goto loc_82375D8C;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82375D8C:
	// bctrl 
	ctx.lr = 0x82375D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376564
	goto loc_82376564;
loc_82375D94:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r29.u64);
	// beq 0x82375db8
	if (ctx.cr0.eq) goto loc_82375DB8;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82375DAC;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x82375dbc
	if (!ctx.cr0.eq) goto loc_82375DBC;
loc_82375DB8:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82375DBC:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,284
	ctx.r11.s64 = ctx.r31.s64 + 284;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82375DCC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82375dcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82375DCC;
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// beq 0x82375dfc
	if (ctx.cr0.eq) goto loc_82375DFC;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// bl 0x8236e110
	ctx.lr = 0x82375DF0;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82375e00
	if (!ctx.cr0.eq) goto loc_82375E00;
loc_82375DFC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82375E00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r29.u64);
	// beq 0x82375e24
	if (ctx.cr0.eq) goto loc_82375E24;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82375E18;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne 0x82375e28
	if (!ctx.cr0.eq) goto loc_82375E28;
loc_82375E24:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82375E28:
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r31,364
	ctx.r10.s64 = ctx.r31.s64 + 364;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82375E3C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82375e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82375E3C;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// beq 0x82375e60
	if (ctx.cr0.eq) goto loc_82375E60;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,368
	ctx.r4.s64 = ctx.r31.s64 + 368;
	// bl 0x8236e110
	ctx.lr = 0x82375E60;
	sub_8236E110(ctx, base);
loc_82375E60:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// ld r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// addi r7,r31,368
	ctx.r7.s64 = ctx.r31.s64 + 368;
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// addi r5,r31,288
	ctx.r5.s64 = ctx.r31.s64 + 288;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x82375e90
	if (ctx.cr6.eq) goto loc_82375E90;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82375E90:
	// bctrl 
	ctx.lr = 0x82375E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376564
	goto loc_82376564;
loc_82375E98:
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x8237aa00
	ctx.lr = 0x82375EA0;
	sub_8237AA00(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// beq cr6,0x82375ed4
	if (ctx.cr6.eq) goto loc_82375ED4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82375EB4:
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
	// bne 0x82375eb4
	if (!ctx.cr0.eq) goto loc_82375EB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82375ED4:
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x8237aac8
	ctx.lr = 0x82375EE0;
	sub_8237AAC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82375f08
	if (!ctx.cr6.eq) goto loc_82375F08;
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// addi r4,r31,848
	ctx.r4.s64 = ctx.r31.s64 + 848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82375f3c
	goto loc_82375F3C;
loc_82375F08:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-11304
	ctx.r6.s64 = ctx.r8.s64 + -11304;
	// addi r9,r11,-10448
	ctx.r9.s64 = ctx.r11.s64 + -10448;
	// addi r7,r10,-10484
	ctx.r7.s64 = ctx.r10.s64 + -10484;
	// addi r5,r5,-11380
	ctx.r5.s64 = ctx.r5.s64 + -11380;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,965
	ctx.r8.s64 = 965;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82375F3C;
	sub_82372320(ctx, base);
loc_82375F3C:
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x8237a970
	ctx.lr = 0x82375F44;
	sub_8237A970(ctx, base);
	// b 0x82376564
	goto loc_82376564;
loc_82375F48:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r29.u64);
	// beq 0x82375f6c
	if (ctx.cr0.eq) goto loc_82375F6C;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82375F60;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82375f70
	if (!ctx.cr0.eq) goto loc_82375F70;
loc_82375F6C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82375F70:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82375f94
	if (ctx.cr0.eq) goto loc_82375F94;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// bl 0x8236e110
	ctx.lr = 0x82375F88;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82375f98
	if (!ctx.cr0.eq) goto loc_82375F98;
loc_82375F94:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82375F98:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x82375fbc
	if (ctx.cr0.eq) goto loc_82375FBC;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82375FB0;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82375fc0
	if (!ctx.cr0.eq) goto loc_82375FC0;
loc_82375FBC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82375FC0:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r3,r31,4016
	ctx.r3.s64 = ctx.r31.s64 + 4016;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8233eaf0
	ctx.lr = 0x82375FDC;
	sub_8233EAF0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82375ff4
	if (ctx.cr0.eq) goto loc_82375FF4;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,4016
	ctx.r4.s64 = ctx.r31.s64 + 4016;
	// bl 0x8236e1a8
	ctx.lr = 0x82375FF4;
	sub_8236E1A8(ctx, base);
loc_82375FF4:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// addi r7,r31,4016
	ctx.r7.s64 = ctx.r31.s64 + 4016;
	// addi r6,r31,144
	ctx.r6.s64 = ctx.r31.s64 + 144;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// ld r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237601C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376564
	goto loc_82376564;
loc_82376020:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x82376044
	if (ctx.cr0.eq) goto loc_82376044;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82376038;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82376048
	if (!ctx.cr0.eq) goto loc_82376048;
loc_82376044:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82376048:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237606c
	if (ctx.cr0.eq) goto loc_8237606C;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// bl 0x8236e110
	ctx.lr = 0x82376060;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82376070
	if (!ctx.cr0.eq) goto loc_82376070;
loc_8237606C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82376070:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r29.u64);
	// beq 0x82376088
	if (ctx.cr0.eq) goto loc_82376088;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82376088;
	sub_8236E0A8(ctx, base);
loc_82376088:
	// addi r11,r30,-9
	ctx.r11.s64 = ctx.r30.s64 + -9;
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// addi r6,r31,144
	ctx.r6.s64 = ctx.r31.s64 + 144;
	// ld r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823760B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376564
	goto loc_82376564;
loc_823760B8:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x823760dc
	if (ctx.cr0.eq) goto loc_823760DC;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x823760D0;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x823760e0
	if (!ctx.cr0.eq) goto loc_823760E0;
loc_823760DC:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_823760E0:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,568
	ctx.r10.s64 = ctx.r31.s64 + 568;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823760F0:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823760f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823760F0;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237611c
	if (ctx.cr0.eq) goto loc_8237611C;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,576
	ctx.r4.s64 = ctx.r31.s64 + 576;
	// bl 0x8236e110
	ctx.lr = 0x82376110;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82376120
	if (!ctx.cr0.eq) goto loc_82376120;
loc_8237611C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82376120:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r3,r31,1968
	ctx.r3.s64 = ctx.r31.s64 + 1968;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8233eaf0
	ctx.lr = 0x8237613C;
	sub_8233EAF0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82376154
	if (ctx.cr0.eq) goto loc_82376154;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,1968
	ctx.r4.s64 = ctx.r31.s64 + 1968;
	// bl 0x8236e1a8
	ctx.lr = 0x82376154;
	sub_8236E1A8(ctx, base);
loc_82376154:
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r31,1968
	ctx.r6.s64 = ctx.r31.s64 + 1968;
	// addi r5,r31,576
	ctx.r5.s64 = ctx.r31.s64 + 576;
loc_82376164:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82376170:
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237617C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376564
	goto loc_82376564;
loc_82376180:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r29.u64);
	// beq 0x823761a4
	if (ctx.cr0.eq) goto loc_823761A4;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82376198;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x823761a8
	if (!ctx.cr0.eq) goto loc_823761A8;
loc_823761A4:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_823761A8:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,632
	ctx.r10.s64 = ctx.r31.s64 + 632;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823761B8:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823761b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823761B8;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823761e4
	if (ctx.cr0.eq) goto loc_823761E4;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,640
	ctx.r4.s64 = ctx.r31.s64 + 640;
	// bl 0x8236e110
	ctx.lr = 0x823761D8;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823761e8
	if (!ctx.cr0.eq) goto loc_823761E8;
loc_823761E4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823761E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x8237620c
	if (ctx.cr0.eq) goto loc_8237620C;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82376200;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x82376210
	if (!ctx.cr0.eq) goto loc_82376210;
loc_8237620C:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82376210:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r31,764
	ctx.r11.s64 = ctx.r31.s64 + 764;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82376220:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82376220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82376220;
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// beq 0x82376250
	if (ctx.cr0.eq) goto loc_82376250;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,768
	ctx.r4.s64 = ctx.r31.s64 + 768;
	// bl 0x8236e110
	ctx.lr = 0x82376244;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82376254
	if (!ctx.cr0.eq) goto loc_82376254;
loc_82376250:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82376254:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r3,r31,2992
	ctx.r3.s64 = ctx.r31.s64 + 2992;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8233eaf0
	ctx.lr = 0x82376270;
	sub_8233EAF0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82376288
	if (ctx.cr0.eq) goto loc_82376288;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,2992
	ctx.r4.s64 = ctx.r31.s64 + 2992;
	// bl 0x8236e1a8
	ctx.lr = 0x82376288;
	sub_8236E1A8(ctx, base);
loc_82376288:
	// ld r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// addi r6,r31,2992
	ctx.r6.s64 = ctx.r31.s64 + 2992;
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// addi r5,r31,640
	ctx.r5.s64 = ctx.r31.s64 + 640;
	// b 0x82376164
	goto loc_82376164;
loc_8237629C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x823762c0
	if (ctx.cr0.eq) goto loc_823762C0;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x823762B4;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x823762c4
	if (!ctx.cr0.eq) goto loc_823762C4;
loc_823762C0:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_823762C4:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,504
	ctx.r10.s64 = ctx.r31.s64 + 504;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823762D4:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823762d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823762D4;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376300
	if (ctx.cr0.eq) goto loc_82376300;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,512
	ctx.r4.s64 = ctx.r31.s64 + 512;
	// bl 0x8236e110
	ctx.lr = 0x823762F4;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82376304
	if (!ctx.cr0.eq) goto loc_82376304;
loc_82376300:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82376304:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// beq 0x82376324
	if (ctx.cr0.eq) goto loc_82376324;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,848
	ctx.r4.s64 = ctx.r31.s64 + 848;
	// bl 0x8236e1a8
	ctx.lr = 0x82376324;
	sub_8236E1A8(ctx, base);
loc_82376324:
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r31,512
	ctx.r5.s64 = ctx.r31.s64 + 512;
loc_82376330:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// addi r6,r31,848
	ctx.r6.s64 = ctx.r31.s64 + 848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82376170
	goto loc_82376170;
loc_82376344:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x82376368
	if (ctx.cr0.eq) goto loc_82376368;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x8237635C;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8237636c
	if (!ctx.cr0.eq) goto loc_8237636C;
loc_82376368:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8237636C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r29.u64);
	// beq 0x82376390
	if (ctx.cr0.eq) goto loc_82376390;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x82376384;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x82376394
	if (!ctx.cr0.eq) goto loc_82376394;
loc_82376390:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82376394:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,440
	ctx.r10.s64 = ctx.r31.s64 + 440;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823763A4:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823763a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823763A4;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823763d0
	if (ctx.cr0.eq) goto loc_823763D0;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,448
	ctx.r4.s64 = ctx.r31.s64 + 448;
	// bl 0x8236e110
	ctx.lr = 0x823763C4;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823763d4
	if (!ctx.cr0.eq) goto loc_823763D4;
loc_823763D0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823763D4:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// beq 0x823763f4
	if (ctx.cr0.eq) goto loc_823763F4;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,848
	ctx.r4.s64 = ctx.r31.s64 + 848;
	// bl 0x8236e1a8
	ctx.lr = 0x823763F4;
	sub_8236E1A8(ctx, base);
loc_823763F4:
	// ld r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// addi r5,r31,448
	ctx.r5.s64 = ctx.r31.s64 + 448;
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// b 0x82376330
	goto loc_82376330;
loc_82376404:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x82376428
	if (ctx.cr0.eq) goto loc_82376428;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x8237641C;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne 0x8237642c
	if (!ctx.cr0.eq) goto loc_8237642C;
loc_82376428:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_8237642C:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,696
	ctx.r10.s64 = ctx.r31.s64 + 696;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8237643C:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8237643c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237643C;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376468
	if (ctx.cr0.eq) goto loc_82376468;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,704
	ctx.r4.s64 = ctx.r31.s64 + 704;
	// bl 0x8236e110
	ctx.lr = 0x8237645C;
	sub_8236E110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8237646c
	if (!ctx.cr0.eq) goto loc_8237646C;
loc_82376468:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8237646C:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8237a7b8
	ctx.lr = 0x82376478;
	sub_8237A7B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq 0x823764a4
	if (ctx.cr0.eq) goto loc_823764A4;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// bl 0x8236e1a8
	ctx.lr = 0x82376498;
	sub_8236E1A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823764a8
	if (!ctx.cr0.eq) goto loc_823764A8;
loc_823764A4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823764A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823764e4
	if (!ctx.cr6.eq) goto loc_823764E4;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8237a820
	ctx.lr = 0x823764C0;
	sub_8237A820(ctx, base);
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823764E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82376518
	goto loc_82376518;
loc_823764E4:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-11304
	ctx.r6.s64 = ctx.r8.s64 + -11304;
	// addi r9,r11,-10532
	ctx.r9.s64 = ctx.r11.s64 + -10532;
	// addi r7,r10,-10484
	ctx.r7.s64 = ctx.r10.s64 + -10484;
	// addi r5,r5,-11380
	ctx.r5.s64 = ctx.r5.s64 + -11380;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,1080
	ctx.r8.s64 = 1080;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82376518;
	sub_82372320(ctx, base);
loc_82376518:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823750c8
	ctx.lr = 0x82376520;
	sub_823750C8(ctx, base);
	// b 0x82376564
	goto loc_82376564;
loc_82376524:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82375cec
	goto loc_82375CEC;
loc_82376534:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r29,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r29.u64);
	// beq 0x8237654c
	if (ctx.cr0.eq) goto loc_8237654C;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8236e0a8
	ctx.lr = 0x8237654C;
	sub_8236E0A8(ctx, base);
loc_8237654C:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// ld r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82376564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82376564:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82376568:
	// bl 0x82375128
	ctx.lr = 0x8237656C;
	sub_82375128(ctx, base);
	// addi r1,r31,5088
	ctx.r1.s64 = ctx.r31.s64 + 5088;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82376570"))) PPC_WEAK_FUNC(sub_82376570);
PPC_FUNC_IMPL(__imp__sub_82376570) {
	PPC_FUNC_PROLOGUE();
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82376574"))) PPC_WEAK_FUNC(sub_82376574);
PPC_FUNC_IMPL(__imp__sub_82376574) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-5088
	ctx.r31.s64 = ctx.r12.s64 + -5088;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,5116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5116);
	// bl 0x82375128
	ctx.lr = 0x8237658C;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237659C"))) PPC_WEAK_FUNC(sub_8237659C);
PPC_FUNC_IMPL(__imp__sub_8237659C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-5088
	ctx.r31.s64 = ctx.r12.s64 + -5088;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x8237a970
	ctx.lr = 0x823765B4;
	sub_8237A970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823765C4"))) PPC_WEAK_FUNC(sub_823765C4);
PPC_FUNC_IMPL(__imp__sub_823765C4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-5088
	ctx.r31.s64 = ctx.r12.s64 + -5088;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82374f98
	ctx.lr = 0x823765DC;
	sub_82374F98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823765EC"))) PPC_WEAK_FUNC(sub_823765EC);
PPC_FUNC_IMPL(__imp__sub_823765EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823765F0"))) PPC_WEAK_FUNC(sub_823765F0);
PPC_FUNC_IMPL(__imp__sub_823765F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-9784(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9784);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e434
	ctx.lr = 0x82376600;
	__savegprlr_15(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82376948
	if (ctx.cr6.eq) goto loc_82376948;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82378ce8
	ctx.lr = 0x82376634;
	sub_82378CE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376930
	if (ctx.cr0.eq) goto loc_82376930;
	// lis r25,-32250
	ctx.r25.s64 = -2113536000;
	// lis r26,-32250
	ctx.r26.s64 = -2113536000;
	// lis r27,-32250
	ctx.r27.s64 = -2113536000;
	// lis r28,-32250
	ctx.r28.s64 = -2113536000;
	// lis r29,-32250
	ctx.r29.s64 = -2113536000;
	// lis r30,-32250
	ctx.r30.s64 = -2113536000;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r23,r25,-9832
	ctx.r23.s64 = ctx.r25.s64 + -9832;
	// addi r18,r26,-9892
	ctx.r18.s64 = ctx.r26.s64 + -9892;
	// addi r17,r27,-9936
	ctx.r17.s64 = ctx.r27.s64 + -9936;
	// addi r22,r28,-9972
	ctx.r22.s64 = ctx.r28.s64 + -9972;
	// addi r16,r29,-10032
	ctx.r16.s64 = ctx.r29.s64 + -10032;
	// addi r24,r30,-10056
	ctx.r24.s64 = ctx.r30.s64 + -10056;
	// addi r21,r3,-10112
	ctx.r21.s64 = ctx.r3.s64 + -10112;
	// addi r20,r4,-10168
	ctx.r20.s64 = ctx.r4.s64 + -10168;
	// addi r27,r5,-25772
	ctx.r27.s64 = ctx.r5.s64 + -25772;
	// addi r25,r6,-10188
	ctx.r25.s64 = ctx.r6.s64 + -10188;
	// addi r26,r7,29112
	ctx.r26.s64 = ctx.r7.s64 + 29112;
	// addi r30,r8,-11380
	ctx.r30.s64 = ctx.r8.s64 + -11380;
	// addi r29,r9,-11304
	ctx.r29.s64 = ctx.r9.s64 + -11304;
	// addi r28,r10,-10212
	ctx.r28.s64 = ctx.r10.s64 + -10212;
	// addi r19,r11,-10264
	ctx.r19.s64 = ctx.r11.s64 + -10264;
loc_823766B4:
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82376888
	if (ctx.cr6.eq) goto loc_82376888;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82376824
	if (ctx.cr6.eq) goto loc_82376824;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x823767dc
	if (ctx.cr6.eq) goto loc_823767DC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82376770
	if (ctx.cr6.eq) goto loc_82376770;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq cr6,0x82376704
	if (ctx.cr6.eq) goto loc_82376704;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,296
	ctx.r8.s64 = 296;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823766FC:
	// bl 0x82372320
	ctx.lr = 0x82376700;
	sub_82372320(ctx, base);
	// b 0x82376918
	goto loc_82376918;
loc_82376704:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,226
	ctx.r8.s64 = 226;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82376718;
	sub_82372320(ctx, base);
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82376768
	if (ctx.cr6.eq) goto loc_82376768;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82376768
	if (ctx.cr6.eq) goto loc_82376768;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82376738:
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
	// bne 0x82376738
	if (!ctx.cr0.eq) goto loc_82376738;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// bl 0x8237a5a0
	ctx.lr = 0x82376764;
	sub_8237A5A0(ctx, base);
	// b 0x82376918
	goto loc_82376918;
loc_82376768:
	// li r8,234
	ctx.r8.s64 = 234;
	// b 0x823768fc
	goto loc_823768FC;
loc_82376770:
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8236e0a8
	ctx.lr = 0x8237677C;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823767d0
	if (ctx.cr0.eq) goto loc_823767D0;
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq cr6,0x823767c4
	if (ctx.cr6.eq) goto loc_823767C4;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// ld r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,280
	ctx.r8.s64 = 280;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823767B4;
	sub_82372320(ctx, base);
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// ld r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// std r10,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r10.u64);
	// b 0x82376918
	goto loc_82376918;
loc_823767C4:
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// li r8,285
	ctx.r8.s64 = 285;
	// b 0x8237690c
	goto loc_8237690C;
loc_823767D0:
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// li r8,290
	ctx.r8.s64 = 290;
	// b 0x82376900
	goto loc_82376900;
loc_823767DC:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8236e040
	ctx.lr = 0x823767E8;
	sub_8236E040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq 0x82376818
	if (ctx.cr0.eq) goto loc_82376818;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,265
	ctx.r8.s64 = 265;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,264(r15)
	PPC_STORE_U32(ctx.r15.u32 + 264, ctx.r10.u32);
	// b 0x823766fc
	goto loc_823766FC;
loc_82376818:
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// li r8,269
	ctx.r8.s64 = 269;
	// b 0x8237690c
	goto loc_8237690C;
loc_82376824:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,254
	ctx.r8.s64 = 254;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82376844;
	sub_82372320(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82376878
	if (ctx.cr6.eq) goto loc_82376878;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82376858:
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
	// bne 0x82376858
	if (!ctx.cr0.eq) goto loc_82376858;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82376878:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82375bf8
	ctx.lr = 0x82376884;
	sub_82375BF8(ctx, base);
	// b 0x82376918
	goto loc_82376918;
loc_82376888:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,240
	ctx.r8.s64 = 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823768A8;
	sub_82372320(ctx, base);
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823768f8
	if (ctx.cr6.eq) goto loc_823768F8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x823768e8
	if (ctx.cr6.eq) goto loc_823768E8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823768C8:
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
	// bne 0x823768c8
	if (!ctx.cr0.eq) goto loc_823768C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823768E8:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// lwz r3,4(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// bl 0x8237a3a0
	ctx.lr = 0x823768F4;
	sub_8237A3A0(ctx, base);
	// b 0x82376918
	goto loc_82376918;
loc_823768F8:
	// li r8,248
	ctx.r8.s64 = 248;
loc_823768FC:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82376900:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_8237690C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82376918;
	sub_82372320(ctx, base);
loc_82376918:
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// lwz r3,96(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 96);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82378ce8
	ctx.lr = 0x82376928;
	sub_82378CE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823766b4
	if (!ctx.cr0.eq) goto loc_823766B4;
loc_82376930:
	// lwz r3,4(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82376940
	if (ctx.cr6.eq) goto loc_82376940;
	// bl 0x82379fa0
	ctx.lr = 0x82376940;
	sub_82379FA0(ctx, base);
loc_82376940:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82376948;
	sub_82375128(ctx, base);
loc_82376948:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x8233e484
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823765F8"))) PPC_WEAK_FUNC(sub_823765F8);
PPC_FUNC_IMPL(__imp__sub_823765F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e434
	ctx.lr = 0x82376600;
	__savegprlr_15(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82376948
	if (ctx.cr6.eq) goto loc_82376948;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82378ce8
	ctx.lr = 0x82376634;
	sub_82378CE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376930
	if (ctx.cr0.eq) goto loc_82376930;
	// lis r25,-32250
	ctx.r25.s64 = -2113536000;
	// lis r26,-32250
	ctx.r26.s64 = -2113536000;
	// lis r27,-32250
	ctx.r27.s64 = -2113536000;
	// lis r28,-32250
	ctx.r28.s64 = -2113536000;
	// lis r29,-32250
	ctx.r29.s64 = -2113536000;
	// lis r30,-32250
	ctx.r30.s64 = -2113536000;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r23,r25,-9832
	ctx.r23.s64 = ctx.r25.s64 + -9832;
	// addi r18,r26,-9892
	ctx.r18.s64 = ctx.r26.s64 + -9892;
	// addi r17,r27,-9936
	ctx.r17.s64 = ctx.r27.s64 + -9936;
	// addi r22,r28,-9972
	ctx.r22.s64 = ctx.r28.s64 + -9972;
	// addi r16,r29,-10032
	ctx.r16.s64 = ctx.r29.s64 + -10032;
	// addi r24,r30,-10056
	ctx.r24.s64 = ctx.r30.s64 + -10056;
	// addi r21,r3,-10112
	ctx.r21.s64 = ctx.r3.s64 + -10112;
	// addi r20,r4,-10168
	ctx.r20.s64 = ctx.r4.s64 + -10168;
	// addi r27,r5,-25772
	ctx.r27.s64 = ctx.r5.s64 + -25772;
	// addi r25,r6,-10188
	ctx.r25.s64 = ctx.r6.s64 + -10188;
	// addi r26,r7,29112
	ctx.r26.s64 = ctx.r7.s64 + 29112;
	// addi r30,r8,-11380
	ctx.r30.s64 = ctx.r8.s64 + -11380;
	// addi r29,r9,-11304
	ctx.r29.s64 = ctx.r9.s64 + -11304;
	// addi r28,r10,-10212
	ctx.r28.s64 = ctx.r10.s64 + -10212;
	// addi r19,r11,-10264
	ctx.r19.s64 = ctx.r11.s64 + -10264;
loc_823766B4:
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82376888
	if (ctx.cr6.eq) goto loc_82376888;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82376824
	if (ctx.cr6.eq) goto loc_82376824;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x823767dc
	if (ctx.cr6.eq) goto loc_823767DC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82376770
	if (ctx.cr6.eq) goto loc_82376770;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq cr6,0x82376704
	if (ctx.cr6.eq) goto loc_82376704;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,296
	ctx.r8.s64 = 296;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823766FC:
	// bl 0x82372320
	ctx.lr = 0x82376700;
	sub_82372320(ctx, base);
	// b 0x82376918
	goto loc_82376918;
loc_82376704:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,226
	ctx.r8.s64 = 226;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82376718;
	sub_82372320(ctx, base);
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82376768
	if (ctx.cr6.eq) goto loc_82376768;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82376768
	if (ctx.cr6.eq) goto loc_82376768;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82376738:
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
	// bne 0x82376738
	if (!ctx.cr0.eq) goto loc_82376738;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// bl 0x8237a5a0
	ctx.lr = 0x82376764;
	sub_8237A5A0(ctx, base);
	// b 0x82376918
	goto loc_82376918;
loc_82376768:
	// li r8,234
	ctx.r8.s64 = 234;
	// b 0x823768fc
	goto loc_823768FC;
loc_82376770:
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8236e0a8
	ctx.lr = 0x8237677C;
	sub_8236E0A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823767d0
	if (ctx.cr0.eq) goto loc_823767D0;
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq cr6,0x823767c4
	if (ctx.cr6.eq) goto loc_823767C4;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// ld r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,280
	ctx.r8.s64 = 280;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823767B4;
	sub_82372320(ctx, base);
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// ld r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// std r10,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r10.u64);
	// b 0x82376918
	goto loc_82376918;
loc_823767C4:
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// li r8,285
	ctx.r8.s64 = 285;
	// b 0x8237690c
	goto loc_8237690C;
loc_823767D0:
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// li r8,290
	ctx.r8.s64 = 290;
	// b 0x82376900
	goto loc_82376900;
loc_823767DC:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8236e040
	ctx.lr = 0x823767E8;
	sub_8236E040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq 0x82376818
	if (ctx.cr0.eq) goto loc_82376818;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,265
	ctx.r8.s64 = 265;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,264(r15)
	PPC_STORE_U32(ctx.r15.u32 + 264, ctx.r10.u32);
	// b 0x823766fc
	goto loc_823766FC;
loc_82376818:
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// li r8,269
	ctx.r8.s64 = 269;
	// b 0x8237690c
	goto loc_8237690C;
loc_82376824:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,254
	ctx.r8.s64 = 254;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82376844;
	sub_82372320(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82376878
	if (ctx.cr6.eq) goto loc_82376878;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82376858:
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
	// bne 0x82376858
	if (!ctx.cr0.eq) goto loc_82376858;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82376878:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82375bf8
	ctx.lr = 0x82376884;
	sub_82375BF8(ctx, base);
	// b 0x82376918
	goto loc_82376918;
loc_82376888:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,240
	ctx.r8.s64 = 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823768A8;
	sub_82372320(ctx, base);
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823768f8
	if (ctx.cr6.eq) goto loc_823768F8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x823768e8
	if (ctx.cr6.eq) goto loc_823768E8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823768C8:
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
	// bne 0x823768c8
	if (!ctx.cr0.eq) goto loc_823768C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823768E8:
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// lwz r3,4(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// bl 0x8237a3a0
	ctx.lr = 0x823768F4;
	sub_8237A3A0(ctx, base);
	// b 0x82376918
	goto loc_82376918;
loc_823768F8:
	// li r8,248
	ctx.r8.s64 = 248;
loc_823768FC:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82376900:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_8237690C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82376918;
	sub_82372320(ctx, base);
loc_82376918:
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// lwz r3,96(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 96);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// bl 0x82378ce8
	ctx.lr = 0x82376928;
	sub_82378CE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823766b4
	if (!ctx.cr0.eq) goto loc_823766B4;
loc_82376930:
	// lwz r3,4(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82376940
	if (ctx.cr6.eq) goto loc_82376940;
	// bl 0x82379fa0
	ctx.lr = 0x82376940;
	sub_82379FA0(ctx, base);
loc_82376940:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82376948;
	sub_82375128(ctx, base);
loc_82376948:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x8233e484
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82376950"))) PPC_WEAK_FUNC(sub_82376950);
PPC_FUNC_IMPL(__imp__sub_82376950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-256
	ctx.r31.s64 = ctx.r12.s64 + -256;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82375128
	ctx.lr = 0x82376968;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376978"))) PPC_WEAK_FUNC(sub_82376978);
PPC_FUNC_IMPL(__imp__sub_82376978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-9704(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9704);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-11000
	ctx.r11.s64 = ctx.r11.s64 + -11000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82375920
	ctx.lr = 0x823769B0;
	sub_82375920(ctx, base);
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x823769B8;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823790f0
	ctx.lr = 0x823769C0;
	sub_823790F0(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376980"))) PPC_WEAK_FUNC(sub_82376980);
PPC_FUNC_IMPL(__imp__sub_82376980) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-11000
	ctx.r11.s64 = ctx.r11.s64 + -11000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82375920
	ctx.lr = 0x823769B0;
	sub_82375920(ctx, base);
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x823769B8;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823790f0
	ctx.lr = 0x823769C0;
	sub_823790F0(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823769D8"))) PPC_WEAK_FUNC(sub_823769D8);
PPC_FUNC_IMPL(__imp__sub_823769D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x823790f0
	ctx.lr = 0x823769F0;
	sub_823790F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376A00"))) PPC_WEAK_FUNC(sub_82376A00);
PPC_FUNC_IMPL(__imp__sub_82376A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82375128
	ctx.lr = 0x82376A1C;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376A2C"))) PPC_WEAK_FUNC(sub_82376A2C);
PPC_FUNC_IMPL(__imp__sub_82376A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376A30"))) PPC_WEAK_FUNC(sub_82376A30);
PPC_FUNC_IMPL(__imp__sub_82376A30) {
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
	// bl 0x82376980
	ctx.lr = 0x82376A50;
	sub_82376980(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376a60
	if (ctx.cr0.eq) goto loc_82376A60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82376A60;
	sub_8236A3F0(ctx, base);
loc_82376A60:
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

__attribute__((alias("__imp__sub_82376A7C"))) PPC_WEAK_FUNC(sub_82376A7C);
PPC_FUNC_IMPL(__imp__sub_82376A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376A80"))) PPC_WEAK_FUNC(sub_82376A80);
PPC_FUNC_IMPL(__imp__sub_82376A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-9488(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9488);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82376A90;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bne cr6,0x82376ac8
	if (!ctx.cr6.eq) goto loc_82376AC8;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82376ad8
	goto loc_82376AD8;
loc_82376AC8:
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c2c90
	ctx.lr = 0x82376AD4;
	sub_821C2C90(ctx, base);
	// addi r28,r3,2
	ctx.r28.s64 = ctx.r3.s64 + 2;
loc_82376AD8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82376ae8
	if (!ctx.cr6.eq) goto loc_82376AE8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82376af8
	goto loc_82376AF8;
loc_82376AE8:
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c2c90
	ctx.lr = 0x82376AF4;
	sub_821C2C90(ctx, base);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
loc_82376AF8:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235cff8
	ctx.lr = 0x82376B0C;
	sub_8235CFF8(ctx, base);
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82379150
	ctx.lr = 0x82376B28;
	sub_82379150(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e450
	ctx.lr = 0x82376B38;
	sub_8236E450(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376b68
	if (ctx.cr0.eq) goto loc_82376B68;
	// li r5,255
	ctx.r5.s64 = 255;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e450
	ctx.lr = 0x82376B5C;
	sub_8236E450(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376b68
	if (ctx.cr0.eq) goto loc_82376B68;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82376B68:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376bdc
	if (ctx.cr0.eq) goto loc_82376BDC;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82379c90
	ctx.lr = 0x82376B80;
	sub_82379C90(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82376bc0
	if (ctx.cr0.eq) goto loc_82376BC0;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r8,-9532
	ctx.r7.s64 = ctx.r8.s64 + -9532;
	// addi r9,r11,-9564
	ctx.r9.s64 = ctx.r11.s64 + -9564;
	// addi r6,r6,-9592
	ctx.r6.s64 = ctx.r6.s64 + -9592;
	// addi r5,r5,-9604
	ctx.r5.s64 = ctx.r5.s64 + -9604;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,50
	ctx.r8.s64 = 50;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82376BBC;
	sub_82372320(ctx, base);
	// b 0x82376c10
	goto loc_82376C10;
loc_82376BC0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82376c10
	if (ctx.cr6.eq) goto loc_82376C10;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82376dd8
	ctx.lr = 0x82376BD8;
	sub_82376DD8(ctx, base);
	// b 0x82376c10
	goto loc_82376C10;
loc_82376BDC:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-9592
	ctx.r6.s64 = ctx.r8.s64 + -9592;
	// addi r9,r11,-9640
	ctx.r9.s64 = ctx.r11.s64 + -9640;
	// addi r7,r10,-9532
	ctx.r7.s64 = ctx.r10.s64 + -9532;
	// addi r5,r5,-9604
	ctx.r5.s64 = ctx.r5.s64 + -9604;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,59
	ctx.r8.s64 = 59;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82376C10;
	sub_82372320(ctx, base);
loc_82376C10:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236de20
	ctx.lr = 0x82376C18;
	sub_8236DE20(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82376A88"))) PPC_WEAK_FUNC(sub_82376A88);
PPC_FUNC_IMPL(__imp__sub_82376A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82376A90;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bne cr6,0x82376ac8
	if (!ctx.cr6.eq) goto loc_82376AC8;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82376ad8
	goto loc_82376AD8;
loc_82376AC8:
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c2c90
	ctx.lr = 0x82376AD4;
	sub_821C2C90(ctx, base);
	// addi r28,r3,2
	ctx.r28.s64 = ctx.r3.s64 + 2;
loc_82376AD8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82376ae8
	if (!ctx.cr6.eq) goto loc_82376AE8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82376af8
	goto loc_82376AF8;
loc_82376AE8:
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c2c90
	ctx.lr = 0x82376AF4;
	sub_821C2C90(ctx, base);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
loc_82376AF8:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235cff8
	ctx.lr = 0x82376B0C;
	sub_8235CFF8(ctx, base);
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82379150
	ctx.lr = 0x82376B28;
	sub_82379150(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e450
	ctx.lr = 0x82376B38;
	sub_8236E450(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376b68
	if (ctx.cr0.eq) goto loc_82376B68;
	// li r5,255
	ctx.r5.s64 = 255;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236e450
	ctx.lr = 0x82376B5C;
	sub_8236E450(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376b68
	if (ctx.cr0.eq) goto loc_82376B68;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82376B68:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376bdc
	if (ctx.cr0.eq) goto loc_82376BDC;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82379c90
	ctx.lr = 0x82376B80;
	sub_82379C90(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82376bc0
	if (ctx.cr0.eq) goto loc_82376BC0;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r8,-9532
	ctx.r7.s64 = ctx.r8.s64 + -9532;
	// addi r9,r11,-9564
	ctx.r9.s64 = ctx.r11.s64 + -9564;
	// addi r6,r6,-9592
	ctx.r6.s64 = ctx.r6.s64 + -9592;
	// addi r5,r5,-9604
	ctx.r5.s64 = ctx.r5.s64 + -9604;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,50
	ctx.r8.s64 = 50;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82376BBC;
	sub_82372320(ctx, base);
	// b 0x82376c10
	goto loc_82376C10;
loc_82376BC0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82376c10
	if (ctx.cr6.eq) goto loc_82376C10;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82376dd8
	ctx.lr = 0x82376BD8;
	sub_82376DD8(ctx, base);
	// b 0x82376c10
	goto loc_82376C10;
loc_82376BDC:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r6,r8,-9592
	ctx.r6.s64 = ctx.r8.s64 + -9592;
	// addi r9,r11,-9640
	ctx.r9.s64 = ctx.r11.s64 + -9640;
	// addi r7,r10,-9532
	ctx.r7.s64 = ctx.r10.s64 + -9532;
	// addi r5,r5,-9604
	ctx.r5.s64 = ctx.r5.s64 + -9604;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,59
	ctx.r8.s64 = 59;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82376C10;
	sub_82372320(ctx, base);
loc_82376C10:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236de20
	ctx.lr = 0x82376C18;
	sub_8236DE20(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82376C24"))) PPC_WEAK_FUNC(sub_82376C24);
PPC_FUNC_IMPL(__imp__sub_82376C24) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236de20
	ctx.lr = 0x82376C3C;
	sub_8236DE20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376C4C"))) PPC_WEAK_FUNC(sub_82376C4C);
PPC_FUNC_IMPL(__imp__sub_82376C4C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376c7c
	if (ctx.cr0.eq) goto loc_82376C7C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x821c0630
	ctx.lr = 0x82376C7C;
	sub_821C0630(ctx, base);
loc_82376C7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376C8C"))) PPC_WEAK_FUNC(sub_82376C8C);
PPC_FUNC_IMPL(__imp__sub_82376C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376C90"))) PPC_WEAK_FUNC(sub_82376C90);
PPC_FUNC_IMPL(__imp__sub_82376C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-9376(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9376);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82376CA0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235cff8
	ctx.lr = 0x82376CD0;
	sub_8235CFF8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82379150
	ctx.lr = 0x82376CEC;
	sub_82379150(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82379c90
	ctx.lr = 0x82376CFC;
	sub_82379C90(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82376d3c
	if (ctx.cr0.eq) goto loc_82376D3C;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r8,-9424
	ctx.r7.s64 = ctx.r8.s64 + -9424;
	// addi r9,r11,-9564
	ctx.r9.s64 = ctx.r11.s64 + -9564;
	// addi r6,r6,-9592
	ctx.r6.s64 = ctx.r6.s64 + -9592;
	// addi r5,r5,-9604
	ctx.r5.s64 = ctx.r5.s64 + -9604;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,246
	ctx.r8.s64 = 246;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82376D38;
	sub_82372320(ctx, base);
	// b 0x82376d4c
	goto loc_82376D4C;
loc_82376D3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82376dd8
	ctx.lr = 0x82376D4C;
	sub_82376DD8(ctx, base);
loc_82376D4C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236de20
	ctx.lr = 0x82376D54;
	sub_8236DE20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82376C98"))) PPC_WEAK_FUNC(sub_82376C98);
PPC_FUNC_IMPL(__imp__sub_82376C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82376CA0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8235cff8
	ctx.lr = 0x82376CD0;
	sub_8235CFF8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82379150
	ctx.lr = 0x82376CEC;
	sub_82379150(ctx, base);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82379c90
	ctx.lr = 0x82376CFC;
	sub_82379C90(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82376d3c
	if (ctx.cr0.eq) goto loc_82376D3C;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r7,r8,-9424
	ctx.r7.s64 = ctx.r8.s64 + -9424;
	// addi r9,r11,-9564
	ctx.r9.s64 = ctx.r11.s64 + -9564;
	// addi r6,r6,-9592
	ctx.r6.s64 = ctx.r6.s64 + -9592;
	// addi r5,r5,-9604
	ctx.r5.s64 = ctx.r5.s64 + -9604;
	// addi r4,r4,-25772
	ctx.r4.s64 = ctx.r4.s64 + -25772;
	// li r8,246
	ctx.r8.s64 = 246;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x82376D38;
	sub_82372320(ctx, base);
	// b 0x82376d4c
	goto loc_82376D4C;
loc_82376D3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82376dd8
	ctx.lr = 0x82376D4C;
	sub_82376DD8(ctx, base);
loc_82376D4C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236de20
	ctx.lr = 0x82376D54;
	sub_8236DE20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82376D60"))) PPC_WEAK_FUNC(sub_82376D60);
PPC_FUNC_IMPL(__imp__sub_82376D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8236de20
	ctx.lr = 0x82376D78;
	sub_8236DE20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376D88"))) PPC_WEAK_FUNC(sub_82376D88);
PPC_FUNC_IMPL(__imp__sub_82376D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376db8
	if (ctx.cr0.eq) goto loc_82376DB8;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x821c0630
	ctx.lr = 0x82376DB8;
	sub_821C0630(ctx, base);
loc_82376DB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376DC8"))) PPC_WEAK_FUNC(sub_82376DC8);
PPC_FUNC_IMPL(__imp__sub_82376DC8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376DD0"))) PPC_WEAK_FUNC(sub_82376DD0);
PPC_FUNC_IMPL(__imp__sub_82376DD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376DD8"))) PPC_WEAK_FUNC(sub_82376DD8);
PPC_FUNC_IMPL(__imp__sub_82376DD8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376DE4"))) PPC_WEAK_FUNC(sub_82376DE4);
PPC_FUNC_IMPL(__imp__sub_82376DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376DE8"))) PPC_WEAK_FUNC(sub_82376DE8);
PPC_FUNC_IMPL(__imp__sub_82376DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-9288(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9288);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82376DF8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-9312
	ctx.r11.s64 = ctx.r11.s64 + -9312;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8236e710
	ctx.lr = 0x82376E28;
	sub_8236E710(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lfs f0,-28948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// std r29,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r29.u64);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// bl 0x8236e710
	ctx.lr = 0x82376E68;
	sub_8236E710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82376DF0"))) PPC_WEAK_FUNC(sub_82376DF0);
PPC_FUNC_IMPL(__imp__sub_82376DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82376DF8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-9312
	ctx.r11.s64 = ctx.r11.s64 + -9312;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8236e710
	ctx.lr = 0x82376E28;
	sub_8236E710(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lfs f0,-28948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// std r29,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r29.u64);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// bl 0x8236e710
	ctx.lr = 0x82376E68;
	sub_8236E710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82376E74"))) PPC_WEAK_FUNC(sub_82376E74);
PPC_FUNC_IMPL(__imp__sub_82376E74) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8236db30
	ctx.lr = 0x82376E8C;
	sub_8236DB30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376E9C"))) PPC_WEAK_FUNC(sub_82376E9C);
PPC_FUNC_IMPL(__imp__sub_82376E9C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82375128
	ctx.lr = 0x82376EB8;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376EC8"))) PPC_WEAK_FUNC(sub_82376EC8);
PPC_FUNC_IMPL(__imp__sub_82376EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-9216(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9216);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-9312
	ctx.r11.s64 = ctx.r11.s64 + -9312;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82375128
	ctx.lr = 0x82376F04;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236db30
	ctx.lr = 0x82376F0C;
	sub_8236DB30(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376ED0"))) PPC_WEAK_FUNC(sub_82376ED0);
PPC_FUNC_IMPL(__imp__sub_82376ED0) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-9312
	ctx.r11.s64 = ctx.r11.s64 + -9312;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82375128
	ctx.lr = 0x82376F04;
	sub_82375128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236db30
	ctx.lr = 0x82376F0C;
	sub_8236DB30(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376F24"))) PPC_WEAK_FUNC(sub_82376F24);
PPC_FUNC_IMPL(__imp__sub_82376F24) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8236db30
	ctx.lr = 0x82376F3C;
	sub_8236DB30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376F4C"))) PPC_WEAK_FUNC(sub_82376F4C);
PPC_FUNC_IMPL(__imp__sub_82376F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376F50"))) PPC_WEAK_FUNC(sub_82376F50);
PPC_FUNC_IMPL(__imp__sub_82376F50) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82376fec
	if (!ctx.cr6.eq) goto loc_82376FEC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82376fec
	if (!ctx.cr6.gt) goto loc_82376FEC;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8236e6c0
	ctx.lr = 0x82376F8C;
	sub_8236E6C0(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82376fec
	if (ctx.cr6.lt) goto loc_82376FEC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82350190
	ctx.lr = 0x82376FAC;
	sub_82350190(ctx, base);
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f1.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r7,r8,-9072
	ctx.r7.s64 = ctx.r8.s64 + -9072;
	// addi r9,r11,-9108
	ctx.r9.s64 = ctx.r11.s64 + -9108;
	// addi r6,r6,-9148
	ctx.r6.s64 = ctx.r6.s64 + -9148;
	// addi r5,r5,-9160
	ctx.r5.s64 = ctx.r5.s64 + -9160;
	// addi r4,r4,29112
	ctx.r4.s64 = ctx.r4.s64 + 29112;
	// li r8,47
	ctx.r8.s64 = 47;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82376FEC;
	sub_82372320(ctx, base);
loc_82376FEC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_82377004"))) PPC_WEAK_FUNC(sub_82377004);
PPC_FUNC_IMPL(__imp__sub_82377004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377008"))) PPC_WEAK_FUNC(sub_82377008);
PPC_FUNC_IMPL(__imp__sub_82377008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-8856(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8856);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x82377018;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r29,r3,36
	ctx.r29.s64 = ctx.r3.s64 + 36;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8236e040
	ctx.lr = 0x8237703C;
	sub_8236E040(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi. r24,r3,24
	ctx.r24.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r23,r11,-9160
	ctx.r23.s64 = ctx.r11.s64 + -9160;
	// addi r22,r10,-9148
	ctx.r22.s64 = ctx.r10.s64 + -9148;
	// addi r21,r9,-8900
	ctx.r21.s64 = ctx.r9.s64 + -8900;
	// beq 0x823771f0
	if (ctx.cr0.eq) goto loc_823771F0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823771f0
	if (ctx.cr6.eq) goto loc_823771F0;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8236e040
	ctx.lr = 0x82377078;
	sub_8236E040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// beq 0x823771f0
	if (ctx.cr0.eq) goto loc_823771F0;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82377134
	if (ctx.cr6.eq) goto loc_82377134;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823770B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r28,28(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823770cc
	if (ctx.cr6.lt) goto loc_823770CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823770CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823771f0
	if (ctx.cr6.eq) goto loc_823771F0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_823770D8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8237710c
	if (ctx.cr6.eq) goto loc_8237710C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823770EC:
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
	// bne 0x823770ec
	if (!ctx.cr0.eq) goto loc_823770EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8237710C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82377124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bne 0x823770d8
	if (!ctx.cr0.eq) goto loc_823770D8;
	// b 0x823771f0
	goto loc_823771F0;
loc_82377134:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823771c4
	if (ctx.cr6.eq) goto loc_823771C4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82377154
	if (ctx.cr6.lt) goto loc_82377154;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82377154:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823771f0
	if (ctx.cr6.eq) goto loc_823771F0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82377164:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82377198
	if (ctx.cr6.eq) goto loc_82377198;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82377178:
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
	// bne 0x82377178
	if (!ctx.cr0.eq) goto loc_82377178;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82377198:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823771B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82377164
	if (!ctx.cr0.eq) goto loc_82377164;
	// b 0x823771f0
	goto loc_823771F0;
loc_823771C4:
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,-25772
	ctx.r4.s64 = ctx.r8.s64 + -25772;
	// addi r9,r11,-8984
	ctx.r9.s64 = ctx.r11.s64 + -8984;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r8,241
	ctx.r8.s64 = 241;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823771F0;
	sub_82372320(ctx, base);
loc_823771F0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82377224
	if (!ctx.cr6.eq) goto loc_82377224;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,12188
	ctx.r4.s64 = ctx.r8.s64 + 12188;
	// addi r9,r11,-9048
	ctx.r9.s64 = ctx.r11.s64 + -9048;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r8,249
	ctx.r8.s64 = 249;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82377224;
	sub_82372320(ctx, base);
loc_82377224:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82375128
	ctx.lr = 0x8237722C;
	sub_82375128(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82377010"))) PPC_WEAK_FUNC(sub_82377010);
PPC_FUNC_IMPL(__imp__sub_82377010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e44c
	ctx.lr = 0x82377018;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r29,r3,36
	ctx.r29.s64 = ctx.r3.s64 + 36;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8236e040
	ctx.lr = 0x8237703C;
	sub_8236E040(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi. r24,r3,24
	ctx.r24.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r23,r11,-9160
	ctx.r23.s64 = ctx.r11.s64 + -9160;
	// addi r22,r10,-9148
	ctx.r22.s64 = ctx.r10.s64 + -9148;
	// addi r21,r9,-8900
	ctx.r21.s64 = ctx.r9.s64 + -8900;
	// beq 0x823771f0
	if (ctx.cr0.eq) goto loc_823771F0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823771f0
	if (ctx.cr6.eq) goto loc_823771F0;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8236e040
	ctx.lr = 0x82377078;
	sub_8236E040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// beq 0x823771f0
	if (ctx.cr0.eq) goto loc_823771F0;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82377134
	if (ctx.cr6.eq) goto loc_82377134;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823770B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r28,28(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823770cc
	if (ctx.cr6.lt) goto loc_823770CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823770CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823771f0
	if (ctx.cr6.eq) goto loc_823771F0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_823770D8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8237710c
	if (ctx.cr6.eq) goto loc_8237710C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823770EC:
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
	// bne 0x823770ec
	if (!ctx.cr0.eq) goto loc_823770EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8237710C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82377124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bne 0x823770d8
	if (!ctx.cr0.eq) goto loc_823770D8;
	// b 0x823771f0
	goto loc_823771F0;
loc_82377134:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823771c4
	if (ctx.cr6.eq) goto loc_823771C4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82377154
	if (ctx.cr6.lt) goto loc_82377154;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82377154:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823771f0
	if (ctx.cr6.eq) goto loc_823771F0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82377164:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82377198
	if (ctx.cr6.eq) goto loc_82377198;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82377178:
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
	// bne 0x82377178
	if (!ctx.cr0.eq) goto loc_82377178;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82377198:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823771B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82377164
	if (!ctx.cr0.eq) goto loc_82377164;
	// b 0x823771f0
	goto loc_823771F0;
loc_823771C4:
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,-25772
	ctx.r4.s64 = ctx.r8.s64 + -25772;
	// addi r9,r11,-8984
	ctx.r9.s64 = ctx.r11.s64 + -8984;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r8,241
	ctx.r8.s64 = 241;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82372320
	ctx.lr = 0x823771F0;
	sub_82372320(ctx, base);
loc_823771F0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82377224
	if (!ctx.cr6.eq) goto loc_82377224;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,12188
	ctx.r4.s64 = ctx.r8.s64 + 12188;
	// addi r9,r11,-9048
	ctx.r9.s64 = ctx.r11.s64 + -9048;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r8,249
	ctx.r8.s64 = 249;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82377224;
	sub_82372320(ctx, base);
loc_82377224:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82375128
	ctx.lr = 0x8237722C;
	sub_82375128(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x8233e49c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82377238"))) PPC_WEAK_FUNC(sub_82377238);
PPC_FUNC_IMPL(__imp__sub_82377238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-192
	ctx.r31.s64 = ctx.r12.s64 + -192;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82375128
	ctx.lr = 0x82377250;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377260"))) PPC_WEAK_FUNC(sub_82377260);
PPC_FUNC_IMPL(__imp__sub_82377260) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8236e690
	ctx.lr = 0x82377284;
	sub_8236E690(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82350190
	ctx.lr = 0x8237729C;
	sub_82350190(ctx, base);
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

__attribute__((alias("__imp__sub_823772B4"))) PPC_WEAK_FUNC(sub_823772B4);
PPC_FUNC_IMPL(__imp__sub_823772B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823772B8"))) PPC_WEAK_FUNC(sub_823772B8);
PPC_FUNC_IMPL(__imp__sub_823772B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-8784(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8784);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823772C8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x823689c8
	ctx.lr = 0x823772F0;
	sub_823689C8(ctx, base);
	// std r28,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r28.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x823772FC;
	sub_82375128(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823772C0"))) PPC_WEAK_FUNC(sub_823772C0);
PPC_FUNC_IMPL(__imp__sub_823772C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823772C8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x823689c8
	ctx.lr = 0x823772F0;
	sub_823689C8(ctx, base);
	// std r28,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r28.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375128
	ctx.lr = 0x823772FC;
	sub_82375128(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82377304"))) PPC_WEAK_FUNC(sub_82377304);
PPC_FUNC_IMPL(__imp__sub_82377304) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x82375128
	ctx.lr = 0x8237731C;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237732C"))) PPC_WEAK_FUNC(sub_8237732C);
PPC_FUNC_IMPL(__imp__sub_8237732C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377330"))) PPC_WEAK_FUNC(sub_82377330);
PPC_FUNC_IMPL(__imp__sub_82377330) {
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
	// bl 0x82376ed0
	ctx.lr = 0x82377350;
	sub_82376ED0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377360
	if (ctx.cr0.eq) goto loc_82377360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a3f0
	ctx.lr = 0x82377360;
	sub_8236A3F0(ctx, base);
loc_82377360:
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

__attribute__((alias("__imp__sub_8237737C"))) PPC_WEAK_FUNC(sub_8237737C);
PPC_FUNC_IMPL(__imp__sub_8237737C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377380"))) PPC_WEAK_FUNC(sub_82377380);
PPC_FUNC_IMPL(__imp__sub_82377380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-8592(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8592);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82377390;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r23,4
	ctx.r23.s64 = 4;
	// addi r30,r29,48
	ctx.r30.s64 = ctx.r29.s64 + 48;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r23,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8236e0a8
	ctx.lr = 0x823773BC;
	sub_8236E0A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r10,-9160
	ctx.r28.s64 = ctx.r10.s64 + -9160;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// addi r27,r9,-9148
	ctx.r27.s64 = ctx.r9.s64 + -9148;
	// addi r26,r8,-8636
	ctx.r26.s64 = ctx.r8.s64 + -8636;
	// beq 0x82377418
	if (ctx.cr0.eq) goto loc_82377418;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,29112
	ctx.r4.s64 = ctx.r8.s64 + 29112;
	// addi r9,r11,-8684
	ctx.r9.s64 = ctx.r11.s64 + -8684;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r8,123
	ctx.r8.s64 = 123;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82377418;
	sub_82372320(ctx, base);
loc_82377418:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82377438
	if (ctx.cr6.eq) goto loc_82377438;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8236e040
	ctx.lr = 0x8237742C;
	sub_8236E040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8237743c
	if (!ctx.cr0.eq) goto loc_8237743C;
loc_82377438:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237743C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823774d8
	if (ctx.cr0.eq) goto loc_823774D8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823774c0
	if (!ctx.cr6.eq) goto loc_823774C0;
	// stw r11,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8236e610
	ctx.lr = 0x82377460;
	sub_8236E610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823774b4
	if (ctx.cr0.eq) goto loc_823774B4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x823774a8
	if (ctx.cr6.eq) goto loc_823774A8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82377488:
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
	// bne 0x82377488
	if (!ctx.cr0.eq) goto loc_82377488;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823774A8:
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82377010
	ctx.lr = 0x823774B4;
	sub_82377010(ctx, base);
loc_823774B4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// b 0x8237750c
	goto loc_8237750C;
loc_823774C0:
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// beq cr6,0x8237750c
	if (ctx.cr6.eq) goto loc_8237750C;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// b 0x8237750c
	goto loc_8237750C;
loc_823774D8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r23,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r23.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r10,-8720
	ctx.r9.s64 = ctx.r10.s64 + -8720;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,12188
	ctx.r4.s64 = ctx.r11.s64 + 12188;
	// li r8,157
	ctx.r8.s64 = 157;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8237750C;
	sub_82372320(ctx, base);
loc_8237750C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82375128
	ctx.lr = 0x82377514;
	sub_82375128(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82377388"))) PPC_WEAK_FUNC(sub_82377388);
PPC_FUNC_IMPL(__imp__sub_82377388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82377390;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r23,4
	ctx.r23.s64 = 4;
	// addi r30,r29,48
	ctx.r30.s64 = ctx.r29.s64 + 48;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r23,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8236e0a8
	ctx.lr = 0x823773BC;
	sub_8236E0A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r10,-9160
	ctx.r28.s64 = ctx.r10.s64 + -9160;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// addi r27,r9,-9148
	ctx.r27.s64 = ctx.r9.s64 + -9148;
	// addi r26,r8,-8636
	ctx.r26.s64 = ctx.r8.s64 + -8636;
	// beq 0x82377418
	if (ctx.cr0.eq) goto loc_82377418;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,29112
	ctx.r4.s64 = ctx.r8.s64 + 29112;
	// addi r9,r11,-8684
	ctx.r9.s64 = ctx.r11.s64 + -8684;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r8,123
	ctx.r8.s64 = 123;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x82377418;
	sub_82372320(ctx, base);
loc_82377418:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82377438
	if (ctx.cr6.eq) goto loc_82377438;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8236e040
	ctx.lr = 0x8237742C;
	sub_8236E040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8237743c
	if (!ctx.cr0.eq) goto loc_8237743C;
loc_82377438:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237743C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823774d8
	if (ctx.cr0.eq) goto loc_823774D8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823774c0
	if (!ctx.cr6.eq) goto loc_823774C0;
	// stw r11,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8236e610
	ctx.lr = 0x82377460;
	sub_8236E610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823774b4
	if (ctx.cr0.eq) goto loc_823774B4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// beq cr6,0x823774a8
	if (ctx.cr6.eq) goto loc_823774A8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82377488:
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
	// bne 0x82377488
	if (!ctx.cr0.eq) goto loc_82377488;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823774A8:
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82377010
	ctx.lr = 0x823774B4;
	sub_82377010(ctx, base);
loc_823774B4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// b 0x8237750c
	goto loc_8237750C;
loc_823774C0:
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// beq cr6,0x8237750c
	if (ctx.cr6.eq) goto loc_8237750C;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// b 0x8237750c
	goto loc_8237750C;
loc_823774D8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r23,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r23.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r10,-8720
	ctx.r9.s64 = ctx.r10.s64 + -8720;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,12188
	ctx.r4.s64 = ctx.r11.s64 + 12188;
	// li r8,157
	ctx.r8.s64 = 157;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x8237750C;
	sub_82372320(ctx, base);
loc_8237750C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82375128
	ctx.lr = 0x82377514;
	sub_82375128(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237751C"))) PPC_WEAK_FUNC(sub_8237751C);
PPC_FUNC_IMPL(__imp__sub_8237751C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x82375128
	ctx.lr = 0x82377534;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377544"))) PPC_WEAK_FUNC(sub_82377544);
PPC_FUNC_IMPL(__imp__sub_82377544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377548"))) PPC_WEAK_FUNC(sub_82377548);
PPC_FUNC_IMPL(__imp__sub_82377548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-8240(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8240);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82377558;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r26,4
	ctx.r26.s64 = 4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r29,r11,-8288
	ctx.r29.s64 = ctx.r11.s64 + -8288;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r28,r10,-9148
	ctx.r28.s64 = ctx.r10.s64 + -9148;
	// ld r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// addi r27,r9,-9160
	ctx.r27.s64 = ctx.r9.s64 + -9160;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,29112
	ctx.r4.s64 = ctx.r8.s64 + 29112;
	// addi r9,r11,-8348
	ctx.r9.s64 = ctx.r11.s64 + -8348;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r8,166
	ctx.r8.s64 = 166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823775B8;
	sub_82372320(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8236e040
	ctx.lr = 0x823775C4;
	sub_8236E040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237765c
	if (ctx.cr0.eq) goto loc_8237765C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82377634
	if (!ctx.cr6.eq) goto loc_82377634;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8237761c
	if (ctx.cr6.eq) goto loc_8237761C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823775FC:
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
	// bne 0x823775fc
	if (!ctx.cr0.eq) goto loc_823775FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8237761C:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82377010
	ctx.lr = 0x82377628;
	sub_82377010(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x82377694
	goto loc_82377694;
loc_82377634:
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// bne cr6,0x8237764c
	if (!ctx.cr6.eq) goto loc_8237764C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r8,185
	ctx.r8.s64 = 185;
	// addi r9,r9,-8456
	ctx.r9.s64 = ctx.r9.s64 + -8456;
	// b 0x82377668
	goto loc_82377668;
loc_8237764C:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// b 0x82377694
	goto loc_82377694;
loc_8237765C:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r8,204
	ctx.r8.s64 = 204;
	// addi r9,r9,-8528
	ctx.r9.s64 = ctx.r9.s64 + -8528;
loc_82377668:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,12188
	ctx.r4.s64 = ctx.r11.s64 + 12188;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82377694;
	sub_82372320(ctx, base);
loc_82377694:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82375128
	ctx.lr = 0x8237769C;
	sub_82375128(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82377550"))) PPC_WEAK_FUNC(sub_82377550);
PPC_FUNC_IMPL(__imp__sub_82377550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82377558;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r26,4
	ctx.r26.s64 = 4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r29,r11,-8288
	ctx.r29.s64 = ctx.r11.s64 + -8288;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r28,r10,-9148
	ctx.r28.s64 = ctx.r10.s64 + -9148;
	// ld r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// addi r27,r9,-9160
	ctx.r27.s64 = ctx.r9.s64 + -9160;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r8,29112
	ctx.r4.s64 = ctx.r8.s64 + 29112;
	// addi r9,r11,-8348
	ctx.r9.s64 = ctx.r11.s64 + -8348;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r8,166
	ctx.r8.s64 = 166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372320
	ctx.lr = 0x823775B8;
	sub_82372320(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8236e040
	ctx.lr = 0x823775C4;
	sub_8236E040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237765c
	if (ctx.cr0.eq) goto loc_8237765C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82377634
	if (!ctx.cr6.eq) goto loc_82377634;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8237761c
	if (ctx.cr6.eq) goto loc_8237761C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_823775FC:
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
	// bne 0x823775fc
	if (!ctx.cr0.eq) goto loc_823775FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8237761C:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82377010
	ctx.lr = 0x82377628;
	sub_82377010(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x82377694
	goto loc_82377694;
loc_82377634:
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// bne cr6,0x8237764c
	if (!ctx.cr6.eq) goto loc_8237764C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r8,185
	ctx.r8.s64 = 185;
	// addi r9,r9,-8456
	ctx.r9.s64 = ctx.r9.s64 + -8456;
	// b 0x82377668
	goto loc_82377668;
loc_8237764C:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// b 0x82377694
	goto loc_82377694;
loc_8237765C:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r8,204
	ctx.r8.s64 = 204;
	// addi r9,r9,-8528
	ctx.r9.s64 = ctx.r9.s64 + -8528;
loc_82377668:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,12188
	ctx.r4.s64 = ctx.r11.s64 + 12188;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82372320
	ctx.lr = 0x82377694;
	sub_82372320(ctx, base);
loc_82377694:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82375128
	ctx.lr = 0x8237769C;
	sub_82375128(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823776A4"))) PPC_WEAK_FUNC(sub_823776A4);
PPC_FUNC_IMPL(__imp__sub_823776A4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82375128
	ctx.lr = 0x823776BC;
	sub_82375128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823776CC"))) PPC_WEAK_FUNC(sub_823776CC);
PPC_FUNC_IMPL(__imp__sub_823776CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823776D0"))) PPC_WEAK_FUNC(sub_823776D0);
PPC_FUNC_IMPL(__imp__sub_823776D0) {
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
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// bl 0x8233eaf0
	ctx.lr = 0x82377718;
	sub_8233EAF0(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82377728;
	sub_8233EAF0(ctx, base);
	// li r11,85
	ctx.r11.s64 = 85;
	// li r10,51
	ctx.r10.s64 = 51;
	// li r9,34
	ctx.r9.s64 = 34;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stb r10,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,130(r31)
	PPC_STORE_U8(ctx.r31.u32 + 130, ctx.r9.u8);
	// stb r30,131(r31)
	PPC_STORE_U8(ctx.r31.u32 + 131, ctx.r30.u8);
	// stb r30,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r30.u8);
	// stb r30,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r30.u8);
	// stb r30,134(r31)
	PPC_STORE_U8(ctx.r31.u32 + 134, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8237776C"))) PPC_WEAK_FUNC(sub_8237776C);
PPC_FUNC_IMPL(__imp__sub_8237776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377770"))) PPC_WEAK_FUNC(sub_82377770);
PPC_FUNC_IMPL(__imp__sub_82377770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-8168(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8168);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82377780;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823777A8:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823777a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823777A8;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r31,92
	ctx.r7.s64 = ctx.r31.s64 + 92;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x823777D4;
	sub_8236EA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377820
	if (ctx.cr0.eq) goto loc_82377820;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82377814;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82377824
	if (!ctx.cr0.eq) goto loc_82377824;
loc_82377820:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377824:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377878
	if (ctx.cr0.eq) goto loc_82377878;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82377840:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82377840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82377840;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x8237786C;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8237787c
	if (!ctx.cr0.eq) goto loc_8237787C;
loc_82377878:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237787C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823778d0
	if (ctx.cr0.eq) goto loc_823778D0;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,104
	ctx.r9.s64 = ctx.r31.s64 + 104;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82377898:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82377898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82377898;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,100
	ctx.r7.s64 = ctx.r31.s64 + 100;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x823778C4;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823778d4
	if (!ctx.cr0.eq) goto loc_823778D4;
loc_823778D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823778D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377928
	if (ctx.cr0.eq) goto loc_82377928;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,108
	ctx.r9.s64 = ctx.r31.s64 + 108;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823778F0:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823778f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823778F0;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x8237791C;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8237792c
	if (!ctx.cr0.eq) goto loc_8237792C;
loc_82377928:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237792C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377980
	if (ctx.cr0.eq) goto loc_82377980;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r8,r30,24
	ctx.r8.s64 = ctx.r30.s64 + 24;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,128
	ctx.r9.s64 = ctx.r31.s64 + 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82377948:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82377948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82377948;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,120
	ctx.r7.s64 = ctx.r31.s64 + 120;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82377974;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82377984
	if (!ctx.cr0.eq) goto loc_82377984;
loc_82377980:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377984:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823779d8
	if (ctx.cr0.eq) goto loc_823779D8;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,136
	ctx.r9.s64 = ctx.r31.s64 + 136;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823779A0:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823779a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823779A0;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,128
	ctx.r7.s64 = ctx.r31.s64 + 128;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x823779CC;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823779dc
	if (!ctx.cr0.eq) goto loc_823779DC;
loc_823779D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823779DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377a0c
	if (ctx.cr0.eq) goto loc_82377A0C;
	// li r8,64
	ctx.r8.s64 = 64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r30,40
	ctx.r7.s64 = ctx.r30.s64 + 40;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82377A00;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82377a10
	if (!ctx.cr0.eq) goto loc_82377A10;
loc_82377A0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377A10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377a40
	if (ctx.cr0.eq) goto loc_82377A40;
	// li r8,24
	ctx.r8.s64 = 24;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r30,104
	ctx.r7.s64 = ctx.r30.s64 + 104;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82377A34;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82377a44
	if (!ctx.cr0.eq) goto loc_82377A44;
loc_82377A40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377A44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377a74
	if (ctx.cr0.eq) goto loc_82377A74;
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r30,128
	ctx.r7.s64 = ctx.r30.s64 + 128;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82377A68;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82377a78
	if (!ctx.cr0.eq) goto loc_82377A78;
loc_82377A74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377A78:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8237dc48
	ctx.lr = 0x82377A84;
	sub_8237DC48(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r7,r31,108
	ctx.r7.s64 = ctx.r31.s64 + 108;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r6,r31,144
	ctx.r6.s64 = ctx.r31.s64 + 144;
	// li r5,121
	ctx.r5.s64 = 121;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8237db48
	ctx.lr = 0x82377AA4;
	sub_8237DB48(ctx, base);
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// addi r7,r30,131
	ctx.r7.s64 = ctx.r30.s64 + 131;
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,131(r30)
	PPC_STORE_U8(ctx.r30.u32 + 131, ctx.r10.u8);
	// stb r9,132(r30)
	PPC_STORE_U8(ctx.r30.u32 + 132, ctx.r9.u8);
	// stb r8,133(r30)
	PPC_STORE_U8(ctx.r30.u32 + 133, ctx.r8.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,134(r30)
	PPC_STORE_U8(ctx.r30.u32 + 134, ctx.r11.u8);
	// beq 0x82377aec
	if (ctx.cr0.eq) goto loc_82377AEC;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82377AEC;
	sub_8236EA10(ctx, base);
loc_82377AEC:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8237db38
	ctx.lr = 0x82377AF4;
	sub_8237DB38(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82377778"))) PPC_WEAK_FUNC(sub_82377778);
PPC_FUNC_IMPL(__imp__sub_82377778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82377780;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823777A8:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823777a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823777A8;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r31,92
	ctx.r7.s64 = ctx.r31.s64 + 92;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x823777D4;
	sub_8236EA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377820
	if (ctx.cr0.eq) goto loc_82377820;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82377814;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82377824
	if (!ctx.cr0.eq) goto loc_82377824;
loc_82377820:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377824:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377878
	if (ctx.cr0.eq) goto loc_82377878;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82377840:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82377840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82377840;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x8237786C;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8237787c
	if (!ctx.cr0.eq) goto loc_8237787C;
loc_82377878:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237787C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823778d0
	if (ctx.cr0.eq) goto loc_823778D0;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,104
	ctx.r9.s64 = ctx.r31.s64 + 104;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82377898:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82377898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82377898;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,100
	ctx.r7.s64 = ctx.r31.s64 + 100;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x823778C4;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823778d4
	if (!ctx.cr0.eq) goto loc_823778D4;
loc_823778D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823778D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377928
	if (ctx.cr0.eq) goto loc_82377928;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,108
	ctx.r9.s64 = ctx.r31.s64 + 108;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823778F0:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823778f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823778F0;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x8237791C;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8237792c
	if (!ctx.cr0.eq) goto loc_8237792C;
loc_82377928:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237792C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377980
	if (ctx.cr0.eq) goto loc_82377980;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r8,r30,24
	ctx.r8.s64 = ctx.r30.s64 + 24;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,128
	ctx.r9.s64 = ctx.r31.s64 + 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82377948:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82377948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82377948;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,120
	ctx.r7.s64 = ctx.r31.s64 + 120;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82377974;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82377984
	if (!ctx.cr0.eq) goto loc_82377984;
loc_82377980:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377984:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823779d8
	if (ctx.cr0.eq) goto loc_823779D8;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,136
	ctx.r9.s64 = ctx.r31.s64 + 136;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823779A0:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,-1(r9)
	ea = -1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823779a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823779A0;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r31,128
	ctx.r7.s64 = ctx.r31.s64 + 128;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x823779CC;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823779dc
	if (!ctx.cr0.eq) goto loc_823779DC;
loc_823779D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823779DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377a0c
	if (ctx.cr0.eq) goto loc_82377A0C;
	// li r8,64
	ctx.r8.s64 = 64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r30,40
	ctx.r7.s64 = ctx.r30.s64 + 40;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82377A00;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82377a10
	if (!ctx.cr0.eq) goto loc_82377A10;
loc_82377A0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377A10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377a40
	if (ctx.cr0.eq) goto loc_82377A40;
	// li r8,24
	ctx.r8.s64 = 24;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r30,104
	ctx.r7.s64 = ctx.r30.s64 + 104;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82377A34;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82377a44
	if (!ctx.cr0.eq) goto loc_82377A44;
loc_82377A40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377A44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82377a74
	if (ctx.cr0.eq) goto loc_82377A74;
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r30,128
	ctx.r7.s64 = ctx.r30.s64 + 128;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82377A68;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82377a78
	if (!ctx.cr0.eq) goto loc_82377A78;
loc_82377A74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377A78:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8237dc48
	ctx.lr = 0x82377A84;
	sub_8237DC48(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r7,r31,108
	ctx.r7.s64 = ctx.r31.s64 + 108;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r6,r31,144
	ctx.r6.s64 = ctx.r31.s64 + 144;
	// li r5,121
	ctx.r5.s64 = 121;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8237db48
	ctx.lr = 0x82377AA4;
	sub_8237DB48(ctx, base);
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// addi r7,r30,131
	ctx.r7.s64 = ctx.r30.s64 + 131;
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,131(r30)
	PPC_STORE_U8(ctx.r30.u32 + 131, ctx.r10.u8);
	// stb r9,132(r30)
	PPC_STORE_U8(ctx.r30.u32 + 132, ctx.r9.u8);
	// stb r8,133(r30)
	PPC_STORE_U8(ctx.r30.u32 + 133, ctx.r8.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,134(r30)
	PPC_STORE_U8(ctx.r30.u32 + 134, ctx.r11.u8);
	// beq 0x82377aec
	if (ctx.cr0.eq) goto loc_82377AEC;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236ea10
	ctx.lr = 0x82377AEC;
	sub_8236EA10(ctx, base);
loc_82377AEC:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8237db38
	ctx.lr = 0x82377AF4;
	sub_8237DB38(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82377AFC"))) PPC_WEAK_FUNC(sub_82377AFC);
PPC_FUNC_IMPL(__imp__sub_82377AFC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8237db38
	ctx.lr = 0x82377B14;
	sub_8237DB38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377B24"))) PPC_WEAK_FUNC(sub_82377B24);
PPC_FUNC_IMPL(__imp__sub_82377B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377B28"))) PPC_WEAK_FUNC(sub_82377B28);
PPC_FUNC_IMPL(__imp__sub_82377B28) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r6,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r6.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// bne cr6,0x82377b74
	if (!ctx.cr6.eq) goto loc_82377B74;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8236a338
	ctx.lr = 0x82377B68;
	sub_8236A338(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
loc_82377B74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82377BA4"))) PPC_WEAK_FUNC(sub_82377BA4);
PPC_FUNC_IMPL(__imp__sub_82377BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377BA8"))) PPC_WEAK_FUNC(sub_82377BA8);
PPC_FUNC_IMPL(__imp__sub_82377BA8) {
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
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82377bd0
	if (!ctx.cr6.lt) goto loc_82377BD0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82377BD0:
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8233eb90
	ctx.lr = 0x82377BDC;
	sub_8233EB90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82377C0C"))) PPC_WEAK_FUNC(sub_82377C0C);
PPC_FUNC_IMPL(__imp__sub_82377C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377C10"))) PPC_WEAK_FUNC(sub_82377C10);
PPC_FUNC_IMPL(__imp__sub_82377C10) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82377c40
	if (ctx.cr0.eq) goto loc_82377C40;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82377c40
	if (!ctx.cr6.eq) goto loc_82377C40;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82377c40
	if (!ctx.cr6.gt) goto loc_82377C40;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_82377C40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377C64"))) PPC_WEAK_FUNC(sub_82377C64);
PPC_FUNC_IMPL(__imp__sub_82377C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377C68"))) PPC_WEAK_FUNC(sub_82377C68);
PPC_FUNC_IMPL(__imp__sub_82377C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-8096(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8096);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82377C78;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r11,r11,28568
	ctx.r11.s64 = ctx.r11.s64 + 28568;
	// stb r6,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r6.u8);
	// stb r6,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r6.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8236a338
	ctx.lr = 0x82377CB8;
	sub_8236A338(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x82377CD4;
	sub_8233E4E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82377C70"))) PPC_WEAK_FUNC(sub_82377C70);
PPC_FUNC_IMPL(__imp__sub_82377C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82377C78;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r11,r11,28568
	ctx.r11.s64 = ctx.r11.s64 + 28568;
	// stb r6,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r6.u8);
	// stb r6,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r6.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8236a338
	ctx.lr = 0x82377CB8;
	sub_8236A338(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x8233e4e0
	ctx.lr = 0x82377CD4;
	sub_8233E4E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82377CE0"))) PPC_WEAK_FUNC(sub_82377CE0);
PPC_FUNC_IMPL(__imp__sub_82377CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8236db30
	ctx.lr = 0x82377CF8;
	sub_8236DB30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377D08"))) PPC_WEAK_FUNC(sub_82377D08);
PPC_FUNC_IMPL(__imp__sub_82377D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-17104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17104);
	// lwz r16,-7984(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -7984);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82377D18;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-8048
	ctx.r11.s64 = ctx.r11.s64 + -8048;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237dd58
	ctx.lr = 0x82377D64;
	sub_8237DD58(ctx, base);
	// stw r26,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r26.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x8236d820
	ctx.lr = 0x82377D70;
	sub_8236D820(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x8236e710
	ctx.lr = 0x82377D78;
	sub_8236E710(ctx, base);
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x8236e710
	ctx.lr = 0x82377D80;
	sub_8236E710(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// bl 0x8237dd68
	ctx.lr = 0x82377D9C;
	sub_8237DD68(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8236a338
	ctx.lr = 0x82377DA4;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// beq 0x82377dcc
	if (ctx.cr0.eq) goto loc_82377DCC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82377b28
	ctx.lr = 0x82377DC8;
	sub_82377B28(ctx, base);
	// b 0x82377dd0
	goto loc_82377DD0;
loc_82377DCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82377DD0:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8236a338
	ctx.lr = 0x82377DE0;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82377e00
	if (ctx.cr0.eq) goto loc_82377E00;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82377b28
	ctx.lr = 0x82377DFC;
	sub_82377B28(ctx, base);
	// b 0x82377e04
	goto loc_82377E04;
loc_82377E00:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82377E04:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236b838
	ctx.lr = 0x82377E14;
	sub_8236B838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82377D10"))) PPC_WEAK_FUNC(sub_82377D10);
PPC_FUNC_IMPL(__imp__sub_82377D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82377D18;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-8048
	ctx.r11.s64 = ctx.r11.s64 + -8048;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237dd58
	ctx.lr = 0x82377D64;
	sub_8237DD58(ctx, base);
	// stw r26,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r26.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x8236d820
	ctx.lr = 0x82377D70;
	sub_8236D820(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x8236e710
	ctx.lr = 0x82377D78;
	sub_8236E710(ctx, base);
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x8236e710
	ctx.lr = 0x82377D80;
	sub_8236E710(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// bl 0x8237dd68
	ctx.lr = 0x82377D9C;
	sub_8237DD68(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8236a338
	ctx.lr = 0x82377DA4;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// beq 0x82377dcc
	if (ctx.cr0.eq) goto loc_82377DCC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82377b28
	ctx.lr = 0x82377DC8;
	sub_82377B28(ctx, base);
	// b 0x82377dd0
	goto loc_82377DD0;
loc_82377DCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82377DD0:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8236a338
	ctx.lr = 0x82377DE0;
	sub_8236A338(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82377e00
	if (ctx.cr0.eq) goto loc_82377E00;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82377b28
	ctx.lr = 0x82377DFC;
	sub_82377B28(ctx, base);
	// b 0x82377e04
	goto loc_82377E04;
loc_82377E00:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82377E04:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236b838
	ctx.lr = 0x82377E14;
	sub_8236B838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82377E20"))) PPC_WEAK_FUNC(sub_82377E20);
PPC_FUNC_IMPL(__imp__sub_82377E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x821cc648
	ctx.lr = 0x82377E38;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377E48"))) PPC_WEAK_FUNC(sub_82377E48);
PPC_FUNC_IMPL(__imp__sub_82377E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x8236db30
	ctx.lr = 0x82377E60;
	sub_8236DB30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377E70"))) PPC_WEAK_FUNC(sub_82377E70);
PPC_FUNC_IMPL(__imp__sub_82377E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x821c0630
	ctx.lr = 0x82377E8C;
	sub_821C0630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377E9C"))) PPC_WEAK_FUNC(sub_82377E9C);
PPC_FUNC_IMPL(__imp__sub_82377E9C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8234f138
	ctx.lr = 0x82377EB8;
	sub_8234F138(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377EC8"))) PPC_WEAK_FUNC(sub_82377EC8);
PPC_FUNC_IMPL(__imp__sub_82377EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// bl 0x821cc648
	ctx.lr = 0x82377EE4;
	sub_821CC648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377EF4"))) PPC_WEAK_FUNC(sub_82377EF4);
PPC_FUNC_IMPL(__imp__sub_82377EF4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82350110
	ctx.lr = 0x82377F0C;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377F1C"))) PPC_WEAK_FUNC(sub_82377F1C);
PPC_FUNC_IMPL(__imp__sub_82377F1C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82350110
	ctx.lr = 0x82377F34;
	sub_82350110(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377F44"))) PPC_WEAK_FUNC(sub_82377F44);
PPC_FUNC_IMPL(__imp__sub_82377F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377F48"))) PPC_WEAK_FUNC(sub_82377F48);
PPC_FUNC_IMPL(__imp__sub_82377F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82377f74
	if (ctx.cr6.lt) goto loc_82377F74;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82377F74:
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377F80"))) PPC_WEAK_FUNC(sub_82377F80);
PPC_FUNC_IMPL(__imp__sub_82377F80) {
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
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237800c
	if (ctx.cr0.eq) goto loc_8237800C;
	// addi r30,r3,64
	ctx.r30.s64 = ctx.r3.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236e710
	ctx.lr = 0x82377FAC;
	sub_8236E710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236e690
	ctx.lr = 0x82377FB4;
	sub_8236E690(ctx, base);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236e710
	ctx.lr = 0x82377FC0;
	sub_8236E710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236e690
	ctx.lr = 0x82377FC8;
	sub_8236E690(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82378058
	if (ctx.cr6.eq) goto loc_82378058;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82377FDC:
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
	// bne 0x82377fdc
	if (!ctx.cr0.eq) goto loc_82377FDC;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8237804c
	goto loc_8237804C;
loc_8237800C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82378058
	if (ctx.cr6.eq) goto loc_82378058;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82378020:
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
	// bne 0x82378020
	if (!ctx.cr0.eq) goto loc_82378020;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8237804C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82378058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82378058:
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

__attribute__((alias("__imp__sub_82378070"))) PPC_WEAK_FUNC(sub_82378070);
PPC_FUNC_IMPL(__imp__sub_82378070) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823780cc
	if (ctx.cr6.eq) goto loc_823780CC;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82378090:
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
	// bne 0x82378090
	if (!ctx.cr0.eq) goto loc_82378090;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823780CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823780CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823780DC"))) PPC_WEAK_FUNC(sub_823780DC);
PPC_FUNC_IMPL(__imp__sub_823780DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823780E0"))) PPC_WEAK_FUNC(sub_823780E0);
PPC_FUNC_IMPL(__imp__sub_823780E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x823780E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82378124
	if (ctx.cr6.lt) goto loc_82378124;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// b 0x8237812c
	goto loc_8237812C;
loc_82378124:
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8237812C:
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8237813c
	if (!ctx.cr6.lt) goto loc_8237813C;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// b 0x82378158
	goto loc_82378158;
loc_8237813C:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82378150
	if (ctx.cr6.lt) goto loc_82378150;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r3,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r3.s64;
	// b 0x82378158
	goto loc_82378158;
loc_82378150:
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
loc_82378158:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237816c
	if (ctx.cr6.lt) goto loc_8237816C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r4,r3,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r3.s64;
	// b 0x82378174
	goto loc_82378174;
loc_8237816C:
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_82378174:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8236ea10
	ctx.lr = 0x82378184;
	sub_8236EA10(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82377c10
	ctx.lr = 0x823781AC;
	sub_82377C10(ctx, base);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82378228
	if (!ctx.cr6.lt) goto loc_82378228;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq 0x82378204
	if (ctx.cr0.eq) goto loc_82378204;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823781dc
	if (ctx.cr6.lt) goto loc_823781DC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r4,r3,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r3.s64;
	// b 0x823781e4
	goto loc_823781E4;
loc_823781DC:
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_823781E4:
	// subf r8,r30,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r30.s64;
	// add r7,r30,r27
	ctx.r7.u64 = ctx.r30.u64 + ctx.r27.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8236ea10
	ctx.lr = 0x823781F8;
	sub_8236EA10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82378208
	if (!ctx.cr0.eq) goto loc_82378208;
loc_82378204:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82378208:
	// clrlwi. r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82378228
	if (ctx.cr0.eq) goto loc_82378228;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82377c10
	ctx.lr = 0x82378228;
	sub_82377C10(ctx, base);
loc_82378228:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82378238
	if (!ctx.cr0.eq) goto loc_82378238;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_82378238:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82378244"))) PPC_WEAK_FUNC(sub_82378244);
PPC_FUNC_IMPL(__imp__sub_82378244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82378248"))) PPC_WEAK_FUNC(sub_82378248);
PPC_FUNC_IMPL(__imp__sub_82378248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82378250;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82378288
	if (ctx.cr6.lt) goto loc_82378288;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// b 0x82378290
	goto loc_82378290;
loc_82378288:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
loc_82378290:
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823782a0
	if (!ctx.cr6.lt) goto loc_823782A0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// b 0x823782b8
	goto loc_823782B8;
loc_823782A0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823782b0
	if (ctx.cr6.lt) goto loc_823782B0;
	// subf r8,r3,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r3.s64;
	// b 0x823782b8
	goto loc_823782B8;
loc_823782B0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r3,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r3.s64;
loc_823782B8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x823782c4
	if (!ctx.cr6.lt) goto loc_823782C4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_823782C4:
	// subf r4,r3,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8236ead8
	ctx.lr = 0x823782D8;
	sub_8236EAD8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82377c10
	ctx.lr = 0x82378300;
	sub_82377C10(ctx, base);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82378370
	if (!ctx.cr6.lt) goto loc_82378370;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq 0x8237834c
	if (ctx.cr0.eq) goto loc_8237834C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82378328
	if (!ctx.cr6.lt) goto loc_82378328;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82378328:
	// subf r4,r3,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r8,r30,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r30.s64;
	// add r7,r30,r27
	ctx.r7.u64 = ctx.r30.u64 + ctx.r27.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8236ead8
	ctx.lr = 0x82378340;
	sub_8236EAD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82378350
	if (!ctx.cr0.eq) goto loc_82378350;
loc_8237834C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82378350:
	// clrlwi. r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82378370
	if (ctx.cr0.eq) goto loc_82378370;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82377c10
	ctx.lr = 0x82378370;
	sub_82377C10(ctx, base);
loc_82378370:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82378380
	if (!ctx.cr0.eq) goto loc_82378380;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_82378380:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237838C"))) PPC_WEAK_FUNC(sub_8237838C);
PPC_FUNC_IMPL(__imp__sub_8237838C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

