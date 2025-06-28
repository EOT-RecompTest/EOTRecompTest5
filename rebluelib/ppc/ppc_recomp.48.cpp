#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8230B8B8"))) PPC_WEAK_FUNC(sub_8230B8B8);
PPC_FUNC_IMPL(__imp__sub_8230B8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x8230B8C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// ori r28,r9,65535
	ctx.r28.u64 = ctx.r9.u64 | 65535;
	// addi r26,r11,-10712
	ctx.r26.s64 = ctx.r11.s64 + -10712;
	// addi r27,r10,-10200
	ctx.r27.s64 = ctx.r10.s64 + -10200;
loc_8230B8EC:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x8230b91c
	if (!ctx.cr6.lt) goto loc_8230B91C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b500
	ctx.lr = 0x8230B900;
	sub_8230B500(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x8230b914
	if (!ctx.cr6.lt) goto loc_8230B914;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8230bc9c
	if (ctx.cr6.eq) goto loc_8230BC9C;
loc_8230B914:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230bca8
	if (ctx.cr6.eq) goto loc_8230BCA8;
loc_8230B91C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8230b998
	if (ctx.cr6.lt) goto loc_8230B998;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// slw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r3,2(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// xor r9,r5,r3
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ctx.r6.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// lhzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// sthx r4,r7,r8
	PPC_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r4.u16);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// and r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 & ctx.r8.u64;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r4,r10
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// sthx r8,r5,r9
	PPC_STORE_U16(ctx.r5.u32 + ctx.r9.u32, ctx.r8.u16);
loc_8230B998:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230b9fc
	if (ctx.cr6.eq) goto loc_8230B9FC;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// addi r9,r11,-262
	ctx.r9.s64 = ctx.r11.s64 + -262;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8230b9fc
	if (ctx.cr6.gt) goto loc_8230B9FC;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8230b9dc
	if (ctx.cr6.eq) goto loc_8230B9DC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8230b9e4
	if (ctx.cr6.eq) goto loc_8230B9E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b250
	ctx.lr = 0x8230B9D8;
	sub_8230B250(ctx, base);
	// b 0x8230b9f8
	goto loc_8230B9F8;
loc_8230B9DC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8230b9fc
	if (!ctx.cr6.eq) goto loc_8230B9FC;
loc_8230B9E4:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8230b9fc
	if (!ctx.cr6.eq) goto loc_8230B9FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b408
	ctx.lr = 0x8230B9F8;
	sub_8230B408(ctx, base);
loc_8230B9F8:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
loc_8230B9FC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8230bbc8
	if (ctx.cr6.lt) goto loc_8230BBC8;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r9,r11,253
	ctx.r9.s64 = ctx.r11.s64 + 253;
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// subf r3,r8,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwz r5,5796(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5796);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sthx r11,r6,r5
	PPC_STORE_U16(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u16);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r9,5792(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r8,5784(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// stbx r4,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r7.u32);
	// lbzx r11,r4,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// addi r6,r11,294
	ctx.r6.s64 = ctx.r11.s64 + 294;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sthx r5,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u16);
	// bge cr6,0x8230ba7c
	if (!ctx.cr6.lt) goto loc_8230BA7C;
	// lbzx r11,r9,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// b 0x8230ba88
	goto loc_8230BA88;
loc_8230BA7C:
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r26,256
	ctx.r10.s64 = ctx.r26.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_8230BA88:
	// addi r11,r11,610
	ctx.r11.s64 = ctx.r11.s64 + 610;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r8,5792(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,5788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subf r4,r8,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r8.s64;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// bgt cr6,0x8230bb80
	if (ctx.cr6.gt) goto loc_8230BB80;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8230bb80
	if (ctx.cr6.lt) goto loc_8230BB80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8230BAE0:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// slw r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// and r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 & ctx.r11.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lbz r6,2(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// xor r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// and r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 & ctx.r4.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// sthx r5,r3,r7
	PPC_STORE_U16(ctx.r3.u32 + ctx.r7.u32, ctx.r5.u16);
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// and r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 & ctx.r3.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r3,r10
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// sthx r8,r5,r4
	PPC_STORE_U16(ctx.r5.u32 + ctx.r4.u32, ctx.r8.u16);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bne 0x8230bae0
	if (!ctx.cr0.eq) goto loc_8230BAE0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x8230bc44
	goto loc_8230BC44;
loc_8230BB80:
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// slw r3,r4,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r8.u8 & 0x3F));
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// and r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 & ctx.r6.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x8230bc44
	goto loc_8230BC44;
loc_8230BBC8:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,5792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r7,5796(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5796);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r4,r6,37
	ctx.r4.s64 = ctx.r6.s64 + 37;
	// sthx r29,r8,r7
	PPC_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r29.u16);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r5,5792(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,5784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// stbx r6,r3,r5
	PPC_STORE_U8(ctx.r3.u32 + ctx.r5.u32, ctx.r6.u8);
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sthx r9,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// lwz r11,5788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r7,5792(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8230BC44:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230b8ec
	if (ctx.cr6.eq) goto loc_8230B8EC;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8230bc64
	if (ctx.cr6.lt) goto loc_8230BC64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8230bc68
	goto loc_8230BC68;
loc_8230BC64:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8230BC68:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x8230f710
	ctx.lr = 0x8230BC7C;
	sub_8230F710(ctx, base);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// bl 0x8230b190
	ctx.lr = 0x8230BC8C;
	sub_8230B190(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8230b8ec
	if (!ctx.cr6.eq) goto loc_8230B8EC;
loc_8230BC9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230BCA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8230BCA8:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8230bcc0
	if (ctx.cr6.lt) goto loc_8230BCC0;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8230bcc4
	goto loc_8230BCC4;
loc_8230BCC0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8230BCC4:
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x8230f710
	ctx.lr = 0x8230BCE0;
	sub_8230F710(ctx, base);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// bl 0x8230b190
	ctx.lr = 0x8230BCF0;
	sub_8230B190(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8230bd1c
	if (!ctx.cr6.eq) goto loc_8230BD1C;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8230BD1C:
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x8230bca0
	if (ctx.cr6.eq) goto loc_8230BCA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230BD34"))) PPC_WEAK_FUNC(sub_8230BD34);
PPC_FUNC_IMPL(__imp__sub_8230BD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230BD38"))) PPC_WEAK_FUNC(sub_8230BD38);
PPC_FUNC_IMPL(__imp__sub_8230BD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x8230BD40;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r25,2
	ctx.r25.s64 = 2;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r26,r11,-10712
	ctx.r26.s64 = ctx.r11.s64 + -10712;
	// addi r27,r10,-10200
	ctx.r27.s64 = ctx.r10.s64 + -10200;
loc_8230BD74:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x8230bda4
	if (!ctx.cr6.lt) goto loc_8230BDA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b500
	ctx.lr = 0x8230BD88;
	sub_8230B500(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x8230bd9c
	if (!ctx.cr6.lt) goto loc_8230BD9C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8230c0cc
	if (ctx.cr6.eq) goto loc_8230C0CC;
loc_8230BD9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c1d0
	if (ctx.cr6.eq) goto loc_8230C1D0;
loc_8230BDA4:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8230be20
	if (ctx.cr6.lt) goto loc_8230BE20;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// slw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r3,2(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// xor r9,r5,r3
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ctx.r6.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// lhzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// sthx r4,r7,r8
	PPC_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r4.u16);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// and r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 & ctx.r8.u64;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r4,r10
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// sthx r8,r5,r9
	PPC_STORE_U16(ctx.r5.u32 + ctx.r9.u32, ctx.r8.u16);
loc_8230BE20:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r25,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r25.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// beq cr6,0x8230bee0
	if (ctx.cr6.eq) goto loc_8230BEE0;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8230bee0
	if (!ctx.cr6.lt) goto loc_8230BEE0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r9,r11,-262
	ctx.r9.s64 = ctx.r11.s64 + -262;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8230bee0
	if (ctx.cr6.gt) goto loc_8230BEE0;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8230be88
	if (ctx.cr6.eq) goto loc_8230BE88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8230be90
	if (ctx.cr6.eq) goto loc_8230BE90;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b250
	ctx.lr = 0x8230BE84;
	sub_8230B250(ctx, base);
	// b 0x8230bea4
	goto loc_8230BEA4;
loc_8230BE88:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8230bea8
	if (!ctx.cr6.eq) goto loc_8230BEA8;
loc_8230BE90:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8230bea8
	if (!ctx.cr6.eq) goto loc_8230BEA8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b408
	ctx.lr = 0x8230BEA4;
	sub_8230B408(ctx, base);
loc_8230BEA4:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
loc_8230BEA8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8230bee0
	if (ctx.cr6.gt) goto loc_8230BEE0;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8230bedc
	if (ctx.cr6.eq) goto loc_8230BEDC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8230bee0
	if (!ctx.cr6.eq) goto loc_8230BEE0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,4096
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4096, ctx.xer);
	// ble cr6,0x8230bee0
	if (!ctx.cr6.gt) goto loc_8230BEE0;
loc_8230BEDC:
	// stw r25,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r25.u32);
loc_8230BEE0:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8230c0d8
	if (ctx.cr6.lt) goto loc_8230C0D8;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8230c0d8
	if (ctx.cr6.gt) goto loc_8230C0D8;
	// addi r10,r11,253
	ctx.r10.s64 = ctx.r11.s64 + 253;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,5792(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r5,5796(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5796);
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r6,r30
	ctx.r3.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// sthx r10,r4,r5
	PPC_STORE_U16(ctx.r4.u32 + ctx.r5.u32, ctx.r10.u16);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r6,5792(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r5,5784(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// stbx r7,r5,r6
	PPC_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u8);
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r4.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// lbzx r11,r7,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// addi r3,r11,294
	ctx.r3.s64 = ctx.r11.s64 + 294;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// bge cr6,0x8230bf7c
	if (!ctx.cr6.lt) goto loc_8230BF7C;
	// lbzx r11,r9,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// b 0x8230bf88
	goto loc_8230BF88;
loc_8230BF7C:
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r26,256
	ctx.r10.s64 = ctx.r26.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_8230BF88:
	// addi r11,r11,610
	ctx.r11.s64 = ctx.r11.s64 + 610;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r6,5792(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r10,5788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
loc_8230BFD0:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8230c054
	if (ctx.cr6.gt) goto loc_8230C054;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// slw r3,r7,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lbz r7,2(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 & ctx.r4.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lhzx r5,r6,r5
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// sthx r5,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u16);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r11,r5
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// sthx r10,r4,r3
	PPC_STORE_U16(ctx.r4.u32 + ctx.r3.u32, ctx.r10.u16);
loc_8230C054:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bne 0x8230bfd0
	if (!ctx.cr0.eq) goto loc_8230BFD0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r25,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r25.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// beq cr6,0x8230bd74
	if (ctx.cr6.eq) goto loc_8230BD74;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8230c098
	if (ctx.cr6.lt) goto loc_8230C098;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x8230c09c
	goto loc_8230C09C;
loc_8230C098:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8230C09C:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230f710
	ctx.lr = 0x8230C0AC;
	sub_8230F710(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x8230b190
	ctx.lr = 0x8230C0BC;
	sub_8230B190(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
loc_8230C0C8:
	// bne cr6,0x8230bd74
	if (!ctx.cr6.eq) goto loc_8230BD74;
loc_8230C0CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230C0D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8230C0D8:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230c1b0
	if (ctx.cr6.eq) goto loc_8230C1B0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,5792(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,5796(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5796);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r5,-1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// sthx r28,r6,r7
	PPC_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r28.u16);
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// addi r3,r5,37
	ctx.r3.s64 = ctx.r5.s64 + 37;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,5784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// stbx r5,r4,r10
	PPC_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r5.u8);
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r9.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sthx r8,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u16);
	// lwz r6,5792(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// lwz r11,5788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5788);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8230c188
	if (!ctx.cr6.eq) goto loc_8230C188;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8230c160
	if (ctx.cr6.lt) goto loc_8230C160;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8230c164
	goto loc_8230C164;
loc_8230C160:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8230C164:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x8230f710
	ctx.lr = 0x8230C178;
	sub_8230F710(ctx, base);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// bl 0x8230b190
	ctx.lr = 0x8230C188;
	sub_8230B190(ctx, base);
loc_8230C188:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// b 0x8230c0c8
	goto loc_8230C0C8;
loc_8230C1B0:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r24,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r24.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// b 0x8230bd74
	goto loc_8230BD74;
loc_8230C1D0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230c230
	if (ctx.cr6.eq) goto loc_8230C230;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,5792(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,5796(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5796);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r5,-1(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// sthx r28,r6,r7
	PPC_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r28.u16);
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// addi r3,r5,37
	ctx.r3.s64 = ctx.r5.s64 + 37;
	// lwz r4,5784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5784);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r5,r4,r10
	PPC_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r5.u8);
	// lwz r10,5792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5792);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r9.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sthx r8,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u16);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
loc_8230C230:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8230c248
	if (ctx.cr6.lt) goto loc_8230C248;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8230c24c
	goto loc_8230C24C;
loc_8230C248:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8230C24C:
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x8230f710
	ctx.lr = 0x8230C268;
	sub_8230F710(ctx, base);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// bl 0x8230b190
	ctx.lr = 0x8230C278;
	sub_8230B190(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8230c2a0
	if (!ctx.cr6.eq) goto loc_8230C2A0;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r25
	ctx.r3.u64 = ctx.r8.u64 & ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8230C2A0:
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x8230c0d0
	if (ctx.cr6.eq) goto loc_8230C0D0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230C2B8"))) PPC_WEAK_FUNC(sub_8230C2B8);
PPC_FUNC_IMPL(__imp__sub_8230C2B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c330
	if (ctx.cr6.eq) goto loc_8230C330;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c330
	if (ctx.cr6.eq) goto loc_8230C330;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r11,1328
	ctx.r9.s64 = ctx.r11.s64 + 1328;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// ori r6,r8,32768
	ctx.r6.u64 = ctx.r8.u64 | 32768;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// blr 
	return;
loc_8230C330:
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230C338"))) PPC_WEAK_FUNC(sub_8230C338);
PPC_FUNC_IMPL(__imp__sub_8230C338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8230C340;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230c454
	if (ctx.cr6.eq) goto loc_8230C454;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x8230c454
	if (!ctx.cr6.eq) goto loc_8230C454;
	// cmpwi cr6,r6,56
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 56, ctx.xer);
	// bne cr6,0x8230c454
	if (!ctx.cr6.eq) goto loc_8230C454;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c37c
	if (!ctx.cr6.eq) goto loc_8230C37C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8230C37C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c3a0
	if (!ctx.cr6.eq) goto loc_8230C3A0;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// addi r10,r11,-1632
	ctx.r10.s64 = ctx.r11.s64 + -1632;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_8230C3A0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c3b8
	if (!ctx.cr6.eq) goto loc_8230C3B8;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r10,r11,-1624
	ctx.r10.s64 = ctx.r11.s64 + -1624;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_8230C3B8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,9520
	ctx.r5.s64 = 9520;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230C3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c3e8
	if (!ctx.cr6.eq) goto loc_8230C3E8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8230C3E8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// bge cr6,0x8230c400
	if (!ctx.cr6.lt) goto loc_8230C400;
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
	// stw r29,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r29.u32);
	// b 0x8230c40c
	goto loc_8230C40C;
loc_8230C400:
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_8230C40C:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8230c434
	if (ctx.cr6.lt) goto loc_8230C434;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// bgt cr6,0x8230c434
	if (ctx.cr6.gt) goto loc_8230C434;
	// stw r30,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r29.u32);
	// bl 0x8230c2b8
	ctx.lr = 0x8230C42C;
	sub_8230C2B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8230C434:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230C444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,-2
	ctx.r3.s64 = -2;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8230C454:
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230C460"))) PPC_WEAK_FUNC(sub_8230C460);
PPC_FUNC_IMPL(__imp__sub_8230C460) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x8230c338
	sub_8230C338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230C470"))) PPC_WEAK_FUNC(sub_8230C470);
PPC_FUNC_IMPL(__imp__sub_8230C470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8230C478;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c4cc
	if (!ctx.cr6.eq) goto loc_8230C4CC;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// slw r4,r30,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230C4B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230c4cc
	if (!ctx.cr6.eq) goto loc_8230C4CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8230C4CC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c4f0
	if (!ctx.cr6.eq) goto loc_8230C4F0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// slw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_8230C4F0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r30,r11,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8230c528
	if (ctx.cr6.lt) goto loc_8230C528;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// bl 0x8233e4e0
	ctx.lr = 0x8230C510;
	sub_8233E4E0(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8230C528:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r29,r11,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8230c53c
	if (!ctx.cr6.gt) goto loc_8230C53C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8230C53C:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r4,r30,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r30.s64;
	// bl 0x8233e4e0
	ctx.lr = 0x8230C550;
	sub_8233E4E0(ctx, base);
	// subf. r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8230c584
	if (ctx.cr0.eq) goto loc_8230C584;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r4,r30,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x8233e4e0
	ctx.lr = 0x8230C56C;
	sub_8233E4E0(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8230C584:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8230c5a0
	if (!ctx.cr6.eq) goto loc_8230C5A0;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
loc_8230C5A0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8230c5b4
	if (!ctx.cr6.lt) goto loc_8230C5B4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8230C5B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230C5C0"))) PPC_WEAK_FUNC(sub_8230C5C0);
PPC_FUNC_IMPL(__imp__sub_8230C5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x8230C5C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r4,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230d5c0
	if (ctx.cr6.eq) goto loc_8230D5C0;
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8230d5c0
	if (ctx.cr6.eq) goto loc_8230D5C0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d5c0
	if (ctx.cr6.eq) goto loc_8230D5C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230c60c
	if (!ctx.cr6.eq) goto loc_8230C60C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d5c0
	if (!ctx.cr6.eq) goto loc_8230D5C0;
loc_8230C60C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8230c620
	if (!ctx.cr6.eq) goto loc_8230C620;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8230C620:
	// lwz r17,16(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r27,4(r18)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r20,0(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r15,12(r18)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// lwz r28,0(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmplwi cr6,r20,28
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 28, ctx.xer);
	// lwz r30,56(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r31,60(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// bgt cr6,0x8230d5c0
	if (ctx.cr6.gt) goto loc_8230D5C0;
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r21,-32256
	ctx.r21.s64 = -2113929216;
	// addi r24,r23,28632
	ctx.r24.s64 = ctx.r23.s64 + 28632;
	// lis r22,-32256
	ctx.r22.s64 = -2113929216;
	// addi r10,r10,28676
	ctx.r10.s64 = ctx.r10.s64 + 28676;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r9,r9,-12352
	ctx.r9.s64 = ctx.r9.s64 + -12352;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r26,-32255
	ctx.r26.s64 = -2113863680;
	// lis r25,-32255
	ctx.r25.s64 = -2113863680;
	// addi r19,r21,28652
	ctx.r19.s64 = ctx.r21.s64 + 28652;
	// addi r23,r22,28604
	ctx.r23.s64 = ctx.r22.s64 + 28604;
	// rotlwi r21,r11,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// lis r24,-32255
	ctx.r24.s64 = -2113863680;
	// addi r8,r8,-31936
	ctx.r8.s64 = ctx.r8.s64 + -31936;
	// addi r7,r7,-31964
	ctx.r7.s64 = ctx.r7.s64 + -31964;
	// addi r6,r6,-12376
	ctx.r6.s64 = ctx.r6.s64 + -12376;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// addi r5,r5,-12404
	ctx.r5.s64 = ctx.r5.s64 + -12404;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r4,r4,-32132
	ctx.r4.s64 = ctx.r4.s64 + -32132;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// addi r3,r3,-12432
	ctx.r3.s64 = ctx.r3.s64 + -12432;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r10,r26,-32104
	ctx.r10.s64 = ctx.r26.s64 + -32104;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r9,r25,-32068
	ctx.r9.s64 = ctx.r25.s64 + -32068;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// rotlwi r22,r17,0
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r17.u32, 0);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r16,27
	ctx.r16.s64 = 27;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// addi r14,r11,-14648
	ctx.r14.s64 = ctx.r11.s64 + -14648;
	// addi r24,r24,-32036
	ctx.r24.s64 = ctx.r24.s64 + -32036;
	// li r23,0
	ctx.r23.s64 = 0;
loc_8230C714:
	// lis r12,-32207
	ctx.r12.s64 = -2110717952;
	// rlwinm r0,r20,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14548
	ctx.r12.s64 = ctx.r12.s64 + -14548;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-14432(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -14432);
	// lwz r17,-10816(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10816);
	// lwz r17,-10816(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10816);
	// lwz r17,-10816(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10816);
	// lwz r17,-10816(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10816);
	// lwz r17,-10816(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10816);
	// lwz r17,-10816(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10816);
	// lwz r17,-10816(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10816);
	// lwz r17,-10816(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10816);
	// lwz r17,-14180(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -14180);
	// lwz r17,-14076(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -14076);
	// lwz r17,-14032(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -14032);
	// lwz r17,-14020(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -14020);
	// lwz r17,-13780(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -13780);
	// lwz r17,-13672(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -13672);
	// lwz r17,-13580(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -13580);
	// lwz r17,-13444(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -13444);
	// lwz r17,-13160(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -13160);
	// lwz r17,-12352(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -12352);
	// lwz r17,-11840(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11840);
	// lwz r17,-11736(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r17,-11348(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11348);
	// lwz r17,-11212(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11212);
	// lwz r17,-11040(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11040);
	// lwz r17,-11000(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11000);
	// lwz r17,-10816(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10816);
	// lwz r17,-10752(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10752);
	// lwz r17,-10744(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10744);
	// lwz r17,-10424(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10424);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230c7b8
	if (!ctx.cr6.eq) goto loc_8230C7B8;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8230d5b4
	goto loc_8230D5B4;
loc_8230C7B8:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bge cr6,0x8230c7e8
	if (!ctx.cr6.lt) goto loc_8230C7E8;
loc_8230C7C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8230c7c0
	if (ctx.cr6.lt) goto loc_8230C7C0;
loc_8230C7E8:
	// rlwinm r10,r30,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF00;
	// lis r9,2114
	ctx.r9.s64 = 138543104;
	// rlwinm r11,r30,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFFFF;
	// ori r8,r9,4229
	ctx.r8.u64 = ctx.r9.u64 | 4229;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulhwu r10,r11,r8
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r9,r7,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r4,r5,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230c828
	if (ctx.cr0.eq) goto loc_8230C828;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8230d5ac
	goto loc_8230D5AC;
loc_8230C828:
	// clrlwi r11,r30,28
	ctx.r11.u64 = ctx.r30.u32 & 0xF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8230c83c
	if (ctx.cr6.eq) goto loc_8230C83C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8230d5ac
	goto loc_8230D5AC;
loc_8230C83C:
	// rlwinm r30,r30,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// clrlwi r11,r30,28
	ctx.r11.u64 = ctx.r30.u32 & 0xF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230c860
	if (!ctx.cr6.gt) goto loc_8230C860;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8230d5ac
	goto loc_8230D5AC;
loc_8230C860:
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230dc78
	ctx.lr = 0x8230C878;
	sub_8230DC78(ctx, base);
	// not r10,r30
	ctx.r10.u64 = ~ctx.r30.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,48(r18)
	PPC_STORE_U32(ctx.r18.u32 + 48, ctx.r3.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// rlwimi r9,r10,24,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x8230d5b4
	goto loc_8230D5B4;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x8230c8cc
	if (!ctx.cr6.lt) goto loc_8230C8CC;
loc_8230C8A4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x8230c8a4
	if (ctx.cr6.lt) goto loc_8230C8A4;
loc_8230C8CC:
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// rlwinm r9,r30,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r30,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,10
	ctx.r8.s64 = 10;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// stw r11,48(r18)
	PPC_STORE_U32(ctx.r18.u32 + 48, ctx.r11.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230d5cc
	if (ctx.cr6.eq) goto loc_8230D5CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230dc78
	ctx.lr = 0x8230C920;
	sub_8230DC78(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,48(r18)
	PPC_STORE_U32(ctx.r18.u32 + 48, ctx.r3.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230c960
	if (ctx.cr6.eq) goto loc_8230C960;
	// clrlwi r11,r31,29
	ctx.r11.u64 = ctx.r31.u32 & 0x7;
	// li r10,24
	ctx.r10.s64 = 24;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x8230d5b4
	goto loc_8230D5B4;
loc_8230C960:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x8230c990
	if (!ctx.cr6.lt) goto loc_8230C990;
loc_8230C968:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x8230c968
	if (ctx.cr6.lt) goto loc_8230C968;
loc_8230C990:
	// rlwinm r10,r30,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8230ca20
	if (ctx.cr6.gt) goto loc_8230CA20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8230c9d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230C9D4;
	// bdzf 4*cr6+eq,0x8230ca04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230CA04;
	// bne cr6,0x8230ca18
	if (!ctx.cr6.eq) goto loc_8230CA18;
	// li r11,13
	ctx.r11.s64 = 13;
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x8230d5b4
	goto loc_8230D5B4;
loc_8230C9D4:
	// addi r11,r14,2048
	ctx.r11.s64 = ctx.r14.s64 + 2048;
	// stw r14,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r14.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r11.u32);
	// li r6,18
	ctx.r6.s64 = 18;
	// stw r8,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r8.u32);
	// stw r7,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r7.u32);
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x8230d5b4
	goto loc_8230D5B4;
loc_8230CA04:
	// li r11,15
	ctx.r11.s64 = 15;
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x8230d5b4
	goto loc_8230D5B4;
loc_8230CA18:
	// stw r24,24(r18)
	PPC_STORE_U32(ctx.r18.u32 + 24, ctx.r24.u32);
	// stw r16,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r16.u32);
loc_8230CA20:
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x8230d5b4
	goto loc_8230D5B4;
	// clrlwi r11,r31,29
	ctx.r11.u64 = ctx.r31.u32 & 0x7;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x8230ca68
	if (!ctx.cr6.lt) goto loc_8230CA68;
loc_8230CA40:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x8230ca40
	if (ctx.cr6.lt) goto loc_8230CA40;
loc_8230CA68:
	// not r10,r30
	ctx.r10.u64 = ~ctx.r30.u64;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8230ca84
	if (ctx.cr6.eq) goto loc_8230CA84;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8230d5ac
	goto loc_8230D5AC;
loc_8230CA84:
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r26,64(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8230d190
	if (ctx.cr6.eq) goto loc_8230D190;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8230cab0
	if (!ctx.cr6.gt) goto loc_8230CAB0;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_8230CAB0:
	// cmplw cr6,r26,r17
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r17.u32, ctx.xer);
	// ble cr6,0x8230cabc
	if (!ctx.cr6.gt) goto loc_8230CABC;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
loc_8230CABC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8230CAD4;
	sub_8233E4E0(ctx, base);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// subf r27,r26,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r26.s64;
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// subf r17,r26,r17
	ctx.r17.s64 = ctx.r17.s64 - ctx.r26.s64;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
	// add r15,r26,r15
	ctx.r15.u64 = ctx.r26.u64 + ctx.r15.u64;
	// b 0x8230d5b4
	goto loc_8230D5B4;
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// bge cr6,0x8230cb24
	if (!ctx.cr6.lt) goto loc_8230CB24;
loc_8230CAFC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// blt cr6,0x8230cafc
	if (ctx.cr6.lt) goto loc_8230CAFC;
loc_8230CB24:
	// rlwinm r11,r30,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// rlwinm r8,r11,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// addi r7,r9,257
	ctx.r7.s64 = ctx.r9.s64 + 257;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r7,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r7.u32);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r6,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r6.u32);
	// rlwinm r30,r8,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// stw r5,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r5.u32);
	// addi r31,r31,-14
	ctx.r31.s64 = ctx.r31.s64 + -14;
	// cmplwi cr6,r4,286
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 286, ctx.xer);
	// bgt cr6,0x8230cc84
	if (ctx.cr6.gt) goto loc_8230CC84;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bgt cr6,0x8230cc84
	if (ctx.cr6.gt) goto loc_8230CC84;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r23,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8230cc00
	if (!ctx.cr6.lt) goto loc_8230CC00;
loc_8230CB8C:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x8230cbbc
	if (!ctx.cr6.lt) goto loc_8230CBBC;
loc_8230CB94:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x8230cb94
	if (ctx.cr6.lt) goto loc_8230CB94;
loc_8230CBBC:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r10,r14,2176
	ctx.r10.s64 = ctx.r14.s64 + 2176;
	// clrlwi r9,r30,29
	ctx.r9.u64 = ctx.r30.u32 & 0x7;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r31,r31,-3
	ctx.r31.s64 = ctx.r31.s64 + -3;
	// lhzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addi r7,r11,56
	ctx.r7.s64 = ctx.r11.s64 + 56;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r6,r29
	PPC_STORE_U16(ctx.r6.u32 + ctx.r29.u32, ctx.r9.u16);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r5.u32);
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8230cb8c
	if (ctx.cr6.lt) goto loc_8230CB8C;
loc_8230CC00:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bge cr6,0x8230cc40
	if (!ctx.cr6.lt) goto loc_8230CC40;
loc_8230CC0C:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r10,r14,2176
	ctx.r10.s64 = ctx.r14.s64 + 2176;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r7,r29
	PPC_STORE_U16(ctx.r7.u32 + ctx.r29.u32, ctx.r23.u16);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r6.u32);
	// cmplwi cr6,r5,19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 19, ctx.xer);
	// blt cr6,0x8230cc0c
	if (ctx.cr6.lt) goto loc_8230CC0C;
loc_8230CC40:
	// addi r11,r29,1328
	ctx.r11.s64 = ctx.r29.s64 + 1328;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// addi r6,r29,108
	ctx.r6.s64 = ctx.r29.s64 + 108;
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// addi r7,r29,84
	ctx.r7.s64 = ctx.r29.s64 + 84;
	// stw r10,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r10.u32);
	// addi r8,r29,752
	ctx.r8.s64 = ctx.r29.s64 + 752;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230fe18
	ctx.lr = 0x8230CC70;
	sub_8230FE18(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230cc8c
	if (ctx.cr6.eq) goto loc_8230CC8C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8230d5ac
	goto loc_8230D5AC;
loc_8230CC84:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x8230d5ac
	goto loc_8230D5AC;
loc_8230CC8C:
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r23,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8230cf0c
	if (!ctx.cr6.lt) goto loc_8230CF0C;
loc_8230CCB0:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8230cd2c
	if (!ctx.cr6.gt) goto loc_8230CD2C;
loc_8230CCDC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,84(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r8,76(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// slw r11,r19,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & ctx.r30.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8230ccdc
	if (ctx.cr6.gt) goto loc_8230CCDC;
loc_8230CD2C:
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8230cd94
	if (!ctx.cr6.lt) goto loc_8230CD94;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8230cd6c
	if (!ctx.cr6.lt) goto loc_8230CD6C;
loc_8230CD44:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8230cd44
	if (ctx.cr6.lt) goto loc_8230CD44;
loc_8230CD6C:
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r8,r29
	PPC_STORE_U16(ctx.r8.u32 + ctx.r29.u32, ctx.r9.u16);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r7.u32);
	// b 0x8230cef4
	goto loc_8230CEF4;
loc_8230CD94:
	// bne cr6,0x8230ce00
	if (!ctx.cr6.eq) goto loc_8230CE00;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8230cdcc
	if (!ctx.cr6.lt) goto loc_8230CDCC;
loc_8230CDA4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8230cda4
	if (ctx.cr6.lt) goto loc_8230CDA4;
loc_8230CDCC:
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230cf64
	if (ctx.cr6.eq) goto loc_8230CF64;
	// addi r10,r10,55
	ctx.r10.s64 = ctx.r10.s64 + 55;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r30,r30,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// lhzx r10,r9,r29
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// b 0x8230cea8
	goto loc_8230CEA8;
loc_8230CE00:
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// bne cr6,0x8230ce58
	if (!ctx.cr6.eq) goto loc_8230CE58;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8230ce3c
	if (!ctx.cr6.lt) goto loc_8230CE3C;
loc_8230CE14:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8230ce14
	if (ctx.cr6.lt) goto loc_8230CE14;
loc_8230CE3C:
	// srw r7,r30,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// clrlwi r8,r7,29
	ctx.r8.u64 = ctx.r7.u32 & 0x7;
	// rlwinm r30,r7,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// addi r31,r9,-3
	ctx.r31.s64 = ctx.r9.s64 + -3;
	// b 0x8230cea4
	goto loc_8230CEA4;
loc_8230CE58:
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8230ce8c
	if (!ctx.cr6.lt) goto loc_8230CE8C;
loc_8230CE64:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8230ce64
	if (ctx.cr6.lt) goto loc_8230CE64;
loc_8230CE8C:
	// srw r7,r30,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// clrlwi r8,r7,25
	ctx.r8.u64 = ctx.r7.u32 & 0x7F;
	// rlwinm r30,r7,25,7,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r8,11
	ctx.r11.s64 = ctx.r8.s64 + 11;
	// addi r31,r9,-7
	ctx.r31.s64 = ctx.r9.s64 + -7;
loc_8230CEA4:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_8230CEA8:
	// lwz r7,104(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8230cf64
	if (ctx.cr6.gt) goto loc_8230CF64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230cef4
	if (ctx.cr6.eq) goto loc_8230CEF4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8230CED4:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r29
	PPC_STORE_U16(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u16);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r8.u32);
	// bdnz 0x8230ced4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230CED4;
loc_8230CEF4:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8230ccb0
	if (ctx.cr6.lt) goto loc_8230CCB0;
loc_8230CF0C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x8230d5b4
	if (ctx.cr6.eq) goto loc_8230D5B4;
	// addi r11,r29,1328
	ctx.r11.s64 = ctx.r29.s64 + 1328;
	// lwz r5,96(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// addi r26,r29,108
	ctx.r26.s64 = ctx.r29.s64 + 108;
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// addi r25,r29,752
	ctx.r25.s64 = ctx.r29.s64 + 752;
	// stw r10,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r10.u32);
	// addi r7,r29,84
	ctx.r7.s64 = ctx.r29.s64 + 84;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8230fe18
	ctx.lr = 0x8230CF50;
	sub_8230FE18(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230cf6c
	if (ctx.cr6.eq) goto loc_8230CF6C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8230d5ac
	goto loc_8230D5AC;
loc_8230CF64:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x8230d5ac
	goto loc_8230D5AC;
loc_8230CF6C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r7,r29,88
	ctx.r7.s64 = ctx.r29.s64 + 88;
	// stw r9,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r9.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// lwz r5,100(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r10,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r10.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,2
	ctx.r3.s64 = 2;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8230fe18
	ctx.lr = 0x8230CFA4;
	sub_8230FE18(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230cfb8
	if (ctx.cr6.eq) goto loc_8230CFB8;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8230d5ac
	goto loc_8230D5AC;
loc_8230CFB8:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// blt cr6,0x8230d010
	if (ctx.cr6.lt) goto loc_8230D010;
	// cmplwi cr6,r17,258
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 258, ctx.xer);
	// blt cr6,0x8230d010
	if (ctx.cr6.lt) goto loc_8230D010;
	// stw r15,12(r18)
	PPC_STORE_U32(ctx.r18.u32 + 12, ctx.r15.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r17,16(r18)
	PPC_STORE_U32(ctx.r18.u32 + 16, ctx.r17.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r28,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r28.u32);
	// stw r27,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r27.u32);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// bl 0x8230f9b0
	ctx.lr = 0x8230CFF4;
	sub_8230F9B0(ctx, base);
	// lwz r15,12(r18)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// lwz r17,16(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// lwz r28,0(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r27,4(r18)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r30,56(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r31,60(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// b 0x8230d5b4
	goto loc_8230D5B4;
loc_8230D010:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r8,76(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & ctx.r30.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8230d08c
	if (!ctx.cr6.gt) goto loc_8230D08C;
loc_8230D03C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,84(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r7,76(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// slw r11,r19,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r9.u8 & 0x3F));
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8230d03c
	if (ctx.cr6.gt) goto loc_8230D03C;
loc_8230D08C:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230d15c
	if (ctx.cr6.eq) goto loc_8230D15C;
	// rlwinm r7,r9,0,24,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8230d15c
	if (!ctx.cr6.eq) goto loc_8230D15C;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r9.u8 & 0x3F));
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// lbz r4,85(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// srw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8230d154
	if (!ctx.cr6.gt) goto loc_8230D154;
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lbz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
loc_8230D0F0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// slw r11,r19,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r5.u8 & 0x3F));
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// and r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 & ctx.r30.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// srw r11,r3,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r10.u8 & 0x3F));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8230d0f0
	if (ctx.cr6.gt) goto loc_8230D0F0;
loc_8230D154:
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_8230D15C:
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// stw r8,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230d184
	if (!ctx.cr6.eq) goto loc_8230D184;
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8230d5b4
	goto loc_8230D5B4;
loc_8230D184:
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d19c
	if (ctx.cr6.eq) goto loc_8230D19C;
loc_8230D190:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8230d5b4
	goto loc_8230D5B4;
loc_8230D19C:
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d1b0
	if (ctx.cr6.eq) goto loc_8230D1B0;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x8230d5ac
	goto loc_8230D5AC;
loc_8230D1B0:
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230d220
	if (ctx.cr6.eq) goto loc_8230D220;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8230d200
	if (!ctx.cr6.lt) goto loc_8230D200;
loc_8230D1D4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,72(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8230d1d4
	if (ctx.cr6.lt) goto loc_8230D1D4;
loc_8230D200:
	// slw r11,r19,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
loc_8230D220:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lwz r7,80(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8230d2a4
	if (!ctx.cr6.gt) goto loc_8230D2A4;
loc_8230D254:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,88(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r8,80(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// slw r11,r19,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r9.u8 & 0x3F));
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8230d254
	if (ctx.cr6.gt) goto loc_8230D254;
loc_8230D2A4:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r6,r9,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8230d374
	if (!ctx.cr6.eq) goto loc_8230D374;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r9.u8 & 0x3F));
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// lbz r4,85(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// srw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8230d368
	if (!ctx.cr6.gt) goto loc_8230D368;
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lbz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
loc_8230D304:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r6,80(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// slw r11,r19,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r5.u8 & 0x3F));
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// and r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 & ctx.r30.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// srw r11,r3,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r10.u8 & 0x3F));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8230d304
	if (ctx.cr6.gt) goto loc_8230D304;
loc_8230D368:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_8230D374:
	// rlwinm r10,r9,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230d394
	if (ctx.cr6.eq) goto loc_8230D394;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x8230d5ac
	goto loc_8230D5AC;
loc_8230D394:
	// lhz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r9,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r9.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r7,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r7.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230d40c
	if (ctx.cr6.eq) goto loc_8230D40C;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8230d3ec
	if (!ctx.cr6.lt) goto loc_8230D3EC;
loc_8230D3C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r9,72(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8230d3c0
	if (ctx.cr6.lt) goto loc_8230D3C0;
loc_8230D3EC:
	// slw r11,r19,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r9,68(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r10.u32);
loc_8230D40C:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// subf r11,r17,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r17.s64;
	// add r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8230d42c
	if (!ctx.cr6.gt) goto loc_8230D42C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x8230d5ac
	goto loc_8230D5AC;
loc_8230D42C:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// subf r9,r17,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r17.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8230d48c
	if (!ctx.cr6.gt) goto loc_8230D48C;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230d474
	if (!ctx.cr6.gt) goto loc_8230D474;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x8230d47c
	goto loc_8230D47C;
loc_8230D474:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8230D47C:
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230d498
	if (!ctx.cr6.gt) goto loc_8230D498;
	// b 0x8230d494
	goto loc_8230D494;
loc_8230D48C:
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// subf r9,r11,r15
	ctx.r9.s64 = ctx.r15.s64 - ctx.r11.s64;
loc_8230D494:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8230D498:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// ble cr6,0x8230d4a4
	if (!ctx.cr6.gt) goto loc_8230D4A4;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_8230D4A4:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r17,r11,r17
	ctx.r17.s64 = ctx.r17.s64 - ctx.r11.s64;
	// stw r10,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
	// subf r10,r15,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r15.s64;
loc_8230D4B4:
	// lbzx r9,r10,r15
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r15.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r15)
	PPC_STORE_U8(ctx.r15.u32 + 0, ctx.r9.u8);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// bne 0x8230d4b4
	if (!ctx.cr0.eq) goto loc_8230D4B4;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d5b4
	if (!ctx.cr6.eq) goto loc_8230D5B4;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8230d5b4
	goto loc_8230D5B4;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r17,r17,-1
	ctx.r17.s64 = ctx.r17.s64 + -1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r9,0(r15)
	PPC_STORE_U8(ctx.r15.u32 + 0, ctx.r9.u8);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x8230d5b4
	goto loc_8230D5B4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230d5f8
	if (ctx.cr6.eq) goto loc_8230D5F8;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x8230d544
	if (!ctx.cr6.lt) goto loc_8230D544;
loc_8230D51C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8230d60c
	if (ctx.cr6.eq) goto loc_8230D60C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x8230d51c
	if (ctx.cr6.lt) goto loc_8230D51C;
loc_8230D544:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// subf. r5,r17,r22
	ctx.r5.s64 = ctx.r22.s64 - ctx.r17.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r10,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r10.u32);
	// beq 0x8230d578
	if (ctx.cr0.eq) goto loc_8230D578;
	// subf r4,r5,r15
	ctx.r4.s64 = ctx.r15.s64 - ctx.r5.s64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8230dc78
	ctx.lr = 0x8230D570;
	sub_8230DC78(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,48(r18)
	PPC_STORE_U32(ctx.r18.u32 + 48, ctx.r3.u32);
loc_8230D578:
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r30,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF00;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r30,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8230d5f0
	if (ctx.cr6.eq) goto loc_8230D5F0;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8230D5AC:
	// stw r11,24(r18)
	PPC_STORE_U32(ctx.r18.u32 + 24, ctx.r11.u32);
	// stw r16,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r16.u32);
loc_8230D5B4:
	// lwz r20,0(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r20,28
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 28, ctx.xer);
	// ble cr6,0x8230c714
	if (!ctx.cr6.gt) goto loc_8230C714;
loc_8230D5C0:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_8230D5CC:
	// stw r15,12(r18)
	PPC_STORE_U32(ctx.r18.u32 + 12, ctx.r15.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r17,16(r18)
	PPC_STORE_U32(ctx.r18.u32 + 16, ctx.r17.u32);
	// stw r28,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r28.u32);
	// stw r27,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r27.u32);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_8230D5F0:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_8230D5F8:
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// b 0x8230d60c
	goto loc_8230D60C;
	// li r21,-3
	ctx.r21.s64 = -3;
loc_8230D60C:
	// stw r27,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r27.u32);
	// stw r17,16(r18)
	PPC_STORE_U32(ctx.r18.u32 + 16, ctx.r17.u32);
	// stw r15,12(r18)
	PPC_STORE_U32(ctx.r18.u32 + 12, ctx.r15.u32);
	// stw r28,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r28.u32);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d648
	if (!ctx.cr6.eq) goto loc_8230D648;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x8230d670
	if (!ctx.cr6.lt) goto loc_8230D670;
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230d670
	if (ctx.cr6.eq) goto loc_8230D670;
loc_8230D648:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8230c470
	ctx.lr = 0x8230D654;
	sub_8230C470(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8230d670
	if (ctx.cr6.eq) goto loc_8230D670;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_8230D670:
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r8,16(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// subf r31,r8,r22
	ctx.r31.s64 = ctx.r22.s64 - ctx.r8.s64;
	// stw r7,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r7.u32);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r6.u32);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r4.u32);
	// beq cr6,0x8230d6d8
	if (ctx.cr6.eq) goto loc_8230D6D8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230d6d8
	if (ctx.cr6.eq) goto loc_8230D6D8;
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// subf r4,r31,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r31.s64;
	// bl 0x8230dc78
	ctx.lr = 0x8230D6D0;
	sub_8230DC78(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,48(r18)
	PPC_STORE_U32(ctx.r18.u32 + 48, ctx.r3.u32);
loc_8230D6D8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,128
	ctx.r8.s64 = 128;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r5,r11,-11
	ctx.r5.s64 = ctx.r11.s64 + -11;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r3,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// and r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 & ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// and r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 & ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,44(r18)
	PPC_STORE_U32(ctx.r18.u32 + 44, ctx.r5.u32);
	// bne cr6,0x8230d724
	if (!ctx.cr6.eq) goto loc_8230D724;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8230d730
	if (ctx.cr6.eq) goto loc_8230D730;
loc_8230D724:
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8230d73c
	if (!ctx.cr6.eq) goto loc_8230D73C;
loc_8230D730:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x8230d73c
	if (!ctx.cr6.eq) goto loc_8230D73C;
	// li r21,-5
	ctx.r21.s64 = -5;
loc_8230D73C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230D754"))) PPC_WEAK_FUNC(sub_8230D754);
PPC_FUNC_IMPL(__imp__sub_8230D754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230D758"))) PPC_WEAK_FUNC(sub_8230D758);
PPC_FUNC_IMPL(__imp__sub_8230D758) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230d7d8
	if (ctx.cr6.eq) goto loc_8230D7D8;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230d7d8
	if (ctx.cr6.eq) goto loc_8230D7D8;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d7d8
	if (ctx.cr6.eq) goto loc_8230D7D8;
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230d7a4
	if (ctx.cr6.eq) goto loc_8230D7A4;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230D7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230D7A4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230D7B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
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
loc_8230D7D8:
	// li r3,-2
	ctx.r3.s64 = -2;
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

__attribute__((alias("__imp__sub_8230D7F0"))) PPC_WEAK_FUNC(sub_8230D7F0);
PPC_FUNC_IMPL(__imp__sub_8230D7F0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x8230D7F8;
	__savegprlr_22(ctx, base);
	// rlwinm r11,r5,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// li r26,88
	ctx.r26.s64 = 88;
	// li r25,32767
	ctx.r25.s64 = 32767;
	// li r24,-32768
	ctx.r24.s64 = -32768;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r10,12848
	ctx.r31.s64 = ctx.r10.s64 + 12848;
	// ble cr6,0x8230d9d0
	if (!ctx.cr6.gt) goto loc_8230D9D0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8230D834:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r8,r31,32
	ctx.r8.s64 = ctx.r31.s64 + 32;
	// lwz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// clrlwi r29,r10,28
	ctx.r29.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r23,r9,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// srawi r22,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r29.s32 >> 2;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r29,r10
	ctx.r29.s64 = ctx.r10.s8;
	// lwzx r10,r23,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// rlwinm r22,r22,0,30,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x2;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r8,r30,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// subfic r30,r22,1
	ctx.xer.ca = ctx.r22.u32 <= 1;
	ctx.r30.s64 = 1 - ctx.r22.s64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bge 0x8230d884
	if (!ctx.cr0.lt) goto loc_8230D884;
	// stw r27,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// b 0x8230d890
	goto loc_8230D890;
loc_8230D884:
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// ble cr6,0x8230d890
	if (!ctx.cr6.gt) goto loc_8230D890;
	// stw r26,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r26.u32);
loc_8230D890:
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230d8a4
	if (ctx.cr6.eq) goto loc_8230D8A4;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8230D8A4:
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230d8b8
	if (ctx.cr6.eq) goto loc_8230D8B8;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8230D8B8:
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230d8cc
	if (ctx.cr6.eq) goto loc_8230D8CC;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8230D8CC:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x8230d8ec
	if (!ctx.cr6.gt) goto loc_8230D8EC;
	// stw r25,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r25.u32);
	// b 0x8230d8f8
	goto loc_8230D8F8;
loc_8230D8EC:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x8230d8f8
	if (!ctx.cr6.lt) goto loc_8230D8F8;
	// stw r24,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r24.u32);
loc_8230D8F8:
	// srawi r11,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 4;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r30,0(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r23,r9,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r22,r11,0,30,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// sth r30,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r30.u16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r3,2
	ctx.r30.s64 = ctx.r3.s64 + 2;
	// lwzx r11,r23,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// subfic r3,r22,1
	ctx.xer.ca = ctx.r22.u32 <= 1;
	ctx.r3.s64 = 1 - ctx.r22.s64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bge 0x8230d948
	if (!ctx.cr0.lt) goto loc_8230D948;
	// stw r27,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// b 0x8230d954
	goto loc_8230D954;
loc_8230D948:
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// ble cr6,0x8230d954
	if (!ctx.cr6.gt) goto loc_8230D954;
	// stw r26,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r26.u32);
loc_8230D954:
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230d968
	if (ctx.cr6.eq) goto loc_8230D968;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8230D968:
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230d97c
	if (ctx.cr6.eq) goto loc_8230D97C;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8230D97C:
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230d990
	if (ctx.cr6.eq) goto loc_8230D990;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8230D990:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x8230d9b0
	if (!ctx.cr6.gt) goto loc_8230D9B0;
	// stw r25,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r25.u32);
	// b 0x8230d9bc
	goto loc_8230D9BC;
loc_8230D9B0:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x8230d9bc
	if (!ctx.cr6.lt) goto loc_8230D9BC;
	// stw r24,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r24.u32);
loc_8230D9BC:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// bdnz 0x8230d834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230D834;
loc_8230D9D0:
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8230daa4
	if (!ctx.cr6.lt) goto loc_8230DAA4;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r8,r31,32
	ctx.r8.s64 = ctx.r31.s64 + 32;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r4,r11,28
	ctx.r4.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r4,29
	ctx.r9.u64 = ctx.r4.u32 & 0x7;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// srawi r5,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 2;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r5,r5,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// subfic r5,r5,1
	ctx.xer.ca = ctx.r5.u32 <= 1;
	ctx.r5.s64 = 1 - ctx.r5.s64;
	// lwzx r11,r4,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bge 0x8230da20
	if (!ctx.cr0.lt) goto loc_8230DA20;
	// stw r27,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// b 0x8230da2c
	goto loc_8230DA2C;
loc_8230DA20:
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// ble cr6,0x8230da2c
	if (!ctx.cr6.gt) goto loc_8230DA2C;
	// stw r26,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r26.u32);
loc_8230DA2C:
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230da40
	if (ctx.cr6.eq) goto loc_8230DA40;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8230DA40:
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230da54
	if (ctx.cr6.eq) goto loc_8230DA54;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8230DA54:
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230da68
	if (ctx.cr6.eq) goto loc_8230DA68;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8230DA68:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x8230da90
	if (!ctx.cr6.gt) goto loc_8230DA90;
	// rotlwi r11,r25,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// stw r25,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r25.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_8230DA90:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x8230da9c
	if (!ctx.cr6.lt) goto loc_8230DA9C;
	// stw r24,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r24.u32);
loc_8230DA9C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_8230DAA4:
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230DAA8"))) PPC_WEAK_FUNC(sub_8230DAA8);
PPC_FUNC_IMPL(__imp__sub_8230DAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8230DAB0;
	__savegprlr_24(ctx, base);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8230dc70
	if (!ctx.cr6.gt) goto loc_8230DC70;
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r31,r3,-2
	ctx.r31.s64 = ctx.r3.s64 + -2;
	// addi r30,r4,-1
	ctx.r30.s64 = ctx.r4.s64 + -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,88
	ctx.r27.s64 = 88;
	// li r28,32767
	ctx.r28.s64 = 32767;
	// li r29,-32768
	ctx.r29.s64 = -32768;
	// addi r3,r11,12848
	ctx.r3.s64 = ctx.r11.s64 + 12848;
loc_8230DADC:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// clrlwi r25,r11,28
	ctx.r25.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r24,r9,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r25,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 2;
	// lwzx r11,r24,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r3.u32);
	// rlwinm r25,r25,0,30,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r8,r5,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// subfic r5,r25,1
	ctx.xer.ca = ctx.r25.u32 <= 1;
	ctx.r5.s64 = 1 - ctx.r25.s64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bge 0x8230db28
	if (!ctx.cr0.lt) goto loc_8230DB28;
	// stw r26,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r26.u32);
	// b 0x8230db34
	goto loc_8230DB34;
loc_8230DB28:
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// ble cr6,0x8230db34
	if (!ctx.cr6.gt) goto loc_8230DB34;
	// stw r27,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
loc_8230DB34:
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230db48
	if (ctx.cr6.eq) goto loc_8230DB48;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8230DB48:
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230db5c
	if (ctx.cr6.eq) goto loc_8230DB5C;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8230DB5C:
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230db70
	if (ctx.cr6.eq) goto loc_8230DB70;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8230DB70:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x8230db90
	if (!ctx.cr6.gt) goto loc_8230DB90;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// b 0x8230db9c
	goto loc_8230DB9C;
loc_8230DB90:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x8230db9c
	if (!ctx.cr6.lt) goto loc_8230DB9C;
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
loc_8230DB9C:
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r25,r9,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r24,r11,0,30,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// sth r5,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r5.u16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lwzx r11,r25,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r3.u32);
	// subfic r5,r24,1
	ctx.xer.ca = ctx.r24.u32 <= 1;
	ctx.r5.s64 = 1 - ctx.r24.s64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// bge 0x8230dbec
	if (!ctx.cr0.lt) goto loc_8230DBEC;
	// stw r26,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r26.u32);
	// b 0x8230dbf8
	goto loc_8230DBF8;
loc_8230DBEC:
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// ble cr6,0x8230dbf8
	if (!ctx.cr6.gt) goto loc_8230DBF8;
	// stw r27,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r27.u32);
loc_8230DBF8:
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230dc0c
	if (ctx.cr6.eq) goto loc_8230DC0C;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8230DC0C:
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230dc20
	if (ctx.cr6.eq) goto loc_8230DC20;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8230DC20:
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230dc34
	if (ctx.cr6.eq) goto loc_8230DC34;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8230DC34:
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x8230dc54
	if (!ctx.cr6.gt) goto loc_8230DC54;
	// stw r28,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r28.u32);
	// b 0x8230dc60
	goto loc_8230DC60;
loc_8230DC54:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x8230dc60
	if (!ctx.cr6.lt) goto loc_8230DC60;
	// stw r29,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r29.u32);
loc_8230DC60:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sthu r10,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r31.u32 = ea;
	// bdnz 0x8230dadc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230DADC;
loc_8230DC70:
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230DC74"))) PPC_WEAK_FUNC(sub_8230DC74);
PPC_FUNC_IMPL(__imp__sub_8230DC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DC78"))) PPC_WEAK_FUNC(sub_8230DC78);
PPC_FUNC_IMPL(__imp__sub_8230DC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x8230DC80;
	__savegprlr_23(ctx, base);
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x8230dcc8
	if (!ctx.cr6.eq) goto loc_8230DCC8;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r8,0
	ctx.r8.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r24,r8,65521
	ctx.r24.u64 = ctx.r8.u64 | 65521;
	// cmplwi cr6,r11,65521
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65521, ctx.xer);
	// blt cr6,0x8230dcac
	if (ctx.cr6.lt) goto loc_8230DCAC;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_8230DCAC:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,65521
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65521, ctx.xer);
	// blt cr6,0x8230df78
	if (ctx.cr6.lt) goto loc_8230DF78;
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r24.s64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8230DCC8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8230dcd8
	if (!ctx.cr6.eq) goto loc_8230DCD8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8230DCD8:
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x8230dd38
	if (!ctx.cr6.lt) goto loc_8230DD38;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230dd00
	if (ctx.cr6.eq) goto loc_8230DD00;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_8230DCF0:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8230dcf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230DCF0;
loc_8230DD00:
	// lis r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,65521
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65521, ctx.xer);
	// ori r24,r9,65521
	ctx.r24.u64 = ctx.r9.u64 | 65521;
	// blt cr6,0x8230dd14
	if (ctx.cr6.lt) goto loc_8230DD14;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_8230DD14:
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// ori r8,r9,32881
	ctx.r8.u64 = ctx.r9.u64 | 32881;
	// mulhwu r7,r10,r8
	ctx.r7.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r6,r7,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1FFFF;
	// mullw r5,r6,r24
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// rlwinm r3,r4,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_8230DD38:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32761
	ctx.r8.s64 = -2147024896;
	// ori r24,r9,65521
	ctx.r24.u64 = ctx.r9.u64 | 65521;
	// ori r23,r8,32881
	ctx.r23.u64 = ctx.r8.u64 | 32881;
	// cmplwi cr6,r5,5552
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5552, ctx.xer);
	// blt cr6,0x8230de54
	if (ctx.cr6.lt) goto loc_8230DE54;
	// li r9,5552
	ctx.r9.s64 = 5552;
	// divwu r25,r5,r9
	ctx.r25.u32 = ctx.r5.u32 / ctx.r9.u32;
loc_8230DD58:
	// li r9,347
	ctx.r9.s64 = 347;
	// addi r5,r5,-5552
	ctx.r5.s64 = ctx.r5.s64 + -5552;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8230DD64:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r26,5(r4)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r27,6(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r28,7(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r30,9(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r31,10(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r3,11(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,13(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,14(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// lbz r9,15(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8230dd64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230DD64;
	// mulhwu r9,r11,r23
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// mulhwu r8,r10,r23
	ctx.r8.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// rlwinm r7,r9,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r6,r8,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// mullw r3,r7,r24
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r24.s32);
	// mullw r9,r6,r24
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bne 0x8230dd58
	if (!ctx.cr0.eq) goto loc_8230DD58;
loc_8230DE54:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230df78
	if (ctx.cr6.eq) goto loc_8230DF78;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x8230df38
	if (ctx.cr6.lt) goto loc_8230DF38;
	// rlwinm r9,r5,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8230DE6C:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r26,5(r4)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r27,6(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r28,7(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r30,9(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r31,10(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r3,11(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,13(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,14(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// lbz r9,15(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8230de6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230DE6C;
loc_8230DF38:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230df58
	if (ctx.cr6.eq) goto loc_8230DF58;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_8230DF48:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8230df48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230DF48;
loc_8230DF58:
	// mulhwu r9,r11,r23
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// mulhwu r8,r10,r23
	ctx.r8.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// rlwinm r7,r9,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r6,r8,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// mullw r5,r7,r24
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r24.s32);
	// mullw r4,r6,r24
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_8230DF78:
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230DF84"))) PPC_WEAK_FUNC(sub_8230DF84);
PPC_FUNC_IMPL(__imp__sub_8230DF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230DF88"))) PPC_WEAK_FUNC(sub_8230DF88);
PPC_FUNC_IMPL(__imp__sub_8230DF88) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r5,727
	ctx.r11.s64 = ctx.r5.s64 + 727;
	// lwz r10,5200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwzx r31,r9,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// bgt cr6,0x8230e060
	if (ctx.cr6.gt) goto loc_8230E060;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
loc_8230DFB0:
	// bge cr6,0x8230e004
	if (!ctx.cr6.lt) goto loc_8230E004;
	// addi r10,r11,728
	ctx.r10.s64 = ctx.r11.s64 + 728;
	// addi r9,r11,727
	ctx.r9.s64 = ctx.r11.s64 + 727;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r7,r7,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// lhzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8230e000
	if (ctx.cr6.lt) goto loc_8230E000;
	// bne cr6,0x8230e004
	if (!ctx.cr6.eq) goto loc_8230E004;
	// add r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r8,5208(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5208);
	// lbz r7,5208(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5208);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8230e004
	if (ctx.cr6.gt) goto loc_8230E004;
loc_8230E000:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8230E004:
	// addi r10,r11,727
	ctx.r10.s64 = ctx.r11.s64 + 727;
	// lhzx r9,r6,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r7,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8230e060
	if (ctx.cr6.lt) goto loc_8230E060;
	// bne cr6,0x8230e040
	if (!ctx.cr6.eq) goto loc_8230E040;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r8,r31,r3
	ctx.r8.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lbz r7,5208(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5208);
	// lbz r9,5208(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5208);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8230e060
	if (!ctx.cr6.gt) goto loc_8230E060;
loc_8230E040:
	// addi r9,r5,727
	ctx.r9.s64 = ctx.r5.s64 + 727;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r10,5200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8230dfb0
	if (!ctx.cr6.gt) goto loc_8230DFB0;
loc_8230E060:
	// addi r11,r5,727
	ctx.r11.s64 = ctx.r5.s64 + 727;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r31.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E074"))) PPC_WEAK_FUNC(sub_8230E074);
PPC_FUNC_IMPL(__imp__sub_8230E074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E078"))) PPC_WEAK_FUNC(sub_8230E078);
PPC_FUNC_IMPL(__imp__sub_8230E078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8230E080;
	__savegprlr_24(ctx, base);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r3,2876
	ctx.r10.s64 = ctx.r3.s64 + 2876;
	// lwz r26,0(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r24,4(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r27,4(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r30,8(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r28,16(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
loc_8230E0B4:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8230e0b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230E0B4;
	// lwz r11,5204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5204);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,727
	ctx.r9.s64 = ctx.r11.s64 + 727;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// sth r10,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// lwz r11,5204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,573
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 573, ctx.xer);
	// bge cr6,0x8230e2c4
	if (!ctx.cr6.lt) goto loc_8230E2C4;
	// subfic r10,r11,573
	ctx.xer.ca = ctx.r11.u32 <= 573;
	ctx.r10.s64 = 573 - ctx.r11.s64;
	// addi r9,r11,727
	ctx.r9.s64 = ctx.r11.s64 + 727;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8230E104:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r5,r26
	ctx.r6.u64 = ctx.r5.u64 + ctx.r26.u64;
	// lhz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8230e134
	if (!ctx.cr6.gt) goto loc_8230E134;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8230E134:
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, ctx.xer);
	// sth r11,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// bgt cr6,0x8230e1ac
	if (ctx.cr6.gt) goto loc_8230E1AC;
	// addi r8,r11,1438
	ctx.r8.s64 = ctx.r11.s64 + 1438;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// lhzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sthx r7,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u16);
	// blt cr6,0x8230e16c
	if (ctx.cr6.lt) goto loc_8230E16C;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
loc_8230E16C:
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,5800(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5800);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, ctx.r6.u32);
	// beq cr6,0x8230e1ac
	if (ctx.cr6.eq) goto loc_8230E1AC;
	// add r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r10,5804(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5804);
	// lhz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r6.u32);
loc_8230E1AC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bdnz 0x8230e104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230E104;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8230e2c4
	if (ctx.cr6.eq) goto loc_8230E2C4;
	// addi r11,r28,1438
	ctx.r11.s64 = ctx.r28.s64 + 1438;
	// addi r6,r28,-1
	ctx.r6.s64 = ctx.r28.s64 + -1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
loc_8230E1D4:
	// addi r10,r6,1438
	ctx.r10.s64 = ctx.r6.s64 + 1438;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230e200
	if (!ctx.cr6.eq) goto loc_8230E200;
loc_8230E1F0:
	// lhzu r8,-2(r10)
	ea = -2 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8230e1f0
	if (ctx.cr6.eq) goto loc_8230E1F0;
loc_8230E200:
	// addi r10,r11,1438
	ctx.r10.s64 = ctx.r11.s64 + 1438;
	// addi r8,r11,1439
	ctx.r8.s64 = ctx.r11.s64 + 1439;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r29,r29,-2
	ctx.xer.ca = ctx.r29.u32 > 1;
	ctx.r29.s64 = ctx.r29.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lhzx r5,r10,r3
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// lhzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// sthx r5,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u16);
	// sthx r4,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u16);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r8,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
	// bgt 0x8230e1d4
	if (ctx.cr0.gt) goto loc_8230E1D4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8230e2c4
	if (ctx.cr6.eq) goto loc_8230E2C4;
loc_8230E254:
	// lhz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8230e2b8
	if (ctx.cr6.eq) goto loc_8230E2B8;
	// addi r11,r25,727
	ctx.r11.s64 = ctx.r25.s64 + 727;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8230E26C:
	// lwzu r11,-4(r6)
	ea = -4 + ctx.r6.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x8230e2b0
	if (ctx.cr6.gt) goto loc_8230E2B0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8230e2ac
	if (ctx.cr6.eq) goto loc_8230E2AC;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r8,5800(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5800);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, ctx.r8.u32);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
loc_8230E2AC:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_8230E2B0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8230e26c
	if (!ctx.cr6.eq) goto loc_8230E26C;
loc_8230E2B8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// bne 0x8230e254
	if (!ctx.cr0.eq) goto loc_8230E254;
loc_8230E2C4:
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230E2C8"))) PPC_WEAK_FUNC(sub_8230E2C8);
PPC_FUNC_IMPL(__imp__sub_8230E2C8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r9,4
	ctx.r9.s64 = 4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8230e2f0
	if (!ctx.cr6.eq) goto loc_8230E2F0;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r9,3
	ctx.r9.s64 = 3;
loc_8230E2F0:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,-1
	ctx.r31.s64 = -1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// sth r31,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r31.u16);
	// blt cr6,0x8230e3ec
	if (ctx.cr6.lt) goto loc_8230E3EC;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// addi r5,r4,6
	ctx.r5.s64 = ctx.r4.s64 + 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8230E314:
	// lhz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8230e334
	if (!ctx.cr6.lt) goto loc_8230E334;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8230e3e4
	if (ctx.cr6.eq) goto loc_8230E3E4;
loc_8230E334:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8230e354
	if (!ctx.cr6.lt) goto loc_8230E354;
	// addi r11,r10,671
	ctx.r11.s64 = ctx.r10.s64 + 671;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sthx r9,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u16);
	// b 0x8230e3ac
	goto loc_8230E3AC;
loc_8230E354:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230e388
	if (ctx.cr6.eq) goto loc_8230E388;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8230e378
	if (ctx.cr6.eq) goto loc_8230E378;
	// addi r11,r10,671
	ctx.r11.s64 = ctx.r10.s64 + 671;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u16);
loc_8230E378:
	// lhz r11,2748(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2748);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2748(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2748, ctx.r11.u16);
	// b 0x8230e3ac
	goto loc_8230E3AC;
loc_8230E388:
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bgt cr6,0x8230e3a0
	if (ctx.cr6.gt) goto loc_8230E3A0;
	// lhz r11,2752(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2752);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2752(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2752, ctx.r11.u16);
	// b 0x8230e3ac
	goto loc_8230E3AC;
loc_8230E3A0:
	// lhz r11,2756(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2756);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2756(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2756, ctx.r11.u16);
loc_8230E3AC:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8230e3c8
	if (!ctx.cr6.eq) goto loc_8230E3C8;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x8230e3e4
	goto loc_8230E3E4;
loc_8230E3C8:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8230e3dc
	if (!ctx.cr6.eq) goto loc_8230E3DC;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x8230e3e4
	goto loc_8230E3E4;
loc_8230E3DC:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r9,4
	ctx.r9.s64 = 4;
loc_8230E3E4:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x8230e314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230E314;
loc_8230E3EC:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230E3F4"))) PPC_WEAK_FUNC(sub_8230E3F4);
PPC_FUNC_IMPL(__imp__sub_8230E3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E3F8"))) PPC_WEAK_FUNC(sub_8230E3F8);
PPC_FUNC_IMPL(__imp__sub_8230E3F8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8230E400;
	__savegprlr_26(ctx, base);
	// lhz r31,2(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8230e424
	if (!ctx.cr6.eq) goto loc_8230E424;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8230E424:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8230e988
	if (ctx.cr6.lt) goto loc_8230E988;
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r30,r4,6
	ctx.r30.s64 = ctx.r4.s64 + 6;
	// ori r29,r7,65525
	ctx.r29.u64 = ctx.r7.u64 | 65525;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r4,r9,65533
	ctx.r4.u64 = ctx.r9.u64 | 65533;
loc_8230E448:
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8230e468
	if (!ctx.cr6.lt) goto loc_8230E468;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8230e980
	if (ctx.cr6.eq) goto loc_8230E980;
loc_8230E468:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8230e524
	if (!ctx.cr6.lt) goto loc_8230E524;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r5,671
	ctx.r10.s64 = ctx.r5.s64 + 671;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_8230E480:
	// lhz r10,2686(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2686);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// lhz r28,5816(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// ble cr6,0x8230e504
	if (!ctx.cr6.gt) goto loc_8230E504;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r27,20(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// stbx r9,r28,r27
	PPC_STORE_U8(ctx.r28.u32 + ctx.r27.u32, ctx.r9.u8);
	// lbz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r28,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r28.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// b 0x8230e518
	goto loc_8230E518;
loc_8230E504:
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 | ctx.r28.u64;
	// stw r10,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r10.u32);
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
loc_8230E518:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8230e480
	if (!ctx.cr0.eq) goto loc_8230E480;
	// b 0x8230e948
	goto loc_8230E948;
loc_8230E524:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8230e704
	if (ctx.cr6.eq) goto loc_8230E704;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8230e5e8
	if (ctx.cr6.eq) goto loc_8230E5E8;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lhz r10,2686(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2686);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// addi r9,r5,671
	ctx.r9.s64 = ctx.r5.s64 + 671;
	// ble cr6,0x8230e5c8
	if (!ctx.cr6.gt) goto loc_8230E5C8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 | ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// stbx r11,r28,r7
	PPC_STORE_U8(ctx.r28.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// srw r8,r27,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r7.u8 & 0x3F));
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// b 0x8230e5e4
	goto loc_8230E5E4;
loc_8230E5C8:
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// stw r7,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r7.u32);
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
loc_8230E5E4:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_8230E5E8:
	// lhz r10,2750(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2750);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2748(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2748);
	// ble cr6,0x8230e66c
	if (!ctx.cr6.gt) goto loc_8230E66C;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// srw r8,r28,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// b 0x8230e684
	goto loc_8230E684;
loc_8230E66C:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
loc_8230E684:
	// lwz r10,5820(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// ble cr6,0x8230e6f8
	if (!ctx.cr6.gt) goto loc_8230E6F8;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u8);
	// lbz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r7,r9,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// addi r8,r11,-14
	ctx.r8.s64 = ctx.r11.s64 + -14;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// b 0x8230e944
	goto loc_8230E944;
loc_8230E6F8:
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// b 0x8230e938
	goto loc_8230E938;
loc_8230E704:
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// bgt cr6,0x8230e828
	if (ctx.cr6.gt) goto loc_8230E828;
	// lhz r10,2754(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2754);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2752(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2752);
	// ble cr6,0x8230e790
	if (!ctx.cr6.gt) goto loc_8230E790;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r28,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r7.u8 & 0x3F));
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// b 0x8230e7a8
	goto loc_8230E7A8;
loc_8230E790:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
loc_8230E7A8:
	// lwz r10,5820(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// ble cr6,0x8230e81c
	if (!ctx.cr6.gt) goto loc_8230E81C;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r8,r11,-13
	ctx.r8.s64 = ctx.r11.s64 + -13;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// b 0x8230e944
	goto loc_8230E944;
loc_8230E81C:
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// b 0x8230e938
	goto loc_8230E938;
loc_8230E828:
	// lhz r10,2758(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2758);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2756(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2756);
	// ble cr6,0x8230e8a4
	if (!ctx.cr6.gt) goto loc_8230E8A4;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// srw r9,r28,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// b 0x8230e8b8
	goto loc_8230E8B8;
loc_8230E8A4:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
loc_8230E8B8:
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// ble cr6,0x8230e930
	if (!ctx.cr6.gt) goto loc_8230E930;
	// addi r11,r6,-11
	ctx.r11.s64 = ctx.r6.s64 + -11;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r8,r11,-9
	ctx.r8.s64 = ctx.r11.s64 + -9;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// b 0x8230e944
	goto loc_8230E944;
loc_8230E930:
	// add r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 + ctx.r29.u64;
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
loc_8230E938:
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r6,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r6.u16);
loc_8230E944:
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
loc_8230E948:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8230e964
	if (!ctx.cr6.eq) goto loc_8230E964;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x8230e980
	goto loc_8230E980;
loc_8230E964:
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x8230e978
	if (!ctx.cr6.eq) goto loc_8230E978;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x8230e980
	goto loc_8230E980;
loc_8230E978:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8230E980:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bdnz 0x8230e448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230E448;
loc_8230E988:
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230E98C"))) PPC_WEAK_FUNC(sub_8230E98C);
PPC_FUNC_IMPL(__imp__sub_8230E98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230E990"))) PPC_WEAK_FUNC(sub_8230E990);
PPC_FUNC_IMPL(__imp__sub_8230E990) {
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
	// lwz r10,5820(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x8230ea1c
	if (!ctx.cr6.gt) goto loc_8230EA1C;
	// addi r11,r4,-257
	ctx.r11.s64 = ctx.r4.s64 + -257;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u8);
	// lbz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r7,r9,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// addi r8,r11,-11
	ctx.r8.s64 = ctx.r11.s64 + -11;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// b 0x8230ea34
	goto loc_8230EA34;
loc_8230EA1C:
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-257
	ctx.r11.s64 = ctx.r11.s64 + -257;
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r5,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r5.u16);
loc_8230EA34:
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x8230eaac
	if (!ctx.cr6.gt) goto loc_8230EAAC;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u8);
	// lbz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r7,r9,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// addi r8,r11,-11
	ctx.r8.s64 = ctx.r11.s64 + -11;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// b 0x8230eac4
	goto loc_8230EAC4;
loc_8230EAAC:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r5,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r5.u16);
loc_8230EAC4:
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lhz r9,5816(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// ble cr6,0x8230eb40
	if (!ctx.cr6.gt) goto loc_8230EB40;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r5,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r5.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// b 0x8230eb5c
	goto loc_8230EB5C;
loc_8230EB40:
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sth r5,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r5.u16);
loc_8230EB5C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8230ec20
	if (!ctx.cr6.gt) goto loc_8230EC20;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r8,r11,-12204
	ctx.r8.s64 = ctx.r11.s64 + -12204;
loc_8230EB74:
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// lbzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// ble cr6,0x8230ebf8
	if (!ctx.cr6.gt) goto loc_8230EBF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r10,2686(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2686);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 | ctx.r7.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// stbx r11,r6,r5
	PPC_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u8);
	// lbz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// addi r7,r11,-13
	ctx.r7.s64 = ctx.r11.s64 + -13;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r11.s64;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r7,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r7.u32);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// srw r5,r30,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r6.u8 & 0x3F));
	// sth r5,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r5.u16);
	// b 0x8230ec18
	goto loc_8230EC18;
loc_8230EBF8:
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// lhz r10,2686(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2686);
	// stw r7,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r7.u32);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r6,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r6.u16);
loc_8230EC18:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8230eb74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230EB74;
loc_8230EC20:
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// addi r4,r3,148
	ctx.r4.s64 = ctx.r3.s64 + 148;
	// bl 0x8230e3f8
	ctx.lr = 0x8230EC2C;
	sub_8230E3F8(ctx, base);
	// addi r4,r3,2440
	ctx.r4.s64 = ctx.r3.s64 + 2440;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// bl 0x8230e3f8
	ctx.lr = 0x8230EC38;
	sub_8230E3F8(ctx, base);
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

__attribute__((alias("__imp__sub_8230EC50"))) PPC_WEAK_FUNC(sub_8230EC50);
PPC_FUNC_IMPL(__imp__sub_8230EC50) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8230EC58;
	__savegprlr_24(ctx, base);
	// lwz r11,5792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5792);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230eff8
	if (ctx.cr6.eq) goto loc_8230EFF8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,-10712
	ctx.r27.s64 = ctx.r11.s64 + -10712;
	// addi r31,r10,-12320
	ctx.r31.s64 = ctx.r10.s64 + -12320;
	// addi r29,r9,-10200
	ctx.r29.s64 = ctx.r9.s64 + -10200;
loc_8230EC84:
	// lwz r11,5796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5796);
	// lwz r10,5784(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5784);
	// lhzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// lbzx r7,r30,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8230ed3c
	if (!ctx.cr6.eq) goto loc_8230ED3C;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r8,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r9.s64;
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// ble cr6,0x8230ed30
	if (!ctx.cr6.gt) goto loc_8230ED30;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// stbx r11,r8,r6
	PPC_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r11.u8);
	// lbz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// srw r8,r7,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// b 0x8230efec
	goto loc_8230EFEC;
loc_8230ED30:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// b 0x8230efe4
	goto loc_8230EFE4;
loc_8230ED3C:
	// lbzx r10,r7,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r10,r10,257
	ctx.r10.s64 = ctx.r10.s64 + 257;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,1030(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 1030);
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// subfic r26,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r26.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// lhz r26,5816(r3)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// ble cr6,0x8230edd0
	if (!ctx.cr6.gt) goto loc_8230EDD0;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r25,20(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// lwz r24,8(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// stbx r10,r24,r25
	PPC_STORE_U8(ctx.r24.u32 + ctx.r25.u32, ctx.r10.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r25,8(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r25
	PPC_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r25,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r25.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r25,16
	ctx.r9.u64 = ctx.r25.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r9.u16);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// b 0x8230ede4
	goto loc_8230EDE4;
loc_8230EDD0:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r9,r26
	ctx.r11.u64 = ctx.r9.u64 | ctx.r26.u64;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
loc_8230EDE4:
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230ee84
	if (ctx.cr6.eq) goto loc_8230EE84;
	// addi r10,r31,2376
	ctx.r10.s64 = ctx.r31.s64 + 2376;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r26,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r26.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// ble cr6,0x8230ee74
	if (!ctx.cr6.gt) goto loc_8230EE74;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r8,r26,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r7.u8 & 0x3F));
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// b 0x8230ee80
	goto loc_8230EE80;
loc_8230EE74:
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
loc_8230EE80:
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
loc_8230EE84:
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r7,256
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 256, ctx.xer);
	// bge cr6,0x8230ee98
	if (!ctx.cr6.lt) goto loc_8230EE98;
	// lbzx r11,r7,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// b 0x8230eea4
	goto loc_8230EEA4;
loc_8230EE98:
	// rlwinm r11,r7,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r27,256
	ctx.r10.s64 = ctx.r27.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_8230EEA4:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r6,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lhz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// ble cr6,0x8230ef30
	if (!ctx.cr6.gt) goto loc_8230EF30;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r26,20(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 | ctx.r6.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// stbx r10,r11,r26
	PPC_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// lbz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r6,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r11.s64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r25,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// b 0x8230ef44
	goto loc_8230EF44;
loc_8230EF30:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
loc_8230EF44:
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230efec
	if (ctx.cr6.eq) goto loc_8230EFEC;
	// addi r10,r31,2496
	ctx.r10.s64 = ctx.r31.s64 + 2496;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r6,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// ble cr6,0x8230efdc
	if (!ctx.cr6.gt) goto loc_8230EFDC;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r6,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r6.u16);
	// stbx r6,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// srw r8,r7,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// stw r9,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r9.u32);
	// b 0x8230efec
	goto loc_8230EFEC;
loc_8230EFDC:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
loc_8230EFE4:
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r6,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r6.u16);
loc_8230EFEC:
	// lwz r11,5792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5792);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8230ec84
	if (ctx.cr6.lt) goto loc_8230EC84;
loc_8230EFF8:
	// lhz r10,1026(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,1024(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1024);
	// ble cr6,0x8230f080
	if (!ctx.cr6.gt) goto loc_8230F080;
	// lhz r8,5816(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r8,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r8.u16);
	// stbx r8,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r10,-16
	ctx.r7.s64 = ctx.r10.s64 + -16;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r7,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r7.u32);
	// subfic r6,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r11.s64;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// srw r11,r9,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// lhz r10,1026(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_8230F080:
	// lhz r7,5816(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r8,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r8.u32);
	// sth r5,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r5.u16);
	// lhz r10,1026(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F0A4"))) PPC_WEAK_FUNC(sub_8230F0A4);
PPC_FUNC_IMPL(__imp__sub_8230F0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F0A8"))) PPC_WEAK_FUNC(sub_8230F0A8);
PPC_FUNC_IMPL(__imp__sub_8230F0A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,148
	ctx.r10.s64 = ctx.r3.s64 + 148;
loc_8230F0B0:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230f0cc
	if (!ctx.cr6.eq) goto loc_8230F0CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x8230f0b0
	if (ctx.cr6.lt) goto loc_8230F0B0;
loc_8230F0CC:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8230f15c
	if (!ctx.cr6.eq) goto loc_8230F15C;
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 + 208;
loc_8230F0DC:
	// lhz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230f15c
	if (!ctx.cr6.eq) goto loc_8230F15C;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230f138
	if (!ctx.cr6.eq) goto loc_8230F138;
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230f140
	if (!ctx.cr6.eq) goto loc_8230F140;
	// lhz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230f148
	if (!ctx.cr6.eq) goto loc_8230F148;
	// lhz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230f150
	if (!ctx.cr6.eq) goto loc_8230F150;
	// lhz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230f158
	if (!ctx.cr6.eq) goto loc_8230F158;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8230f0dc
	if (ctx.cr6.lt) goto loc_8230F0DC;
	// b 0x8230f15c
	goto loc_8230F15C;
loc_8230F138:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8230f15c
	goto loc_8230F15C;
loc_8230F140:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8230f15c
	goto loc_8230F15C;
loc_8230F148:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x8230f15c
	goto loc_8230F15C;
loc_8230F150:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8230f15c
	goto loc_8230F15C;
loc_8230F158:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
loc_8230F15C:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F174"))) PPC_WEAK_FUNC(sub_8230F174);
PPC_FUNC_IMPL(__imp__sub_8230F174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F178"))) PPC_WEAK_FUNC(sub_8230F178);
PPC_FUNC_IMPL(__imp__sub_8230F178) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x8230f1c8
	if (!ctx.cr6.gt) goto loc_8230F1C8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lbz r6,5816(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// blr 
	return;
loc_8230F1C8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230f1ec
	if (!ctx.cr6.gt) goto loc_8230F1EC;
	// lhz r11,5816(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
loc_8230F1EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r11.u16);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F1FC"))) PPC_WEAK_FUNC(sub_8230F1FC);
PPC_FUNC_IMPL(__imp__sub_8230F1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F200"))) PPC_WEAK_FUNC(sub_8230F200);
PPC_FUNC_IMPL(__imp__sub_8230F200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8230F208;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,573
	ctx.r9.s64 = 573;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r27,5200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5200, ctx.r27.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r9,5204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5204, ctx.r9.u32);
	// ble cr6,0x8230f28c
	if (!ctx.cr6.gt) goto loc_8230F28C;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_8230F248:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8230f27c
	if (ctx.cr6.eq) goto loc_8230F27C;
	// lwz r10,5200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r10,727
	ctx.r7.s64 = ctx.r10.s64 + 727;
	// stw r10,5200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5200, ctx.r10.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r11.u32);
	// stb r27,5208(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5208, ctx.r27.u8);
	// b 0x8230f280
	goto loc_8230F280;
loc_8230F27C:
	// sth r27,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r27.u16);
loc_8230F280:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8230f248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230F248;
loc_8230F28C:
	// lwz r11,5200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8230f310
	if (!ctx.cr6.lt) goto loc_8230F310;
	// addi r8,r3,5208
	ctx.r8.s64 = ctx.r3.s64 + 5208;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8230F2A0:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bge cr6,0x8230f2b4
	if (!ctx.cr6.lt) goto loc_8230F2B4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8230f2b8
	goto loc_8230F2B8;
loc_8230F2B4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8230F2B8:
	// lwz r10,5200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r10,727
	ctx.r5.s64 = ctx.r10.s64 + 727;
	// stw r10,5200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5200, ctx.r10.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u32);
	// sthx r7,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u16);
	// stbx r27,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r27.u8);
	// lwz r11,5800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5800);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, ctx.r11.u32);
	// beq cr6,0x8230f304
	if (ctx.cr6.eq) goto loc_8230F304;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r10,5804(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5804);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r5,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r5.u32);
loc_8230F304:
	// lwz r11,5200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8230f2a0
	if (ctx.cr6.lt) goto loc_8230F2A0;
loc_8230F310:
	// stw r26,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r26.u32);
	// lwz r11,5200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x8230f340
	if (ctx.cr6.lt) goto loc_8230F340;
loc_8230F328:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8230df88
	ctx.lr = 0x8230F334;
	sub_8230DF88(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x8230f328
	if (!ctx.cr6.lt) goto loc_8230F328;
loc_8230F340:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r3,5208
	ctx.r30.s64 = ctx.r3.s64 + 5208;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8230F34C:
	// lwz r11,5200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r24,2912(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2912);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,727
	ctx.r10.s64 = ctx.r11.s64 + 727;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r9,5200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5200, ctx.r9.u32);
	// stw r7,2912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2912, ctx.r7.u32);
	// bl 0x8230df88
	ctx.lr = 0x8230F378;
	sub_8230DF88(ctx, base);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,2912(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2912);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r11,5204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5204);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r5,r11,727
	ctx.r5.s64 = ctx.r11.s64 + 727;
	// stw r11,5204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5204, ctx.r11.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r24.u32);
	// lwz r11,5204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5204);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,727
	ctx.r8.s64 = ctx.r11.s64 + 727;
	// stw r11,5204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5204, ctx.r11.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r6.u32);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// sth r5,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r5.u16);
	// lbzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// lbzx r8,r30,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8230f3e0
	if (ctx.cr6.lt) goto loc_8230F3E0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8230F3E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r28,16
	ctx.r7.u64 = ctx.r28.u32 & 0xFFFF;
	// stbx r11,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r7,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r7.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r28,2912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2912, ctx.r28.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x8230df88
	ctx.lr = 0x8230F40C;
	sub_8230DF88(ctx, base);
	// lwz r6,5200(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5200);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bge cr6,0x8230f34c
	if (!ctx.cr6.lt) goto loc_8230F34C;
	// lwz r11,5204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5204);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,2912(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2912);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r11,727
	ctx.r9.s64 = ctx.r11.s64 + 727;
	// stw r11,5204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5204, ctx.r11.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// bl 0x8230e078
	ctx.lr = 0x8230F43C;
	sub_8230E078(ctx, base);
	// li r8,15
	ctx.r8.s64 = 15;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r3,2874
	ctx.r10.s64 = ctx.r3.s64 + 2874;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8230F450:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8230f450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230F450;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8230f4c8
	if (ctx.cr6.lt) goto loc_8230F4C8;
	// addi r6,r26,1
	ctx.r6.s64 = ctx.r26.s64 + 1;
loc_8230F474:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230f4bc
	if (ctx.cr6.eq) goto loc_8230F4BC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sthx r7,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u16);
loc_8230F4A0:
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x8230f4a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230F4A0;
	// rlwinm r11,r8,31,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0xFFFF;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_8230F4BC:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8230f474
	if (!ctx.cr0.eq) goto loc_8230F474;
loc_8230F4C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F4D0"))) PPC_WEAK_FUNC(sub_8230F4D0);
PPC_FUNC_IMPL(__imp__sub_8230F4D0) {
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
	// addi r4,r3,148
	ctx.r4.s64 = ctx.r3.s64 + 148;
	// lwz r5,2844(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2844);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8230e2c8
	ctx.lr = 0x8230F4F0;
	sub_8230E2C8(ctx, base);
	// addi r4,r3,2440
	ctx.r4.s64 = ctx.r3.s64 + 2440;
	// lwz r5,2856(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2856);
	// bl 0x8230e2c8
	ctx.lr = 0x8230F4FC;
	sub_8230E2C8(ctx, base);
	// addi r4,r3,2864
	ctx.r4.s64 = ctx.r3.s64 + 2864;
	// bl 0x8230f200
	ctx.lr = 0x8230F504;
	sub_8230F200(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r11,r11,-12204
	ctx.r11.s64 = ctx.r11.s64 + -12204;
loc_8230F510:
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r8,2686(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2686);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230f5a0
	if (!ctx.cr6.eq) goto loc_8230F5A0;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r7,2686(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2686);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8230f58c
	if (!ctx.cr6.eq) goto loc_8230F58C;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r7,2686(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2686);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8230f594
	if (!ctx.cr6.eq) goto loc_8230F594;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r9,-3(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -3);
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r7,2686(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2686);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8230f59c
	if (!ctx.cr6.eq) goto loc_8230F59C;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x8230f510
	if (!ctx.cr6.lt) goto loc_8230F510;
	// b 0x8230f5a0
	goto loc_8230F5A0;
loc_8230F58C:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x8230f5a0
	goto loc_8230F5A0;
loc_8230F594:
	// addi r3,r3,-2
	ctx.r3.s64 = ctx.r3.s64 + -2;
	// b 0x8230f5a0
	goto loc_8230F5A0;
loc_8230F59C:
	// addi r3,r3,-3
	ctx.r3.s64 = ctx.r3.s64 + -3;
loc_8230F5A0:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,5800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5800);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// stw r11,5800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5800, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8230F5CC"))) PPC_WEAK_FUNC(sub_8230F5CC);
PPC_FUNC_IMPL(__imp__sub_8230F5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F5D0"))) PPC_WEAK_FUNC(sub_8230F5D0);
PPC_FUNC_IMPL(__imp__sub_8230F5D0) {
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
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lhz r10,5816(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5816);
	// slw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ble cr6,0x8230f654
	if (!ctx.cr6.gt) goto loc_8230F654;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stbx r7,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u8);
	// lbz r5,5816(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5816);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// srw r10,r9,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r11,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r11.u32);
	// sth r10,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r10.u16);
	// b 0x8230f660
	goto loc_8230F660;
loc_8230F654:
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// sth r7,5816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5816, ctx.r7.u16);
	// stw r6,5820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5820, ctx.r6.u32);
loc_8230F660:
	// bl 0x8230f178
	ctx.lr = 0x8230F664;
	sub_8230F178(ctx, base);
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// rlwinm r5,r7,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r8,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r8,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r5,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// beq cr6,0x8230f6fc
	if (ctx.cr6.eq) goto loc_8230F6FC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
loc_8230F6E0:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bdnz 0x8230f6e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230F6E0;
loc_8230F6FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8230F70C"))) PPC_WEAK_FUNC(sub_8230F70C);
PPC_FUNC_IMPL(__imp__sub_8230F70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F710"))) PPC_WEAK_FUNC(sub_8230F710);
PPC_FUNC_IMPL(__imp__sub_8230F710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8230F718;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230f79c
	if (!ctx.cr6.gt) goto loc_8230F79C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230f760
	if (ctx.cr6.eq) goto loc_8230F760;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8230f760
	if (!ctx.cr6.eq) goto loc_8230F760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230f0a8
	ctx.lr = 0x8230F760;
	sub_8230F0A8(ctx, base);
loc_8230F760:
	// addi r4,r31,2840
	ctx.r4.s64 = ctx.r31.s64 + 2840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230f200
	ctx.lr = 0x8230F76C;
	sub_8230F200(ctx, base);
	// addi r4,r31,2852
	ctx.r4.s64 = ctx.r31.s64 + 2852;
	// bl 0x8230f200
	ctx.lr = 0x8230F774;
	sub_8230F200(ctx, base);
	// bl 0x8230f4d0
	ctx.lr = 0x8230F778;
	sub_8230F4D0(ctx, base);
	// lwz r11,5800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5800);
	// lwz r10,5804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5804);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8230f7a4
	if (ctx.cr6.gt) goto loc_8230F7A4;
	// b 0x8230f7a0
	goto loc_8230F7A0;
loc_8230F79C:
	// addi r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 5;
loc_8230F7A0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8230F7A4:
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8230f7d0
	if (ctx.cr6.gt) goto loc_8230F7D0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8230f7d0
	if (ctx.cr6.eq) goto loc_8230F7D0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230f5d0
	ctx.lr = 0x8230F7CC;
	sub_8230F5D0(ctx, base);
	// b 0x8230f930
	goto loc_8230F930;
loc_8230F7D0:
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x8230f894
	if (ctx.cr6.eq) goto loc_8230F894;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230f894
	if (ctx.cr6.eq) goto loc_8230F894;
	// lwz r10,5820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5820);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// lhz r9,5816(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5816);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// ble cr6,0x8230f85c
	if (!ctx.cr6.gt) goto loc_8230F85C;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r11.u16);
	// stbx r11,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r9,5816(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5816);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,5820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5820);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r11.s64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// srw r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r11,5820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5820, ctx.r11.u32);
	// sth r10,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r10.u16);
	// b 0x8230f86c
	goto loc_8230F86C;
loc_8230F85C:
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r8,5820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5820, ctx.r8.u32);
	// sth r6,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r6.u16);
loc_8230F86C:
	// lwz r11,2856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2856);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// lwz r10,2844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2844);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// bl 0x8230e990
	ctx.lr = 0x8230F888;
	sub_8230E990(ctx, base);
	// addi r5,r31,2440
	ctx.r5.s64 = ctx.r31.s64 + 2440;
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// b 0x8230f928
	goto loc_8230F928;
loc_8230F894:
	// lwz r10,5820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5820);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// lhz r9,5816(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5816);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// slw r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// ble cr6,0x8230f90c
	if (!ctx.cr6.gt) goto loc_8230F90C;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r3,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r3.u16);
	// stbx r3,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r3.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,5816(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5816);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,5820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5820);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,-13
	ctx.r5.s64 = ctx.r11.s64 + -13;
	// srw r4,r4,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r5,5820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5820, ctx.r5.u32);
	// sth r4,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r4.u16);
	// b 0x8230f91c
	goto loc_8230F91C;
loc_8230F90C:
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r8,5820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5820, ctx.r8.u32);
	// sth r6,5816(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5816, ctx.r6.u16);
loc_8230F91C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-11984
	ctx.r4.s64 = ctx.r11.s64 + -11984;
	// addi r5,r4,1152
	ctx.r5.s64 = ctx.r4.s64 + 1152;
loc_8230F928:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230ec50
	ctx.lr = 0x8230F930;
	sub_8230EC50(ctx, base);
loc_8230F930:
	// li r10,286
	ctx.r10.s64 = 286;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8230F93C:
	// sthu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8230f93c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230F93C;
	// li r10,30
	ctx.r10.s64 = 30;
	// addi r11,r31,2436
	ctx.r11.s64 = ctx.r31.s64 + 2436;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8230F950:
	// sthu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8230f950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230F950;
	// li r10,19
	ctx.r10.s64 = 19;
	// addi r11,r31,2680
	ctx.r11.s64 = ctx.r31.s64 + 2680;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8230F964:
	// sthu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8230f964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230F964;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,5804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5804, ctx.r27.u32);
	// stw r27,5800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5800, ctx.r27.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// sth r11,1172(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1172, ctx.r11.u16);
	// stw r27,5808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5808, ctx.r27.u32);
	// stw r27,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r27.u32);
	// beq cr6,0x8230f994
	if (ctx.cr6.eq) goto loc_8230F994;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230f178
	ctx.lr = 0x8230F994;
	sub_8230F178(ctx, base);
loc_8230F994:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F99C"))) PPC_WEAK_FUNC(sub_8230F99C);
PPC_FUNC_IMPL(__imp__sub_8230F99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230F9A0"))) PPC_WEAK_FUNC(sub_8230F9A0);
PPC_FUNC_IMPL(__imp__sub_8230F9A0) {
	PPC_FUNC_PROLOGUE();
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// b 0x82341878
	sub_82341878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F9A8"))) PPC_WEAK_FUNC(sub_8230F9A8);
PPC_FUNC_IMPL(__imp__sub_8230F9A8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82341940
	sub_82341940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230F9B0"))) PPC_WEAK_FUNC(sub_8230F9B0);
PPC_FUNC_IMPL(__imp__sub_8230F9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e438
	ctx.lr = 0x8230F9B8;
	__savegprlr_16(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r17,3
	ctx.r17.s64 = 3;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r6,r4,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// slw r5,r29,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r25,40(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// slw r4,r29,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r20,44(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r28,48(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r21,r10,-5
	ctx.r21.s64 = ctx.r10.s64 + -5;
	// lwz r19,52(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// add r24,r6,r7
	ctx.r24.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r18,r8,-257
	ctx.r18.s64 = ctx.r8.s64 + -257;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r22,r5,-1
	ctx.r22.s64 = ctx.r5.s64 + -1;
	// lwz r26,76(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r23,r4,-1
	ctx.r23.s64 = ctx.r4.s64 + -1;
	// lwz r27,80(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
loc_8230FA2C:
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// bge cr6,0x8230fa54
	if (!ctx.cr6.lt) goto loc_8230FA54;
	// lbzu r8,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lbzu r6,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// slw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
loc_8230FA54:
	// and r10,r22,r11
	ctx.r10.u64 = ctx.r22.u64 & ctx.r11.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// stw r6,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r6.u32);
	// lbz r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -144);
	// lbz r8,-143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -143);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8230fad8
	if (ctx.cr6.eq) goto loc_8230FAD8;
loc_8230FA7C:
	// rlwinm r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230fae4
	if (!ctx.cr6.eq) goto loc_8230FAE4;
	// rlwinm r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230fd90
	if (!ctx.cr6.eq) goto loc_8230FD90;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r8,-142(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// and r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 & ctx.r11.u64;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// lbz r6,-144(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -144);
	// lbz r8,-143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -143);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bne cr6,0x8230fa7c
	if (!ctx.cr6.eq) goto loc_8230FA7C;
loc_8230FAD8:
	// lhz r10,-142(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// stbu r10,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r7.u32 = ea;
	// b 0x8230fd64
	goto loc_8230FD64;
loc_8230FAE4:
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// lhz r5,-142(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230fb24
	if (ctx.cr6.eq) goto loc_8230FB24;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8230fb0c
	if (!ctx.cr6.lt) goto loc_8230FB0C;
	// lbzu r8,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_8230FB0C:
	// slw r8,r29,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
loc_8230FB24:
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// bge cr6,0x8230fb4c
	if (!ctx.cr6.lt) goto loc_8230FB4C;
	// lbzu r8,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lbzu r6,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// slw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
loc_8230FB4C:
	// and r10,r23,r11
	ctx.r10.u64 = ctx.r23.u64 & ctx.r11.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// stw r6,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r6.u32);
	// lbz r6,-143(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -143);
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// lbz r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -144);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rlwinm r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230fbc4
	if (!ctx.cr6.eq) goto loc_8230FBC4;
loc_8230FB78:
	// rlwinm r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8230fd84
	if (!ctx.cr6.eq) goto loc_8230FD84;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r8,-142(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// and r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 & ctx.r11.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r8,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r8.u32);
	// lbz r6,-143(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -143);
	// lbz r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -144);
	// rlwinm r4,r10,0,27,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230fb78
	if (ctx.cr6.eq) goto loc_8230FB78;
loc_8230FBC4:
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// lhz r6,-142(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8230fbfc
	if (!ctx.cr6.lt) goto loc_8230FBFC;
	// lbzu r8,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8230fbfc
	if (!ctx.cr6.lt) goto loc_8230FBFC;
	// lbzu r8,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_8230FBFC:
	// slw r8,r29,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r10,r24,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r24.s64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230fd1c
	if (!ctx.cr6.gt) goto loc_8230FD1C;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x8230fd78
	if (ctx.cr6.gt) goto loc_8230FD78;
	// addi r6,r19,-1
	ctx.r6.s64 = ctx.r19.s64 + -1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// subf r10,r8,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r8.s64;
	// bne cr6,0x8230fc60
	if (!ctx.cr6.eq) goto loc_8230FC60;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bge cr6,0x8230fce0
	if (!ctx.cr6.lt) goto loc_8230FCE0;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
loc_8230FC4C:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// bne 0x8230fc4c
	if (!ctx.cr0.eq) goto loc_8230FC4C;
	// b 0x8230fcdc
	goto loc_8230FCDC;
loc_8230FC60:
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bge cr6,0x8230fcc0
	if (!ctx.cr6.lt) goto loc_8230FCC0;
	// subf r8,r28,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r28.s64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8230fce0
	if (!ctx.cr6.lt) goto loc_8230FCE0;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_8230FC84:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbzx r16,r10,r7
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// stb r16,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r16.u8);
	// bne 0x8230fc84
	if (!ctx.cr0.eq) goto loc_8230FC84;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8230fce0
	if (!ctx.cr6.lt) goto loc_8230FCE0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// subf r5,r28,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r28.s64;
loc_8230FCAC:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// bne 0x8230fcac
	if (!ctx.cr0.eq) goto loc_8230FCAC;
	// b 0x8230fcdc
	goto loc_8230FCDC;
loc_8230FCC0:
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8230fce0
	if (!ctx.cr6.lt) goto loc_8230FCE0;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
loc_8230FCCC:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// bne 0x8230fccc
	if (!ctx.cr0.eq) goto loc_8230FCCC;
loc_8230FCDC:
	// subf r10,r4,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r4.s64;
loc_8230FCE0:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// ble cr6,0x8230fd44
	if (!ctx.cr6.gt) goto loc_8230FD44;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// divwu r8,r8,r17
	ctx.r8.u32 = ctx.r8.u32 / ctx.r17.u32;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8230FCF8:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r5,r5,-3
	ctx.r5.s64 = ctx.r5.s64 + -3;
	// stbu r8,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r7.u32 = ea;
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// lbzu r4,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r4,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8230fcf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230FCF8;
	// b 0x8230fd44
	goto loc_8230FD44;
loc_8230FD1C:
	// subf r10,r4,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r4.s64;
loc_8230FD20:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r5,r5,-3
	ctx.r5.s64 = ctx.r5.s64 + -3;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// stbu r8,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r7.u32 = ea;
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// lbzu r4,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r4,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r7.u32 = ea;
	// bgt cr6,0x8230fd20
	if (ctx.cr6.gt) goto loc_8230FD20;
loc_8230FD44:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230fd64
	if (ctx.cr6.eq) goto loc_8230FD64;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// stbu r8,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r7.u32 = ea;
	// ble cr6,0x8230fd64
	if (!ctx.cr6.gt) goto loc_8230FD64;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r10,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r7.u32 = ea;
loc_8230FD64:
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x8230fdbc
	if (!ctx.cr6.lt) goto loc_8230FDBC;
	// cmplw cr6,r7,r18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x8230fa2c
	if (ctx.cr6.lt) goto loc_8230FA2C;
	// b 0x8230fdbc
	goto loc_8230FDBC;
loc_8230FD78:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r10,-12352
	ctx.r6.s64 = ctx.r10.s64 + -12352;
	// b 0x8230fdb0
	goto loc_8230FDB0;
loc_8230FD84:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r6,r10,-31936
	ctx.r6.s64 = ctx.r10.s64 + -31936;
	// b 0x8230fdb0
	goto loc_8230FDB0;
loc_8230FD90:
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230fda8
	if (ctx.cr6.eq) goto loc_8230FDA8;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x8230fdbc
	goto loc_8230FDBC;
loc_8230FDA8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r6,r10,-31964
	ctx.r6.s64 = ctx.r10.s64 + -31964;
loc_8230FDB0:
	// li r8,27
	ctx.r8.s64 = 27;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_8230FDBC:
	// rlwinm r10,r9,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r6,r9,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r10,r6,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r6.s64;
	// slw r9,r29,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r8.u8 & 0x3F));
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// and r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 & ctx.r11.u64;
	// subf r11,r10,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r10.s64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// subf r11,r7,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r7.s64;
	// cmplw cr6,r7,r18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r18.u32, ctx.xer);
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r9.u32);
	// stw r8,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r8.u32);
	// b 0x8233e488
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8230FE14"))) PPC_WEAK_FUNC(sub_8230FE14);
PPC_FUNC_IMPL(__imp__sub_8230FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8230FE18"))) PPC_WEAK_FUNC(sub_8230FE18);
PPC_FUNC_IMPL(__imp__sub_8230FE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x8230FE20;
	__savegprlr_14(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r7,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r1,-226
	ctx.r10.s64 = ctx.r1.s64 + -226;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8230FE3C:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8230fe3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230FE3C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230fe74
	if (ctx.cr6.eq) goto loc_8230FE74;
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8230FE54:
	// lhzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// addi r11,r1,-224
	ctx.r11.s64 = ctx.r1.s64 + -224;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// sthx r31,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u16);
	// bdnz 0x8230fe54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230FE54;
loc_8230FE74:
	// lwz r14,0(r30)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r16,15
	ctx.r16.s64 = 15;
	// addi r11,r1,-194
	ctx.r11.s64 = ctx.r1.s64 + -194;
loc_8230FE80:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8230fe9c
	if (!ctx.cr6.eq) goto loc_8230FE9C;
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r16,1
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 1, ctx.xer);
	// bge cr6,0x8230fe80
	if (!ctx.cr6.lt) goto loc_8230FE80;
loc_8230FE9C:
	// cmplw cr6,r14,r16
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r16.u32, ctx.xer);
	// ble cr6,0x8230fea8
	if (!ctx.cr6.gt) goto loc_8230FEA8;
	// mr r14,r16
	ctx.r14.u64 = ctx.r16.u64;
loc_8230FEA8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// li r21,1
	ctx.r21.s64 = 1;
	// bne cr6,0x8230fef8
	if (!ctx.cr6.eq) goto loc_8230FEF8;
	// li r11,64
	ctx.r11.s64 = 64;
	// sth r7,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r7.u16);
	// stb r21,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r21.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r11.u8);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r21,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_8230FEF8:
	// addi r11,r1,-220
	ctx.r11.s64 = ctx.r1.s64 + -220;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_8230FF00:
	// lhz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8230ff6c
	if (!ctx.cr6.eq) goto loc_8230FF6C;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8230ff50
	if (!ctx.cr6.eq) goto loc_8230FF50;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8230ff58
	if (!ctx.cr6.eq) goto loc_8230FF58;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8230ff60
	if (!ctx.cr6.eq) goto loc_8230FF60;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8230ff68
	if (!ctx.cr6.eq) goto loc_8230FF68;
	// addi r28,r28,5
	ctx.r28.s64 = ctx.r28.s64 + 5;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// cmplwi cr6,r28,15
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 15, ctx.xer);
	// ble cr6,0x8230ff00
	if (!ctx.cr6.gt) goto loc_8230FF00;
	// b 0x8230ff6c
	goto loc_8230FF6C;
loc_8230FF50:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8230ff6c
	goto loc_8230FF6C;
loc_8230FF58:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// b 0x8230ff6c
	goto loc_8230FF6C;
loc_8230FF60:
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// b 0x8230ff6c
	goto loc_8230FF6C;
loc_8230FF68:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_8230FF6C:
	// cmplw cr6,r14,r28
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8230ff78
	if (!ctx.cr6.lt) goto loc_8230FF78;
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
loc_8230FF78:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// addi r11,r1,-222
	ctx.r11.s64 = ctx.r1.s64 + -222;
loc_8230FF84:
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8231008c
	if (ctx.cr0.lt) goto loc_8231008C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// ble cr6,0x8230ff84
	if (!ctx.cr6.gt) goto loc_8230FF84;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230ffbc
	if (!ctx.cr6.gt) goto loc_8230FFBC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231008c
	if (ctx.cr6.eq) goto loc_8231008C;
	// cmplwi cr6,r16,1
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 1, ctx.xer);
	// bne cr6,0x8231008c
	if (!ctx.cr6.eq) goto loc_8231008C;
loc_8230FFBC:
	// li r10,7
	ctx.r10.s64 = 7;
	// sth r7,-190(r1)
	PPC_STORE_U16(ctx.r1.u32 + -190, ctx.r7.u16);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// addi r30,r1,-224
	ctx.r30.s64 = ctx.r1.s64 + -224;
	// addi r29,r1,-190
	ctx.r29.s64 = ctx.r1.s64 + -190;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8230FFD8:
	// lhzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r27,r1,-222
	ctx.r27.s64 = ctx.r1.s64 + -222;
	// lhzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// addi r26,r1,-188
	ctx.r26.s64 = ctx.r1.s64 + -188;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sthx r10,r11,r29
	PPC_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u16);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r10,r11,r26
	PPC_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8230ffd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230FFD8;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82310068
	if (ctx.cr6.eq) goto loc_82310068;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82310020:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8231005c
	if (ctx.cr6.eq) goto loc_8231005C;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// rotlwi r30,r10,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r10,r1,-192
	ctx.r10.s64 = ctx.r1.s64 + -192;
	// lhzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r9.u32);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// sthx r31,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lhzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sthx r5,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u16);
loc_8231005C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82310020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82310020;
loc_82310068:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x823100ac
	if (ctx.cr6.lt) goto loc_823100AC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-9424
	ctx.r11.s64 = ctx.r11.s64 + -9424;
	// beq cr6,0x82310094
	if (ctx.cr6.eq) goto loc_82310094;
	// li r23,-1
	ctx.r23.s64 = -1;
	// addi r18,r11,-64
	ctx.r18.s64 = ctx.r11.s64 + -64;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// b 0x823100b8
	goto loc_823100B8;
loc_8231008C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_82310094:
	// addi r10,r11,-192
	ctx.r10.s64 = ctx.r11.s64 + -192;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// li r23,256
	ctx.r23.s64 = 256;
	// addi r18,r10,-514
	ctx.r18.s64 = ctx.r10.s64 + -514;
	// addi r19,r11,-514
	ctx.r19.s64 = ctx.r11.s64 + -514;
	// b 0x823100b8
	goto loc_823100B8;
loc_823100AC:
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// li r23,19
	ctx.r23.s64 = 19;
loc_823100B8:
	// slw r11,r21,r14
	ctx.r11.u64 = ctx.r14.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r14.u8 & 0x3F));
	// lwz r26,0(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// addi r15,r11,-1
	ctx.r15.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823100e8
	if (!ctx.cr6.eq) goto loc_823100E8;
	// cmplwi cr6,r11,1456
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1456, ctx.xer);
	// bge cr6,0x82310348
	if (!ctx.cr6.lt) goto loc_82310348;
loc_823100E8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// li r20,96
	ctx.r20.s64 = 96;
	// ori r22,r11,65535
	ctx.r22.u64 = ctx.r11.u64 | 65535;
loc_823100F8:
	// subf r9,r27,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r27.s64;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r5,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r5.u8);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82310120
	if (!ctx.cr6.lt) goto loc_82310120;
	// sth r11,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r11.u16);
	// stb r7,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r7.u8);
	// b 0x82310148
	goto loc_82310148;
loc_82310120:
	// ble cr6,0x82310140
	if (!ctx.cr6.gt) goto loc_82310140;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r8,r10,r19
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r19.u32);
	// lhzx r11,r10,r18
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r18.u32);
	// stb r8,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r8.u8);
	// sth r11,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r11.u16);
	// b 0x82310148
	goto loc_82310148;
loc_82310140:
	// stb r20,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r20.u8);
	// sth r7,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r7.u16);
loc_82310148:
	// slw r10,r21,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r8,-240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// srw r9,r30,r27
	ctx.r9.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r27.u8 & 0x3F));
loc_82310158:
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// bne 0x82310158
	if (!ctx.cr0.eq) goto loc_82310158;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82310190
	if (ctx.cr6.eq) goto loc_82310190;
loc_82310180:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82310180
	if (!ctx.cr6.eq) goto loc_82310180;
loc_82310190:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823101a8
	if (ctx.cr6.eq) goto loc_823101A8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823101ac
	goto loc_823101AC;
loc_823101A8:
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
loc_823101AC:
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,-224
	ctx.r11.s64 = ctx.r1.s64 + -224;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// add r8,r9,r22
	ctx.r8.u64 = ctx.r9.u64 + ctx.r22.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823101e4
	if (!ctx.cr6.eq) goto loc_823101E4;
	// cmplw cr6,r28,r16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x823102a0
	if (ctx.cr6.eq) goto loc_823102A0;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r28,r10,r4
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
loc_823101E4:
	// cmplw cr6,r28,r14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r14.u32, ctx.xer);
	// ble cr6,0x823100f8
	if (!ctx.cr6.gt) goto loc_823100F8;
	// and r31,r15,r30
	ctx.r31.u64 = ctx.r15.u64 & ctx.r30.u64;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x823100f8
	if (ctx.cr6.eq) goto loc_823100F8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82310204
	if (!ctx.cr6.eq) goto loc_82310204;
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
loc_82310204:
	// subf r11,r27,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r27.s64;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r26,r9,r26
	ctx.r26.u64 = ctx.r9.u64 + ctx.r26.u64;
	// slw r8,r21,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x82310250
	if (!ctx.cr6.lt) goto loc_82310250;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
loc_8231022C:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x82310250
	if (!ctx.cr0.gt) goto loc_82310250;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x8231022c
	if (ctx.cr6.lt) goto loc_8231022C;
loc_82310250:
	// slw r29,r21,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// add r17,r29,r17
	ctx.r17.u64 = ctx.r29.u64 + ctx.r17.u64;
	// bne cr6,0x82310268
	if (!ctx.cr6.eq) goto loc_82310268;
	// cmplwi cr6,r17,1456
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1456, ctx.xer);
	// bge cr6,0x82310348
	if (!ctx.cr6.lt) goto loc_82310348;
loc_82310268:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r14,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r14.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r9,r11,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r11.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r5,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// b 0x823100f8
	goto loc_823100F8;
loc_823102A0:
	// li r11,64
	ctx.r11.s64 = 64;
	// stb r5,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r5.u8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r7,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r7.u16);
	// stb r11,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r11.u8);
	// beq cr6,0x82310328
	if (ctx.cr6.eq) goto loc_82310328;
loc_823102B8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823102dc
	if (ctx.cr6.eq) goto loc_823102DC;
	// and r11,r15,r30
	ctx.r11.u64 = ctx.r15.u64 & ctx.r30.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x823102dc
	if (ctx.cr6.eq) goto loc_823102DC;
	// lwz r26,0(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stb r14,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r14.u8);
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_823102DC:
	// srw r11,r30,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r27.u8 & 0x3F));
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r21,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r9.u8 & 0x3F));
	// and r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 & ctx.r30.u64;
	// stwx r10,r8,r26
	PPC_STORE_U32(ctx.r8.u32 + ctx.r26.u32, ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82310310
	if (ctx.cr6.eq) goto loc_82310310;
loc_82310300:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82310300
	if (!ctx.cr6.eq) goto loc_82310300;
loc_82310310:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82310328
	if (ctx.cr6.eq) goto loc_82310328;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x823102b8
	if (!ctx.cr0.eq) goto loc_823102B8;
loc_82310328:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r17,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,52(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r14,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r14.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_82310348:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310350"))) PPC_WEAK_FUNC(sub_82310350);
PPC_FUNC_IMPL(__imp__sub_82310350) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lis r10,17136
	ctx.r10.s64 = 1123024896;
	// addi r3,r11,-25848
	ctx.r3.s64 = ctx.r11.s64 + -25848;
	// lis r11,-22038
	ctx.r11.s64 = -1444282368;
	// ori r9,r10,57835
	ctx.r9.u64 = ctx.r10.u64 | 57835;
	// ori r6,r11,13971
	ctx.r6.u64 = ctx.r11.u64 | 13971;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldimi r6,r9,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
loc_8231037C:
	// clrldi r10,r5,63
	ctx.r10.u64 = ctx.r5.u64 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82310390
	if (ctx.cr6.eq) goto loc_82310390;
	// li r11,128
	ctx.r11.s64 = 128;
loc_82310390:
	// rldicl r9,r5,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0x1;
	// rldicl r10,r5,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x823103a4
	if (ctx.cr6.eq) goto loc_823103A4;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_823103A4:
	// rldicl r10,r10,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// clrldi r9,r10,63
	ctx.r9.u64 = ctx.r10.u64 & 0x1;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x823103b8
	if (ctx.cr6.eq) goto loc_823103B8;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_823103B8:
	// rldicl r10,r10,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// clrldi r9,r10,63
	ctx.r9.u64 = ctx.r10.u64 & 0x1;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x823103cc
	if (ctx.cr6.eq) goto loc_823103CC;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_823103CC:
	// rldicl r10,r10,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// clrldi r9,r10,63
	ctx.r9.u64 = ctx.r10.u64 & 0x1;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x823103e0
	if (ctx.cr6.eq) goto loc_823103E0;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_823103E0:
	// rldicl r10,r10,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// clrldi r9,r10,63
	ctx.r9.u64 = ctx.r10.u64 & 0x1;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x823103f4
	if (ctx.cr6.eq) goto loc_823103F4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_823103F4:
	// rldicl r10,r10,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// clrldi r9,r10,63
	ctx.r9.u64 = ctx.r10.u64 & 0x1;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82310408
	if (ctx.cr6.eq) goto loc_82310408;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82310408:
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82310418
	if (ctx.cr6.eq) goto loc_82310418;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82310418:
	// rldicr r11,r11,56,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFF00000000000000;
	// rldicr r9,r11,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0x8000000000000000;
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bne cr6,0x82310438
	if (!ctx.cr6.eq) goto loc_82310438;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82310438:
	// rldicr r10,r10,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rldicr r8,r9,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0x8000000000000000;
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82310458
	if (!ctx.cr6.eq) goto loc_82310458;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82310458:
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rldicr r11,r8,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0x8000000000000000;
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bne cr6,0x8231047c
	if (!ctx.cr6.eq) goto loc_8231047C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231047C:
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rldicr r11,r8,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0x8000000000000000;
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bne cr6,0x823104a0
	if (!ctx.cr6.eq) goto loc_823104A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823104A0:
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rldicr r11,r8,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0x8000000000000000;
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bne cr6,0x823104c4
	if (!ctx.cr6.eq) goto loc_823104C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823104C4:
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rldicr r11,r8,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0x8000000000000000;
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bne cr6,0x823104e8
	if (!ctx.cr6.eq) goto loc_823104E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823104E8:
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rldicr r11,r8,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0x8000000000000000;
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bne cr6,0x8231050c
	if (!ctx.cr6.eq) goto loc_8231050C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231050C:
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rldicr r11,r8,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0x8000000000000000;
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82310530
	if (!ctx.cr6.eq) goto loc_82310530;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82310530:
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rldicr r31,r11,1,62
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// xor r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82310554:
	// clrldi r8,r9,63
	ctx.r8.u64 = ctx.r9.u64 & 0x1;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x82310570
	if (ctx.cr6.eq) goto loc_82310570;
	// subfic r8,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r8.s64 = 64 - ctx.r11.s64;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// sld r8,r4,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r4.u64 << (ctx.r8.u8 & 0x7F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_82310570:
	// rldicl r9,r9,63,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82310554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82310554;
	// std r10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r11,r3,2040
	ctx.r11.s64 = ctx.r3.s64 + 2040;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8231037c
	if (!ctx.cr6.gt) goto loc_8231037C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231059C"))) PPC_WEAK_FUNC(sub_8231059C);
PPC_FUNC_IMPL(__imp__sub_8231059C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823105A0"))) PPC_WEAK_FUNC(sub_823105A0);
PPC_FUNC_IMPL(__imp__sub_823105A0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823105B0"))) PPC_WEAK_FUNC(sub_823105B0);
PPC_FUNC_IMPL(__imp__sub_823105B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231061c
	if (ctx.cr6.eq) goto loc_8231061C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231061c
	if (ctx.cr6.eq) goto loc_8231061C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231061c
	if (ctx.cr6.eq) goto loc_8231061C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1598
	ctx.lr = 0x823105F0;
	sub_822B1598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310620
	if (!ctx.cr0.eq) goto loc_82310620;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,-23800
	ctx.r3.s64 = ctx.r11.s64 + -23800;
	// bl 0x823120c8
	ctx.lr = 0x8231060C;
	sub_823120C8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82310620
	goto loc_82310620;
loc_8231061C:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82310620:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82310634"))) PPC_WEAK_FUNC(sub_82310634);
PPC_FUNC_IMPL(__imp__sub_82310634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310638"))) PPC_WEAK_FUNC(sub_82310638);
PPC_FUNC_IMPL(__imp__sub_82310638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r3,r11,-22612
	ctx.r3.s64 = ctx.r11.s64 + -22612;
	// b 0x823105b0
	sub_823105B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310644"))) PPC_WEAK_FUNC(sub_82310644);
PPC_FUNC_IMPL(__imp__sub_82310644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310648"))) PPC_WEAK_FUNC(sub_82310648);
PPC_FUNC_IMPL(__imp__sub_82310648) {
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
	// bl 0x822b15a8
	ctx.lr = 0x82310658;
	sub_822B15A8(ctx, base);
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

__attribute__((alias("__imp__sub_8231066C"))) PPC_WEAK_FUNC(sub_8231066C);
PPC_FUNC_IMPL(__imp__sub_8231066C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310670"))) PPC_WEAK_FUNC(sub_82310670);
PPC_FUNC_IMPL(__imp__sub_82310670) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// ori r4,r4,32775
	ctx.r4.u64 = ctx.r4.u64 | 32775;
	// bl 0x823886b4
	ctx.lr = 0x82310694;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823106a4
	if (ctx.cr0.lt) goto loc_823106A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823106d4
	goto loc_823106D4;
loc_823106A4:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,4352
	ctx.r11.u64 = ctx.r11.u64 | 4352;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823106bc
	if (!ctx.cr6.eq) goto loc_823106BC;
	// li r3,1243
	ctx.r3.s64 = 1243;
	// b 0x823106d4
	goto loc_823106D4;
loc_823106BC:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,6146
	ctx.r11.u64 = ctx.r11.u64 | 6146;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,1229
	ctx.r3.s64 = 1229;
	// beq cr6,0x823106d4
	if (ctx.cr6.eq) goto loc_823106D4;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_823106D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823106E4"))) PPC_WEAK_FUNC(sub_823106E4);
PPC_FUNC_IMPL(__imp__sub_823106E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823106E8"))) PPC_WEAK_FUNC(sub_823106E8);
PPC_FUNC_IMPL(__imp__sub_823106E8) {
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
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-23800
	ctx.r11.s64 = ctx.r11.s64 + -23800;
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x8231071c
	if (!ctx.cr0.eq) goto loc_8231071C;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82310758
	goto loc_82310758;
loc_8231071C:
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// addi r7,r9,1440
	ctx.r7.s64 = ctx.r9.s64 + 1440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823419a0
	ctx.lr = 0x82310738;
	sub_823419A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8231074c
	if (!ctx.cr0.eq) goto loc_8231074C;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82310758
	goto loc_82310758;
loc_8231074C:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82310758:
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

__attribute__((alias("__imp__sub_8231076C"))) PPC_WEAK_FUNC(sub_8231076C);
PPC_FUNC_IMPL(__imp__sub_8231076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310770"))) PPC_WEAK_FUNC(sub_82310770);
PPC_FUNC_IMPL(__imp__sub_82310770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82310778;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-23800
	ctx.r3.s64 = ctx.r10.s64 + -23800;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x82312038
	ctx.lr = 0x823107AC;
	sub_82312038(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8231083c
	if (ctx.cr0.lt) goto loc_8231083C;
	// rlwinm. r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x823107c4
	if (!ctx.cr0.eq) goto loc_823107C4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823107C4:
	// rlwinm. r10,r29,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823107d8
	if (ctx.cr0.eq) goto loc_823107D8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r11,r11,260
	ctx.r11.s64 = ctx.r11.s64 + 260;
loc_823107D8:
	// mulli r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 * 120;
	// li r10,100
	ctx.r10.s64 = 100;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x823107f8
	if (ctx.cr6.eq) goto loc_823107F8;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_823107F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82310808
	if (ctx.cr6.eq) goto loc_82310808;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82310808:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8231083c
	if (ctx.cr6.eq) goto loc_8231083C;
	// rlwinm. r9,r29,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,76
	ctx.r11.s64 = 76;
	// beq 0x82310820
	if (ctx.cr0.eq) goto loc_82310820;
	// li r11,80
	ctx.r11.s64 = 80;
loc_82310820:
	// rlwinm. r9,r29,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8231082c
	if (ctx.cr0.eq) goto loc_8231082C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231082C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,11808
	ctx.r11.s64 = ctx.r11.s64 + 11808;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8231083C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310844"))) PPC_WEAK_FUNC(sub_82310844);
PPC_FUNC_IMPL(__imp__sub_82310844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310848"))) PPC_WEAK_FUNC(sub_82310848);
PPC_FUNC_IMPL(__imp__sub_82310848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82310850;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// rlwinm. r11,r5,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,76
	ctx.r29.s64 = 76;
	// beq 0x82310880
	if (ctx.cr0.eq) goto loc_82310880;
	// li r29,80
	ctx.r29.s64 = 80;
loc_82310880:
	// addi r30,r6,7712
	ctx.r30.s64 = ctx.r6.s64 + 7712;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,32772
	ctx.r4.u64 = ctx.r4.u64 | 32772;
	// li r3,252
	ctx.r3.s64 = 252;
	// addi r31,r11,4096
	ctx.r31.s64 = ctx.r11.s64 + 4096;
	// bl 0x823886b4
	ctx.lr = 0x823108A4;
	__imp__XMsgInProcessCall(ctx, base);
	// lwz r7,324(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// subf r31,r31,r24
	ctx.r31.s64 = ctx.r24.s64 - ctx.r31.s64;
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r8,r29,r28
	ctx.r8.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// subfe r7,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r30,r8
	ctx.r11.u64 = ctx.r30.u64 + ctx.r8.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r29,r7,r11
	ctx.r29.u64 = ctx.r7.u64 & ctx.r11.u64;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lis r5,-32197
	ctx.r5.s64 = -2110062592;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r5,r5,-23800
	ctx.r5.s64 = ctx.r5.s64 + -23800;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82312208
	ctx.lr = 0x8231091C;
	sub_82312208(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8231093c
	if (ctx.cr0.lt) goto loc_8231093C;
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
loc_8231093C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310944"))) PPC_WEAK_FUNC(sub_82310944);
PPC_FUNC_IMPL(__imp__sub_82310944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310948"))) PPC_WEAK_FUNC(sub_82310948);
PPC_FUNC_IMPL(__imp__sub_82310948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82310950;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// not r11,r6
	ctx.r11.u64 = ~ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// rlwinm r24,r11,30,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r4,1088
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1088, ctx.xer);
	// bge cr6,0x823109b4
	if (!ctx.cr6.lt) goto loc_823109B4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82310994
	if (ctx.cr6.eq) goto loc_82310994;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,122
	ctx.r31.u64 = ctx.r31.u64 | 122;
	// b 0x82310a10
	goto loc_82310A10;
loc_82310994:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1088
	ctx.r4.s64 = 1088;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388674
	ctx.lr = 0x823109A4;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82310a00
	if (ctx.cr0.lt) goto loc_82310A00;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823109b8
	goto loc_823109B8;
loc_823109B4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823109B8:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r4,r11,-23800
	ctx.r4.s64 = ctx.r11.s64 + -23800;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823122e8
	ctx.lr = 0x823109E0;
	sub_823122E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82310a00
	if (ctx.cr0.lt) goto loc_82310A00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82312c18
	ctx.lr = 0x823109F0;
	sub_82312C18(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82310a00
	if (ctx.cr0.lt) goto loc_82310A00;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82310A00:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82310a10
	if (ctx.cr6.eq) goto loc_82310A10;
	// bl 0x82388684
	ctx.lr = 0x82310A10;
	__imp__XamFree(ctx, base);
loc_82310A10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310A1C"))) PPC_WEAK_FUNC(sub_82310A1C);
PPC_FUNC_IMPL(__imp__sub_82310A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310A20"))) PPC_WEAK_FUNC(sub_82310A20);
PPC_FUNC_IMPL(__imp__sub_82310A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82310A28;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x82310bc0
	if (!ctx.cr6.lt) goto loc_82310BC0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82310bc0
	if (ctx.cr6.eq) goto loc_82310BC0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82310bc0
	if (ctx.cr6.eq) goto loc_82310BC0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82310bc0
	if (ctx.cr6.eq) goto loc_82310BC0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r10,r3,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// rlwinm. r10,r10,0,24,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE0FF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82310bc0
	if (!ctx.cr0.eq) goto loc_82310BC0;
	// rlwinm. r10,r3,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82310a90
	if (ctx.cr0.eq) goto loc_82310A90;
	// rlwinm. r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82310bc0
	if (ctx.cr0.eq) goto loc_82310BC0;
loc_82310A90:
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82310aa0
	if (ctx.cr0.eq) goto loc_82310AA0;
	// rlwinm. r9,r31,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82310bc0
	if (ctx.cr0.eq) goto loc_82310BC0;
loc_82310AA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82310ab0
	if (ctx.cr6.eq) goto loc_82310AB0;
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82310bc0
	if (ctx.cr0.eq) goto loc_82310BC0;
loc_82310AB0:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82310ac4
	if (ctx.cr0.eq) goto loc_82310AC4;
	// andi. r11,r31,44
	ctx.r11.u64 = ctx.r31.u64 & 44;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82310bc0
	if (ctx.cr0.eq) goto loc_82310BC0;
loc_82310AC4:
	// rlwinm. r11,r31,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82310b04
	if (ctx.cr0.eq) goto loc_82310B04;
	// andi. r9,r31,10
	ctx.r9.u64 = ctx.r31.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82310bc0
	if (ctx.cr0.eq) goto loc_82310BC0;
	// rlwinm. r9,r31,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82310af4
	if (!ctx.cr0.eq) goto loc_82310AF4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82310af4
	if (ctx.cr6.eq) goto loc_82310AF4;
	// rlwinm r10,r31,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82310bc0
	if (!ctx.cr6.eq) goto loc_82310BC0;
loc_82310AF4:
	// rlwinm. r11,r31,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82310b04
	if (ctx.cr0.eq) goto loc_82310B04;
	// rlwinm. r11,r31,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82310bc0
	if (!ctx.cr0.eq) goto loc_82310BC0;
loc_82310B04:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82389144
	ctx.lr = 0x82310B0C;
	__imp__XamSessionCreateHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82310bc4
	if (!ctx.cr0.eq) goto loc_82310BC4;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x82389134
	ctx.lr = 0x82310B28;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82310bc4
	if (!ctx.cr0.eq) goto loc_82310BC4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// ori r4,r4,16
	ctx.r4.u64 = ctx.r4.u64 | 16;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82388464
	ctx.lr = 0x82310B6C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82310b7c
	if (!ctx.cr0.lt) goto loc_82310B7C;
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82310bb0
	goto loc_82310BB0;
loc_82310B7C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82310b9c
	if (!ctx.cr6.eq) goto loc_82310B9C;
	// bl 0x8224b4d0
	ctx.lr = 0x82310B88;
	sub_8224B4D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82310ba0
	goto loc_82310BA0;
loc_82310B9C:
	// li r30,997
	ctx.r30.s64 = 997;
loc_82310BA0:
	// cmplwi cr6,r30,997
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 997, ctx.xer);
	// beq cr6,0x82310bc4
	if (ctx.cr6.eq) goto loc_82310BC4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82310bc4
	if (ctx.cr6.eq) goto loc_82310BC4;
loc_82310BB0:
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82246e18
	ctx.lr = 0x82310BB8;
	sub_82246E18(ctx, base);
	// stw r28,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r28.u32);
	// b 0x82310bc4
	goto loc_82310BC4;
loc_82310BC0:
	// li r30,87
	ctx.r30.s64 = 87;
loc_82310BC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310BD0"))) PPC_WEAK_FUNC(sub_82310BD0);
PPC_FUNC_IMPL(__imp__sub_82310BD0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82389134
	ctx.lr = 0x82310BF0;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82310c64
	if (!ctx.cr0.eq) goto loc_82310C64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,17
	ctx.r4.u64 = ctx.r4.u64 | 17;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x82388464
	ctx.lr = 0x82310C28;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82310c38
	if (!ctx.cr0.lt) goto loc_82310C38;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82310c5c
	goto loc_82310C5C;
loc_82310C38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82310c58
	if (!ctx.cr6.eq) goto loc_82310C58;
	// bl 0x8224b4d0
	ctx.lr = 0x82310C44;
	sub_8224B4D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82310c5c
	goto loc_82310C5C;
loc_82310C58:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82310C5C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388764
	ctx.lr = 0x82310C64;
	__imp__ObDereferenceObject(ctx, base);
loc_82310C64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82310C80"))) PPC_WEAK_FUNC(sub_82310C80);
PPC_FUNC_IMPL(__imp__sub_82310C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82310C88;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82389134
	ctx.lr = 0x82310CA4;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82310d20
	if (!ctx.cr0.eq) goto loc_82310D20;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x82388464
	ctx.lr = 0x82310CE4;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82310cf4
	if (!ctx.cr0.lt) goto loc_82310CF4;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82310d18
	goto loc_82310D18;
loc_82310CF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82310d14
	if (!ctx.cr6.eq) goto loc_82310D14;
	// bl 0x8224b4d0
	ctx.lr = 0x82310D00;
	sub_8224B4D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82310d18
	goto loc_82310D18;
loc_82310D14:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82310D18:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388764
	ctx.lr = 0x82310D20;
	__imp__ObDereferenceObject(ctx, base);
loc_82310D20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310D2C"))) PPC_WEAK_FUNC(sub_82310D2C);
PPC_FUNC_IMPL(__imp__sub_82310D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310D30"))) PPC_WEAK_FUNC(sub_82310D30);
PPC_FUNC_IMPL(__imp__sub_82310D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82310D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82389134
	ctx.lr = 0x82310D4C;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82310dc0
	if (!ctx.cr0.eq) goto loc_82310DC0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r4,r4,20
	ctx.r4.u64 = ctx.r4.u64 | 20;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x82388464
	ctx.lr = 0x82310D84;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82310d94
	if (!ctx.cr0.lt) goto loc_82310D94;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82310db8
	goto loc_82310DB8;
loc_82310D94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82310db4
	if (!ctx.cr6.eq) goto loc_82310DB4;
	// bl 0x8224b4d0
	ctx.lr = 0x82310DA0;
	sub_8224B4D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82310db8
	goto loc_82310DB8;
loc_82310DB4:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82310DB8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388764
	ctx.lr = 0x82310DC0;
	__imp__ObDereferenceObject(ctx, base);
loc_82310DC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310DCC"))) PPC_WEAK_FUNC(sub_82310DCC);
PPC_FUNC_IMPL(__imp__sub_82310DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310DD0"))) PPC_WEAK_FUNC(sub_82310DD0);
PPC_FUNC_IMPL(__imp__sub_82310DD0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82389134
	ctx.lr = 0x82310DF0;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82310e64
	if (!ctx.cr0.eq) goto loc_82310E64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x82388464
	ctx.lr = 0x82310E28;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82310e38
	if (!ctx.cr0.lt) goto loc_82310E38;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82310e5c
	goto loc_82310E5C;
loc_82310E38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82310e58
	if (!ctx.cr6.eq) goto loc_82310E58;
	// bl 0x8224b4d0
	ctx.lr = 0x82310E44;
	sub_8224B4D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82310e5c
	goto loc_82310E5C;
loc_82310E58:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82310E5C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388764
	ctx.lr = 0x82310E64;
	__imp__ObDereferenceObject(ctx, base);
loc_82310E64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82310E80"))) PPC_WEAK_FUNC(sub_82310E80);
PPC_FUNC_IMPL(__imp__sub_82310E80) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82389134
	ctx.lr = 0x82310EA0;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82310f08
	if (!ctx.cr0.eq) goto loc_82310F08;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,38
	ctx.r4.u64 = ctx.r4.u64 | 38;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x82388464
	ctx.lr = 0x82310ECC;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82310edc
	if (!ctx.cr0.lt) goto loc_82310EDC;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x82310f00
	goto loc_82310F00;
loc_82310EDC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82310efc
	if (!ctx.cr6.eq) goto loc_82310EFC;
	// bl 0x8224b4d0
	ctx.lr = 0x82310EE8;
	sub_8224B4D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82310f00
	goto loc_82310F00;
loc_82310EFC:
	// li r31,997
	ctx.r31.s64 = 997;
loc_82310F00:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388764
	ctx.lr = 0x82310F08;
	__imp__ObDereferenceObject(ctx, base);
loc_82310F08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82310F24"))) PPC_WEAK_FUNC(sub_82310F24);
PPC_FUNC_IMPL(__imp__sub_82310F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82310F28"))) PPC_WEAK_FUNC(sub_82310F28);
PPC_FUNC_IMPL(__imp__sub_82310F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82310F30;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rldicl r11,r4,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x82310f60
	if (!ctx.cr6.eq) goto loc_82310F60;
	// rlwinm. r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82310fdc
	if (!ctx.cr0.eq) goto loc_82310FDC;
loc_82310F60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82389134
	ctx.lr = 0x82310F68;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82310fdc
	if (!ctx.cr0.eq) goto loc_82310FDC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r31.u64);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x82388464
	ctx.lr = 0x82310FA0;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82310fb0
	if (!ctx.cr0.lt) goto loc_82310FB0;
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82310fd4
	goto loc_82310FD4;
loc_82310FB0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82310fd0
	if (!ctx.cr6.eq) goto loc_82310FD0;
	// bl 0x8224b4d0
	ctx.lr = 0x82310FBC;
	sub_8224B4D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82310fd4
	goto loc_82310FD4;
loc_82310FD0:
	// li r30,997
	ctx.r30.s64 = 997;
loc_82310FD4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388764
	ctx.lr = 0x82310FDC;
	__imp__ObDereferenceObject(ctx, base);
loc_82310FDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82310FE8"))) PPC_WEAK_FUNC(sub_82310FE8);
PPC_FUNC_IMPL(__imp__sub_82310FE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// li r9,4
	ctx.r9.s64 = 4;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lwz r3,512(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82311018"))) PPC_WEAK_FUNC(sub_82311018);
PPC_FUNC_IMPL(__imp__sub_82311018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82311020;
	__savegprlr_28(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// stw r4,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r4.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r5,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r5.u32);
	// li r3,518
	ctx.r3.s64 = 518;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x823106e8
	ctx.lr = 0x82311054;
	sub_823106E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82311144
	if (ctx.cr0.lt) goto loc_82311144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82310770
	ctx.lr = 0x8231107C;
	sub_82310770(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82311144
	if (ctx.cr0.lt) goto loc_82311144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388674
	ctx.lr = 0x82311094;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82311144
	if (ctx.cr0.lt) goto loc_82311144;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r3,518
	ctx.r3.s64 = 518;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82310848
	ctx.lr = 0x823110E0;
	sub_82310848(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82311144
	if (ctx.cr0.lt) goto loc_82311144;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82310fe8
	ctx.lr = 0x823110F4;
	sub_82310FE8(ctx, base);
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82310fe8
	ctx.lr = 0x82311100;
	sub_82310FE8(ctx, base);
	// addi r4,r1,756
	ctx.r4.s64 = ctx.r1.s64 + 756;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82310fe8
	ctx.lr = 0x8231110C;
	sub_82310FE8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82310fe8
	ctx.lr = 0x82311118;
	sub_82310FE8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82310fe8
	ctx.lr = 0x82311124;
	sub_82310FE8(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32800
	ctx.r4.u64 = ctx.r4.u64 | 32800;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x823886b4
	ctx.lr = 0x8231113C;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82311164
	if (!ctx.cr0.lt) goto loc_82311164;
loc_82311144:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82311154
	if (ctx.cr6.eq) goto loc_82311154;
	// bl 0x82388684
	ctx.lr = 0x82311154;
	__imp__XamFree(ctx, base);
loc_82311154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224b5b8
	ctx.lr = 0x8231115C;
	sub_8224B5B8(ctx, base);
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x8231116c
	goto loc_8231116C;
loc_82311164:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82388684
	ctx.lr = 0x8231116C;
	__imp__XamFree(ctx, base);
loc_8231116C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82311178"))) PPC_WEAK_FUNC(sub_82311178);
PPC_FUNC_IMPL(__imp__sub_82311178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82311180;
	__savegprlr_23(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// stw r5,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x823106e8
	ctx.lr = 0x823111BC;
	sub_823106E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823113f8
	if (ctx.cr0.lt) goto loc_823113F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82310770
	ctx.lr = 0x823111E4;
	sub_82310770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823113f8
	if (ctx.cr0.lt) goto loc_823113F8;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3073
	ctx.r3.s64 = 3073;
	// addi r30,r11,448
	ctx.r30.s64 = ctx.r11.s64 + 448;
	// bl 0x823106e8
	ctx.lr = 0x82311200;
	sub_823106E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823113f8
	if (ctx.cr0.lt) goto loc_823113F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82310770
	ctx.lr = 0x82311228;
	sub_82310770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823113f8
	if (ctx.cr0.lt) goto loc_823113F8;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3585
	ctx.r3.s64 = 3585;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x823106e8
	ctx.lr = 0x82311244;
	sub_823106E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823113f8
	if (ctx.cr0.lt) goto loc_823113F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82310770
	ctx.lr = 0x8231126C;
	sub_82310770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823113f8
	if (ctx.cr0.lt) goto loc_823113F8;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3601
	ctx.r3.s64 = 3601;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x823106e8
	ctx.lr = 0x82311288;
	sub_823106E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823113f8
	if (ctx.cr0.lt) goto loc_823113F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82310770
	ctx.lr = 0x823112B0;
	sub_82310770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823113f8
	if (ctx.cr0.lt) goto loc_823113F8;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388674
	ctx.lr = 0x823112C8;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823113f8
	if (ctx.cr0.lt) goto loc_823113F8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233d240
	ctx.lr = 0x823112D8;
	sub_8233D240(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r24,r1,144
	ctx.r24.s64 = ctx.r1.s64 + 144;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r23,r1,152
	ctx.r23.s64 = ctx.r1.s64 + 152;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r3,3601
	ctx.r3.s64 = 3601;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// bl 0x82310848
	ctx.lr = 0x82311328;
	sub_82310848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823113f8
	if (ctx.cr0.lt) goto loc_823113F8;
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82310fe8
	ctx.lr = 0x8231133C;
	sub_82310FE8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82310fe8
	ctx.lr = 0x82311348;
	sub_82310FE8(ctx, base);
	// addi r4,r1,852
	ctx.r4.s64 = ctx.r1.s64 + 852;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82310fe8
	ctx.lr = 0x82311354;
	sub_82310FE8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82310fe8
	ctx.lr = 0x82311360;
	sub_82310FE8(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82310fe8
	ctx.lr = 0x8231136C;
	sub_82310FE8(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82310fe8
	ctx.lr = 0x82311378;
	sub_82310FE8(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82310948
	ctx.lr = 0x8231139C;
	sub_82310948(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823113f8
	if (ctx.cr0.lt) goto loc_823113F8;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x82388464
	ctx.lr = 0x823113F0;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82311424
	if (!ctx.cr0.lt) goto loc_82311424;
loc_823113F8:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8231140c
	if (ctx.cr6.eq) goto loc_8231140C;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x82311410
	goto loc_82311410;
loc_8231140C:
	// bl 0x8224b480
	ctx.lr = 0x82311410;
	sub_8224B480(ctx, base);
loc_82311410:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82311448
	if (ctx.cr6.eq) goto loc_82311448;
	// bl 0x82388684
	ctx.lr = 0x82311420;
	__imp__XamFree(ctx, base);
	// b 0x82311448
	goto loc_82311448;
loc_82311424:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82311434
	if (ctx.cr6.eq) goto loc_82311434;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x82311448
	goto loc_82311448;
loc_82311434:
	// bl 0x8224b4d0
	ctx.lr = 0x82311438;
	sub_8224B4D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82311448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82311454"))) PPC_WEAK_FUNC(sub_82311454);
PPC_FUNC_IMPL(__imp__sub_82311454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311458"))) PPC_WEAK_FUNC(sub_82311458);
PPC_FUNC_IMPL(__imp__sub_82311458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82311460;
	__savegprlr_24(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// stw r5,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r6,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r6.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x823106e8
	ctx.lr = 0x8231149C;
	sub_823106E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311684
	if (ctx.cr0.lt) goto loc_82311684;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82310770
	ctx.lr = 0x823114C4;
	sub_82310770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311684
	if (ctx.cr0.lt) goto loc_82311684;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3587
	ctx.r3.s64 = 3587;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// bl 0x823106e8
	ctx.lr = 0x823114E0;
	sub_823106E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311684
	if (ctx.cr0.lt) goto loc_82311684;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82310770
	ctx.lr = 0x82311508;
	sub_82310770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311684
	if (ctx.cr0.lt) goto loc_82311684;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3604
	ctx.r3.s64 = 3604;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x823106e8
	ctx.lr = 0x82311524;
	sub_823106E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311684
	if (ctx.cr0.lt) goto loc_82311684;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82310770
	ctx.lr = 0x8231154C;
	sub_82310770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311684
	if (ctx.cr0.lt) goto loc_82311684;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82388674
	ctx.lr = 0x82311564;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311684
	if (ctx.cr0.lt) goto loc_82311684;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233d240
	ctx.lr = 0x82311574;
	sub_8233D240(ctx, base);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r25,r1,144
	ctx.r25.s64 = ctx.r1.s64 + 144;
	// addi r24,r1,148
	ctx.r24.s64 = ctx.r1.s64 + 148;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r3,3604
	ctx.r3.s64 = 3604;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// bl 0x82310848
	ctx.lr = 0x823115C0;
	sub_82310848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311684
	if (ctx.cr0.lt) goto loc_82311684;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82310fe8
	ctx.lr = 0x823115D4;
	sub_82310FE8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82310fe8
	ctx.lr = 0x823115E0;
	sub_82310FE8(ctx, base);
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82310fe8
	ctx.lr = 0x823115EC;
	sub_82310FE8(ctx, base);
	// addi r4,r1,844
	ctx.r4.s64 = ctx.r1.s64 + 844;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82310fe8
	ctx.lr = 0x823115F8;
	sub_82310FE8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82310fe8
	ctx.lr = 0x82311604;
	sub_82310FE8(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82310948
	ctx.lr = 0x82311628;
	sub_82310948(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311684
	if (ctx.cr0.lt) goto loc_82311684;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x82388464
	ctx.lr = 0x8231167C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823116b0
	if (!ctx.cr0.lt) goto loc_823116B0;
loc_82311684:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82311698
	if (ctx.cr6.eq) goto loc_82311698;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x8231169c
	goto loc_8231169C;
loc_82311698:
	// bl 0x8224b480
	ctx.lr = 0x8231169C;
	sub_8224B480(ctx, base);
loc_8231169C:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823116d4
	if (ctx.cr6.eq) goto loc_823116D4;
	// bl 0x82388684
	ctx.lr = 0x823116AC;
	__imp__XamFree(ctx, base);
	// b 0x823116d4
	goto loc_823116D4;
loc_823116B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823116c0
	if (ctx.cr6.eq) goto loc_823116C0;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x823116d4
	goto loc_823116D4;
loc_823116C0:
	// bl 0x8224b4d0
	ctx.lr = 0x823116C4;
	sub_8224B4D0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_823116D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823116E0"))) PPC_WEAK_FUNC(sub_823116E0);
PPC_FUNC_IMPL(__imp__sub_823116E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x823116E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82311740
	if (ctx.cr6.eq) goto loc_82311740;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82311714:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82311714
	if (!ctx.cr6.eq) goto loc_82311714;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r30,199
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 199, ctx.xer);
	// ble cr6,0x82311744
	if (!ctx.cr6.gt) goto loc_82311744;
loc_82311738:
	// li r31,87
	ctx.r31.s64 = 87;
	// b 0x82311834
	goto loc_82311834;
loc_82311740:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82311744:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82311738
	if (ctx.cr6.eq) goto loc_82311738;
	// cmplwi cr6,r27,1000
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1000, ctx.xer);
	// bgt cr6,0x82311738
	if (ctx.cr6.gt) goto loc_82311738;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82311738
	if (ctx.cr6.eq) goto loc_82311738;
	// lis r6,5
	ctx.r6.s64 = 327680;
	// lis r5,5
	ctx.r5.s64 = 327680;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,212
	ctx.r7.s64 = 212;
	// ori r6,r6,32826
	ctx.r6.u64 = ctx.r6.u64 | 32826;
	// ori r5,r5,32825
	ctx.r5.u64 = ctx.r5.u64 | 32825;
	// li r4,252
	ctx.r4.s64 = 252;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82389164
	ctx.lr = 0x82311788;
	__imp__XamCreateEnumeratorHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82311814
	if (!ctx.cr0.eq) goto loc_82311814;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823886c4
	ctx.lr = 0x8231179C;
	__imp__XamGetPrivateEnumStructureFromHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82311814
	if (!ctx.cr0.eq) goto loc_82311814;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823117b4
	if (ctx.cr6.eq) goto loc_823117B4;
	// mulli r11,r27,208
	ctx.r11.s64 = ctx.r27.s64 * 208;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_823117B4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// beq cr6,0x823117d4
	if (ctx.cr6.eq) goto loc_823117D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x823117D4;
	sub_8233E4E0(ctx, base);
loc_823117D4:
	// mulli r11,r27,215
	ctx.r11.s64 = ctx.r27.s64 * 215;
	// stbx r28,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r28.u8);
	// stw r28,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r28.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r5,r31,208
	ctx.r5.s64 = ctx.r31.s64 + 208;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// lis r3,6144
	ctx.r3.s64 = 402653184;
	// bl 0x82388674
	ctx.lr = 0x823117F4;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82311804
	if (!ctx.cr0.lt) goto loc_82311804;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82311814
	goto loc_82311814;
loc_82311804:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82311814:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82311824
	if (ctx.cr6.eq) goto loc_82311824;
	// bl 0x82246e18
	ctx.lr = 0x82311824;
	sub_82246E18(ctx, base);
loc_82311824:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82311834
	if (ctx.cr6.eq) goto loc_82311834;
	// bl 0x82388764
	ctx.lr = 0x82311834;
	__imp__ObDereferenceObject(ctx, base);
loc_82311834:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82311840"))) PPC_WEAK_FUNC(sub_82311840);
PPC_FUNC_IMPL(__imp__sub_82311840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82311848;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x8224b858
	ctx.lr = 0x8231186C;
	sub_8224B858(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8231189c
	if (!ctx.cr0.eq) goto loc_8231189C;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389174
	ctx.lr = 0x8231189C;
	__imp__XamUserReadProfileSettings(ctx, base);
loc_8231189C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823118A4"))) PPC_WEAK_FUNC(sub_823118A4);
PPC_FUNC_IMPL(__imp__sub_823118A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823118A8"))) PPC_WEAK_FUNC(sub_823118A8);
PPC_FUNC_IMPL(__imp__sub_823118A8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,63
	ctx.r11.s64 = 63;
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,15
	ctx.r4.s64 = 15;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823888b4
	ctx.lr = 0x823118EC;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311938
	if (ctx.cr0.lt) goto loc_82311938;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82311938
	if (ctx.cr0.eq) goto loc_82311938;
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,22
	ctx.r4.s64 = 22;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823888b4
	ctx.lr = 0x8231191C;
	__imp__ExGetXConfigSetting(ctx, base);
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,25
	ctx.r4.s64 = 25;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823888b4
	ctx.lr = 0x82311938;
	__imp__ExGetXConfigSetting(ctx, base);
loc_82311938:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
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

__attribute__((alias("__imp__sub_82311960"))) PPC_WEAK_FUNC(sub_82311960);
PPC_FUNC_IMPL(__imp__sub_82311960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82311968;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82389154
	ctx.lr = 0x8231198C;
	__imp__XNetLogonGetTitleID(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x82311b40
	if (!ctx.cr6.lt) goto loc_82311B40;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82311b40
	if (ctx.cr6.eq) goto loc_82311B40;
	// cmplwi cr6,r28,100
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 100, ctx.xer);
	// bgt cr6,0x82311b40
	if (ctx.cr6.gt) goto loc_82311B40;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82311b40
	if (ctx.cr6.eq) goto loc_82311B40;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823884d4
	ctx.lr = 0x823119CC;
	__imp__XamUserGetXUID(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823119f4
	if (!ctx.cr0.lt) goto loc_823119F4;
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823119ec
	if (!ctx.cr6.eq) goto loc_823119EC;
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x82311b18
	goto loc_82311B18;
loc_823119EC:
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82311b18
	goto loc_82311B18;
loc_823119F4:
	// lis r6,5
	ctx.r6.s64 = 327680;
	// lis r5,5
	ctx.r5.s64 = 327680;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,72
	ctx.r7.s64 = 72;
	// ori r6,r6,32833
	ctx.r6.u64 = ctx.r6.u64 | 32833;
	// ori r5,r5,32832
	ctx.r5.u64 = ctx.r5.u64 | 32832;
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389164
	ctx.lr = 0x82311A20;
	__imp__XamCreateEnumeratorHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82311b18
	if (!ctx.cr0.eq) goto loc_82311B18;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823886c4
	ctx.lr = 0x82311A34;
	__imp__XamGetPrivateEnumStructureFromHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82311b18
	if (!ctx.cr0.eq) goto loc_82311B18;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82311a4c
	if (ctx.cr6.eq) goto loc_82311A4C;
	// mulli r11,r28,2524
	ctx.r11.s64 = ctx.r28.s64 * 2524;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82311A4C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82311A64;
	sub_8233EAF0(ctx, base);
	// mulli r4,r28,2520
	ctx.r4.s64 = ctx.r28.s64 * 2520;
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// lis r3,6144
	ctx.r3.s64 = 402653184;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82388674
	ctx.lr = 0x82311A7C;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82311a8c
	if (!ctx.cr0.lt) goto loc_82311A8C;
	// li r30,8
	ctx.r30.s64 = 8;
	// b 0x82311b18
	goto loc_82311B18;
loc_82311A8C:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82389194
	ctx.lr = 0x82311A9C;
	__imp__XamUserGetOnlineCountryFromXUID(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82388704
	ctx.lr = 0x82311AA8;
	__imp__XGetLanguage(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x823118a8
	ctx.lr = 0x82311AB0;
	sub_823118A8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82389184
	ctx.lr = 0x82311ACC;
	__imp__XamUserGetMembershipTierFromXUID(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r25,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r25.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// sth r29,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r29.u16);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82311B18:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82311b28
	if (ctx.cr6.eq) goto loc_82311B28;
	// bl 0x82246e18
	ctx.lr = 0x82311B28;
	sub_82246E18(ctx, base);
loc_82311B28:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82311b38
	if (ctx.cr6.eq) goto loc_82311B38;
	// bl 0x82388764
	ctx.lr = 0x82311B38;
	__imp__ObDereferenceObject(ctx, base);
loc_82311B38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82311b44
	goto loc_82311B44;
loc_82311B40:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82311B44:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82311B4C"))) PPC_WEAK_FUNC(sub_82311B4C);
PPC_FUNC_IMPL(__imp__sub_82311B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311B50"))) PPC_WEAK_FUNC(sub_82311B50);
PPC_FUNC_IMPL(__imp__sub_82311B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// ori r4,r4,32821
	ctx.r4.u64 = ctx.r4.u64 | 32821;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bl 0x823886b4
	ctx.lr = 0x82311B98;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311ba8
	if (ctx.cr0.lt) goto loc_82311BA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82311bd8
	goto loc_82311BD8;
loc_82311BA8:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,87
	ctx.r11.u64 = ctx.r11.u64 | 87;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82311bc0
	if (!ctx.cr6.eq) goto loc_82311BC0;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82311bd8
	goto loc_82311BD8;
loc_82311BC0:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,122
	ctx.r11.u64 = ctx.r11.u64 | 122;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,122
	ctx.r3.s64 = 122;
	// beq cr6,0x82311bd8
	if (ctx.cr6.eq) goto loc_82311BD8;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82311BD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82311BE8"))) PPC_WEAK_FUNC(sub_82311BE8);
PPC_FUNC_IMPL(__imp__sub_82311BE8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823130a8
	ctx.lr = 0x82311C04;
	sub_823130A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82311C14"))) PPC_WEAK_FUNC(sub_82311C14);
PPC_FUNC_IMPL(__imp__sub_82311C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311C18"))) PPC_WEAK_FUNC(sub_82311C18);
PPC_FUNC_IMPL(__imp__sub_82311C18) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823130a8
	ctx.lr = 0x82311C44;
	sub_823130A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311c58
	if (ctx.cr0.lt) goto loc_82311C58;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313078
	ctx.lr = 0x82311C58;
	sub_82313078(ctx, base);
loc_82311C58:
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

__attribute__((alias("__imp__sub_82311C70"))) PPC_WEAK_FUNC(sub_82311C70);
PPC_FUNC_IMPL(__imp__sub_82311C70) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823130a8
	ctx.lr = 0x82311C8C;
	sub_823130A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82311C9C"))) PPC_WEAK_FUNC(sub_82311C9C);
PPC_FUNC_IMPL(__imp__sub_82311C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82311CA0"))) PPC_WEAK_FUNC(sub_82311CA0);
PPC_FUNC_IMPL(__imp__sub_82311CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82311CA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823130a8
	ctx.lr = 0x82311CC8;
	sub_823130A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311ce8
	if (ctx.cr0.lt) goto loc_82311CE8;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82311ce8
	if (ctx.cr0.eq) goto loc_82311CE8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313078
	ctx.lr = 0x82311CE8;
	sub_82313078(ctx, base);
loc_82311CE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82311CF0"))) PPC_WEAK_FUNC(sub_82311CF0);
PPC_FUNC_IMPL(__imp__sub_82311CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82311CF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// bge cr6,0x82311e74
	if (!ctx.cr6.lt) goto loc_82311E74;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// bl 0x823130a8
	ctx.lr = 0x82311D20;
	sub_823130A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82311e74
	if (ctx.cr6.lt) goto loc_82311E74;
	// beq cr6,0x82311d44
	if (ctx.cr6.eq) goto loc_82311D44;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82311e74
	if (!ctx.cr6.lt) goto loc_82311E74;
loc_82311D44:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313078
	ctx.lr = 0x82311D50;
	sub_82313078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82311d80
	if (ctx.cr0.eq) goto loc_82311D80;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823130a8
	ctx.lr = 0x82311D78;
	sub_823130A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
loc_82311D80:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82311da0
	if (ctx.cr0.eq) goto loc_82311DA0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313078
	ctx.lr = 0x82311D98;
	sub_82313078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
loc_82311DA0:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r28,2
	ctx.r28.s64 = 2;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82311dec
	if (ctx.cr0.eq) goto loc_82311DEC;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823130a8
	ctx.lr = 0x82311DC4;
	sub_823130A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
	// lbz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82311dec
	if (ctx.cr0.eq) goto loc_82311DEC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313078
	ctx.lr = 0x82311DE4;
	sub_82313078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
loc_82311DEC:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82311e18
	if (!ctx.cr6.eq) goto loc_82311E18;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82311ca0
	ctx.lr = 0x82311E0C;
	sub_82311CA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
	// b 0x82311e24
	goto loc_82311E24;
loc_82311E18:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_82311E24:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82311E28:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82311f0c
	if (!ctx.cr6.eq) goto loc_82311F0C;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82311e84
	if (ctx.cr6.lt) goto loc_82311E84;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823130a8
	ctx.lr = 0x82311E5C;
	sub_823130A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
loc_82311E70:
	// beq cr6,0x82311f60
	if (ctx.cr6.eq) goto loc_82311F60;
loc_82311E74:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82311E7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82311E84:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x82313020
	ctx.lr = 0x82311E8C;
	sub_82313020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82311ec8
	if (ctx.cr0.eq) goto loc_82311EC8;
loc_82311EA4:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313078
	ctx.lr = 0x82311EB0;
	sub_82313078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82311ea4
	if (ctx.cr6.lt) goto loc_82311EA4;
loc_82311EC8:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313078
	ctx.lr = 0x82311ED4;
	sub_82313078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x823130f8
	ctx.lr = 0x82311EF4;
	sub_823130F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x82311f60
	goto loc_82311F60;
loc_82311F0C:
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x823130a8
	ctx.lr = 0x82311F20;
	sub_823130A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82311f90
	if (ctx.cr6.lt) goto loc_82311F90;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82311e70
	if (!ctx.cr6.lt) goto loc_82311E70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82312c68
	ctx.lr = 0x82311F4C;
	sub_82312C68(ctx, base);
	// addi r4,r26,1
	ctx.r4.s64 = ctx.r26.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82311cf0
	ctx.lr = 0x82311F58;
	sub_82311CF0(ctx, base);
loc_82311F58:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
loc_82311F60:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82311f7c
	if (!ctx.cr6.eq) goto loc_82311F7C;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_82311F7C:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82311e28
	if (!ctx.cr6.eq) goto loc_82311E28;
	// b 0x82311e7c
	goto loc_82311E7C;
loc_82311F90:
	// rlwinm. r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82311fb4
	if (ctx.cr0.eq) goto loc_82311FB4;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823130a8
	ctx.lr = 0x82311FAC;
	sub_823130A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
loc_82311FB4:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82311fd4
	if (ctx.cr0.eq) goto loc_82311FD4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313078
	ctx.lr = 0x82311FCC;
	sub_82313078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
loc_82311FD4:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231201c
	if (ctx.cr0.eq) goto loc_8231201C;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823130a8
	ctx.lr = 0x82311FF4;
	sub_823130A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
	// lbz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231201c
	if (ctx.cr0.eq) goto loc_8231201C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313078
	ctx.lr = 0x82312014;
	sub_82313078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82311e7c
	if (ctx.cr0.lt) goto loc_82311E7C;
loc_8231201C:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82311f60
	if (ctx.cr0.eq) goto loc_82311F60;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82311c18
	ctx.lr = 0x82312034;
	sub_82311C18(ctx, base);
	// b 0x82311f58
	goto loc_82311F58;
}

__attribute__((alias("__imp__sub_82312038"))) PPC_WEAK_FUNC(sub_82312038);
PPC_FUNC_IMPL(__imp__sub_82312038) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82312064
	if (ctx.cr6.lt) goto loc_82312064;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82312080
	goto loc_82312080;
loc_82312064:
	// lhz r9,42(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 42);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mullw r11,r9,r4
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8231207C;
	sub_8233E4E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82312080:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82312090"))) PPC_WEAK_FUNC(sub_82312090);
PPC_FUNC_IMPL(__imp__sub_82312090) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823120ac
	if (!ctx.cr6.gt) goto loc_823120AC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_823120AC:
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823120C4"))) PPC_WEAK_FUNC(sub_823120C4);
PPC_FUNC_IMPL(__imp__sub_823120C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823120C8"))) PPC_WEAK_FUNC(sub_823120C8);
PPC_FUNC_IMPL(__imp__sub_823120C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823120D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8233e4e0
	ctx.lr = 0x823120E8;
	sub_8233E4E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r30,44
	ctx.r9.s64 = ctx.r30.s64 + 44;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82312104
	if (ctx.cr0.eq) goto loc_82312104;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x82312180
	goto loc_82312180;
loc_82312104:
	// lhz r8,38(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82312118
	if (ctx.cr0.eq) goto loc_82312118;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82312118:
	// lhz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lhz r6,42(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lhz r5,26(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lhz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// lhz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,-44
	ctx.r10.s64 = ctx.r9.s64 + -44;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82312180:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231218C"))) PPC_WEAK_FUNC(sub_8231218C);
PPC_FUNC_IMPL(__imp__sub_8231218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312190"))) PPC_WEAK_FUNC(sub_82312190);
PPC_FUNC_IMPL(__imp__sub_82312190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82312198;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82312038
	ctx.lr = 0x823121BC;
	sub_82312038(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x823121fc
	if (ctx.cr0.lt) goto loc_823121FC;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823121dc
	if (ctx.cr6.eq) goto loc_823121DC;
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x823121e4
	goto loc_823121E4;
loc_823121DC:
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823121E4:
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82312c48
	ctx.lr = 0x823121FC;
	sub_82312C48(ctx, base);
loc_823121FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82312208"))) PPC_WEAK_FUNC(sub_82312208);
PPC_FUNC_IMPL(__imp__sub_82312208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82312210;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// rlwinm. r11,r7,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231224c
	if (ctx.cr0.eq) goto loc_8231224C;
	// bl 0x82388ae4
	ctx.lr = 0x82312240;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8231224c
	if (!ctx.cr6.eq) goto loc_8231224C;
	// ori r30,r30,16
	ctx.r30.u64 = ctx.r30.u64 | 16;
loc_8231224C:
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lwz r4,292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82312c48
	ctx.lr = 0x823122B0;
	sub_82312C48(ctx, base);
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// beq cr6,0x823122dc
	if (ctx.cr6.eq) goto loc_823122DC;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823122d0
	if (ctx.cr6.eq) goto loc_823122D0;
	// bl 0x82247218
	ctx.lr = 0x823122D0;
	sub_82247218(ctx, base);
loc_823122D0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,997
	ctx.r10.s64 = 997;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823122DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823122E8"))) PPC_WEAK_FUNC(sub_823122E8);
PPC_FUNC_IMPL(__imp__sub_823122E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x823122F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x82312190
	ctx.lr = 0x82312320;
	sub_82312190(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge 0x8231235c
	if (!ctx.cr0.lt) goto loc_8231235C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r11.u32);
	// b 0x8231239c
	goto loc_8231239C;
loc_8231235C:
	// stw r28,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r28.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82312c48
	ctx.lr = 0x82312378;
	sub_82312C48(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82312388:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82312388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82312388;
loc_8231239C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823123A8"))) PPC_WEAK_FUNC(sub_823123A8);
PPC_FUNC_IMPL(__imp__sub_823123A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823123B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bgt cr6,0x82312418
	if (ctx.cr6.gt) goto loc_82312418;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x82311be8
	ctx.lr = 0x823123D4;
	sub_82311BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82312420
	if (ctx.cr0.lt) goto loc_82312420;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823123f0
	if (ctx.cr6.eq) goto loc_823123F0;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_823123F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,4,23,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1F0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne 0x82312420
	if (!ctx.cr0.eq) goto loc_82312420;
loc_82312418:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82312420:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82312428"))) PPC_WEAK_FUNC(sub_82312428);
PPC_FUNC_IMPL(__imp__sub_82312428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82312430;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r5,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// sth r16,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r16.u16);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r16.u32);
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// blt cr6,0x82312464
	if (ctx.cr6.lt) goto loc_82312464;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823126bc
	goto loc_823126BC;
loc_82312464:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82312474
	if (ctx.cr6.eq) goto loc_82312474;
	// lwz r21,0(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82312478
	goto loc_82312478;
loc_82312474:
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
loc_82312478:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// addi r24,r25,28
	ctx.r24.s64 = ctx.r25.s64 + 28;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x82311be8
	ctx.lr = 0x82312490;
	sub_82311BE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823126b0
	if (ctx.cr6.lt) goto loc_823126B0;
	// beq cr6,0x823124bc
	if (ctx.cr6.eq) goto loc_823124BC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823126b0
	if (!ctx.cr6.lt) goto loc_823126B0;
	// addi r4,r1,90
	ctx.r4.s64 = ctx.r1.s64 + 90;
	// b 0x823124c0
	goto loc_823124C0;
loc_823124BC:
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
loc_823124C0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82313078
	ctx.lr = 0x823124C8;
	sub_82313078(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r15,4
	ctx.r15.s64 = 4;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82312520
	if (ctx.cr0.eq) goto loc_82312520;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823123a8
	ctx.lr = 0x823124F4;
	sub_823123A8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lwz r9,20(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// rotlwi r21,r9,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
loc_82312520:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82312540
	if (ctx.cr0.eq) goto loc_82312540;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82313078
	ctx.lr = 0x82312538;
	sub_82313078(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
loc_82312540:
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r19,1
	ctx.r19.s64 = 1;
	// rlwinm. r11,r4,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82312578
	if (ctx.cr0.eq) goto loc_82312578;
	// lwz r11,1080(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1080);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r25,56
	ctx.r3.s64 = ctx.r25.s64 + 56;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82313230
	ctx.lr = 0x8231256C;
	sub_82313230(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// b 0x82312584
	goto loc_82312584;
loc_82312578:
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// sth r16,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r16.u16);
loc_82312584:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82312624
	if (!ctx.cr6.eq) goto loc_82312624;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82311ca0
	ctx.lr = 0x823125A8;
	sub_82311CA0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r30,r25,56
	ctx.r30.s64 = ctx.r25.s64 + 56;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82313180
	ctx.lr = 0x823125C8;
	sub_82313180(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rotlwi r18,r11,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq 0x82312608
	if (ctx.cr0.eq) goto loc_82312608;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lhz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// bl 0x82312090
	ctx.lr = 0x823125F8;
	sub_82312090(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// and r18,r11,r18
	ctx.r18.u64 = ctx.r11.u64 & ctx.r18.u64;
loc_82312608:
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x823131d0
	ctx.lr = 0x82312618;
	sub_823131D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// b 0x82312630
	goto loc_82312630;
loc_82312624:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// sth r16,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r16.u16);
loc_82312630:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r20,40(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312b94
	if (ctx.cr6.eq) goto loc_82312B94;
loc_82312640:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// andi. r11,r11,243
	ctx.r11.u64 = ctx.r11.u64 & 243;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82312654:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8231277c
	if (!ctx.cr6.eq) goto loc_8231277C;
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// clrlwi r10,r23,16
	ctx.r10.u64 = ctx.r23.u32 & 0xFFFF;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// blt cr6,0x823126c4
	if (ctx.cr6.lt) goto loc_823126C4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82311be8
	ctx.lr = 0x82312684;
	sub_82311BE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r9,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x823126b0
	if (!ctx.cr6.eq) goto loc_823126B0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82312b44
	if (!ctx.cr6.eq) goto loc_82312B44;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82312b44
	if (ctx.cr0.eq) goto loc_82312B44;
loc_823126B0:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
loc_823126B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823126BC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
loc_823126C4:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x82313020
	ctx.lr = 0x823126CC;
	sub_82313020(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82312738
	if (ctx.cr0.eq) goto loc_82312738;
loc_823126E8:
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82313078
	ctx.lr = 0x823126F4;
	sub_82313078(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// bl 0x82312090
	ctx.lr = 0x8231270C;
	sub_82312090(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82312728
	if (!ctx.cr6.eq) goto loc_82312728;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
loc_82312728:
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823126e8
	if (ctx.cr6.lt) goto loc_823126E8;
loc_82312738:
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82313078
	ctx.lr = 0x82312744;
	sub_82313078(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8231277c
	if (!ctx.cr6.eq) goto loc_8231277C;
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x823130f8
	ctx.lr = 0x8231276C;
	sub_823130F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x82312b44
	goto loc_82312B44;
loc_8231277C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,40(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82311be8
	ctx.lr = 0x8231278C;
	sub_82311BE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r9,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82312824
	if (ctx.cr6.lt) goto loc_82312824;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823127b8
	if (ctx.cr6.lt) goto loc_823127B8;
	// bne cr6,0x823126b0
	if (!ctx.cr6.eq) goto loc_823126B0;
	// b 0x82312b44
	goto loc_82312B44;
loc_823127B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82312c68
	ctx.lr = 0x823127C4;
	sub_82312C68(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231281c
	if (ctx.cr0.eq) goto loc_8231281C;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8231281c
	if (!ctx.cr0.eq) goto loc_8231281C;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82312814
	if (ctx.cr6.eq) goto loc_82312814;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_823127E8:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r14,1
	ctx.r4.s64 = ctx.r14.s64 + 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82312428
	ctx.lr = 0x823127F8;
	sub_82312428(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r9,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82312bf4
	if (ctx.cr0.eq) goto loc_82312BF4;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// b 0x82312b44
	goto loc_82312B44;
loc_82312814:
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// b 0x823127e8
	goto loc_823127E8;
loc_8231281C:
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// b 0x823127e8
	goto loc_823127E8;
loc_82312824:
	// rlwinm. r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// beq 0x82312880
	if (ctx.cr0.eq) goto loc_82312880;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823123a8
	ctx.lr = 0x8231284C;
	sub_823123A8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lwz r9,20(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// rotlwi r21,r9,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82312880:
	// rlwinm. r11,r9,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823128a0
	if (ctx.cr0.eq) goto loc_823128A0;
	// addi r4,r1,102
	ctx.r4.s64 = ctx.r1.s64 + 102;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82313078
	ctx.lr = 0x82312894;
	sub_82313078(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_823128A0:
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// rlwinm. r10,r9,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r28,r19,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r11.u8 & 0x3F));
	// beq 0x82312980
	if (ctx.cr0.eq) goto loc_82312980;
	// lwz r11,1080(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1080);
	// addi r30,r25,56
	ctx.r30.s64 = ctx.r25.s64 + 56;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82313230
	ctx.lr = 0x823128D4;
	sub_82313230(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// rlwinm. r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8231290c
	if (!ctx.cr0.eq) goto loc_8231290C;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8231290c
	if (!ctx.cr0.eq) goto loc_8231290C;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82312970
	if (ctx.cr6.eq) goto loc_82312970;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// b 0x82312914
	goto loc_82312914;
loc_8231290C:
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82312914:
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82312940
	if (ctx.cr0.eq) goto loc_82312940;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82312940
	if (!ctx.cr6.eq) goto loc_82312940;
	// bl 0x8233d240
	ctx.lr = 0x82312934;
	sub_8233D240(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82312940:
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823131d0
	ctx.lr = 0x8231294C;
	sub_823131D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// beq cr6,0x82312978
	if (ctx.cr6.eq) goto loc_82312978;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// b 0x82312998
	goto loc_82312998;
loc_82312970:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// b 0x82312914
	goto loc_82312914;
loc_82312978:
	// mullw r28,r5,r28
	ctx.r28.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// b 0x82312998
	goto loc_82312998;
loc_82312980:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// sth r16,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r16.u16);
loc_82312998:
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82312a14
	if (ctx.cr6.eq) goto loc_82312A14;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r31,16(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r8,r30,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r30.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// addi r31,r25,8
	ctx.r31.s64 = ctx.r25.s64 + 8;
	// bl 0x8237b248
	ctx.lr = 0x823129E0;
	sub_8237B248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82312fe8
	ctx.lr = 0x823129F0;
	sub_82312FE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r5,r30,32
	ctx.r5.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// addi r3,r25,56
	ctx.r3.s64 = ctx.r25.s64 + 56;
	// bl 0x82313340
	ctx.lr = 0x82312A10;
	sub_82313340(ctx, base);
	// b 0x82312a98
	goto loc_82312A98;
loc_82312A14:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82312aac
	if (ctx.cr6.eq) goto loc_82312AAC;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82312a84
	if (ctx.cr6.lt) goto loc_82312A84;
	// beq cr6,0x82312a6c
	if (ctx.cr6.eq) goto loc_82312A6C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82312a54
	if (ctx.cr6.lt) goto loc_82312A54;
	// bne cr6,0x82312aac
	if (!ctx.cr6.eq) goto loc_82312AAC;
	// ld r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82312aac
	if (!ctx.cr6.eq) goto loc_82312AAC;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82312f38
	ctx.lr = 0x82312A50;
	sub_82312F38(ctx, base);
	// b 0x82312a98
	goto loc_82312A98;
loc_82312A54:
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82312aac
	if (!ctx.cr6.eq) goto loc_82312AAC;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82312eb0
	ctx.lr = 0x82312A68;
	sub_82312EB0(ctx, base);
	// b 0x82312a98
	goto loc_82312A98;
loc_82312A6C:
	// lhz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82312aac
	if (!ctx.cr6.eq) goto loc_82312AAC;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82312e30
	ctx.lr = 0x82312A80;
	sub_82312E30(ctx, base);
	// b 0x82312a98
	goto loc_82312A98;
loc_82312A84:
	// lbz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82312aac
	if (!ctx.cr6.eq) goto loc_82312AAC;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82312db8
	ctx.lr = 0x82312A98;
	sub_82312DB8(ctx, base);
loc_82312A98:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823126b8
	if (ctx.cr6.lt) goto loc_823126B8;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82312AAC:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82312ac0
	if (!ctx.cr6.eq) goto loc_82312AC0;
	// lhz r28,90(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
loc_82312AC0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82312acc
	if (ctx.cr6.eq) goto loc_82312ACC;
	// add r21,r28,r21
	ctx.r21.u64 = ctx.r28.u64 + ctx.r21.u64;
loc_82312ACC:
	// rlwinm. r11,r9,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82312b40
	if (ctx.cr0.eq) goto loc_82312B40;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82311c18
	ctx.lr = 0x82312AE0;
	sub_82311C18(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lhz r4,126(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// bl 0x82312090
	ctx.lr = 0x82312AF8;
	sub_82312090(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r5,r11,26,6,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// slw r31,r19,r5
	ctx.r31.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r5.u8 & 0x3F));
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r25,56
	ctx.r3.s64 = ctx.r25.s64 + 56;
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// bl 0x82313100
	ctx.lr = 0x82312B34;
	sub_82313100(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82312B40:
	// lwz r28,340(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
loc_82312B44:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82312b60
	if (!ctx.cr6.eq) goto loc_82312B60;
	// clrlwi r11,r23,16
	ctx.r11.u64 = ctx.r23.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
loc_82312B60:
	// rlwinm r11,r9,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82312654
	if (!ctx.cr6.eq) goto loc_82312654;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82312b94
	if (!ctx.cr6.lt) goto loc_82312B94;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82312c68
	ctx.lr = 0x82312B88;
	sub_82312C68(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82312640
	if (ctx.cr6.lt) goto loc_82312640;
loc_82312B94:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82312bb8
	if (ctx.cr0.eq) goto loc_82312BB8;
	// lbz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// addi r3,r25,56
	ctx.r3.s64 = ctx.r25.s64 + 56;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x823131d0
	ctx.lr = 0x82312BB0;
	sub_823131D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
loc_82312BB8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82312bec
	if (!ctx.cr6.eq) goto loc_82312BEC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82312c68
	ctx.lr = 0x82312BD0;
	sub_82312C68(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82311cf0
	ctx.lr = 0x82312BE4;
	sub_82311CF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823126b8
	if (ctx.cr0.lt) goto loc_823126B8;
loc_82312BEC:
	// stw r21,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r21.u32);
	// b 0x823126b8
	goto loc_823126B8;
loc_82312BF4:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82312c10
	if (!ctx.cr6.eq) goto loc_82312C10;
	// lhz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x82312b44
	goto loc_82312B44;
loc_82312C10:
	// lwz r21,104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82312b44
	goto loc_82312B44;
}

__attribute__((alias("__imp__sub_82312C18"))) PPC_WEAK_FUNC(sub_82312C18);
PPC_FUNC_IMPL(__imp__sub_82312C18) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82312428
	ctx.lr = 0x82312C38;
	sub_82312428(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82312C48"))) PPC_WEAK_FUNC(sub_82312C48);
PPC_FUNC_IMPL(__imp__sub_82312C48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82312C64"))) PPC_WEAK_FUNC(sub_82312C64);
PPC_FUNC_IMPL(__imp__sub_82312C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312C68"))) PPC_WEAK_FUNC(sub_82312C68);
PPC_FUNC_IMPL(__imp__sub_82312C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82312c80
	if (!ctx.cr6.gt) goto loc_82312C80;
	// lis r3,-32744
	ctx.r3.s64 = -2145910784;
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
	// blr 
	return;
loc_82312C80:
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82312C8C"))) PPC_WEAK_FUNC(sub_82312C8C);
PPC_FUNC_IMPL(__imp__sub_82312C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312C90"))) PPC_WEAK_FUNC(sub_82312C90);
PPC_FUNC_IMPL(__imp__sub_82312C90) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82312cbc
	if (!ctx.cr6.lt) goto loc_82312CBC;
	// lis r3,-32744
	ctx.r3.s64 = -2145910784;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
	// blr 
	return;
loc_82312CBC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82312CE0"))) PPC_WEAK_FUNC(sub_82312CE0);
PPC_FUNC_IMPL(__imp__sub_82312CE0) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82312c90
	ctx.lr = 0x82312CFC;
	sub_82312C90(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82312da0
	if (ctx.cr0.lt) goto loc_82312DA0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82312d90
	if (ctx.cr6.eq) goto loc_82312D90;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82312d80
	if (ctx.cr6.eq) goto loc_82312D80;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82312d68
	if (ctx.cr6.eq) goto loc_82312D68;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82312d58
	if (ctx.cr6.eq) goto loc_82312D58;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82312d3c
	if (ctx.cr6.eq) goto loc_82312D3C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82312da0
	goto loc_82312DA0;
loc_82312D3C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// lwbrx r10,0,r10
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// b 0x82312da0
	goto loc_82312DA0;
loc_82312D58:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x82312da0
	goto loc_82312DA0;
loc_82312D68:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// b 0x82312da0
	goto loc_82312DA0;
loc_82312D80:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// b 0x82312da0
	goto loc_82312DA0;
loc_82312D90:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x8233e4e0
	ctx.lr = 0x82312DA0;
	sub_8233E4E0(ctx, base);
loc_82312DA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82312DB8"))) PPC_WEAK_FUNC(sub_82312DB8);
PPC_FUNC_IMPL(__imp__sub_82312DB8) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82312df4
	if (!ctx.cr6.lt) goto loc_82312DF4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// b 0x82312e14
	goto loc_82312E14;
loc_82312DF4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82312E04;
	sub_8233E4E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82312E14:
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

__attribute__((alias("__imp__sub_82312E2C"))) PPC_WEAK_FUNC(sub_82312E2C);
PPC_FUNC_IMPL(__imp__sub_82312E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312E30"))) PPC_WEAK_FUNC(sub_82312E30);
PPC_FUNC_IMPL(__imp__sub_82312E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82312e54
	if (!ctx.cr6.lt) goto loc_82312E54;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_82312E54:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82312ea8
	if (ctx.cr6.eq) goto loc_82312EA8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
loc_82312E70:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82312e90
	if (ctx.cr6.eq) goto loc_82312E90;
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r8,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwimi r11,r8,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// b 0x82312e94
	goto loc_82312E94;
loc_82312E90:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_82312E94:
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bdnz 0x82312e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82312E70;
loc_82312EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82312EB0"))) PPC_WEAK_FUNC(sub_82312EB0);
PPC_FUNC_IMPL(__imp__sub_82312EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82312ed4
	if (!ctx.cr6.lt) goto loc_82312ED4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_82312ED4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82312f30
	if (ctx.cr6.eq) goto loc_82312F30;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
loc_82312EF0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82312f18
	if (ctx.cr6.eq) goto loc_82312F18;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r8,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r8,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r8,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r8,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// b 0x82312f1c
	goto loc_82312F1C;
loc_82312F18:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
loc_82312F1C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bdnz 0x82312ef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82312EF0;
loc_82312F30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82312F38"))) PPC_WEAK_FUNC(sub_82312F38);
PPC_FUNC_IMPL(__imp__sub_82312F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82312f5c
	if (!ctx.cr6.lt) goto loc_82312F5C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_82312F5C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82312fdc
	if (ctx.cr6.eq) goto loc_82312FDC;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
loc_82312F78:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82312fc4
	if (ctx.cr6.eq) goto loc_82312FC4;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r7,r10,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r10,24,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r6,r9,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r10,8,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r6,r9,24,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r6,r9,8,8,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwimi r6,r9,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// b 0x82312fc8
	goto loc_82312FC8;
loc_82312FC4:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
loc_82312FC8:
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bdnz 0x82312f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82312F78;
loc_82312FDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82312FE4"))) PPC_WEAK_FUNC(sub_82312FE4);
PPC_FUNC_IMPL(__imp__sub_82312FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82312FE8"))) PPC_WEAK_FUNC(sub_82312FE8);
PPC_FUNC_IMPL(__imp__sub_82312FE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8231300c
	if (!ctx.cr6.lt) goto loc_8231300C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_8231300C:
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231301C"))) PPC_WEAK_FUNC(sub_8231301C);
PPC_FUNC_IMPL(__imp__sub_8231301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313020"))) PPC_WEAK_FUNC(sub_82313020);
PPC_FUNC_IMPL(__imp__sub_82313020) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82312c90
	ctx.lr = 0x82313048;
	sub_82312C90(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82313060
	if (ctx.cr0.lt) goto loc_82313060;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8233e4e0
	ctx.lr = 0x82313060;
	sub_8233E4E0(ctx, base);
loc_82313060:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82313078"))) PPC_WEAK_FUNC(sub_82313078);
PPC_FUNC_IMPL(__imp__sub_82313078) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82312ce0
	ctx.lr = 0x82313098;
	sub_82312CE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823130A8"))) PPC_WEAK_FUNC(sub_823130A8);
PPC_FUNC_IMPL(__imp__sub_823130A8) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82312c90
	ctx.lr = 0x823130C4;
	sub_82312C90(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x823130dc
	if (ctx.cr0.lt) goto loc_823130DC;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x8233e4e0
	ctx.lr = 0x823130DC;
	sub_8233E4E0(ctx, base);
loc_823130DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_823130F4"))) PPC_WEAK_FUNC(sub_823130F4);
PPC_FUNC_IMPL(__imp__sub_823130F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823130F8"))) PPC_WEAK_FUNC(sub_823130F8);
PPC_FUNC_IMPL(__imp__sub_823130F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82312c90
	sub_82312C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823130FC"))) PPC_WEAK_FUNC(sub_823130FC);
PPC_FUNC_IMPL(__imp__sub_823130FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313100"))) PPC_WEAK_FUNC(sub_82313100);
PPC_FUNC_IMPL(__imp__sub_82313100) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// bge cr6,0x82313170
	if (!ctx.cr6.lt) goto loc_82313170;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bgt cr6,0x82313170
	if (ctx.cr6.gt) goto loc_82313170;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82313130
	if (ctx.cr0.eq) goto loc_82313130;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82313130:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82313158
	if (ctx.cr6.eq) goto loc_82313158;
	// lbz r8,1(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82313158
	if (ctx.cr0.eq) goto loc_82313158;
	// clrldi r8,r5,32
	ctx.r8.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// sld r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// divdu r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 / ctx.r8.u64;
	// tdllei r8,0
loc_82313158:
	// rlwimi r5,r10,31,0,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_82313170:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231317C"))) PPC_WEAK_FUNC(sub_8231317C);
PPC_FUNC_IMPL(__imp__sub_8231317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313180"))) PPC_WEAK_FUNC(sub_82313180);
PPC_FUNC_IMPL(__imp__sub_82313180) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// blt cr6,0x82313194
	if (ctx.cr6.lt) goto loc_82313194;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82313194:
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823131c4
	if (ctx.cr0.eq) goto loc_823131C4;
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823131c4
	if (!ctx.cr0.eq) goto loc_823131C4;
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823131C4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823131D0"))) PPC_WEAK_FUNC(sub_823131D0);
PPC_FUNC_IMPL(__imp__sub_823131D0) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// blt cr6,0x823131e8
	if (ctx.cr6.lt) goto loc_823131E8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_823131E8:
	// cmplwi cr6,r4,63
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 63, ctx.xer);
	// bne cr6,0x823131f8
	if (!ctx.cr6.eq) goto loc_823131F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823131F8:
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82313220
	if (ctx.cr0.eq) goto loc_82313220;
	// rlwinm. r8,r11,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82313220
	if (ctx.cr0.eq) goto loc_82313220;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
loc_82313220:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8231322C"))) PPC_WEAK_FUNC(sub_8231322C);
PPC_FUNC_IMPL(__imp__sub_8231322C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313230"))) PPC_WEAK_FUNC(sub_82313230);
PPC_FUNC_IMPL(__imp__sub_82313230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82313238;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82311c70
	ctx.lr = 0x8231325C;
	sub_82311C70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82313328
	if (ctx.cr0.lt) goto loc_82313328;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// beq cr6,0x82313328
	if (ctx.cr6.eq) goto loc_82313328;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82313300
	if (ctx.cr0.eq) goto loc_82313300;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313078
	ctx.lr = 0x82313288;
	sub_82313078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82313328
	if (ctx.cr0.lt) goto loc_82313328;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82312090
	ctx.lr = 0x823132A0;
	sub_82312090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82313328
	if (ctx.cr0.lt) goto loc_82313328;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r10,r29,30
	ctx.r10.u64 = ctx.r29.u32 & 0x3;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82313330
	if (!ctx.cr6.lt) goto loc_82313330;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82313330
	if (ctx.cr6.gt) goto loc_82313330;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823132e4
	if (ctx.cr0.eq) goto loc_823132E4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82313328
	goto loc_82313328;
loc_823132E4:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r10,r8,31,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 31) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_82313300:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82313180
	ctx.lr = 0x82313314;
	sub_82313180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82313328
	if (ctx.cr0.lt) goto loc_82313328;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82313328:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82313330:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82313328
	goto loc_82313328;
}

__attribute__((alias("__imp__sub_8231333C"))) PPC_WEAK_FUNC(sub_8231333C);
PPC_FUNC_IMPL(__imp__sub_8231333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313340"))) PPC_WEAK_FUNC(sub_82313340);
PPC_FUNC_IMPL(__imp__sub_82313340) {
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
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// slw r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82312c48
	ctx.lr = 0x8231338C;
	sub_82312C48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823133f8
	if (ctx.cr6.lt) goto loc_823133F8;
	// beq cr6,0x823133dc
	if (ctx.cr6.eq) goto loc_823133DC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823133c0
	if (ctx.cr6.lt) goto loc_823133C0;
	// bne cr6,0x82313414
	if (!ctx.cr6.eq) goto loc_82313414;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82312f38
	ctx.lr = 0x823133BC;
	sub_82312F38(ctx, base);
	// b 0x82313410
	goto loc_82313410;
loc_823133C0:
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82312eb0
	ctx.lr = 0x823133D8;
	sub_82312EB0(ctx, base);
	// b 0x82313410
	goto loc_82313410;
loc_823133DC:
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x82312e30
	ctx.lr = 0x823133F4;
	sub_82312E30(ctx, base);
	// b 0x82313410
	goto loc_82313410;
loc_823133F8:
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82312db8
	ctx.lr = 0x82313410;
	sub_82312DB8(ctx, base);
loc_82313410:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82313414:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82313430"))) PPC_WEAK_FUNC(sub_82313430);
PPC_FUNC_IMPL(__imp__sub_82313430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82313438;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82388494
	ctx.lr = 0x82313440;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// rlwinm r10,r3,0,8,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r11,r11,41216
	ctx.r11.u64 = ctx.r11.u64 | 41216;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823134e8
	if (!ctx.cr6.lt) goto loc_823134E8;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r28,r11,-22604
	ctx.r28.s64 = ctx.r11.s64 + -22604;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82388aa4
	ctx.lr = 0x82313464;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r30,-32197
	ctx.r30.s64 = -2110062592;
	// lwz r11,-23720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23720);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231347c
	if (!ctx.cr6.eq) goto loc_8231347C;
	// li r29,1627
	ctx.r29.s64 = 1627;
	// b 0x823134dc
	goto loc_823134DC;
loc_8231347C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823136a8
	ctx.lr = 0x8231348C;
	sub_823136A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lis r31,-32197
	ctx.r31.s64 = -2110062592;
	// bne 0x823134cc
	if (!ctx.cr0.eq) goto loc_823134CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,-23716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23716, ctx.r11.u32);
	// bl 0x82313600
	ctx.lr = 0x823134BC;
	sub_82313600(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823134cc
	if (!ctx.cr0.eq) goto loc_823134CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823134d8
	goto loc_823134D8;
loc_823134CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-23716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23716, ctx.r10.u32);
loc_823134D8:
	// stw r11,-23720(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23720, ctx.r11.u32);
loc_823134DC:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82388a64
	ctx.lr = 0x823134E4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x823134fc
	goto loc_823134FC;
loc_823134E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82313600
	ctx.lr = 0x823134F8;
	sub_82313600(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_823134FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82313508"))) PPC_WEAK_FUNC(sub_82313508);
PPC_FUNC_IMPL(__imp__sub_82313508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82313510;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82388494
	ctx.lr = 0x82313518;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// rlwinm r10,r3,0,8,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r11,r11,41216
	ctx.r11.u64 = ctx.r11.u64 | 41216;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82313598
	if (!ctx.cr6.lt) goto loc_82313598;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r28,r11,-22604
	ctx.r28.s64 = ctx.r11.s64 + -22604;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82388aa4
	ctx.lr = 0x8231353C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r31,-32197
	ctx.r31.s64 = -2110062592;
	// lwz r11,-23720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82313554
	if (!ctx.cr6.eq) goto loc_82313554;
	// li r29,1627
	ctx.r29.s64 = 1627;
	// b 0x8231358c
	goto loc_8231358C;
loc_82313554:
	// lis r30,-32197
	ctx.r30.s64 = -2110062592;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-23716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23716);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82313574
	if (ctx.cr6.eq) goto loc_82313574;
	// li r4,4
	ctx.r4.s64 = 4;
loc_82313574:
	// bl 0x82313600
	ctx.lr = 0x82313578;
	sub_82313600(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,-23716(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23716, ctx.r11.u32);
	// stw r10,-23720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23720, ctx.r10.u32);
loc_8231358C:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82388a64
	ctx.lr = 0x82313594;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x823135ac
	goto loc_823135AC;
loc_82313598:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82313600
	ctx.lr = 0x823135A8;
	sub_82313600(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_823135AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823135B8"))) PPC_WEAK_FUNC(sub_823135B8);
PPC_FUNC_IMPL(__imp__sub_823135B8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-9272
	ctx.r11.s64 = ctx.r11.s64 + -9272;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x823135e4
	if (ctx.cr0.eq) goto loc_823135E4;
	// bl 0x820dc6e0
	ctx.lr = 0x823135E4;
	sub_820DC6E0(ctx, base);
loc_823135E4:
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

__attribute__((alias("__imp__sub_823135FC"))) PPC_WEAK_FUNC(sub_823135FC);
PPC_FUNC_IMPL(__imp__sub_823135FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313600"))) PPC_WEAK_FUNC(sub_82313600);
PPC_FUNC_IMPL(__imp__sub_82313600) {
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
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bne cr6,0x82313640
	if (!ctx.cr6.eq) goto loc_82313640;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82313644
	goto loc_82313644;
loc_82313640:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82313644:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x823891a4
	ctx.lr = 0x82313660;
	__imp__XMsgStartIORequestEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82313680
	if (ctx.cr0.lt) goto loc_82313680;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224a568
	ctx.lr = 0x82313670;
	sub_8224A568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82313680
	if (ctx.cr0.lt) goto loc_82313680;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82313698
	goto loc_82313698;
loc_82313680:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82313698
	if (ctx.cr6.eq) goto loc_82313698;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82313698:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823136A8"))) PPC_WEAK_FUNC(sub_823136A8);
PPC_FUNC_IMPL(__imp__sub_823136A8) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x823886b4
	ctx.lr = 0x823136D8;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823136e8
	if (ctx.cr0.lt) goto loc_823136E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82313700
	goto loc_82313700;
loc_823136E8:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82313700
	if (ctx.cr6.eq) goto loc_82313700;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82313700:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82313710"))) PPC_WEAK_FUNC(sub_82313710);
PPC_FUNC_IMPL(__imp__sub_82313710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82313718;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x82313738
	if (ctx.cr6.gt) goto loc_82313738;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82313738:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82313788
	if (ctx.cr6.eq) goto loc_82313788;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82313754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823137e4
	if (ctx.cr6.eq) goto loc_823137E4;
loc_82313760:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82313760
	if (!ctx.cr0.eq) goto loc_82313760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82313788:
	// bl 0x822573d0
	ctx.lr = 0x8231378C;
	sub_822573D0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82255f00
	ctx.lr = 0x8231379C;
	sub_82255F00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823137e4
	if (ctx.cr6.eq) goto loc_823137E4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823137e4
	if (ctx.cr6.eq) goto loc_823137E4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82255178
	ctx.lr = 0x823137C0;
	sub_82255178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823137e4
	if (!ctx.cr6.gt) goto loc_823137E4;
loc_823137C8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stwcx. r10,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823137c8
	if (!ctx.cr0.eq) goto loc_823137C8;
loc_823137E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823137F0"))) PPC_WEAK_FUNC(sub_823137F0);
PPC_FUNC_IMPL(__imp__sub_823137F0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82313828
	if (ctx.cr6.eq) goto loc_82313828;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82313824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82313878
	goto loc_82313878;
loc_82313828:
	// bl 0x822573d0
	ctx.lr = 0x8231382C;
	sub_822573D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82313868
	if (ctx.cr6.eq) goto loc_82313868;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82255178
	ctx.lr = 0x82313840;
	sub_82255178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82313868
	if (!ctx.cr6.gt) goto loc_82313868;
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
loc_8231384C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8231384c
	if (!ctx.cr0.eq) goto loc_8231384C;
loc_82313868:
	// bl 0x822573d0
	ctx.lr = 0x8231386C;
	sub_822573D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822567f8
	ctx.lr = 0x82313878;
	sub_822567F8(ctx, base);
loc_82313878:
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

__attribute__((alias("__imp__sub_82313890"))) PPC_WEAK_FUNC(sub_82313890);
PPC_FUNC_IMPL(__imp__sub_82313890) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82313928
	if (!ctx.cr6.gt) goto loc_82313928;
	// li r31,128
	ctx.r31.s64 = 128;
	// cmplwi cr6,r5,64
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 64, ctx.xer);
	// bgt cr6,0x823138d4
	if (ctx.cr6.gt) goto loc_823138D4;
	// li r11,64
	ctx.r11.s64 = 64;
loc_823138C4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823138c4
	if (!ctx.cr6.gt) goto loc_823138C4;
loc_823138D4:
	// li r11,8
	ctx.r11.s64 = 8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823138e4
	if (ctx.cr6.eq) goto loc_823138E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_823138E4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823138f0
	if (ctx.cr6.gt) goto loc_823138F0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_823138F0:
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82313928
	if (!ctx.cr6.gt) goto loc_82313928;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82313928
	if (!ctx.cr6.gt) goto loc_82313928;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82313710
	ctx.lr = 0x82313910;
	sub_82313710(ctx, base);
	// subf r10,r3,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82313934
	goto loc_82313934;
loc_82313928:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82313934:
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

__attribute__((alias("__imp__sub_8231394C"))) PPC_WEAK_FUNC(sub_8231394C);
PPC_FUNC_IMPL(__imp__sub_8231394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313950"))) PPC_WEAK_FUNC(sub_82313950);
PPC_FUNC_IMPL(__imp__sub_82313950) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82313a00
	if (!ctx.cr6.gt) goto loc_82313A00;
	// addic. r5,r5,8
	ctx.xer.ca = ctx.r5.u32 > 4294967287;
	ctx.r5.s64 = ctx.r5.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82313a00
	if (ctx.cr0.eq) goto loc_82313A00;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82313a00
	if (ctx.cr6.lt) goto loc_82313A00;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82313890
	ctx.lr = 0x8231398C;
	sub_82313890(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82313a00
	if (ctx.cr6.eq) goto loc_82313A00;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_823139A4:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwsync 
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r7,33
	ctx.r10.u64 = ctx.r7.u64 & 0x7FFFFFFF;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_823139C4:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x823139e8
	if (!ctx.cr6.eq) goto loc_823139E8;
	// stdcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823139c4
	if (!ctx.cr0.eq) goto loc_823139C4;
	// b 0x823139f0
	goto loc_823139F0;
loc_823139E8:
	// stdcx. r6,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823139F0:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x823139a4
	if (!ctx.cr6.eq) goto loc_823139A4;
	// b 0x82313a04
	goto loc_82313A04;
loc_82313A00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82313A04:
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

__attribute__((alias("__imp__sub_82313A1C"))) PPC_WEAK_FUNC(sub_82313A1C);
PPC_FUNC_IMPL(__imp__sub_82313A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313A20"))) PPC_WEAK_FUNC(sub_82313A20);
PPC_FUNC_IMPL(__imp__sub_82313A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82313A28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
loc_82313A38:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82313b14
	if (ctx.cr6.eq) goto loc_82313B14;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82313A64:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82313a88
	if (!ctx.cr6.eq) goto loc_82313A88;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82313a64
	if (!ctx.cr0.eq) goto loc_82313A64;
	// b 0x82313a90
	goto loc_82313A90;
loc_82313A88:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82313A90:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82313a38
	if (!ctx.cr6.eq) goto loc_82313A38;
	// lwz r30,4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82313ac0
	if (ctx.cr6.eq) goto loc_82313AC0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82313ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82313a38
	goto loc_82313A38;
loc_82313AC0:
	// bl 0x822573d0
	ctx.lr = 0x82313AC4;
	sub_822573D0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82313b00
	if (ctx.cr6.eq) goto loc_82313B00;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82255178
	ctx.lr = 0x82313AD8;
	sub_82255178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82313b00
	if (!ctx.cr6.gt) goto loc_82313B00;
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
loc_82313AE4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82313ae4
	if (!ctx.cr0.eq) goto loc_82313AE4;
loc_82313B00:
	// bl 0x822573d0
	ctx.lr = 0x82313B04;
	sub_822573D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822567f8
	ctx.lr = 0x82313B10;
	sub_822567F8(ctx, base);
	// b 0x82313a38
	goto loc_82313A38;
loc_82313B14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82313B1C"))) PPC_WEAK_FUNC(sub_82313B1C);
PPC_FUNC_IMPL(__imp__sub_82313B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82313B20"))) PPC_WEAK_FUNC(sub_82313B20);
PPC_FUNC_IMPL(__imp__sub_82313B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82313B28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,52
	ctx.r29.s64 = ctx.r3.s64 + 52;
loc_82313B38:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82313b94
	if (ctx.cr6.lt) goto loc_82313B94;
	// beq cr6,0x82313bc0
	if (ctx.cr6.eq) goto loc_82313BC0;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82313b54
	if (!ctx.cr6.gt) goto loc_82313B54;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82313B54:
	// lwsync 
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_82313B5C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82313b80
	if (!ctx.cr6.eq) goto loc_82313B80;
	// stwcx. r10,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82313b5c
	if (!ctx.cr0.eq) goto loc_82313B5C;
	// b 0x82313b88
	goto loc_82313B88;
loc_82313B80:
	// stwcx. r9,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82313B88:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82313b38
	if (!ctx.cr6.eq) goto loc_82313B38;
loc_82313B94:
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x82313950
	ctx.lr = 0x82313BAC;
	sub_82313950(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313bcc
	if (!ctx.cr6.eq) goto loc_82313BCC;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82313BC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82313BCC:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
loc_82313BD0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82313bd0
	if (!ctx.cr0.eq) goto loc_82313BD0;
	// addi r7,r28,-1
	ctx.r7.s64 = ctx.r28.s64 + -1;
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82313c68
	if (ctx.cr6.eq) goto loc_82313C68;
loc_82313C00:
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
loc_82313C08:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r5,33
	ctx.r10.u64 = ctx.r5.u64 & 0x7FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82313C28:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r4,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82313c4c
	if (!ctx.cr6.eq) goto loc_82313C4C;
	// stdcx. r10,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82313c28
	if (!ctx.cr0.eq) goto loc_82313C28;
	// b 0x82313c54
	goto loc_82313C54;
loc_82313C4C:
	// stdcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82313C54:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82313c08
	if (!ctx.cr6.eq) goto loc_82313C08;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82313c00
	if (!ctx.cr0.eq) goto loc_82313C00;
loc_82313C68:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r9,-16
	ctx.r30.s64 = ctx.r9.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82313cc4
	if (ctx.cr6.eq) goto loc_82313CC4;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
loc_82313C7C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82313c7c
	if (!ctx.cr0.eq) goto loc_82313C7C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bge cr6,0x82313cc4
	if (!ctx.cr6.lt) goto loc_82313CC4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82313cc4
	if (!ctx.cr6.gt) goto loc_82313CC4;
	// not r4,r10
	ctx.r4.u64 = ~ctx.r10.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82313cbc
	if (!ctx.cr6.gt) goto loc_82313CBC;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_82313CBC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82315470
	ctx.lr = 0x82313CC4;
	sub_82315470(ctx, base);
loc_82313CC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82313CD0"))) PPC_WEAK_FUNC(sub_82313CD0);
PPC_FUNC_IMPL(__imp__sub_82313CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82313CD8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82313cfc
	if (!ctx.cr6.eq) goto loc_82313CFC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82313CFC:
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// beq cr6,0x82313d2c
	if (ctx.cr6.eq) goto loc_82313D2C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82313d2c
	if (ctx.cr6.eq) goto loc_82313D2C;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82313d38
	if (ctx.cr6.eq) goto loc_82313D38;
loc_82313D2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82313D38:
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x82313890
	ctx.lr = 0x82313D58;
	sub_82313890(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82313e7c
	if (ctx.cr6.eq) goto loc_82313E7C;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82313D74:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82313d74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82313D74;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r25,r31,60
	ctx.r25.s64 = ctx.r31.s64 + 60;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r24,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r24.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// bge cr6,0x82313dcc
	if (!ctx.cr6.lt) goto loc_82313DCC;
	// li r30,16
	ctx.r30.s64 = 16;
	// b 0x82313ddc
	goto loc_82313DDC;
loc_82313DCC:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82313ddc
	if (!ctx.cr6.gt) goto loc_82313DDC;
	// lis r30,256
	ctx.r30.s64 = 16777216;
loc_82313DDC:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82313e54
	if (ctx.cr6.lt) goto loc_82313E54;
	// lis r28,2047
	ctx.r28.s64 = 134152192;
	// ori r28,r28,65534
	ctx.r28.u64 = ctx.r28.u64 | 65534;
loc_82313DF4:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82313e00
	if (!ctx.cr6.gt) goto loc_82313E00;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82313E00:
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// beq cr6,0x82313e88
	if (ctx.cr6.eq) goto loc_82313E88;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82315450
	ctx.lr = 0x82313E1C;
	sub_82315450(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313e88
	if (!ctx.cr6.eq) goto loc_82313E88;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82313e68
	if (ctx.cr6.eq) goto loc_82313E68;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82313E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82313E54:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x82313df4
	if (ctx.cr6.gt) goto loc_82313DF4;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// b 0x82313e00
	goto loc_82313E00;
loc_82313E68:
	// bl 0x822573d0
	ctx.lr = 0x82313E6C;
	sub_822573D0(ctx, base);
	// bl 0x822573d0
	ctx.lr = 0x82313E70;
	sub_822573D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x822567f8
	ctx.lr = 0x82313E7C;
	sub_822567F8(ctx, base);
loc_82313E7C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82313E88:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82313ee0
	if (ctx.cr6.eq) goto loc_82313EE0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82315450
	ctx.lr = 0x82313E98;
	sub_82315450(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313ee0
	if (!ctx.cr6.eq) goto loc_82313EE0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82313eb4
	if (ctx.cr6.eq) goto loc_82313EB4;
	// bl 0x82315468
	ctx.lr = 0x82313EB4;
	sub_82315468(ctx, base);
loc_82313EB4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82313e68
	if (ctx.cr6.eq) goto loc_82313E68;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82313ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82313EE0:
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_82313EE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82313f40
	if (ctx.cr6.lt) goto loc_82313F40;
	// beq cr6,0x82314068
	if (ctx.cr6.eq) goto loc_82314068;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82313f00
	if (!ctx.cr6.gt) goto loc_82313F00;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82313F00:
	// lwsync 
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_82313F08:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82313f2c
	if (!ctx.cr6.eq) goto loc_82313F2C;
	// stwcx. r10,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82313f08
	if (!ctx.cr0.eq) goto loc_82313F08;
	// b 0x82313f34
	goto loc_82313F34;
loc_82313F2C:
	// stwcx. r9,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82313F34:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82313ee4
	if (!ctx.cr6.eq) goto loc_82313EE4;
loc_82313F40:
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x82313950
	ctx.lr = 0x82313F58;
	sub_82313950(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313f68
	if (!ctx.cr6.eq) goto loc_82313F68;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// b 0x82314068
	goto loc_82314068;
loc_82313F68:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
loc_82313F6C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82313f6c
	if (!ctx.cr0.eq) goto loc_82313F6C;
	// addi r7,r28,-1
	ctx.r7.s64 = ctx.r28.s64 + -1;
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82314004
	if (ctx.cr6.eq) goto loc_82314004;
loc_82313F9C:
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
loc_82313FA4:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r5,33
	ctx.r10.u64 = ctx.r5.u64 & 0x7FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82313FC4:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r4,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82313fe8
	if (!ctx.cr6.eq) goto loc_82313FE8;
	// stdcx. r10,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82313fc4
	if (!ctx.cr0.eq) goto loc_82313FC4;
	// b 0x82313ff0
	goto loc_82313FF0;
loc_82313FE8:
	// stdcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82313FF0:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82313fa4
	if (!ctx.cr6.eq) goto loc_82313FA4;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82313f9c
	if (!ctx.cr0.eq) goto loc_82313F9C;
loc_82314004:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r9,-16
	ctx.r30.s64 = ctx.r9.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314060
	if (ctx.cr6.eq) goto loc_82314060;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
loc_82314018:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314018
	if (!ctx.cr0.eq) goto loc_82314018;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bge cr6,0x82314060
	if (!ctx.cr6.lt) goto loc_82314060;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82314060
	if (!ctx.cr6.gt) goto loc_82314060;
	// not r4,r10
	ctx.r4.u64 = ~ctx.r10.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82314058
	if (!ctx.cr6.gt) goto loc_82314058;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_82314058:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82315470
	ctx.lr = 0x82314060;
	sub_82315470(ctx, base);
loc_82314060:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823140b4
	if (!ctx.cr6.eq) goto loc_823140B4;
loc_82314068:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314078
	if (ctx.cr6.eq) goto loc_82314078;
	// bl 0x82315468
	ctx.lr = 0x82314078;
	sub_82315468(ctx, base);
loc_82314078:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314088
	if (ctx.cr6.eq) goto loc_82314088;
	// bl 0x82315468
	ctx.lr = 0x82314088;
	sub_82315468(ctx, base);
loc_82314088:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82313e68
	if (ctx.cr6.eq) goto loc_82313E68;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823140A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_823140B4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823140cc
	if (ctx.cr6.eq) goto loc_823140CC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_823140CC:
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// ori r10,r11,20853
	ctx.r10.u64 = ctx.r11.u64 | 20853;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwsync 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82314100"))) PPC_WEAK_FUNC(sub_82314100);
PPC_FUNC_IMPL(__imp__sub_82314100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82314108;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8231412c
	if (!ctx.cr6.eq) goto loc_8231412C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8231412C:
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// beq cr6,0x8231415c
	if (ctx.cr6.eq) goto loc_8231415C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231415c
	if (ctx.cr6.eq) goto loc_8231415C;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82314168
	if (ctx.cr6.eq) goto loc_82314168;
loc_8231415C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_82314168:
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r30,292(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r5,r30,96
	ctx.r5.s64 = ctx.r30.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bl 0x82313890
	ctx.lr = 0x82314190;
	sub_82313890(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823142c4
	if (ctx.cr6.eq) goto loc_823142C4;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823141AC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x823141ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823141AC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r24,r31,60
	ctx.r24.s64 = ctx.r31.s64 + 60;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r23,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r23.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// beq cr6,0x82314204
	if (ctx.cr6.eq) goto loc_82314204;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82314204:
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// bge cr6,0x82314214
	if (!ctx.cr6.lt) goto loc_82314214;
	// li r27,16
	ctx.r27.s64 = 16;
	// b 0x82314224
	goto loc_82314224;
loc_82314214:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82314224
	if (!ctx.cr6.gt) goto loc_82314224;
	// lis r27,256
	ctx.r27.s64 = 16777216;
loc_82314224:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231429c
	if (ctx.cr6.lt) goto loc_8231429C;
	// lis r28,2047
	ctx.r28.s64 = 134152192;
	// ori r28,r28,65534
	ctx.r28.u64 = ctx.r28.u64 | 65534;
loc_8231423C:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82314248
	if (!ctx.cr6.gt) goto loc_82314248;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82314248:
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// beq cr6,0x823142d0
	if (ctx.cr6.eq) goto loc_823142D0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82315450
	ctx.lr = 0x82314264;
	sub_82315450(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823142d0
	if (!ctx.cr6.eq) goto loc_823142D0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823142b0
	if (ctx.cr6.eq) goto loc_823142B0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82314290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_8231429C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x8231423c
	if (ctx.cr6.gt) goto loc_8231423C;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// b 0x82314248
	goto loc_82314248;
loc_823142B0:
	// bl 0x822573d0
	ctx.lr = 0x823142B4;
	sub_822573D0(ctx, base);
	// bl 0x822573d0
	ctx.lr = 0x823142B8;
	sub_822573D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x822567f8
	ctx.lr = 0x823142C4;
	sub_822567F8(ctx, base);
loc_823142C4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_823142D0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82314328
	if (ctx.cr6.eq) goto loc_82314328;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82315450
	ctx.lr = 0x823142E0;
	sub_82315450(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314328
	if (!ctx.cr6.eq) goto loc_82314328;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823142fc
	if (ctx.cr6.eq) goto loc_823142FC;
	// bl 0x82315468
	ctx.lr = 0x823142FC;
	sub_82315468(ctx, base);
loc_823142FC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823142b0
	if (ctx.cr6.eq) goto loc_823142B0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8231431C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_82314328:
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_8231432C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82314388
	if (ctx.cr6.lt) goto loc_82314388;
	// beq cr6,0x823144b0
	if (ctx.cr6.eq) goto loc_823144B0;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82314348
	if (!ctx.cr6.gt) goto loc_82314348;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82314348:
	// lwsync 
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_82314350:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82314374
	if (!ctx.cr6.eq) goto loc_82314374;
	// stwcx. r10,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314350
	if (!ctx.cr0.eq) goto loc_82314350;
	// b 0x8231437c
	goto loc_8231437C;
loc_82314374:
	// stwcx. r9,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8231437C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8231432c
	if (!ctx.cr6.eq) goto loc_8231432C;
loc_82314388:
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x82313950
	ctx.lr = 0x823143A0;
	sub_82313950(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823143b0
	if (!ctx.cr6.eq) goto loc_823143B0;
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
	// b 0x823144b0
	goto loc_823144B0;
loc_823143B0:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
loc_823143B4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823143b4
	if (!ctx.cr0.eq) goto loc_823143B4;
	// addi r7,r28,-1
	ctx.r7.s64 = ctx.r28.s64 + -1;
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8231444c
	if (ctx.cr6.eq) goto loc_8231444C;
loc_823143E4:
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
loc_823143EC:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r5,33
	ctx.r10.u64 = ctx.r5.u64 & 0x7FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8231440C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r4,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314430
	if (!ctx.cr6.eq) goto loc_82314430;
	// stdcx. r10,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8231440c
	if (!ctx.cr0.eq) goto loc_8231440C;
	// b 0x82314438
	goto loc_82314438;
loc_82314430:
	// stdcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82314438:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x823143ec
	if (!ctx.cr6.eq) goto loc_823143EC;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x823143e4
	if (!ctx.cr0.eq) goto loc_823143E4;
loc_8231444C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r9,-16
	ctx.r30.s64 = ctx.r9.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823144a8
	if (ctx.cr6.eq) goto loc_823144A8;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
loc_82314460:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314460
	if (!ctx.cr0.eq) goto loc_82314460;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bge cr6,0x823144a8
	if (!ctx.cr6.lt) goto loc_823144A8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823144a8
	if (!ctx.cr6.gt) goto loc_823144A8;
	// not r4,r10
	ctx.r4.u64 = ~ctx.r10.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x823144a0
	if (!ctx.cr6.gt) goto loc_823144A0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_823144A0:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82315470
	ctx.lr = 0x823144A8;
	sub_82315470(ctx, base);
loc_823144A8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823144fc
	if (!ctx.cr6.eq) goto loc_823144FC;
loc_823144B0:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823144c0
	if (ctx.cr6.eq) goto loc_823144C0;
	// bl 0x82315468
	ctx.lr = 0x823144C0;
	sub_82315468(ctx, base);
loc_823144C0:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823144d0
	if (ctx.cr6.eq) goto loc_823144D0;
	// bl 0x82315468
	ctx.lr = 0x823144D0;
	sub_82315468(ctx, base);
loc_823144D0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823142b0
	if (ctx.cr6.eq) goto loc_823142B0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823144F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_823144FC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314514
	if (ctx.cr6.eq) goto loc_82314514;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82314514:
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// stw r22,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// ori r10,r11,20853
	ctx.r10.u64 = ctx.r11.u64 | 20853;
	// stw r22,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwsync 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82314548"))) PPC_WEAK_FUNC(sub_82314548);
PPC_FUNC_IMPL(__imp__sub_82314548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82314550;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231467c
	if (!ctx.cr6.eq) goto loc_8231467C;
loc_82314568:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82314654
	if (ctx.cr6.eq) goto loc_82314654;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82314598:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x823145bc
	if (!ctx.cr6.eq) goto loc_823145BC;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314598
	if (!ctx.cr0.eq) goto loc_82314598;
	// b 0x823145c4
	goto loc_823145C4;
loc_823145BC:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823145C4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314568
	if (!ctx.cr6.eq) goto loc_82314568;
loc_823145D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r29,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r29.u64);
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r10,1
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_823145F0:
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x823145f0
	if (!ctx.cr6.eq) goto loc_823145F0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwsync 
	// bne cr6,0x8231479c
	if (!ctx.cr6.eq) goto loc_8231479C;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r3,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82314630:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r5,0,r6
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r6.u32);
	ctx.r5.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314754
	if (!ctx.cr6.eq) goto loc_82314754;
	// stdcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r6.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314630
	if (!ctx.cr0.eq) goto loc_82314630;
	// b 0x8231475c
	goto loc_8231475C;
loc_82314654:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82314670
	if (ctx.cr6.eq) goto loc_82314670;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313b20
	ctx.lr = 0x82314668;
	sub_82313B20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823145d0
	if (!ctx.cr6.eq) goto loc_823145D0;
loc_82314670:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_8231467C:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
loc_82314680:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314680
	if (!ctx.cr0.eq) goto loc_82314680;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82314710
	if (ctx.cr6.lt) goto loc_82314710;
loc_823146A4:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82314710
	if (ctx.cr6.eq) goto loc_82314710;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823146D4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x823146f8
	if (!ctx.cr6.eq) goto loc_823146F8;
	// stdcx. r6,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823146d4
	if (!ctx.cr0.eq) goto loc_823146D4;
	// b 0x82314700
	goto loc_82314700;
loc_823146F8:
	// stdcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82314700:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x823146a4
	if (!ctx.cr6.eq) goto loc_823146A4;
	// b 0x823145d0
	goto loc_823145D0;
loc_82314710:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231472c
	if (ctx.cr6.eq) goto loc_8231472C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313b20
	ctx.lr = 0x82314724;
	sub_82313B20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823145d0
	if (!ctx.cr6.eq) goto loc_823145D0;
loc_8231472C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8231472c
	if (!ctx.cr0.eq) goto loc_8231472C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82314754:
	// stdcx. r5,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r6.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8231475C:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x823145f0
	if (!ctx.cr6.eq) goto loc_823145F0;
	// lwsync 
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrldi r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 0x7FFFFFFF;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82314778:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r7
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r7.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r10
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x823147dc
	if (!ctx.cr6.eq) goto loc_823147DC;
	// stdcx. r5,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314778
	if (!ctx.cr0.eq) goto loc_82314778;
	// b 0x823147e4
	goto loc_823147E4;
loc_8231479C:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rldicr r11,r9,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r8,33
	ctx.r9.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_823147AC:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r7
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r7.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r10
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x823147d0
	if (!ctx.cr6.eq) goto loc_823147D0;
	// stdcx. r4,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823147ac
	if (!ctx.cr0.eq) goto loc_823147AC;
	// b 0x823145f0
	goto loc_823145F0;
loc_823147D0:
	// stdcx. r6,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x823145f0
	goto loc_823145F0;
loc_823147DC:
	// stdcx. r8,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823147E4:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314804
	if (ctx.cr6.eq) goto loc_82314804;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82314804
	if (!ctx.cr6.gt) goto loc_82314804;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82315470
	ctx.lr = 0x82314804;
	sub_82315470(ctx, base);
loc_82314804:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82314810"))) PPC_WEAK_FUNC(sub_82314810);
PPC_FUNC_IMPL(__imp__sub_82314810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82314818;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82314958
	if (!ctx.cr6.eq) goto loc_82314958;
loc_82314844:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82314930
	if (ctx.cr6.eq) goto loc_82314930;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82314874:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314898
	if (!ctx.cr6.eq) goto loc_82314898;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314874
	if (!ctx.cr0.eq) goto loc_82314874;
	// b 0x823148a0
	goto loc_823148A0;
loc_82314898:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823148A0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314844
	if (!ctx.cr6.eq) goto loc_82314844;
loc_823148AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r23,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r23.u64);
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r10,1
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_823148CC:
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x823148cc
	if (!ctx.cr6.eq) goto loc_823148CC;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwsync 
	// bne cr6,0x82314c14
	if (!ctx.cr6.eq) goto loc_82314C14;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r3,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8231490C:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r5,0,r6
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r6.u32);
	ctx.r5.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314bcc
	if (!ctx.cr6.eq) goto loc_82314BCC;
	// stdcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r6.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8231490c
	if (!ctx.cr0.eq) goto loc_8231490C;
	// b 0x82314bd4
	goto loc_82314BD4;
loc_82314930:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231494c
	if (ctx.cr6.eq) goto loc_8231494C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313b20
	ctx.lr = 0x82314944;
	sub_82313B20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823148ac
	if (!ctx.cr6.eq) goto loc_823148AC;
loc_8231494C:
	// li r3,258
	ctx.r3.s64 = 258;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82314958:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r25,r31,24
	ctx.r25.s64 = ctx.r31.s64 + 24;
loc_82314964:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r25
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r25.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r25
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r25.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314964
	if (!ctx.cr0.eq) goto loc_82314964;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823149f4
	if (ctx.cr6.lt) goto loc_823149F4;
loc_82314988:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823149f4
	if (ctx.cr6.eq) goto loc_823149F4;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_823149B8:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x823149dc
	if (!ctx.cr6.eq) goto loc_823149DC;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823149b8
	if (!ctx.cr0.eq) goto loc_823149B8;
	// b 0x823149e4
	goto loc_823149E4;
loc_823149DC:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_823149E4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314988
	if (!ctx.cr6.eq) goto loc_82314988;
	// b 0x823148ac
	goto loc_823148AC;
loc_823149F4:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82314a10
	if (ctx.cr6.eq) goto loc_82314A10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82313b20
	ctx.lr = 0x82314A08;
	sub_82313B20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823148ac
	if (!ctx.cr6.eq) goto loc_823148AC;
loc_82314A10:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82314ab8
	if (ctx.cr6.eq) goto loc_82314AB8;
	// li r8,1000
	ctx.r8.s64 = 1000;
loc_82314A1C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82314A24:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82314a24
	if (!ctx.cr0.lt) goto loc_82314A24;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 511, ctx.xer);
	// bgt cr6,0x82314a40
	if (ctx.cr6.gt) goto loc_82314A40;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82314A40:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82314A44:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82314ab0
	if (ctx.cr6.eq) goto loc_82314AB0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82314A74:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314a98
	if (!ctx.cr6.eq) goto loc_82314A98;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314a74
	if (!ctx.cr0.eq) goto loc_82314A74;
	// b 0x82314aa0
	goto loc_82314AA0;
loc_82314A98:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82314AA0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314a44
	if (!ctx.cr6.eq) goto loc_82314A44;
	// b 0x823148ac
	goto loc_823148AC;
loc_82314AB0:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82314a1c
	if (!ctx.cr0.eq) goto loc_82314A1C;
loc_82314AB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823148ac
	if (!ctx.cr6.eq) goto loc_823148AC;
loc_82314AC0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82314af0
	if (ctx.cr6.eq) goto loc_82314AF0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82314AD0:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82314ad0
	if (!ctx.cr0.lt) goto loc_82314AD0;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 511, ctx.xer);
	// bgt cr6,0x82314aec
	if (ctx.cr6.gt) goto loc_82314AEC;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82314AEC:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82314AF0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82314b1c
	if (!ctx.cr6.eq) goto loc_82314B1C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82314b0c
	if (!ctx.cr6.eq) goto loc_82314B0C;
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x82314b34
	goto loc_82314B34;
loc_82314B0C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823154c8
	ctx.lr = 0x82314B18;
	sub_823154C8(ctx, base);
	// b 0x82314b34
	goto loc_82314B34;
loc_82314B1C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82314B34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82314B34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314ba8
	if (!ctx.cr6.eq) goto loc_82314BA8;
loc_82314B3C:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82314ac0
	if (ctx.cr6.eq) goto loc_82314AC0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82314B6C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314b90
	if (!ctx.cr6.eq) goto loc_82314B90;
	// stdcx. r6,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314b6c
	if (!ctx.cr0.eq) goto loc_82314B6C;
	// b 0x82314b98
	goto loc_82314B98;
loc_82314B90:
	// stdcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82314B98:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314b3c
	if (!ctx.cr6.eq) goto loc_82314B3C;
	// b 0x823148ac
	goto loc_823148AC;
loc_82314BA8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r25
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r25.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r25
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r25.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314ba8
	if (!ctx.cr0.eq) goto loc_82314BA8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82314BCC:
	// stdcx. r5,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r6.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82314BD4:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x823148cc
	if (!ctx.cr6.eq) goto loc_823148CC;
	// lwsync 
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrldi r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 0x7FFFFFFF;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82314BF0:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r7
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r7.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r10
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x82314c54
	if (!ctx.cr6.eq) goto loc_82314C54;
	// stdcx. r5,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314bf0
	if (!ctx.cr0.eq) goto loc_82314BF0;
	// b 0x82314c5c
	goto loc_82314C5C;
loc_82314C14:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rldicr r11,r9,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r8,33
	ctx.r9.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82314C24:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r7
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r7.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r10
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x82314c48
	if (!ctx.cr6.eq) goto loc_82314C48;
	// stdcx. r4,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314c24
	if (!ctx.cr0.eq) goto loc_82314C24;
	// b 0x823148cc
	goto loc_823148CC;
loc_82314C48:
	// stdcx. r6,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x823148cc
	goto loc_823148CC;
loc_82314C54:
	// stdcx. r8,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82314C5C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314c7c
	if (ctx.cr6.eq) goto loc_82314C7C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82314c7c
	if (!ctx.cr6.gt) goto loc_82314C7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82315470
	ctx.lr = 0x82314C7C;
	sub_82315470(ctx, base);
loc_82314C7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82314C88"))) PPC_WEAK_FUNC(sub_82314C88);
PPC_FUNC_IMPL(__imp__sub_82314C88) {
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
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
loc_82314CA4:
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// cmpd cr6,r11,r7
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r7.s64, ctx.xer);
	// bne cr6,0x82314ca4
	if (!ctx.cr6.eq) goto loc_82314CA4;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82314d20
	if (!ctx.cr6.eq) goto loc_82314D20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82314dc4
	if (ctx.cr6.eq) goto loc_82314DC4;
	// lwsync 
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rldicr r11,r10,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r10,r7,33
	ctx.r10.u64 = ctx.r7.u64 & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82314CF0:
	// mfmsr r31
	ctx.r31.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r5
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r5.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r9
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r9.s64, ctx.xer);
	// bne cr6,0x82314d14
	if (!ctx.cr6.eq) goto loc_82314D14;
	// stdcx. r11,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r5.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r11.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r31,1
	ctx.msr = (ctx.r31.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314cf0
	if (!ctx.cr0.eq) goto loc_82314CF0;
	// b 0x82314ca4
	goto loc_82314CA4;
loc_82314D14:
	// stdcx. r6,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r5.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r31,1
	ctx.msr = (ctx.r31.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x82314ca4
	goto loc_82314CA4;
loc_82314D20:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82314ca4
	if (ctx.cr6.eq) goto loc_82314CA4;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82314D40:
	// mfmsr r30
	ctx.r30.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r31,0,r8
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r8.u32);
	ctx.r31.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314d64
	if (!ctx.cr6.eq) goto loc_82314D64;
	// stdcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r8.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r30,1
	ctx.msr = (ctx.r30.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314d40
	if (!ctx.cr0.eq) goto loc_82314D40;
	// b 0x82314d6c
	goto loc_82314D6C;
loc_82314D64:
	// stdcx. r31,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r8.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r31.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r30,1
	ctx.msr = (ctx.r30.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82314D6C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314ca4
	if (!ctx.cr6.eq) goto loc_82314CA4;
	// std r7,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// rldicr r9,r6,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000;
loc_82314D80:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82314DA0:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r3
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r3.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314dcc
	if (!ctx.cr6.eq) goto loc_82314DCC;
	// stdcx. r4,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314da0
	if (!ctx.cr0.eq) goto loc_82314DA0;
	// b 0x82314dd4
	goto loc_82314DD4;
loc_82314DC4:
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x82314e28
	goto loc_82314E28;
loc_82314DCC:
	// stdcx. r7,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82314DD4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82314d80
	if (!ctx.cr6.eq) goto loc_82314D80;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314e24
	if (ctx.cr6.eq) goto loc_82314E24;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
loc_82314DF0:
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
	// bne 0x82314df0
	if (!ctx.cr0.eq) goto loc_82314DF0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82314e24
	if (ctx.cr6.gt) goto loc_82314E24;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82315470
	ctx.lr = 0x82314E24;
	sub_82315470(ctx, base);
loc_82314E24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82314E28:
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

__attribute__((alias("__imp__sub_82314E40"))) PPC_WEAK_FUNC(sub_82314E40);
PPC_FUNC_IMPL(__imp__sub_82314E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82314E48;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82314e84
	if (!ctx.cr6.eq) goto loc_82314E84;
	// bl 0x82314c88
	ctx.lr = 0x82314E7C;
	sub_82314C88(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82314E84:
	// bl 0x82314c88
	ctx.lr = 0x82314E88;
	sub_82314C88(ctx, base);
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x82314fc0
	if (!ctx.cr6.eq) goto loc_82314FC0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82314ee0
	if (ctx.cr6.eq) goto loc_82314EE0;
	// li r29,1000
	ctx.r29.s64 = 1000;
loc_82314E9C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82314EA4:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82314ea4
	if (!ctx.cr0.lt) goto loc_82314EA4;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 511, ctx.xer);
	// bgt cr6,0x82314ec0
	if (ctx.cr6.gt) goto loc_82314EC0;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82314EC0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x82314c88
	ctx.lr = 0x82314ED0;
	sub_82314C88(ctx, base);
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x82314fc0
	if (!ctx.cr6.eq) goto loc_82314FC0;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82314e9c
	if (!ctx.cr0.eq) goto loc_82314E9C;
loc_82314EE0:
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
loc_82314EE4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314ee4
	if (!ctx.cr0.eq) goto loc_82314EE4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82314c88
	ctx.lr = 0x82314F0C;
	sub_82314C88(ctx, base);
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x82314fa4
	if (!ctx.cr6.eq) goto loc_82314FA4;
loc_82314F14:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82314f44
	if (ctx.cr6.eq) goto loc_82314F44;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82314F24:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82314f24
	if (!ctx.cr0.lt) goto loc_82314F24;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 511, ctx.xer);
	// bgt cr6,0x82314f40
	if (ctx.cr6.gt) goto loc_82314F40;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82314F40:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82314F44:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82314f70
	if (!ctx.cr6.eq) goto loc_82314F70;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82314f60
	if (!ctx.cr6.eq) goto loc_82314F60;
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x82314f88
	goto loc_82314F88;
loc_82314F60:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823154c8
	ctx.lr = 0x82314F6C;
	sub_823154C8(ctx, base);
	// b 0x82314f88
	goto loc_82314F88;
loc_82314F70:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82314F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82314F88:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82314fc8
	if (!ctx.cr6.eq) goto loc_82314FC8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82314c88
	ctx.lr = 0x82314F9C;
	sub_82314C88(ctx, base);
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x82314f14
	if (ctx.cr6.eq) goto loc_82314F14;
loc_82314FA4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314fa4
	if (!ctx.cr0.eq) goto loc_82314FA4;
loc_82314FC0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
loc_82314FC8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82314fc8
	if (!ctx.cr0.eq) goto loc_82314FC8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82314FEC"))) PPC_WEAK_FUNC(sub_82314FEC);
PPC_FUNC_IMPL(__imp__sub_82314FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82314FF0"))) PPC_WEAK_FUNC(sub_82314FF0);
PPC_FUNC_IMPL(__imp__sub_82314FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,-22572(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22572);
	// b 0x82082c78
	sub_82082C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82315000"))) PPC_WEAK_FUNC(sub_82315000);
PPC_FUNC_IMPL(__imp__sub_82315000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,-22572(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22572);
	// b 0x82082d58
	sub_82082D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82315010"))) PPC_WEAK_FUNC(sub_82315010);
PPC_FUNC_IMPL(__imp__sub_82315010) {
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
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x823150fc
	if (ctx.cr6.eq) goto loc_823150FC;
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// ori r9,r11,20853
	ctx.r9.u64 = ctx.r11.u64 | 20853;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823150fc
	if (!ctx.cr6.eq) goto loc_823150FC;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823150d0
	if (ctx.cr6.eq) goto loc_823150D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823150d0
	if (ctx.cr6.eq) goto loc_823150D0;
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,28,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82314810
	ctx.lr = 0x82315084;
	sub_82314810(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823150a0
	if (ctx.cr6.eq) goto loc_823150A0;
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x823150c4
	if (ctx.cr6.eq) goto loc_823150C4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x823150b8
	if (ctx.cr6.gt) goto loc_823150B8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823150A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_823150B8:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
	// b 0x823150a0
	goto loc_823150A0;
loc_823150C4:
	// lis r31,-32719
	ctx.r31.s64 = -2144272384;
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
	// b 0x823150a0
	goto loc_823150A0;
loc_823150D0:
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82314548
	ctx.lr = 0x823150D8;
	sub_82314548(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823150a0
	if (!ctx.cr6.eq) goto loc_823150A0;
	// lis r3,-32719
	ctx.r3.s64 = -2144272384;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
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
loc_823150FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
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

__attribute__((alias("__imp__sub_82315118"))) PPC_WEAK_FUNC(sub_82315118);
PPC_FUNC_IMPL(__imp__sub_82315118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82315120;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82315144
	if (!ctx.cr6.eq) goto loc_82315144;
loc_82315134:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82315144:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// beq cr6,0x8231523c
	if (ctx.cr6.eq) goto loc_8231523C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bne cr6,0x82315134
	if (!ctx.cr6.eq) goto loc_82315134;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// addi r9,r9,20464
	ctx.r9.s64 = ctx.r9.s64 + 20464;
	// addi r10,r10,20480
	ctx.r10.s64 = ctx.r10.s64 + 20480;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82315190
	if (ctx.cr6.eq) goto loc_82315190;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82315134
	if (ctx.cr6.eq) goto loc_82315134;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82315190:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,0,23,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823151e8
	if (!ctx.cr6.eq) goto loc_823151E8;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823151e8
	if (!ctx.cr6.eq) goto loc_823151E8;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823151e8
	if (!ctx.cr6.eq) goto loc_823151E8;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823151e8
	if (!ctx.cr6.eq) goto loc_823151E8;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823151e8
	if (!ctx.cr6.eq) goto loc_823151E8;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823151e8
	if (!ctx.cr6.eq) goto loc_823151E8;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82315228
	if (ctx.cr6.eq) goto loc_82315228;
loc_823151E8:
	// li r8,28
	ctx.r8.s64 = 28;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r6,r11,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// rlwinm r5,r11,29,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// bl 0x82314100
	ctx.lr = 0x82315208;
	sub_82314100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82315274
	if (ctx.cr6.eq) goto loc_82315274;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82315224;
	sub_8233E4E0(ctx, base);
	// b 0x8231526c
	goto loc_8231526C;
loc_82315228:
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r6,r11,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r11,29,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// b 0x82315260
	goto loc_82315260;
loc_8231523C:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// addi r10,r11,20480
	ctx.r10.s64 = ctx.r11.s64 + 20480;
	// addi r9,r9,20464
	ctx.r9.s64 = ctx.r9.s64 + 20464;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82315260:
	// li r8,16
	ctx.r8.s64 = 16;
	// bl 0x82313cd0
	ctx.lr = 0x82315268;
	sub_82313CD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8231526C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82315284
	if (!ctx.cr6.eq) goto loc_82315284;
loc_82315274:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82315284:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82315294"))) PPC_WEAK_FUNC(sub_82315294);
PPC_FUNC_IMPL(__imp__sub_82315294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82315298"))) PPC_WEAK_FUNC(sub_82315298);
PPC_FUNC_IMPL(__imp__sub_82315298) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82315334
	if (ctx.cr6.eq) goto loc_82315334;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,64
	ctx.r8.s64 = ctx.r3.s64 + 64;
loc_823152BC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823152bc
	if (!ctx.cr0.eq) goto loc_823152BC;
	// lis r7,19558
	ctx.r7.s64 = 1281753088;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// ori r6,r7,20853
	ctx.r6.u64 = ctx.r7.u64 | 20853;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82315334
	if (!ctx.cr6.eq) goto loc_82315334;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823152f8
	if (ctx.cr6.eq) goto loc_823152F8;
	// bl 0x82315468
	ctx.lr = 0x823152F8;
	sub_82315468(ctx, base);
loc_823152F8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82315308
	if (ctx.cr6.eq) goto loc_82315308;
	// bl 0x82315468
	ctx.lr = 0x82315308;
	sub_82315468(ctx, base);
loc_82315308:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82313a20
	ctx.lr = 0x82315320;
	sub_82313A20(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x823137f0
	ctx.lr = 0x82315330;
	sub_823137F0(ctx, base);
	// lwsync 
loc_82315334:
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

__attribute__((alias("__imp__sub_82315348"))) PPC_WEAK_FUNC(sub_82315348);
PPC_FUNC_IMPL(__imp__sub_82315348) {
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
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8231542c
	if (ctx.cr6.eq) goto loc_8231542C;
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// ori r9,r11,20853
	ctx.r9.u64 = ctx.r11.u64 | 20853;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8231542c
	if (!ctx.cr6.eq) goto loc_8231542C;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823153cc
	if (ctx.cr6.eq) goto loc_823153CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823153cc
	if (ctx.cr6.eq) goto loc_823153CC;
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82314e40
	ctx.lr = 0x823153C8;
	sub_82314E40(ctx, base);
	// b 0x823153d4
	goto loc_823153D4;
loc_823153CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82314c88
	ctx.lr = 0x823153D4;
	sub_82314C88(ctx, base);
loc_823153D4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823153f8
	if (ctx.cr6.eq) goto loc_823153F8;
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x8231541c
	if (ctx.cr6.eq) goto loc_8231541C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82315410
	if (ctx.cr6.gt) goto loc_82315410;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823153F0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82315408
	if (ctx.cr6.lt) goto loc_82315408;
loc_823153F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82315408
	if (ctx.cr6.eq) goto loc_82315408;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82315408:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82315434
	goto loc_82315434;
loc_82315410:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
	// b 0x823153f0
	goto loc_823153F0;
loc_8231541C:
	// lis r31,-32719
	ctx.r31.s64 = -2144272384;
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82315434
	goto loc_82315434;
loc_8231542C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82315434:
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

__attribute__((alias("__imp__sub_8231544C"))) PPC_WEAK_FUNC(sub_8231544C);
PPC_FUNC_IMPL(__imp__sub_8231544C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82315450"))) PPC_WEAK_FUNC(sub_82315450);
PPC_FUNC_IMPL(__imp__sub_82315450) {
	PPC_FUNC_PROLOGUE();
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82247360
	sub_82247360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82315468"))) PPC_WEAK_FUNC(sub_82315468);
PPC_FUNC_IMPL(__imp__sub_82315468) {
	PPC_FUNC_PROLOGUE();
	// b 0x82246e18
	sub_82246E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231546C"))) PPC_WEAK_FUNC(sub_8231546C);
PPC_FUNC_IMPL(__imp__sub_8231546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82315470"))) PPC_WEAK_FUNC(sub_82315470);
PPC_FUNC_IMPL(__imp__sub_82315470) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822473f8
	ctx.lr = 0x82315484;
	sub_822473F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823154b0
	if (!ctx.cr6.eq) goto loc_823154B0;
	// bl 0x822471d0
	ctx.lr = 0x82315490;
	sub_822471D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823154b4
	if (!ctx.cr6.gt) goto loc_823154B4;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823154B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823154B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823154C4"))) PPC_WEAK_FUNC(sub_823154C4);
PPC_FUNC_IMPL(__imp__sub_823154C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823154C8"))) PPC_WEAK_FUNC(sub_823154C8);
PPC_FUNC_IMPL(__imp__sub_823154C8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823154f0
	if (!ctx.cr6.eq) goto loc_823154F0;
	// li r3,258
	ctx.r3.s64 = 258;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823154F0:
	// bl 0x8224b550
	ctx.lr = 0x823154F4;
	sub_8224B550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82315504
	if (!ctx.cr6.gt) goto loc_82315504;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_82315504:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82315514"))) PPC_WEAK_FUNC(sub_82315514);
PPC_FUNC_IMPL(__imp__sub_82315514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82315518"))) PPC_WEAK_FUNC(sub_82315518);
PPC_FUNC_IMPL(__imp__sub_82315518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82315520;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82315578
	if (!ctx.cr6.eq) goto loc_82315578;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x823156e4
	if (!ctx.cr6.eq) goto loc_823156E4;
	// lwz r11,1504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823155b0
	if (!ctx.cr6.eq) goto loc_823155B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1504, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82315578:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823155a8
	if (!ctx.cr6.eq) goto loc_823155A8;
	// ld r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1568);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r10.u32);
	// std r9,1568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1568, ctx.r9.u64);
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
loc_823155A8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x823156e4
	if (!ctx.cr6.eq) goto loc_823156E4;
loc_823155B0:
	// ld r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1528);
	// ld r10,1512(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1512);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpldi cr6,r11,3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 3, ctx.xer);
	// bgt cr6,0x82315618
	if (ctx.cr6.gt) goto loc_82315618;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82315618
	if (ctx.cr6.gt) goto loc_82315618;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82315624
	if (ctx.cr6.eq) goto loc_82315624;
	// bdz 0x823155e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823155E8;
	// bdz 0x823155f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823155F8;
	// b 0x82315608
	goto loc_82315608;
loc_823155E8:
	// ld r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,1536(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1536, ctx.r11.u64);
	// b 0x82315624
	goto loc_82315624;
loc_823155F8:
	// ld r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1544);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,1544(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1544, ctx.r11.u64);
	// b 0x82315624
	goto loc_82315624;
loc_82315608:
	// ld r11,1552(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1552);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,1552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1552, ctx.r11.u64);
	// b 0x82315624
	goto loc_82315624;
loc_82315618:
	// ld r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1560);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,1560(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1560, ctx.r11.u64);
loc_82315624:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r11,-23448
	ctx.r6.s64 = ctx.r11.s64 + -23448;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316a98
	ctx.lr = 0x8231563C;
	sub_82316A98(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823413b0
	ctx.lr = 0x82315644;
	sub_823413B0(ctx, base);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x82315650;
	sub_823413B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x8231565C;
	sub_823413B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x82315668;
	sub_823413B0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fdivs f12,f31,f30
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,1584(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-17956(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17956);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f29,f13
	ctx.f10.f64 = double(float(ctx.f29.f64 / ctx.f13.f64));
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82315694
	if (!ctx.cr6.gt) goto loc_82315694;
	// stfs f0,1584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
loc_82315694:
	// lfs f13,1520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	ctx.f13.f64 = double(temp.f32);
	// ld r30,1528(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1528);
	// fadds f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f31,1520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1520, temp.u32);
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// bne cr6,0x823156c0
	if (!ctx.cr6.eq) goto loc_823156C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,1588(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// std r30,1512(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1512, ctx.r30.u64);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// b 0x82315718
	goto loc_82315718;
loc_823156C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823413b0
	ctx.lr = 0x823156C8;
	sub_823413B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// std r30,1512(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1512, ctx.r30.u64);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f13,1588(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// b 0x82315718
	goto loc_82315718;
loc_823156E4:
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82315718
	if (!ctx.cr6.eq) goto loc_82315718;
	// ld r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1576);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r5,r10,-23448
	ctx.r5.s64 = ctx.r10.s64 + -23448;
	// std r9,1576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1576, ctx.r9.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316a20
	ctx.lr = 0x82315710;
	sub_82316A20(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r8.u32);
loc_82315718:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82315728
	if (ctx.cr6.eq) goto loc_82315728;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
loc_82315728:
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

__attribute__((alias("__imp__sub_8231573C"))) PPC_WEAK_FUNC(sub_8231573C);
PPC_FUNC_IMPL(__imp__sub_8231573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82315740"))) PPC_WEAK_FUNC(sub_82315740);
PPC_FUNC_IMPL(__imp__sub_82315740) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r4,1476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1476, ctx.r4.u32);
	// stw r5,1480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1480, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82315754"))) PPC_WEAK_FUNC(sub_82315754);
PPC_FUNC_IMPL(__imp__sub_82315754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82315758"))) PPC_WEAK_FUNC(sub_82315758);
PPC_FUNC_IMPL(__imp__sub_82315758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82315760;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa38
	ctx.lr = 0x82315768;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r3,32(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x823413b0
	ctx.lr = 0x82315784;
	sub_823413B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ld r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// lfs f31,-17956(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17956);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x823413b0
	ctx.lr = 0x8231579C;
	sub_823413B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x823157A8;
	sub_823413B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x823157B4;
	sub_823413B0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fdivs f11,f30,f29
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f29.f64));
	// fdivs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x823157d4
	if (!ctx.cr6.gt) goto loc_823157D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823157D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8233fa84
	ctx.lr = 0x823157E0;
	__restfpr_28(ctx, base);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823157E4"))) PPC_WEAK_FUNC(sub_823157E4);
PPC_FUNC_IMPL(__imp__sub_823157E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823157E8"))) PPC_WEAK_FUNC(sub_823157E8);
PPC_FUNC_IMPL(__imp__sub_823157E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x823157F0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8233fa34
	ctx.lr = 0x823157F8;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,884(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 884);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231582c
	if (!ctx.cr6.eq) goto loc_8231582C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8233fa80
	ctx.lr = 0x82315828;
	__restfpr_27(ctx, base);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_8231582C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231583c
	if (!ctx.cr6.eq) goto loc_8231583C;
	// lfs f0,1648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82315840
	goto loc_82315840;
loc_8231583C:
	// lfs f0,1652(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	ctx.f0.f64 = double(temp.f32);
loc_82315840:
	// lfs f13,1660(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	ctx.f13.f64 = double(temp.f32);
	// ld r29,40(r4)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// lfs f12,1656(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	ctx.f12.f64 = double(temp.f32);
	// ld r3,32(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// fmuls f29,f13,f12
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// mulli r11,r29,600
	ctx.r11.s64 = ctx.r29.s64 * 600;
	// mulli r10,r28,600
	ctx.r10.s64 = ctx.r28.s64 * 600;
	// fadds f28,f29,f0
	ctx.f28.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// tdllei r11,0
	// divdu r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 / ctx.r11.u64;
	// tdllei r10,0
	// divdu r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 / ctx.r10.u64;
	// cmpldi cr6,r11,2
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 2, ctx.xer);
	// blt cr6,0x823158a8
	if (ctx.cr6.lt) goto loc_823158A8;
	// cmpldi cr6,r10,2
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 2, ctx.xer);
	// blt cr6,0x823158a8
	if (ctx.cr6.lt) goto loc_823158A8;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ble cr6,0x82315890
	if (!ctx.cr6.gt) goto loc_82315890;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82315890:
	// mulld r10,r11,r29
	ctx.r10.s64 = ctx.r11.s64 * ctx.r29.s64;
	// mulld r9,r11,r28
	ctx.r9.s64 = ctx.r11.s64 * ctx.r28.s64;
	// mulli r8,r10,600
	ctx.r8.s64 = ctx.r10.s64 * 600;
	// mulli r7,r9,600
	ctx.r7.s64 = ctx.r9.s64 * 600;
	// subf r3,r8,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r8.s64;
	// subf r30,r7,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r7.s64;
loc_823158A8:
	// bl 0x823413b0
	ctx.lr = 0x823158AC;
	sub_823413B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x823158B8;
	sub_823413B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f30,-17956(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17956);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x823413b0
	ctx.lr = 0x823158D4;
	sub_823413B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x823158E0;
	sub_823413B0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f27,f30
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fdivs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// beq cr6,0x8231596c
	if (ctx.cr6.eq) goto loc_8231596C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// beq cr6,0x8231592c
	if (ctx.cr6.eq) goto loc_8231592C;
	// lfs f0,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8231591c
	if (ctx.cr6.lt) goto loc_8231591C;
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// b 0x82315988
	goto loc_82315988;
loc_8231591C:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x82315998
	if (!ctx.cr6.gt) goto loc_82315998;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82315994
	goto loc_82315994;
loc_8231592C:
	// fadds f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// lfs f13,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82315958
	if (ctx.cr6.lt) goto loc_82315958;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8233fa80
	ctx.lr = 0x82315954;
	__restfpr_27(ctx, base);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82315958:
	// fneg f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82315998
	if (!ctx.cr6.gt) goto loc_82315998;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82315994
	goto loc_82315994;
loc_8231596C:
	// fsubs f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f13,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82315998
	if (ctx.cr6.lt) goto loc_82315998;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
loc_82315988:
	// li r27,1
	ctx.r27.s64 = 1;
	// bge cr6,0x82315998
	if (!ctx.cr6.lt) goto loc_82315998;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82315994:
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
loc_82315998:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8233fa80
	ctx.lr = 0x823159A8;
	__restfpr_27(ctx, base);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823159AC"))) PPC_WEAK_FUNC(sub_823159AC);
PPC_FUNC_IMPL(__imp__sub_823159AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823159B0"))) PPC_WEAK_FUNC(sub_823159B0);
PPC_FUNC_IMPL(__imp__sub_823159B0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8231aa80
	ctx.lr = 0x823159D4;
	sub_8231AA80(ctx, base);
	// ld r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1568);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// std r10,1568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1568, ctx.r10.u64);
	// stw r9,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_823159FC"))) PPC_WEAK_FUNC(sub_823159FC);
PPC_FUNC_IMPL(__imp__sub_823159FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82315A00"))) PPC_WEAK_FUNC(sub_82315A00);
PPC_FUNC_IMPL(__imp__sub_82315A00) {
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
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,-23448
	ctx.r6.s64 = ctx.r11.s64 + -23448;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82316a98
	ctx.lr = 0x82315A30;
	sub_82316A98(ctx, base);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82315a5c
	if (ctx.cr6.eq) goto loc_82315A5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,1480(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82315A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82315a78
	goto loc_82315A78;
loc_82315A5C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,1480(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82315758
	ctx.lr = 0x82315A78;
	sub_82315758(ctx, base);
loc_82315A78:
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

__attribute__((alias("__imp__sub_82315A90"))) PPC_WEAK_FUNC(sub_82315A90);
PPC_FUNC_IMPL(__imp__sub_82315A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82315A98;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82315b54
	if (ctx.cr6.eq) goto loc_82315B54;
	// lwz r11,1672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1672);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82315b54
	if (ctx.cr6.eq) goto loc_82315B54;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8231b588
	ctx.lr = 0x82315ACC;
	sub_8231B588(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x82315b54
	if (ctx.cr6.lt) goto loc_82315B54;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231c7a0
	ctx.lr = 0x82315AE0;
	sub_8231C7A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82315a00
	ctx.lr = 0x82315AF8;
	sub_82315A00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82315b10
	if (!ctx.cr6.eq) goto loc_82315B10;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82315b10
	if (!ctx.cr6.eq) goto loc_82315B10;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82315B10:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82315b30
	if (!ctx.cr6.eq) goto loc_82315B30;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82315518
	ctx.lr = 0x82315B30;
	sub_82315518(ctx, base);
loc_82315B30:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82315b48
	if (!ctx.cr6.eq) goto loc_82315B48;
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,152
	ctx.r5.s64 = 152;
	// bl 0x8233e4e0
	ctx.lr = 0x82315B48;
	sub_8233E4E0(ctx, base);
loc_82315B48:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82315B54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82315B60"))) PPC_WEAK_FUNC(sub_82315B60);
PPC_FUNC_IMPL(__imp__sub_82315B60) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82315a90
	sub_82315A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82315B6C"))) PPC_WEAK_FUNC(sub_82315B6C);
PPC_FUNC_IMPL(__imp__sub_82315B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82315B70"))) PPC_WEAK_FUNC(sub_82315B70);
PPC_FUNC_IMPL(__imp__sub_82315B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,1468(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1468);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 892, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 896, ctx.r11.u32);
	// stw r11,1672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1672, ctx.r11.u32);
	// stw r11,1436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1436, ctx.r11.u32);
	// stw r11,1144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1144, ctx.r11.u32);
	// beq cr6,0x82315ba0
	if (ctx.cr6.eq) goto loc_82315BA0;
	// stw r11,1440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1440, ctx.r11.u32);
	// b 0x82315bbc
	goto loc_82315BBC;
loc_82315BA0:
	// lwz r9,1124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82315bbc
	if (ctx.cr6.eq) goto loc_82315BBC;
	// lwz r9,1136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82315bbc
	if (ctx.cr6.eq) goto loc_82315BBC;
	// stw r10,1440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1440, ctx.r10.u32);
loc_82315BBC:
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// stw r11,912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 912, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 916, ctx.r11.u32);
	// std r11,984(r3)
	PPC_STORE_U64(ctx.r3.u32 + 984, ctx.r11.u64);
	// addi r9,r3,1520
	ctx.r9.s64 = ctx.r3.s64 + 1520;
	// std r11,1000(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1000, ctx.r11.u64);
	// std r11,1016(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1016, ctx.r11.u64);
	// lfs f0,-28948(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// std r10,992(r3)
	PPC_STORE_U64(ctx.r3.u32 + 992, ctx.r10.u64);
	// stfs f0,1520(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1520, temp.u32);
	// std r10,1008(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1008, ctx.r10.u64);
	// std r10,1024(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1024, ctx.r10.u64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r11,1504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1504, ctx.r11.u32);
	// std r11,1512(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1512, ctx.r11.u64);
loc_82315BFC:
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82315bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82315BFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82315C08"))) PPC_WEAK_FUNC(sub_82315C08);
PPC_FUNC_IMPL(__imp__sub_82315C08) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8231b588
	ctx.lr = 0x82315C2C;
	sub_8231B588(ctx, base);
	// lwz r10,1668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82315c50
	if (!ctx.cr6.eq) goto loc_82315C50;
	// li r3,7
	ctx.r3.s64 = 7;
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
loc_82315C50:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82315d44
	if (ctx.cr6.gt) goto loc_82315D44;
	// lis r12,-32207
	ctx.r12.s64 = -2110717952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23668
	ctx.r12.s64 = ctx.r12.s64 + 23668;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82315C9C;
	case 1:
		goto loc_82315CB4;
	case 2:
		goto loc_82315CCC;
	case 3:
		goto loc_82315CE4;
	case 4:
		goto loc_82315CFC;
	case 5:
		goto loc_82315CFC;
	case 6:
		goto loc_82315D14;
	case 7:
		goto loc_82315D2C;
	case 8:
		goto loc_82315D2C;
	case 9:
		goto loc_82315D2C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,23708(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23708);
	// lwz r17,23732(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23732);
	// lwz r17,23756(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23756);
	// lwz r17,23780(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23780);
	// lwz r17,23804(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23804);
	// lwz r17,23804(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23804);
	// lwz r17,23828(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23828);
	// lwz r17,23852(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23852);
	// lwz r17,23852(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23852);
	// lwz r17,23852(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 23852);
loc_82315C9C:
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
loc_82315CB4:
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_82315CCC:
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_82315CE4:
	// li r3,4
	ctx.r3.s64 = 4;
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
loc_82315CFC:
	// li r3,5
	ctx.r3.s64 = 5;
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
loc_82315D14:
	// li r3,6
	ctx.r3.s64 = 6;
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
loc_82315D2C:
	// lwz r3,888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
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
loc_82315D44:
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

__attribute__((alias("__imp__sub_82315D5C"))) PPC_WEAK_FUNC(sub_82315D5C);
PPC_FUNC_IMPL(__imp__sub_82315D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82315D60"))) PPC_WEAK_FUNC(sub_82315D60);
PPC_FUNC_IMPL(__imp__sub_82315D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82315D68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8231ad10
	ctx.lr = 0x82315D78;
	sub_8231AD10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,912(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231ace0
	ctx.lr = 0x82315D88;
	sub_8231ACE0(ctx, base);
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82315dc8
	if (ctx.cr6.eq) goto loc_82315DC8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231ad28
	ctx.lr = 0x82315DA0;
	sub_8231AD28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231acf8
	ctx.lr = 0x82315DB0;
	sub_8231ACF8(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82315dcc
	if (ctx.cr6.eq) goto loc_82315DCC;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82315dc8
	if (ctx.cr6.eq) goto loc_82315DC8;
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82315dcc
	if (ctx.cr6.gt) goto loc_82315DCC;
loc_82315DC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82315DCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82315DD4"))) PPC_WEAK_FUNC(sub_82315DD4);
PPC_FUNC_IMPL(__imp__sub_82315DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82315DD8"))) PPC_WEAK_FUNC(sub_82315DD8);
PPC_FUNC_IMPL(__imp__sub_82315DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82315DE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82315fd4
	if (ctx.cr6.eq) goto loc_82315FD4;
	// lwz r11,876(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82315fd4
	if (ctx.cr6.eq) goto loc_82315FD4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82315fd4
	if (ctx.cr6.eq) goto loc_82315FD4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8231b588
	ctx.lr = 0x82315E24;
	sub_8231B588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82315fd4
	if (ctx.cr6.eq) goto loc_82315FD4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82315fd4
	if (ctx.cr6.eq) goto loc_82315FD4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82315fd4
	if (ctx.cr6.eq) goto loc_82315FD4;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82315E4C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82315e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82315E4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82315eb0
	if (ctx.cr6.eq) goto loc_82315EB0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r8,916(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 916);
	// lwz r7,912(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 912);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_82315E74:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82315e9c
	if (ctx.cr6.eq) goto loc_82315E9C;
	// lwz r6,1444(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1444);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82315e9c
	if (ctx.cr6.lt) goto loc_82315E9C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82315e9c
	if (ctx.cr6.lt) goto loc_82315E9C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82315E9C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82315e74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82315E74;
loc_82315EB0:
	// lwz r11,1444(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1444);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8231ad10
	ctx.lr = 0x82315EC8;
	sub_8231AD10(ctx, base);
	// lwz r8,1452(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82315ee4
	if (ctx.cr6.eq) goto loc_82315EE4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8231ad28
	ctx.lr = 0x82315EE0;
	sub_8231AD28(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82315EE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82315d60
	ctx.lr = 0x82315EEC;
	sub_82315D60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82315fd4
	if (ctx.cr6.eq) goto loc_82315FD4;
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82315f00
	if (!ctx.cr6.gt) goto loc_82315F00;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82315F00:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82315f28
	if (!ctx.cr6.eq) goto loc_82315F28;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r4,912(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 912);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8231ac40
	ctx.lr = 0x82315F20;
	sub_8231AC40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82315f54
	goto loc_82315F54;
loc_82315F28:
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// li r30,8
	ctx.r30.s64 = 8;
loc_82315F30:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82315f48
	if (ctx.cr6.eq) goto loc_82315F48;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82315F48;
	sub_8233EAF0(ctx, base);
loc_82315F48:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82315f30
	if (!ctx.cr0.eq) goto loc_82315F30;
loc_82315F54:
	// lwz r11,1452(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82315fa8
	if (ctx.cr6.eq) goto loc_82315FA8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82315f8c
	if (!ctx.cr6.eq) goto loc_82315F8C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8231ac90
	ctx.lr = 0x82315F80;
	sub_8231AC90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82315F8C:
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82315F9C;
	sub_8233EAF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82315FA8:
	// lwz r11,912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 912);
	// lwz r10,916(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 916);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82315fc8
	if (ctx.cr6.eq) goto loc_82315FC8;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82315FC8;
	sub_8233EAF0(ctx, base);
loc_82315FC8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82315FD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82315FE0"))) PPC_WEAK_FUNC(sub_82315FE0);
PPC_FUNC_IMPL(__imp__sub_82315FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82315FE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823161c0
	if (ctx.cr6.eq) goto loc_823161C0;
	// lwz r11,876(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823161c0
	if (ctx.cr6.eq) goto loc_823161C0;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823161c0
	if (ctx.cr6.eq) goto loc_823161C0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8231b588
	ctx.lr = 0x8231602C;
	sub_8231B588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823161c0
	if (ctx.cr6.eq) goto loc_823161C0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823161c0
	if (ctx.cr6.eq) goto loc_823161C0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x823161c0
	if (ctx.cr6.eq) goto loc_823161C0;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82316054:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82316054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82316054;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823160b8
	if (ctx.cr6.eq) goto loc_823160B8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r8,916(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 916);
	// lwz r7,912(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 912);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_8231607C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823160a4
	if (ctx.cr6.eq) goto loc_823160A4;
	// lwz r6,1444(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1444);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823160a4
	if (ctx.cr6.lt) goto loc_823160A4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x823160a4
	if (ctx.cr6.lt) goto loc_823160A4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823160A4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8231607c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231607C;
loc_823160B8:
	// lwz r11,1444(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1444);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8231ad10
	ctx.lr = 0x823160D0;
	sub_8231AD10(ctx, base);
	// lwz r8,1452(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x823160ec
	if (ctx.cr6.eq) goto loc_823160EC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8231ad28
	ctx.lr = 0x823160E8;
	sub_8231AD28(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_823160EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82315d60
	ctx.lr = 0x823160F4;
	sub_82315D60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823161c0
	if (ctx.cr6.eq) goto loc_823161C0;
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82316108
	if (!ctx.cr6.gt) goto loc_82316108;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82316108:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82316130
	if (!ctx.cr6.eq) goto loc_82316130;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r4,912(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 912);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8231ac68
	ctx.lr = 0x82316128;
	sub_8231AC68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8231615c
	goto loc_8231615C;
loc_82316130:
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// li r30,8
	ctx.r30.s64 = 8;
loc_82316138:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82316150
	if (ctx.cr6.eq) goto loc_82316150;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82316150;
	sub_8233EAF0(ctx, base);
loc_82316150:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82316138
	if (!ctx.cr0.eq) goto loc_82316138;
loc_8231615C:
	// lwz r11,1452(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82316194
	if (ctx.cr6.eq) goto loc_82316194;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x823161a4
	if (!ctx.cr6.eq) goto loc_823161A4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8231acb8
	ctx.lr = 0x82316188;
	sub_8231ACB8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82316194:
	// lwz r11,912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 912);
	// lwz r10,916(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 916);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823161b4
	if (ctx.cr6.eq) goto loc_823161B4;
loc_823161A4:
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x823161B4;
	sub_8233EAF0(ctx, base);
loc_823161B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_823161C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823161CC"))) PPC_WEAK_FUNC(sub_823161CC);
PPC_FUNC_IMPL(__imp__sub_823161CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823161D0"))) PPC_WEAK_FUNC(sub_823161D0);
PPC_FUNC_IMPL(__imp__sub_823161D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,1552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231621c
	if (!ctx.cr6.eq) goto loc_8231621C;
loc_823161F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8231b368
	ctx.lr = 0x82316208;
	sub_8231B368(ctx, base);
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
loc_8231621C:
	// ld r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1488);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x8231623c
	if (!ctx.cr6.eq) goto loc_8231623C;
	// lwz r10,1484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823161f4
	if (!ctx.cr6.gt) goto loc_823161F4;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82316288
	if (ctx.cr6.eq) goto loc_82316288;
loc_8231623C:
	// lwz r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r10,1408(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1408);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8231625C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,1488(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1488);
	// lwz r4,1484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// std r9,944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 944, ctx.r9.u64);
	// bl 0x8231b368
	ctx.lr = 0x82316274;
	sub_8231B368(ctx, base);
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
loc_82316288:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,1484(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r11,1488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1488, ctx.r11.u64);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r5,3080(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3080);
	// lwz r4,3076(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3076);
	// bl 0x8231a7d0
	ctx.lr = 0x823162B8;
	sub_8231A7D0(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r11,1488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1488, ctx.r11.u64);
	// lwz r4,3088(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3088);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823162f8
	if (ctx.cr6.eq) goto loc_823162F8;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r5,3092(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3092);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,1484(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// bl 0x8231a7d0
	ctx.lr = 0x823162E4;
	sub_8231A7D0(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x823162f8
	if (!ctx.cr6.lt) goto loc_823162F8;
	// std r11,1488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1488, ctx.r11.u64);
loc_823162F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82316310
	if (ctx.cr6.gt) goto loc_82316310;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231633c
	if (!ctx.cr6.gt) goto loc_8231633C;
loc_82316310:
	// lwz r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r10,1408(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1408);
	// ld r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1488);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82316334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,1488(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1488);
	// std r9,944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 944, ctx.r9.u64);
loc_8231633C:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,1484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231b368
	ctx.lr = 0x8231634C;
	sub_8231B368(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231b378
	ctx.lr = 0x82316358;
	sub_8231B378(ctx, base);
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

__attribute__((alias("__imp__sub_8231636C"))) PPC_WEAK_FUNC(sub_8231636C);
PPC_FUNC_IMPL(__imp__sub_8231636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82316370"))) PPC_WEAK_FUNC(sub_82316370);
PPC_FUNC_IMPL(__imp__sub_82316370) {
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
	// lwz r11,880(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823163a4
	if (ctx.cr6.eq) goto loc_823163A4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823163A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823163A4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823163dc
	if (!ctx.cr6.gt) goto loc_823163DC;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823163dc
	if (ctx.cr6.eq) goto loc_823163DC;
	// lwz r11,876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823163dc
	if (ctx.cr6.eq) goto loc_823163DC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823163DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823163DC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82316414
	if (!ctx.cr6.gt) goto loc_82316414;
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82316414
	if (ctx.cr6.eq) goto loc_82316414;
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82316414
	if (ctx.cr6.eq) goto loc_82316414;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82316414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82316414:
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

__attribute__((alias("__imp__sub_82316428"))) PPC_WEAK_FUNC(sub_82316428);
PPC_FUNC_IMPL(__imp__sub_82316428) {
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
	// lwz r11,1664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1664);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823164bc
	if (ctx.cr6.eq) goto loc_823164BC;
	// lwz r3,880(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82316464
	if (ctx.cr6.eq) goto loc_82316464;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82316464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82316464:
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231648c
	if (ctx.cr6.eq) goto loc_8231648C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8231648c
	if (ctx.cr6.eq) goto loc_8231648C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8231648C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8231648C:
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823164b4
	if (ctx.cr6.eq) goto loc_823164B4;
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823164b4
	if (ctx.cr6.eq) goto loc_823164B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823164B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823164B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
loc_823164BC:
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

__attribute__((alias("__imp__sub_823164D0"))) PPC_WEAK_FUNC(sub_823164D0);
PPC_FUNC_IMPL(__imp__sub_823164D0) {
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
	// lwz r3,872(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231658c
	if (ctx.cr6.eq) goto loc_8231658C;
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231658c
	if (!ctx.cr6.eq) goto loc_8231658C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82316514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,968(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823165a8
	if (!ctx.cr6.eq) goto loc_823165A8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x823165a8
	if (!ctx.cr6.eq) goto loc_823165A8;
	// lwz r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8231653C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,976(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82316560
	if (ctx.cr6.eq) goto loc_82316560;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82316560
	if (ctx.cr6.eq) goto loc_82316560;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1632, ctx.r11.u8);
	// b 0x82316590
	goto loc_82316590;
loc_82316560:
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231658c
	if (ctx.cr6.eq) goto loc_8231658C;
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// stw r11,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82316588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r30.u32);
loc_8231658C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82316590:
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
loc_823165A8:
	// lwz r11,1140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82316590
	if (!ctx.cr6.eq) goto loc_82316590;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
	// b 0x82316590
	goto loc_82316590;
}

__attribute__((alias("__imp__sub_823165C4"))) PPC_WEAK_FUNC(sub_823165C4);
PPC_FUNC_IMPL(__imp__sub_823165C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823165C8"))) PPC_WEAK_FUNC(sub_823165C8);
PPC_FUNC_IMPL(__imp__sub_823165C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x823165D0;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,876(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 876);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82316610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82316638
	if (!ctx.cr6.eq) goto loc_82316638;
	// ld r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1016);
	// ld r10,1024(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1024);
	// std r11,928(r31)
	PPC_STORE_U64(ctx.r31.u32 + 928, ctx.r11.u64);
	// std r10,936(r31)
	PPC_STORE_U64(ctx.r31.u32 + 936, ctx.r10.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82316638:
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82316654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231b588
	ctx.lr = 0x8231665C;
	sub_8231B588(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82316674
	if (!ctx.cr6.eq) goto loc_82316674;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231ad10
	ctx.lr = 0x8231666C;
	sub_8231AD10(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82316684
	if (ctx.cr6.eq) goto loc_82316684;
loc_82316674:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231b588
	ctx.lr = 0x8231667C;
	sub_8231B588(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x823166fc
	if (!ctx.cr6.eq) goto loc_823166FC;
loc_82316684:
	// ld r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1016);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82316700
	if (!ctx.cr6.eq) goto loc_82316700;
	// lwz r11,880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82316700
	if (ctx.cr6.eq) goto loc_82316700;
	// ld r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1000);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x823166bc
	if (!ctx.cr6.eq) goto loc_823166BC;
	// ld r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 984);
	// ld r10,992(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 992);
	// std r11,1000(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1000, ctx.r11.u64);
	// std r10,1008(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1008, ctx.r10.u64);
loc_823166BC:
	// ld r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1000);
	// subf r3,r11,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r11.s64;
	// bl 0x823413b0
	ctx.lr = 0x823166C8;
	sub_823413B0(ctx, base);
	// ld r3,1008(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1008);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x823166D4;
	sub_823413B0(ctx, base);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x823166E0;
	sub_823413B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fdivs f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82316700
	goto loc_82316700;
loc_823166FC:
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82316700:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// std r10,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r10.u64);
	// std r11,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r11.u64);
	// std r30,1016(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1016, ctx.r30.u64);
	// std r11,1024(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1024, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82316728"))) PPC_WEAK_FUNC(sub_82316728);
PPC_FUNC_IMPL(__imp__sub_82316728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82316730;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r10,-23448
	ctx.r4.s64 = ctx.r10.s64 + -23448;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82315c08
	ctx.lr = 0x82316750;
	sub_82315C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82316760
	if (ctx.cr6.eq) goto loc_82316760;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82316764
	if (!ctx.cr6.eq) goto loc_82316764;
loc_82316760:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82316764:
	// addi r30,r31,1596
	ctx.r30.s64 = ctx.r31.s64 + 1596;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823383a8
	ctx.lr = 0x82316774;
	sub_823383A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823167b0
	if (ctx.cr6.eq) goto loc_823167B0;
	// lwz r3,1636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// bl 0x823382e0
	ctx.lr = 0x82316784;
	sub_823382E0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231679c
	if (ctx.cr6.eq) goto loc_8231679C;
	// bl 0x8231dbf8
	ctx.lr = 0x82316794;
	sub_8231DBF8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231b590
	ctx.lr = 0x8231679C;
	sub_8231B590(ctx, base);
loc_8231679C:
	// lwz r3,1636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// bl 0x82338340
	ctx.lr = 0x823167A4;
	sub_82338340(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823383a8
	ctx.lr = 0x823167B0;
	sub_823383A8(ctx, base);
loc_823167B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823167BC"))) PPC_WEAK_FUNC(sub_823167BC);
PPC_FUNC_IMPL(__imp__sub_823167BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823167C0"))) PPC_WEAK_FUNC(sub_823167C0);
PPC_FUNC_IMPL(__imp__sub_823167C0) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r10,1124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1124, ctx.r10.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r30,1136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1136, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r9,-9172
	ctx.r5.s64 = ctx.r9.s64 + -9172;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r3,1148
	ctx.r3.s64 = ctx.r3.s64 + 1148;
	// bl 0x8233cce8
	ctx.lr = 0x8231680C;
	sub_8233CCE8(ctx, base);
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82316828"))) PPC_WEAK_FUNC(sub_82316828);
PPC_FUNC_IMPL(__imp__sub_82316828) {
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
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-23448
	ctx.r4.s64 = ctx.r11.s64 + -23448;
	// bl 0x82315c08
	ctx.lr = 0x82316854;
	sub_82315C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231686c
	if (ctx.cr6.eq) goto loc_8231686C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316428
	ctx.lr = 0x82316864;
	sub_82316428(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231c4d8
	ctx.lr = 0x8231686C;
	sub_8231C4D8(ctx, base);
loc_8231686C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82315b70
	ctx.lr = 0x82316874;
	sub_82315B70(ctx, base);
	// stw r30,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82316890"))) PPC_WEAK_FUNC(sub_82316890);
PPC_FUNC_IMPL(__imp__sub_82316890) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r3,880(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r4,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r4.u32);
	// beq cr6,0x823168d4
	if (ctx.cr6.eq) goto loc_823168D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823168D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823168D4:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82316900
	if (ctx.cr6.eq) goto loc_82316900;
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82316900
	if (ctx.cr6.eq) goto loc_82316900;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82316900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82316900:
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82316920
	if (ctx.cr6.eq) goto loc_82316920;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82316920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82316920:
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

__attribute__((alias("__imp__sub_82316938"))) PPC_WEAK_FUNC(sub_82316938);
PPC_FUNC_IMPL(__imp__sub_82316938) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823169f4
	if (ctx.cr6.eq) goto loc_823169F4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8231697c
	if (ctx.cr6.eq) goto loc_8231697C;
	// lwz r11,880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823169e0
	if (!ctx.cr6.eq) goto loc_823169E0;
	// b 0x823169f4
	goto loc_823169F4;
loc_8231697C:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-23448
	ctx.r30.s64 = ctx.r11.s64 + -23448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82315c08
	ctx.lr = 0x82316990;
	sub_82315C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823169d0
	if (ctx.cr6.eq) goto loc_823169D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82315c08
	ctx.lr = 0x823169A4;
	sub_82315C08(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823169d0
	if (ctx.cr6.eq) goto loc_823169D0;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823169e0
	if (!ctx.cr6.gt) goto loc_823169E0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823169e0
	if (ctx.cr6.eq) goto loc_823169E0;
	// lwz r11,876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823169e0
	if (ctx.cr6.eq) goto loc_823169E0;
loc_823169D0:
	// lwz r11,876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823169f4
	if (!ctx.cr6.eq) goto loc_823169F4;
loc_823169E0:
	// lwz r10,880(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// li r11,1
	ctx.r11.s64 = 1;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_823169F4:
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

__attribute__((alias("__imp__sub_82316A0C"))) PPC_WEAK_FUNC(sub_82316A0C);
PPC_FUNC_IMPL(__imp__sub_82316A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82316A10"))) PPC_WEAK_FUNC(sub_82316A10);
PPC_FUNC_IMPL(__imp__sub_82316A10) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r4,904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 904, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82316A20"))) PPC_WEAK_FUNC(sub_82316A20);
PPC_FUNC_IMPL(__imp__sub_82316A20) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,3116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3116);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,3120(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3120);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r5,3124(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3124);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82316A50"))) PPC_WEAK_FUNC(sub_82316A50);
PPC_FUNC_IMPL(__imp__sub_82316A50) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r4,1044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1044, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82316A60"))) PPC_WEAK_FUNC(sub_82316A60);
PPC_FUNC_IMPL(__imp__sub_82316A60) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,876(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 876);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 908, ctx.r4.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82319b00
	sub_82319B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82316A80"))) PPC_WEAK_FUNC(sub_82316A80);
PPC_FUNC_IMPL(__imp__sub_82316A80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82316A84"))) PPC_WEAK_FUNC(sub_82316A84);
PPC_FUNC_IMPL(__imp__sub_82316A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82316A88"))) PPC_WEAK_FUNC(sub_82316A88);
PPC_FUNC_IMPL(__imp__sub_82316A88) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r4,920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 920, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82316A98"))) PPC_WEAK_FUNC(sub_82316A98);
PPC_FUNC_IMPL(__imp__sub_82316A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82316AA0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r9,928(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 928);
	// addi r29,r11,-23448
	ctx.r29.s64 = ctx.r11.s64 + -23448;
	// std r9,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r8,936(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 936);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r8,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82315c08
	ctx.lr = 0x82316ADC;
	sub_82315C08(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82316b70
	if (!ctx.cr6.eq) goto loc_82316B70;
	// lwz r11,1484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82316b70
	if (!ctx.cr6.gt) goto loc_82316B70;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-17956(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17956);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f31,f11,f8
	ctx.f31.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// bl 0x82316938
	ctx.lr = 0x82316B34;
	sub_82316938(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82316b48
	if (!ctx.cr6.eq) goto loc_82316B48;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-9156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9156);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_82316B48:
	// ld r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x823413b0
	ctx.lr = 0x82316B50;
	sub_823413B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_82316B70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82316B7C"))) PPC_WEAK_FUNC(sub_82316B7C);
PPC_FUNC_IMPL(__imp__sub_82316B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82316B80"))) PPC_WEAK_FUNC(sub_82316B80);
PPC_FUNC_IMPL(__imp__sub_82316B80) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8231b588
	ctx.lr = 0x82316BAC;
	sub_8231B588(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x82316c30
	if (ctx.cr6.lt) goto loc_82316C30;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// beq cr6,0x82316c30
	if (ctx.cr6.eq) goto loc_82316C30;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,3164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82316c30
	if (ctx.cr6.eq) goto loc_82316C30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823196c8
	ctx.lr = 0x82316BD4;
	sub_823196C8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f0,1032(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-28948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82316bf0
	if (!ctx.cr6.gt) goto loc_82316BF0;
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// b 0x82316c0c
	goto loc_82316C0C;
loc_82316BF0:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r10,-23440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23440);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_82316C0C:
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r10,876(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82316c28
	if (!ctx.cr6.eq) goto loc_82316C28;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
loc_82316C28:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82316c34
	goto loc_82316C34;
loc_82316C30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82316C34:
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

__attribute__((alias("__imp__sub_82316C4C"))) PPC_WEAK_FUNC(sub_82316C4C);
PPC_FUNC_IMPL(__imp__sub_82316C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82316C50"))) PPC_WEAK_FUNC(sub_82316C50);
PPC_FUNC_IMPL(__imp__sub_82316C50) {
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
	// lwz r11,920(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 920);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82316ccc
	if (ctx.cr6.eq) goto loc_82316CCC;
	// lwz r11,1136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82316ccc
	if (!ctx.cr6.eq) goto loc_82316CCC;
	// ld r11,952(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 952);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x82316ccc
	if (ctx.cr6.eq) goto loc_82316CCC;
	// ld r10,944(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 944);
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x82316ccc
	if (ctx.cr6.lt) goto loc_82316CCC;
	// lwz r3,872(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82316ccc
	if (ctx.cr6.eq) goto loc_82316CCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,1408(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1408);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82316CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// std r9,944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 944, ctx.r9.u64);
	// stw r8,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r8.u32);
loc_82316CCC:
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

__attribute__((alias("__imp__sub_82316CE0"))) PPC_WEAK_FUNC(sub_82316CE0);
PPC_FUNC_IMPL(__imp__sub_82316CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82316d38
	if (ctx.cr6.lt) goto loc_82316D38;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x82316d38
	if (!ctx.cr6.lt) goto loc_82316D38;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82316d38
	if (ctx.cr6.eq) goto loc_82316D38;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82316d38
	if (!ctx.cr6.eq) goto loc_82316D38;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,1444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1444);
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r6,88(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// subfc r11,r7,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subfze r3,r9
	temp.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r3.u64 = temp.u64;
	// blr 
	return;
loc_82316D38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82316D40"))) PPC_WEAK_FUNC(sub_82316D40);
PPC_FUNC_IMPL(__imp__sub_82316D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82316d88
	if (ctx.cr6.eq) goto loc_82316D88;
	// lwz r11,1460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82316d88
	if (ctx.cr6.lt) goto loc_82316D88;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x82316d88
	if (!ctx.cr6.lt) goto loc_82316D88;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82316d88
	if (ctx.cr6.eq) goto loc_82316D88;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82316D88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82316D90"))) PPC_WEAK_FUNC(sub_82316D90);
PPC_FUNC_IMPL(__imp__sub_82316D90) {
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
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r5,1448(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// bl 0x82319a68
	ctx.lr = 0x82316DB4;
	sub_82319A68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82316dc4
	if (!ctx.cr6.eq) goto loc_82316DC4;
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
loc_82316DC4:
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

__attribute__((alias("__imp__sub_82316DD8"))) PPC_WEAK_FUNC(sub_82316DD8);
PPC_FUNC_IMPL(__imp__sub_82316DD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r4,1460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1460, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82316DE8"))) PPC_WEAK_FUNC(sub_82316DE8);
PPC_FUNC_IMPL(__imp__sub_82316DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82316DF0;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa38
	ctx.lr = 0x82316DF8;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,3108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823172d0
	if (ctx.cr6.eq) goto loc_823172D0;
	// lwz r11,3112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823172d0
	if (ctx.cr6.eq) goto loc_823172D0;
	// lwz r11,1496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823172d0
	if (ctx.cr6.eq) goto loc_823172D0;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r31,r11,-23448
	ctx.r31.s64 = ctx.r11.s64 + -23448;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82315c08
	ctx.lr = 0x82316E38;
	sub_82315C08(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x823172d0
	if (!ctx.cr6.eq) goto loc_823172D0;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r24,r11,3108
	ctx.r24.s64 = ctx.r11.s64 + 3108;
	// bl 0x82316a98
	ctx.lr = 0x82316E5C;
	sub_82316A98(ctx, base);
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// beq cr6,0x823172d0
	if (ctx.cr6.eq) goto loc_823172D0;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x823413b0
	ctx.lr = 0x82316E70;
	sub_823413B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x82316E7C;
	sub_823413B0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,68(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f30,-17956(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17956);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// beq cr6,0x823172d0
	if (ctx.cr6.eq) goto loc_823172D0;
	// lwz r10,1484(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1484);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r8,920(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 920);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fmuls f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fdivs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fmuls f29,f8,f30
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// bne cr6,0x8231722c
	if (!ctx.cr6.eq) goto loc_8231722C;
	// lwz r9,72(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,-1644(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1644);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fdivs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fmuls f0,f9,f30
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823172d0
	if (ctx.cr6.lt) goto loc_823172D0;
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82316f2c
	if (ctx.cr6.eq) goto loc_82316F2C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82316F2C:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823170e4
	if (!ctx.cr6.lt) goto loc_823170E4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x82317078
	if (ctx.cr6.lt) goto loc_82317078;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82316F4C:
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x823170e4
	if (ctx.cr6.lt) goto loc_823170E4;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x823170b0
	if (ctx.cr6.lt) goto loc_823170B0;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x823170b8
	if (ctx.cr6.lt) goto loc_823170B8;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x823170c0
	if (ctx.cr6.lt) goto loc_823170C0;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x823170c8
	if (ctx.cr6.lt) goto loc_823170C8;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x823170d0
	if (ctx.cr6.lt) goto loc_823170D0;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x823170d8
	if (ctx.cr6.lt) goto loc_823170D8;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x823170e0
	if (ctx.cr6.lt) goto loc_823170E0;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r9,r10,-7
	ctx.r9.s64 = ctx.r10.s64 + -7;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82316f4c
	if (ctx.cr6.lt) goto loc_82316F4C;
loc_82317078:
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823170e8
	if (!ctx.cr6.lt) goto loc_823170E8;
loc_82317080:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f13,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x823170e4
	if (ctx.cr6.lt) goto loc_823170E4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82317080
	if (ctx.cr6.lt) goto loc_82317080;
	// b 0x823170e4
	goto loc_823170E4;
loc_823170B0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x823170e4
	goto loc_823170E4;
loc_823170B8:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// b 0x823170e4
	goto loc_823170E4;
loc_823170C0:
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// b 0x823170e4
	goto loc_823170E4;
loc_823170C8:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x823170e4
	goto loc_823170E4;
loc_823170D0:
	// addi r28,r28,5
	ctx.r28.s64 = ctx.r28.s64 + 5;
	// b 0x823170e4
	goto loc_823170E4;
loc_823170D8:
	// addi r28,r28,6
	ctx.r28.s64 = ctx.r28.s64 + 6;
	// b 0x823170e4
	goto loc_823170E4;
loc_823170E0:
	// addi r28,r28,7
	ctx.r28.s64 = ctx.r28.s64 + 7;
loc_823170E4:
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
loc_823170E8:
	// beq cr6,0x823172d0
	if (ctx.cr6.eq) goto loc_823172D0;
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfd f13,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f31,f11,f0,f31
	ctx.f31.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// beq cr6,0x8231716c
	if (ctx.cr6.eq) goto loc_8231716C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82317118:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82317158
	if (!ctx.cr6.lt) goto loc_82317158;
	// lwz r11,1496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317158
	if (ctx.cr6.eq) goto loc_82317158;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,1500(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1500);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231714C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82317158:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82317118
	if (ctx.cr6.lt) goto loc_82317118;
loc_8231716C:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823172d0
	if (ctx.cr6.eq) goto loc_823172D0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8231717C:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ld r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x823172d0
	if (ctx.cr6.eq) goto loc_823172D0;
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82317208
	if (ctx.cr6.gt) goto loc_82317208;
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x823413b0
	ctx.lr = 0x823171A4;
	sub_823413B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x823171B0;
	sub_823413B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f28,f30
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bne cr6,0x823171d4
	if (!ctx.cr6.eq) goto loc_823171D4;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x823171d4
	if (!ctx.cr6.lt) goto loc_823171D4;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// b 0x82317204
	goto loc_82317204;
loc_823171D4:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x823172d0
	if (ctx.cr6.lt) goto loc_823172D0;
	// lwz r11,1496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317208
	if (ctx.cr6.eq) goto loc_82317208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,1500(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1500);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823171FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82317204:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82317208:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231717c
	if (ctx.cr6.lt) goto loc_8231717C;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa84
	ctx.lr = 0x82317228;
	__restfpr_28(ctx, base);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_8231722C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823172d0
	if (!ctx.cr6.gt) goto loc_823172D0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82317240:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// ld r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x823172d0
	if (ctx.cr6.eq) goto loc_823172D0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823172bc
	if (!ctx.cr6.eq) goto loc_823172BC;
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x823413b0
	ctx.lr = 0x82317268;
	sub_823413B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// bl 0x823413b0
	ctx.lr = 0x82317274;
	sub_823413B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f28,f30
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x823172bc
	if (ctx.cr6.lt) goto loc_823172BC;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x823172d0
	if (ctx.cr6.lt) goto loc_823172D0;
	// lwz r11,1496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823172bc
	if (ctx.cr6.eq) goto loc_823172BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,1500(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1500);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823172B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_823172BC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82317240
	if (ctx.cr6.lt) goto loc_82317240;
loc_823172D0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8233fa84
	ctx.lr = 0x823172DC;
	__restfpr_28(ctx, base);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823172E0"))) PPC_WEAK_FUNC(sub_823172E0);
PPC_FUNC_IMPL(__imp__sub_823172E0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231739c
	if (ctx.cr6.eq) goto loc_8231739C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82317314
	if (ctx.cr6.eq) goto loc_82317314;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82317314:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82317328
	if (ctx.cr6.eq) goto loc_82317328;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82317328:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231733c
	if (ctx.cr6.eq) goto loc_8231733C;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8231733C:
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82317350
	if (ctx.cr6.eq) goto loc_82317350;
	// ori r5,r5,8
	ctx.r5.u64 = ctx.r5.u64 | 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82317350:
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82317364
	if (ctx.cr6.eq) goto loc_82317364;
	// ori r5,r5,16
	ctx.r5.u64 = ctx.r5.u64 | 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82317364:
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82317378
	if (ctx.cr6.eq) goto loc_82317378;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82317378:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x8231b380
	ctx.lr = 0x8231739C;
	sub_8231B380(ctx, base);
loc_8231739C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823173AC"))) PPC_WEAK_FUNC(sub_823173AC);
PPC_FUNC_IMPL(__imp__sub_823173AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823173B0"))) PPC_WEAK_FUNC(sub_823173B0);
PPC_FUNC_IMPL(__imp__sub_823173B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823173B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_823173C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823173c8
	if (!ctx.cr6.eq) goto loc_823173C8;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r31,r10,-23704
	ctx.r31.s64 = ctx.r10.s64 + -23704;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8233eaf0
	ctx.lr = 0x823173FC;
	sub_8233EAF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8233e318
	ctx.lr = 0x8231740C;
	sub_8233E318(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82317428
	if (ctx.cr6.eq) goto loc_82317428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r6,r28,255
	ctx.xer.ca = ctx.r28.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r28.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x82341dc0
	ctx.lr = 0x82317428;
	sub_82341DC0(ctx, base);
loc_82317428:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317430"))) PPC_WEAK_FUNC(sub_82317430);
PPC_FUNC_IMPL(__imp__sub_82317430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82317438;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 888, ctx.r30.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r11,884(r3)
	PPC_STORE_U32(ctx.r3.u32 + 884, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1148
	ctx.r3.s64 = ctx.r3.s64 + 1148;
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// stw r30,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r30.u32);
	// stw r30,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r30.u32);
	// std r30,928(r31)
	PPC_STORE_U64(ctx.r31.u32 + 928, ctx.r30.u64);
	// std r11,936(r31)
	PPC_STORE_U64(ctx.r31.u32 + 936, ctx.r11.u64);
	// std r30,944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 944, ctx.r30.u64);
	// std r29,952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 952, ctx.r29.u64);
	// stw r30,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r30.u32);
	// stw r30,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r30.u32);
	// stw r30,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r30.u32);
	// stw r30,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r30.u32);
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x8231749C;
	sub_8233EAF0(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// std r30,1408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1408, ctx.r30.u64);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// std r29,1416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1416, ctx.r29.u64);
	// addi r28,r11,-23448
	ctx.r28.s64 = ctx.r11.s64 + -23448;
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r30,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// li r8,100
	ctx.r8.s64 = 100;
	// stw r29,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r29.u32);
	// stw r9,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lfs f0,-28948(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r29.u32);
	// stfs f0,1032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// stw r29,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r29.u32);
	// stw r29,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r29.u32);
	// stw r30,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r30.u32);
	// stw r30,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r30.u32);
	// stw r30,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r30.u32);
	// stw r29,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r29.u32);
	// stw r29,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r29.u32);
	// stw r8,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r8.u32);
	// stw r30,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r30.u32);
	// std r30,1488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1488, ctx.r30.u64);
	// stw r30,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r30.u32);
	// stw r30,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r30.u32);
	// stw r30,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// stw r30,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r30.u32);
	// stw r30,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// stw r30,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// stw r30,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r30.u32);
	// stw r30,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r30.u32);
	// stb r30,1632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1632, ctx.r30.u8);
	// beq cr6,0x8231755c
	if (ctx.cr6.eq) goto loc_8231755C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-1616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3128, temp.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,3132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3132, ctx.r29.u32);
	// lwz r4,908(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82319b00
	ctx.lr = 0x8231755C;
	sub_82319B00(ctx, base);
loc_8231755C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82315b70
	ctx.lr = 0x82317564;
	sub_82315B70(ctx, base);
	// stw r30,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r30.u32);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,22504
	ctx.r4.s64 = ctx.r11.s64 + 22504;
	// bl 0x82315740
	ctx.lr = 0x8231757C;
	sub_82315740(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f0,5256(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-9176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9176);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1648, temp.u32);
	// stfs f13,1652(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1652, temp.u32);
	// stfs f0,1656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1656, temp.u32);
	// stfs f0,1660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1660, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823175A4"))) PPC_WEAK_FUNC(sub_823175A4);
PPC_FUNC_IMPL(__imp__sub_823175A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823175A8"))) PPC_WEAK_FUNC(sub_823175A8);
PPC_FUNC_IMPL(__imp__sub_823175A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823175B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,1596
	ctx.r30.s64 = ctx.r3.s64 + 1596;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823383a8
	ctx.lr = 0x823175D0;
	sub_823383A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823175f8
	if (!ctx.cr6.eq) goto loc_823175F8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-9144
	ctx.r4.s64 = ctx.r11.s64 + -9144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x823175F4;
	sub_82336FB8(ctx, base);
	// b 0x82317604
	goto loc_82317604;
loc_823175F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823383a8
	ctx.lr = 0x82317604;
	sub_823383A8(ctx, base);
loc_82317604:
	// lwz r3,1132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317624
	if (ctx.cr6.eq) goto loc_82317624;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82317620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r29.u32);
loc_82317624:
	// lwz r3,1636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317634
	if (ctx.cr6.eq) goto loc_82317634;
	// bl 0x823382e0
	ctx.lr = 0x82317634;
	sub_823382E0(ctx, base);
loc_82317634:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x8231caf0
	ctx.lr = 0x82317640;
	sub_8231CAF0(ctx, base);
	// lwz r3,1624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317654
	if (ctx.cr6.eq) goto loc_82317654;
	// bl 0x82337e18
	ctx.lr = 0x82317650;
	sub_82337E18(ctx, base);
	// stw r29,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r29.u32);
loc_82317654:
	// lwz r3,1636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317664
	if (ctx.cr6.eq) goto loc_82317664;
	// bl 0x82338340
	ctx.lr = 0x82317664;
	sub_82338340(ctx, base);
loc_82317664:
	// lwz r3,1636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317678
	if (ctx.cr6.eq) goto loc_82317678;
	// stw r29,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r29.u32);
	// bl 0x82338268
	ctx.lr = 0x82317678;
	sub_82338268(ctx, base);
loc_82317678:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,1640(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317698
	if (ctx.cr6.eq) goto loc_82317698;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82317698
	if (ctx.cr6.eq) goto loc_82317698;
	// stw r29,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r29.u32);
	// bl 0x82337d50
	ctx.lr = 0x82317698;
	sub_82337D50(ctx, base);
loc_82317698:
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lwz r11,-23440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23440);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-23440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23440, ctx.r11.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823176cc
	if (ctx.cr6.eq) goto loc_823176CC;
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
	ctx.lr = 0x823176CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823176CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823176D4"))) PPC_WEAK_FUNC(sub_823176D4);
PPC_FUNC_IMPL(__imp__sub_823176D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823176D8"))) PPC_WEAK_FUNC(sub_823176D8);
PPC_FUNC_IMPL(__imp__sub_823176D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x823176E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317720
	if (ctx.cr6.eq) goto loc_82317720;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8231772c
	if (!ctx.cr6.eq) goto loc_8231772C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1668, ctx.r11.u32);
	// bl 0x82316428
	ctx.lr = 0x82317710;
	sub_82316428(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-9048
	ctx.r4.s64 = ctx.r10.s64 + -9048;
	// bl 0x82337048
	ctx.lr = 0x82317720;
	sub_82337048(ctx, base);
loc_82317720:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8231772C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82317758
	if (ctx.cr6.eq) goto loc_82317758;
	// rlwinm r29,r26,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82317740:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82317750;
	sub_8233EAF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82317740
	if (!ctx.cr0.eq) goto loc_82317740;
loc_82317758:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82315fe0
	ctx.lr = 0x8231776C;
	sub_82315FE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317774"))) PPC_WEAK_FUNC(sub_82317774);
PPC_FUNC_IMPL(__imp__sub_82317774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317778"))) PPC_WEAK_FUNC(sub_82317778);
PPC_FUNC_IMPL(__imp__sub_82317778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82317780;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823177c0
	if (ctx.cr6.eq) goto loc_823177C0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823177cc
	if (!ctx.cr6.eq) goto loc_823177CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1668, ctx.r11.u32);
	// bl 0x82316428
	ctx.lr = 0x823177B0;
	sub_82316428(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-8976
	ctx.r4.s64 = ctx.r10.s64 + -8976;
	// bl 0x82337048
	ctx.lr = 0x823177C0;
	sub_82337048(ctx, base);
loc_823177C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_823177CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823177f8
	if (ctx.cr6.eq) goto loc_823177F8;
	// rlwinm r29,r26,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_823177E0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x823177F0;
	sub_8233EAF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x823177e0
	if (!ctx.cr0.eq) goto loc_823177E0;
loc_823177F8:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82315dd8
	ctx.lr = 0x8231780C;
	sub_82315DD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317814"))) PPC_WEAK_FUNC(sub_82317814);
PPC_FUNC_IMPL(__imp__sub_82317814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317818"))) PPC_WEAK_FUNC(sub_82317818);
PPC_FUNC_IMPL(__imp__sub_82317818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82317820;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317914
	if (ctx.cr6.eq) goto loc_82317914;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82317868
	if (ctx.cr6.eq) goto loc_82317868;
	// rlwinm r29,r6,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r5,-4
	ctx.r30.s64 = ctx.r5.s64 + -4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82317850:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82317860;
	sub_8233EAF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82317850
	if (!ctx.cr0.eq) goto loc_82317850;
loc_82317868:
	// lwz r11,1456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1456);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317914
	if (ctx.cr6.eq) goto loc_82317914;
	// lwz r11,1464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1464);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82317914
	if (ctx.cr6.eq) goto loc_82317914;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x8231b588
	ctx.lr = 0x8231788C;
	sub_8231B588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82317914
	if (ctx.cr6.eq) goto loc_82317914;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82317914
	if (ctx.cr6.eq) goto loc_82317914;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82317914
	if (ctx.cr6.eq) goto loc_82317914;
	// lwz r11,1464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1464);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r31,108(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82317914
	if (ctx.cr6.eq) goto loc_82317914;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823178d4
	if (ctx.cr6.eq) goto loc_823178D4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233e968
	ctx.lr = 0x823178D4;
	sub_8233E968(ctx, base);
loc_823178D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x8231acf8
	ctx.lr = 0x823178E0;
	sub_8231ACF8(ctx, base);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x823178ec
	if (!ctx.cr6.gt) goto loc_823178EC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823178EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82317914
	if (ctx.cr6.eq) goto loc_82317914;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8231acb8
	ctx.lr = 0x8231790C;
	sub_8231ACB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82317918
	if (!ctx.cr6.eq) goto loc_82317918;
loc_82317914:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82317918:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317920"))) PPC_WEAK_FUNC(sub_82317920);
PPC_FUNC_IMPL(__imp__sub_82317920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82317928;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317a1c
	if (ctx.cr6.eq) goto loc_82317A1C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82317970
	if (ctx.cr6.eq) goto loc_82317970;
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r5,-4
	ctx.r30.s64 = ctx.r5.s64 + -4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82317958:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82317968;
	sub_8233EAF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82317958
	if (!ctx.cr0.eq) goto loc_82317958;
loc_82317970:
	// lwz r11,876(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 876);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317a1c
	if (ctx.cr6.eq) goto loc_82317A1C;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82317a1c
	if (ctx.cr6.eq) goto loc_82317A1C;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x8231b588
	ctx.lr = 0x82317994;
	sub_8231B588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82317a1c
	if (ctx.cr6.eq) goto loc_82317A1C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82317a1c
	if (ctx.cr6.eq) goto loc_82317A1C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82317a1c
	if (ctx.cr6.eq) goto loc_82317A1C;
	// lwz r11,1464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1464);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r31,108(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82317a1c
	if (ctx.cr6.eq) goto loc_82317A1C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823179dc
	if (ctx.cr6.eq) goto loc_823179DC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8233e968
	ctx.lr = 0x823179DC;
	sub_8233E968(ctx, base);
loc_823179DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x8231acf8
	ctx.lr = 0x823179E8;
	sub_8231ACF8(ctx, base);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x823179f4
	if (!ctx.cr6.gt) goto loc_823179F4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823179F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82317a1c
	if (ctx.cr6.eq) goto loc_82317A1C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8231ac90
	ctx.lr = 0x82317A14;
	sub_8231AC90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82317a20
	if (!ctx.cr6.eq) goto loc_82317A20;
loc_82317A1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82317A20:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317A28"))) PPC_WEAK_FUNC(sub_82317A28);
PPC_FUNC_IMPL(__imp__sub_82317A28) {
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
	// lwz r3,876(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317acc
	if (ctx.cr6.eq) goto loc_82317ACC;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82317acc
	if (ctx.cr6.eq) goto loc_82317ACC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82317A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82317a94
	if (ctx.cr6.eq) goto loc_82317A94;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82317a94
	if (ctx.cr6.eq) goto loc_82317A94;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1632, ctx.r11.u8);
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
loc_82317A94:
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82317AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82317ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82317ACC:
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317b5c
	if (ctx.cr6.eq) goto loc_82317B5C;
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82317b5c
	if (ctx.cr6.eq) goto loc_82317B5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82317AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82317b24
	if (ctx.cr6.eq) goto loc_82317B24;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82317b24
	if (ctx.cr6.eq) goto loc_82317B24;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1632, ctx.r11.u8);
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
loc_82317B24:
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82317B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82317B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82317B5C:
	// lwz r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317bd0
	if (ctx.cr6.eq) goto loc_82317BD0;
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82317bd0
	if (!ctx.cr6.eq) goto loc_82317BD0;
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82317b8c
	if (ctx.cr6.eq) goto loc_82317B8C;
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82317bd0
	if (!ctx.cr6.eq) goto loc_82317BD0;
loc_82317B8C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82317B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82317be8
	if (!ctx.cr6.eq) goto loc_82317BE8;
	// lwz r10,1664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// std r11,944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 944, ctx.r11.u64);
	// std r9,952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 952, ctx.r9.u64);
	// beq cr6,0x82317bcc
	if (ctx.cr6.eq) goto loc_82317BCC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82317BCC:
	// stw r11,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
loc_82317BD0:
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
loc_82317BE8:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82317c28
	if (!ctx.cr6.eq) goto loc_82317C28;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// std r11,944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 944, ctx.r11.u64);
	// addi r4,r9,-8908
	ctx.r4.s64 = ctx.r9.s64 + -8908;
	// std r10,952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 952, ctx.r10.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x82317C24;
	sub_82336FB8(ctx, base);
	// b 0x82317bd0
	goto loc_82317BD0;
loc_82317C28:
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r11,1632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1632, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82317C44"))) PPC_WEAK_FUNC(sub_82317C44);
PPC_FUNC_IMPL(__imp__sub_82317C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317C48"))) PPC_WEAK_FUNC(sub_82317C48);
PPC_FUNC_IMPL(__imp__sub_82317C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82317C50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r29,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r4,1120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82317c84
	if (ctx.cr6.eq) goto loc_82317C84;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82317c80
	if (!ctx.cr6.eq) goto loc_82317C80;
	// bl 0x82337d50
	ctx.lr = 0x82317C80;
	sub_82337D50(ctx, base);
loc_82317C80:
	// stw r28,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r28.u32);
loc_82317C84:
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317ca0
	if (ctx.cr6.eq) goto loc_82317CA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82317CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82317CA0:
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317cbc
	if (ctx.cr6.eq) goto loc_82317CBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82317CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82317CBC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82319ab8
	ctx.lr = 0x82317CC4;
	sub_82319AB8(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// bl 0x82319ab8
	ctx.lr = 0x82317CD4;
	sub_82319AB8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r30.u32);
	// bne cr6,0x82317cf4
	if (!ctx.cr6.eq) goto loc_82317CF4;
	// lwz r3,1628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317cf4
	if (ctx.cr6.eq) goto loc_82317CF4;
	// bl 0x82337e18
	ctx.lr = 0x82317CF0;
	sub_82337E18(ctx, base);
	// stw r28,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r28.u32);
loc_82317CF4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231b4b8
	ctx.lr = 0x82317CFC;
	sub_8231B4B8(ctx, base);
	// stw r28,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r28.u32);
	// stw r28,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317D0C"))) PPC_WEAK_FUNC(sub_82317D0C);
PPC_FUNC_IMPL(__imp__sub_82317D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317D10"))) PPC_WEAK_FUNC(sub_82317D10);
PPC_FUNC_IMPL(__imp__sub_82317D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82317D18;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1672);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// bne cr6,0x82317d5c
	if (!ctx.cr6.eq) goto loc_82317D5C;
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82317d5c
	if (!ctx.cr6.eq) goto loc_82317D5C;
	// bl 0x82316370
	ctx.lr = 0x82317D58;
	sub_82316370(ctx, base);
	// stw r29,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r29.u32);
loc_82317D5C:
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-23448
	ctx.r30.s64 = ctx.r11.s64 + -23448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82315c08
	ctx.lr = 0x82317D70;
	sub_82315C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82317e24
	if (ctx.cr6.eq) goto loc_82317E24;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82317e24
	if (ctx.cr6.eq) goto loc_82317E24;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82317e24
	if (ctx.cr6.eq) goto loc_82317E24;
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82317e24
	if (ctx.cr6.eq) goto loc_82317E24;
	// lwz r3,880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317db8
	if (ctx.cr6.eq) goto loc_82317DB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82317DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82317DB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316938
	ctx.lr = 0x82317DC4;
	sub_82316938(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82317e04
	if (ctx.cr6.eq) goto loc_82317E04;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82317de0
	if (ctx.cr6.eq) goto loc_82317DE0;
	// std r29,928(r31)
	PPC_STORE_U64(ctx.r31.u32 + 928, ctx.r29.u64);
	// std r28,936(r31)
	PPC_STORE_U64(ctx.r31.u32 + 936, ctx.r28.u64);
	// b 0x82317e14
	goto loc_82317E14;
loc_82317DE0:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823165c8
	ctx.lr = 0x82317DF8;
	sub_823165C8(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x82317e0c
	goto loc_82317E0C;
loc_82317E04:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82317E0C:
	// std r10,936(r31)
	PPC_STORE_U64(ctx.r31.u32 + 936, ctx.r10.u64);
	// std r11,928(r31)
	PPC_STORE_U64(ctx.r31.u32 + 928, ctx.r11.u64);
loc_82317E14:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,984(r31)
	PPC_STORE_U64(ctx.r31.u32 + 984, ctx.r11.u64);
	// std r10,992(r31)
	PPC_STORE_U64(ctx.r31.u32 + 992, ctx.r10.u64);
loc_82317E24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317E2C"))) PPC_WEAK_FUNC(sub_82317E2C);
PPC_FUNC_IMPL(__imp__sub_82317E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82317E30"))) PPC_WEAK_FUNC(sub_82317E30);
PPC_FUNC_IMPL(__imp__sub_82317E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82317E38;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,872(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317ee0
	if (ctx.cr6.eq) goto loc_82317EE0;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,1124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1124, ctx.r26.u32);
	// stw r26,1136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1136, ctx.r26.u32);
loc_82317E74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82317e74
	if (!ctx.cr6.eq) goto loc_82317E74;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r27,256
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 256, ctx.xer);
	// ble cr6,0x82317e9c
	if (!ctx.cr6.gt) goto loc_82317E9C;
	// li r27,255
	ctx.r27.s64 = 255;
loc_82317E9C:
	// addi r30,r31,1148
	ctx.r30.s64 = ctx.r31.s64 + 1148;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82317EB0;
	sub_8233EAF0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82317EC0;
	sub_8233E4E0(ctx, base);
	// std r25,1408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1408, ctx.r25.u64);
	// std r24,1416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1416, ctx.r24.u64);
	// stw r26,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r26.u32);
	// stw r29,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r29.u32);
	// stw r29,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r29.u32);
	// stw r29,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_82317EE0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,1148
	ctx.r5.s64 = ctx.r31.s64 + 1148;
	// addi r4,r11,-8872
	ctx.r4.s64 = ctx.r11.s64 + -8872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823173b0
	ctx.lr = 0x82317EF4;
	sub_823173B0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r29,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82317F08"))) PPC_WEAK_FUNC(sub_82317F08);
PPC_FUNC_IMPL(__imp__sub_82317F08) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,1432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1432, ctx.r11.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r11,1664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1664, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1056
	ctx.r3.s64 = ctx.r3.s64 + 1056;
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// std r11,928(r31)
	PPC_STORE_U64(ctx.r31.u32 + 928, ctx.r11.u64);
	// std r30,936(r31)
	PPC_STORE_U64(ctx.r31.u32 + 936, ctx.r30.u64);
	// bl 0x8233eaf0
	ctx.lr = 0x82317F4C;
	sub_8233EAF0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,-28948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1112, temp.u32);
	// stfs f0,1116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1116, temp.u32);
	// bne cr6,0x82317f84
	if (!ctx.cr6.eq) goto loc_82317F84;
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317f84
	if (ctx.cr6.eq) goto loc_82317F84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1472(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82317F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82317F84:
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82317fc8
	if (!ctx.cr6.eq) goto loc_82317FC8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,-25552
	ctx.r5.s64 = ctx.r11.s64 + -25552;
	// addi r4,r10,-8788
	ctx.r4.s64 = ctx.r10.s64 + -8788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823173b0
	ctx.lr = 0x82317FA8;
	sub_823173B0(ctx, base);
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316428
	ctx.lr = 0x82317FB4;
	sub_82316428(ctx, base);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r9,-23704
	ctx.r4.s64 = ctx.r9.s64 + -23704;
	// bl 0x82337048
	ctx.lr = 0x82317FC4;
	sub_82337048(ctx, base);
	// b 0x82317fec
	goto loc_82317FEC;
loc_82317FC8:
	// stw r30,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r30.u32);
	// stw r30,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r30.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231d428
	ctx.lr = 0x82317FD8;
	sub_8231D428(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-23448
	ctx.r4.s64 = ctx.r11.s64 + -23448;
	// bl 0x82315c08
	ctx.lr = 0x82317FE8;
	sub_82315C08(ctx, base);
	// stw r3,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r3.u32);
loc_82317FEC:
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

__attribute__((alias("__imp__sub_82318004"))) PPC_WEAK_FUNC(sub_82318004);
PPC_FUNC_IMPL(__imp__sub_82318004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318008"))) PPC_WEAK_FUNC(sub_82318008);
PPC_FUNC_IMPL(__imp__sub_82318008) {
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
	// bl 0x82316b80
	ctx.lr = 0x82318028;
	sub_82316B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82318094
	if (ctx.cr6.eq) goto loc_82318094;
	// lwz r11,1036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231804c
	if (ctx.cr6.eq) goto loc_8231804C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8231804c
	if (!ctx.cr6.gt) goto loc_8231804C;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8231804C:
	// lwz r11,1040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318068
	if (ctx.cr6.eq) goto loc_82318068;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82318068
	if (!ctx.cr6.gt) goto loc_82318068;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82318068:
	// lwz r11,1044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318084
	if (ctx.cr6.eq) goto loc_82318084;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82318084
	if (!ctx.cr6.gt) goto loc_82318084;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82318084:
	// lwz r11,1048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82318094
	if (ctx.cr6.eq) goto loc_82318094;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82318094:
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

__attribute__((alias("__imp__sub_823180AC"))) PPC_WEAK_FUNC(sub_823180AC);
PPC_FUNC_IMPL(__imp__sub_823180AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823180B0"))) PPC_WEAK_FUNC(sub_823180B0);
PPC_FUNC_IMPL(__imp__sub_823180B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823180B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231822c
	if (ctx.cr6.eq) goto loc_8231822C;
	// lwz r3,872(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231822c
	if (ctx.cr6.eq) goto loc_8231822C;
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231822c
	if (!ctx.cr6.eq) goto loc_8231822C;
	// ld r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 952);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x823180fc
	if (ctx.cr6.eq) goto loc_823180FC;
	// ld r10,944(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 944);
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x8231822c
	if (!ctx.cr6.lt) goto loc_8231822C;
loc_823180FC:
	// lwz r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231822c
	if (!ctx.cr6.eq) goto loc_8231822C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82318118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82318168
	if (!ctx.cr6.eq) goto loc_82318168;
	// lwz r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82318134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,944(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 944);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r9.u32);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// std r8,944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 944, ctx.r8.u64);
	// addi r4,r31,960
	ctx.r4.s64 = ctx.r31.s64 + 960;
	// bl 0x8231c660
	ctx.lr = 0x8231815C;
	sub_8231C660(ctx, base);
	// lwz r7,1136(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82318168:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82318200
	if (!ctx.cr6.eq) goto loc_82318200;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,960
	ctx.r30.s64 = ctx.r31.s64 + 960;
	// stw r29,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231819c
	if (ctx.cr6.eq) goto loc_8231819C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8231c660
	ctx.lr = 0x82318198;
	sub_8231C660(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8231819C:
	// lwz r11,1668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823181dc
	if (ctx.cr6.eq) goto loc_823181DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,1148
	ctx.r5.s64 = ctx.r31.s64 + 1148;
	// addi r4,r11,-8728
	ctx.r4.s64 = ctx.r11.s64 + -8728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823173b0
	ctx.lr = 0x823181BC;
	sub_823173B0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r10.u32);
	// bl 0x82316428
	ctx.lr = 0x823181CC;
	sub_82316428(ctx, base);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r9,-23704
	ctx.r4.s64 = ctx.r9.s64 + -23704;
	// bl 0x82337048
	ctx.lr = 0x823181DC;
	sub_82337048(ctx, base);
loc_823181DC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-8752
	ctx.r4.s64 = ctx.r11.s64 + -8752;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x823181F8;
	sub_82336FB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82318200:
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231822c
	if (!ctx.cr6.eq) goto loc_8231822C;
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231822c
	if (!ctx.cr6.eq) goto loc_8231822C;
	// stw r11,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,960
	ctx.r4.s64 = ctx.r31.s64 + 960;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231c660
	ctx.lr = 0x8231822C;
	sub_8231C660(ctx, base);
loc_8231822C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82318234"))) PPC_WEAK_FUNC(sub_82318234);
PPC_FUNC_IMPL(__imp__sub_82318234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318238"))) PPC_WEAK_FUNC(sub_82318238);
PPC_FUNC_IMPL(__imp__sub_82318238) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318324
	if (ctx.cr6.eq) goto loc_82318324;
	// lwz r11,872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318324
	if (ctx.cr6.eq) goto loc_82318324;
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82318324
	if (!ctx.cr6.eq) goto loc_82318324;
	// ld r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 952);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x8231828c
	if (ctx.cr6.eq) goto loc_8231828C;
	// ld r10,944(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 944);
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x82318324
	if (!ctx.cr6.lt) goto loc_82318324;
loc_8231828C:
	// lwz r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82318324
	if (ctx.cr6.eq) goto loc_82318324;
	// lwz r11,1668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82318324
	if (ctx.cr6.eq) goto loc_82318324;
	// lwz r11,1140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82318324
	if (!ctx.cr6.eq) goto loc_82318324;
	// lwz r11,3120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3120);
	// lwz r10,3124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82318324
	if (ctx.cr6.gt) goto loc_82318324;
	// addi r30,r31,960
	ctx.r30.s64 = ctx.r31.s64 + 960;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8231c570
	ctx.lr = 0x823182CC;
	sub_8231C570(ctx, base);
	// lwz r5,964(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	// cmpdi cr6,r5,0
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 0, ctx.xer);
	// ble cr6,0x82318314
	if (!ctx.cr6.gt) goto loc_82318314;
	// ld r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 952);
	// ld r10,944(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 944);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x823182f0
	if (!ctx.cr6.gt) goto loc_823182F0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_823182F0:
	// lwz r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82318308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r9.u32);
	// b 0x82318324
	goto loc_82318324;
loc_82318314:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8231c660
	ctx.lr = 0x82318324;
	sub_8231C660(ctx, base);
loc_82318324:
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

__attribute__((alias("__imp__sub_8231833C"))) PPC_WEAK_FUNC(sub_8231833C);
PPC_FUNC_IMPL(__imp__sub_8231833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318340"))) PPC_WEAK_FUNC(sub_82318340);
PPC_FUNC_IMPL(__imp__sub_82318340) {
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
	// lwz r11,1144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823183e4
	if (ctx.cr6.eq) goto loc_823183E4;
	// lwz r11,1136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823183e4
	if (!ctx.cr6.eq) goto loc_823183E4;
	// ld r11,952(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 952);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x823183e4
	if (ctx.cr6.eq) goto loc_823183E4;
	// ld r10,944(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 944);
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x823183e4
	if (ctx.cr6.lt) goto loc_823183E4;
	// lwz r11,1432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1432);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823183e4
	if (ctx.cr6.eq) goto loc_823183E4;
	// lwz r11,1468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823183a8
	if (ctx.cr6.eq) goto loc_823183A8;
	// lwz r4,1472(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823183A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823183A8:
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823183d4
	if (!ctx.cr6.eq) goto loc_823183D4;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// stw r10,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r10.u32);
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
loc_823183D4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8231a880
	ctx.lr = 0x823183DC;
	sub_8231A880(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
loc_823183E4:
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

__attribute__((alias("__imp__sub_823183F8"))) PPC_WEAK_FUNC(sub_823183F8);
PPC_FUNC_IMPL(__imp__sub_823183F8) {
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
	// lwz r3,872(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823184f8
	if (ctx.cr6.eq) goto loc_823184F8;
	// lwz r11,1140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82318448
	if (!ctx.cr6.eq) goto loc_82318448;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82318444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r30.u32);
loc_82318448:
	// lwz r11,1140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823184f8
	if (!ctx.cr6.eq) goto loc_823184F8;
	// lwz r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823184f8
	if (ctx.cr6.eq) goto loc_823184F8;
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823184f8
	if (!ctx.cr6.eq) goto loc_823184F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8231847C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x823184c4
	if (ctx.cr6.eq) goto loc_823184C4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x823184f8
	if (!ctx.cr6.eq) goto loc_823184F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// std r11,944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 944, ctx.r11.u64);
	// addi r4,r9,-8696
	ctx.r4.s64 = ctx.r9.s64 + -8696;
	// std r10,952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 952, ctx.r10.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x823184C0;
	sub_82336FB8(ctx, base);
	// b 0x823184f8
	goto loc_823184F8;
loc_823184C4:
	// lwz r10,1664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// std r11,944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 944, ctx.r11.u64);
	// std r9,952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 952, ctx.r9.u64);
	// bne cr6,0x823184f4
	if (!ctx.cr6.eq) goto loc_823184F4;
	// stw r11,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// b 0x823184f8
	goto loc_823184F8;
loc_823184F4:
	// stw r30,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r30.u32);
loc_823184F8:
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

__attribute__((alias("__imp__sub_82318510"))) PPC_WEAK_FUNC(sub_82318510);
PPC_FUNC_IMPL(__imp__sub_82318510) {
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
	// lwz r11,1124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231853c
	if (!ctx.cr6.eq) goto loc_8231853C;
	// lwz r11,1128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// b 0x82318548
	goto loc_82318548;
loc_8231853C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8231854c
	if (!ctx.cr6.eq) goto loc_8231854C;
	// lwz r11,1132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
loc_82318548:
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
loc_8231854C:
	// lwz r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823186f0
	if (ctx.cr6.eq) goto loc_823186F0;
	// lwz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823186f0
	if (ctx.cr6.eq) goto loc_823186F0;
	// lwz r11,1140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82318594
	if (!ctx.cr6.eq) goto loc_82318594;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r30.u32);
	// addi r4,r31,1148
	ctx.r4.s64 = ctx.r31.s64 + 1148;
	// stw r11,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82318594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82318594:
	// lwz r11,1140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823186f0
	if (!ctx.cr6.eq) goto loc_823186F0;
	// lwz r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823186f0
	if (ctx.cr6.eq) goto loc_823186F0;
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823186f0
	if (!ctx.cr6.eq) goto loc_823186F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823185C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82318688
	if (!ctx.cr6.eq) goto loc_82318688;
	// ld r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 952);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x8231864c
	if (!ctx.cr6.eq) goto loc_8231864C;
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231864c
	if (!ctx.cr6.eq) goto loc_8231864C;
	// lwz r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823185FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bgt cr6,0x8231861c
	if (ctx.cr6.gt) goto loc_8231861C;
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316428
	ctx.lr = 0x82318610;
	sub_82316428(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-8568
	ctx.r4.s64 = ctx.r11.s64 + -8568;
	// b 0x823186e8
	goto loc_823186E8;
loc_8231861C:
	// ld r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1416);
	// ld r4,1408(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1408);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82318664
	if (!ctx.cr6.lt) goto loc_82318664;
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82318630:
	// std r11,952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 952, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8231864C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8231864C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// stw r10,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r10.u32);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// b 0x823186f0
	goto loc_823186F0;
loc_82318664:
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmpd cr6,r10,r3
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r3.s64, ctx.xer);
	// ble cr6,0x82318630
	if (!ctx.cr6.gt) goto loc_82318630;
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316428
	ctx.lr = 0x8231867C;
	sub_82316428(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-8664
	ctx.r4.s64 = ctx.r11.s64 + -8664;
	// b 0x823186e8
	goto loc_823186E8;
loc_82318688:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x823186f0
	if (!ctx.cr6.eq) goto loc_823186F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// std r11,944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 944, ctx.r11.u64);
	// std r9,952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 952, ctx.r9.u64);
	// stw r11,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
	// beq cr6,0x823186f0
	if (ctx.cr6.eq) goto loc_823186F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,1148
	ctx.r5.s64 = ctx.r31.s64 + 1148;
	// addi r4,r11,-8728
	ctx.r4.s64 = ctx.r11.s64 + -8728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823173b0
	ctx.lr = 0x823186D4;
	sub_823173B0(ctx, base);
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316428
	ctx.lr = 0x823186E0;
	sub_82316428(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// addi r4,r10,-23704
	ctx.r4.s64 = ctx.r10.s64 + -23704;
loc_823186E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82337048
	ctx.lr = 0x823186F0;
	sub_82337048(ctx, base);
loc_823186F0:
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

__attribute__((alias("__imp__sub_82318708"))) PPC_WEAK_FUNC(sub_82318708);
PPC_FUNC_IMPL(__imp__sub_82318708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82318710;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8231b588
	ctx.lr = 0x82318730;
	sub_8231B588(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82318770
	if (ctx.cr6.lt) goto loc_82318770;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x82318770
	if (ctx.cr6.eq) goto loc_82318770;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r10.u32);
	// bl 0x82316428
	ctx.lr = 0x82318758;
	sub_82316428(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r9,-8400
	ctx.r4.s64 = ctx.r9.s64 + -8400;
	// bl 0x82337048
	ctx.lr = 0x82318768;
	sub_82337048(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82318770:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82318784
	if (!ctx.cr6.eq) goto loc_82318784;
	// stw r28,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82318784:
	// lwz r11,876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823187c0
	if (!ctx.cr6.eq) goto loc_823187C0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r10.u32);
	// bl 0x82316428
	ctx.lr = 0x823187A8;
	sub_82316428(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r9,-8496
	ctx.r4.s64 = ctx.r9.s64 + -8496;
	// bl 0x82337048
	ctx.lr = 0x823187B8;
	sub_82337048(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_823187C0:
	// stw r29,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823187CC"))) PPC_WEAK_FUNC(sub_823187CC);
PPC_FUNC_IMPL(__imp__sub_823187CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823187D0"))) PPC_WEAK_FUNC(sub_823187D0);
PPC_FUNC_IMPL(__imp__sub_823187D0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-9152
	ctx.r9.s64 = ctx.r11.s64 + -9152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82318808
	if (ctx.cr6.eq) goto loc_82318808;
	// li r4,1680
	ctx.r4.s64 = 1680;
	// bl 0x82338438
	ctx.lr = 0x82318804;
	sub_82338438(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82318808:
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

__attribute__((alias("__imp__sub_8231881C"))) PPC_WEAK_FUNC(sub_8231881C);
PPC_FUNC_IMPL(__imp__sub_8231881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82318820"))) PPC_WEAK_FUNC(sub_82318820);
PPC_FUNC_IMPL(__imp__sub_82318820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82318828;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// addi r9,r11,-9264
	ctx.r9.s64 = ctx.r11.s64 + -9264;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r25,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r25.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r9,-23708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23708, ctx.r9.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x823193e8
	ctx.lr = 0x8231885C;
	sub_823193E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82318890
	if (!ctx.cr6.eq) goto loc_82318890;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-8304
	ctx.r4.s64 = ctx.r11.s64 + -8304;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82336fb8
	ctx.lr = 0x8231887C;
	sub_82336FB8(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82318890:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-8320
	ctx.r5.s64 = ctx.r11.s64 + -8320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82338448
	ctx.lr = 0x823188A8;
	sub_82338448(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318928
	if (ctx.cr6.eq) goto loc_82318928;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r11,-9152
	ctx.r10.s64 = ctx.r11.s64 + -9152;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r5,r9,-8224
	ctx.r5.s64 = ctx.r9.s64 + -8224;
	// stw r27,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r27.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// stw r29,880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 880, ctx.r29.u32);
	// stw r28,876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 876, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-23440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23440);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-23440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23440, ctx.r11.u32);
	// bl 0x82337c48
	ctx.lr = 0x823188F8;
	sub_82337C48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r3.u32);
	// bne cr6,0x8231893c
	if (!ctx.cr6.eq) goto loc_8231893C;
loc_82318904:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-23448
	ctx.r4.s64 = ctx.r10.s64 + -23448;
	// bl 0x823175a8
	ctx.lr = 0x8231891C;
	sub_823175A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82318928:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_8231893C:
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x823384a8
	ctx.lr = 0x82318944;
	sub_823384A8(ctx, base);
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// stw r3,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318904
	if (ctx.cr6.eq) goto loc_82318904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231d468
	ctx.lr = 0x8231895C;
	sub_8231D468(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x82318904
	if (ctx.cr6.eq) goto loc_82318904;
	// li r4,8000
	ctx.r4.s64 = 8000;
	// bl 0x82319af8
	ctx.lr = 0x82318970;
	sub_82319AF8(ctx, base);
	// stw r27,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231df78
	ctx.lr = 0x8231897C;
	sub_8231DF78(ctx, base);
	// stw r3,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318904
	if (ctx.cr6.eq) goto loc_82318904;
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823189bc
	if (ctx.cr6.eq) goto loc_823189BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823189A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823189b8
	if (ctx.cr6.eq) goto loc_823189B8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823189B8:
	// bl 0x8231b1f0
	ctx.lr = 0x823189BC;
	sub_8231B1F0(ctx, base);
loc_823189BC:
	// stw r25,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317430
	ctx.lr = 0x823189C8;
	sub_82317430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823189D4"))) PPC_WEAK_FUNC(sub_823189D4);
PPC_FUNC_IMPL(__imp__sub_823189D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823189D8"))) PPC_WEAK_FUNC(sub_823189D8);
PPC_FUNC_IMPL(__imp__sub_823189D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823189E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82318a04
	if (ctx.cr6.eq) goto loc_82318A04;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// addi r5,r11,-23448
	ctx.r5.s64 = ctx.r11.s64 + -23448;
	// bl 0x82318008
	ctx.lr = 0x82318A04;
	sub_82318008(ctx, base);
loc_82318A04:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82318a40
	if (!ctx.cr6.eq) goto loc_82318A40;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// bl 0x82316428
	ctx.lr = 0x82318A24;
	sub_82316428(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-7844
	ctx.r4.s64 = ctx.r10.s64 + -7844;
	// bl 0x82337048
	ctx.lr = 0x82318A34;
	sub_82337048(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82318A40:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe. r30,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// bne 0x82318a70
	if (!ctx.cr0.eq) goto loc_82318A70;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1616(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// lwz r3,1612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// bl 0x82338458
	ctx.lr = 0x82318A70;
	sub_82338458(ctx, base);
loc_82318A70:
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// lwz r4,624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// beq cr6,0x82318aec
	if (ctx.cr6.eq) goto loc_82318AEC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82318aa4
	if (!ctx.cr6.eq) goto loc_82318AA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-7872
	ctx.r5.s64 = ctx.r11.s64 + -7872;
	// bl 0x82337c48
	ctx.lr = 0x82318AA0;
	sub_82337C48(ctx, base);
	// b 0x82318ab0
	goto loc_82318AB0;
loc_82318AA4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82338468
	ctx.lr = 0x82318AB0;
	sub_82338468(ctx, base);
loc_82318AB0:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82318aec
	if (!ctx.cr6.eq) goto loc_82318AEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// bl 0x82316428
	ctx.lr = 0x82318AD0;
	sub_82316428(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-7920
	ctx.r4.s64 = ctx.r10.s64 + -7920;
	// bl 0x82337048
	ctx.lr = 0x82318AE0;
	sub_82337048(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82318AEC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82318b5c
	if (!ctx.cr6.eq) goto loc_82318B5C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8231b210
	ctx.lr = 0x82318B00;
	sub_8231B210(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82338468
	ctx.lr = 0x82318B14;
	sub_82338468(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8231d018
	ctx.lr = 0x82318B28;
	sub_8231D018(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82318b9c
	if (ctx.cr6.eq) goto loc_82318B9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// bl 0x82316428
	ctx.lr = 0x82318B40;
	sub_82316428(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-7980
	ctx.r4.s64 = ctx.r10.s64 + -7980;
	// bl 0x82337048
	ctx.lr = 0x82318B50;
	sub_82337048(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82318B5C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8231d8b0
	ctx.lr = 0x82318B68;
	sub_8231D8B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82318b9c
	if (ctx.cr6.eq) goto loc_82318B9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// bl 0x82316428
	ctx.lr = 0x82318B80;
	sub_82316428(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-8032
	ctx.r4.s64 = ctx.r10.s64 + -8032;
	// bl 0x82337048
	ctx.lr = 0x82318B90;
	sub_82337048(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82318B9C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82318e20
	if (ctx.cr6.eq) goto loc_82318E20;
	// lwz r11,876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318e20
	if (ctx.cr6.eq) goto loc_82318E20;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82318bdc
	if (!ctx.cr6.eq) goto loc_82318BDC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82337da8
	ctx.lr = 0x82318BD4;
	sub_82337DA8(ctx, base);
	// stw r3,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r3.u32);
	// b 0x82318be4
	goto loc_82318BE4;
loc_82318BDC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
loc_82318BE4:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// bne cr6,0x82318c08
	if (!ctx.cr6.eq) goto loc_82318C08;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82318c14
	goto loc_82318C14;
loc_82318C08:
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82318c14
	if (!ctx.cr6.eq) goto loc_82318C14;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82318C14:
	// stw r11,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r11.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// lwz r6,104(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r4,1628(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82318C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82318c6c
	if (!ctx.cr6.eq) goto loc_82318C6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// bl 0x82316428
	ctx.lr = 0x82318C50;
	sub_82316428(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-8072
	ctx.r4.s64 = ctx.r10.s64 + -8072;
	// bl 0x82337048
	ctx.lr = 0x82318C60;
	sub_82337048(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82318C6C:
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82318C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x82318ca4
	if (!ctx.cr6.eq) goto loc_82318CA4;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r4,r11,30424
	ctx.r4.s64 = ctx.r11.s64 + 30424;
	// b 0x82318cb0
	goto loc_82318CB0;
loc_82318CA4:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r4,r11,30584
	ctx.r4.s64 = ctx.r11.s64 + 30584;
loc_82318CB0:
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82318CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316ce0
	ctx.lr = 0x82318CC4;
	sub_82316CE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82318d08
	if (!ctx.cr6.eq) goto loc_82318D08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316d90
	ctx.lr = 0x82318CD4;
	sub_82316D90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82318d08
	if (ctx.cr6.eq) goto loc_82318D08;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// bl 0x82316428
	ctx.lr = 0x82318CEC;
	sub_82316428(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-8112
	ctx.r4.s64 = ctx.r10.s64 + -8112;
	// bl 0x82337048
	ctx.lr = 0x82318CFC;
	sub_82337048(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82318D08:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316d40
	ctx.lr = 0x82318D14;
	sub_82316D40(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82318e20
	if (!ctx.cr6.eq) goto loc_82318E20;
	// lwz r4,1628(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,1460(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// bl 0x82319a68
	ctx.lr = 0x82318D2C;
	sub_82319A68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82318d98
	if (!ctx.cr6.eq) goto loc_82318D98;
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lwz r4,1628(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r6,104(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// bctrl 
	ctx.lr = 0x82318D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82318dc4
	if (!ctx.cr6.eq) goto loc_82318DC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// bl 0x82316428
	ctx.lr = 0x82318D7C;
	sub_82316428(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-8152
	ctx.r4.s64 = ctx.r10.s64 + -8152;
	// bl 0x82337048
	ctx.lr = 0x82318D8C;
	sub_82337048(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82318D98:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// bl 0x82316428
	ctx.lr = 0x82318DA8;
	sub_82316428(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-8196
	ctx.r4.s64 = ctx.r10.s64 + -8196;
	// bl 0x82337048
	ctx.lr = 0x82318DB8;
	sub_82337048(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82318DC4:
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82318DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x82318e0c
	if (!ctx.cr6.eq) goto loc_82318E0C;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r4,r11,30744
	ctx.r4.s64 = ctx.r11.s64 + 30744;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82318E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82318E0C:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r4,r11,31008
	ctx.r4.s64 = ctx.r11.s64 + 31008;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82318E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82318E20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

