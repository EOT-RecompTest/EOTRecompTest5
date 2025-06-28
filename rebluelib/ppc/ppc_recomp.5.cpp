#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820B7618"))) PPC_WEAK_FUNC(sub_820B7618);
PPC_FUNC_IMPL(__imp__sub_820B7618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b7648
	if (!ctx.cr6.lt) goto loc_820B7648;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7648
	if (ctx.cr6.eq) goto loc_820B7648;
	// lwz r3,2360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2360);
	// blr 
	return;
loc_820B7648:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7650"))) PPC_WEAK_FUNC(sub_820B7650);
PPC_FUNC_IMPL(__imp__sub_820B7650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b7694
	if (!ctx.cr6.lt) goto loc_820B7694;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7694
	if (ctx.cr6.eq) goto loc_820B7694;
	// lwz r10,2352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// blr 
	return;
loc_820B7694:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B769C"))) PPC_WEAK_FUNC(sub_820B769C);
PPC_FUNC_IMPL(__imp__sub_820B769C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B76A0"))) PPC_WEAK_FUNC(sub_820B76A0);
PPC_FUNC_IMPL(__imp__sub_820B76A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b76c8
	if (!ctx.cr6.lt) goto loc_820B76C8;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b76d0
	if (!ctx.cr6.eq) goto loc_820B76D0;
loc_820B76C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820B76D0:
	// lwz r10,2352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b76c8
	if (ctx.cr6.eq) goto loc_820B76C8;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b76c8
	if (!ctx.cr6.lt) goto loc_820B76C8;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b76c8
	if (ctx.cr6.eq) goto loc_820B76C8;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7704"))) PPC_WEAK_FUNC(sub_820B7704);
PPC_FUNC_IMPL(__imp__sub_820B7704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7708"))) PPC_WEAK_FUNC(sub_820B7708);
PPC_FUNC_IMPL(__imp__sub_820B7708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b7730
	if (!ctx.cr6.lt) goto loc_820B7730;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b7738
	if (!ctx.cr6.eq) goto loc_820B7738;
loc_820B7730:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820B7738:
	// lwz r10,2352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b7730
	if (ctx.cr6.eq) goto loc_820B7730;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b7730
	if (!ctx.cr6.lt) goto loc_820B7730;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7730
	if (ctx.cr6.eq) goto loc_820B7730;
	// addi r3,r11,260
	ctx.r3.s64 = ctx.r11.s64 + 260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B776C"))) PPC_WEAK_FUNC(sub_820B776C);
PPC_FUNC_IMPL(__imp__sub_820B776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7770"))) PPC_WEAK_FUNC(sub_820B7770);
PPC_FUNC_IMPL(__imp__sub_820B7770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b7798
	if (!ctx.cr6.lt) goto loc_820B7798;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b77a0
	if (!ctx.cr6.eq) goto loc_820B77A0;
loc_820B7798:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820B77A0:
	// lwz r10,2352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b7798
	if (ctx.cr6.eq) goto loc_820B7798;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b7798
	if (!ctx.cr6.lt) goto loc_820B7798;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7798
	if (ctx.cr6.eq) goto loc_820B7798;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B77D4"))) PPC_WEAK_FUNC(sub_820B77D4);
PPC_FUNC_IMPL(__imp__sub_820B77D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B77D8"))) PPC_WEAK_FUNC(sub_820B77D8);
PPC_FUNC_IMPL(__imp__sub_820B77D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-17184
	ctx.r9.s64 = ctx.r10.s64 + -17184;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,280(r9)
	PPC_STORE_U32(ctx.r9.u32 + 280, ctx.r11.u32);
	// stw r10,276(r9)
	PPC_STORE_U32(ctx.r9.u32 + 276, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B77F4"))) PPC_WEAK_FUNC(sub_820B77F4);
PPC_FUNC_IMPL(__imp__sub_820B77F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B77F8"))) PPC_WEAK_FUNC(sub_820B77F8);
PPC_FUNC_IMPL(__imp__sub_820B77F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-17184
	ctx.r10.s64 = ctx.r11.s64 + -17184;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7808"))) PPC_WEAK_FUNC(sub_820B7808);
PPC_FUNC_IMPL(__imp__sub_820B7808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b7834
	if (!ctx.cr6.lt) goto loc_820B7834;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,136
	ctx.r9.s64 = ctx.r11.s64 + 136;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820B7834:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B783C"))) PPC_WEAK_FUNC(sub_820B783C);
PPC_FUNC_IMPL(__imp__sub_820B783C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7840"))) PPC_WEAK_FUNC(sub_820B7840);
PPC_FUNC_IMPL(__imp__sub_820B7840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b7874
	if (!ctx.cr6.lt) goto loc_820B7874;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,136
	ctx.r9.s64 = ctx.r11.s64 + 136;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7874
	if (ctx.cr6.eq) goto loc_820B7874;
	// lwz r11,2352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_820B7874:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B787C"))) PPC_WEAK_FUNC(sub_820B787C);
PPC_FUNC_IMPL(__imp__sub_820B787C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7880"))) PPC_WEAK_FUNC(sub_820B7880);
PPC_FUNC_IMPL(__imp__sub_820B7880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820b78b4
	if (!ctx.cr6.lt) goto loc_820B78B4;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,136
	ctx.r9.s64 = ctx.r11.s64 + 136;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b78b4
	if (ctx.cr6.eq) goto loc_820B78B4;
	// lwz r11,2352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2352);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
loc_820B78B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B78BC"))) PPC_WEAK_FUNC(sub_820B78BC);
PPC_FUNC_IMPL(__imp__sub_820B78BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B78C0"))) PPC_WEAK_FUNC(sub_820B78C0);
PPC_FUNC_IMPL(__imp__sub_820B78C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-17184
	ctx.r9.s64 = ctx.r10.s64 + -17184;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,280(r9)
	PPC_STORE_U32(ctx.r9.u32 + 280, ctx.r11.u32);
	// stw r10,276(r9)
	PPC_STORE_U32(ctx.r9.u32 + 276, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B78DC"))) PPC_WEAK_FUNC(sub_820B78DC);
PPC_FUNC_IMPL(__imp__sub_820B78DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B78E0"))) PPC_WEAK_FUNC(sub_820B78E0);
PPC_FUNC_IMPL(__imp__sub_820B78E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-17184
	ctx.r9.s64 = ctx.r10.s64 + -17184;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,280(r9)
	PPC_STORE_U32(ctx.r9.u32 + 280, ctx.r11.u32);
	// stw r10,276(r9)
	PPC_STORE_U32(ctx.r9.u32 + 276, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B78FC"))) PPC_WEAK_FUNC(sub_820B78FC);
PPC_FUNC_IMPL(__imp__sub_820B78FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7900"))) PPC_WEAK_FUNC(sub_820B7900);
PPC_FUNC_IMPL(__imp__sub_820B7900) {
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
	ctx.lr = 0x820B7914;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b792c
	if (ctx.cr6.eq) goto loc_820B792C;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// beq cr6,0x820b7944
	if (ctx.cr6.eq) goto loc_820B7944;
	// bl 0x82172d60
	ctx.lr = 0x820B792C;
	sub_82172D60(ctx, base);
loc_820B792C:
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
loc_820B7944:
	// lwz r31,76(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x82172d60
	ctx.lr = 0x820B794C;
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

__attribute__((alias("__imp__sub_820B7964"))) PPC_WEAK_FUNC(sub_820B7964);
PPC_FUNC_IMPL(__imp__sub_820B7964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7968"))) PPC_WEAK_FUNC(sub_820B7968);
PPC_FUNC_IMPL(__imp__sub_820B7968) {
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
	ctx.lr = 0x820B7988;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b79d8
	if (ctx.cr6.eq) goto loc_820B79D8;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// beq cr6,0x820b79a4
	if (ctx.cr6.eq) goto loc_820B79A4;
	// bl 0x82172d60
	ctx.lr = 0x820B79A0;
	sub_82172D60(ctx, base);
	// b 0x820b79d8
	goto loc_820B79D8;
loc_820B79A4:
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820b79b8
	if (ctx.cr6.lt) goto loc_820B79B8;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_820B79B8:
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82172d60
	ctx.lr = 0x820B79C8;
	sub_82172D60(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_820B79D8:
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

__attribute__((alias("__imp__sub_820B79F0"))) PPC_WEAK_FUNC(sub_820B79F0);
PPC_FUNC_IMPL(__imp__sub_820B79F0) {
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
	// bl 0x82087078
	ctx.lr = 0x820B7A08;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7a20
	if (ctx.cr6.eq) goto loc_820B7A20;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// beq cr6,0x820b7a38
	if (ctx.cr6.eq) goto loc_820B7A38;
	// bl 0x82172d60
	ctx.lr = 0x820B7A20;
	sub_82172D60(ctx, base);
loc_820B7A20:
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
loc_820B7A38:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820b7a4c
	if (ctx.cr6.lt) goto loc_820B7A4C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820b7a60
	goto loc_820B7A60;
loc_820B7A4C:
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_820B7A60:
	// bl 0x82172d60
	ctx.lr = 0x820B7A64;
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

__attribute__((alias("__imp__sub_820B7A7C"))) PPC_WEAK_FUNC(sub_820B7A7C);
PPC_FUNC_IMPL(__imp__sub_820B7A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7A80"))) PPC_WEAK_FUNC(sub_820B7A80);
PPC_FUNC_IMPL(__imp__sub_820B7A80) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82087078
	ctx.lr = 0x820B7AA0;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7ac4
	if (ctx.cr6.eq) goto loc_820B7AC4;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bne cr6,0x820b7ac0
	if (!ctx.cr6.eq) goto loc_820B7AC0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82167a58
	ctx.lr = 0x820B7AC0;
	sub_82167A58(ctx, base);
loc_820B7AC0:
	// bl 0x82172d60
	ctx.lr = 0x820B7AC4;
	sub_82172D60(ctx, base);
loc_820B7AC4:
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

__attribute__((alias("__imp__sub_820B7ADC"))) PPC_WEAK_FUNC(sub_820B7ADC);
PPC_FUNC_IMPL(__imp__sub_820B7ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7AE0"))) PPC_WEAK_FUNC(sub_820B7AE0);
PPC_FUNC_IMPL(__imp__sub_820B7AE0) {
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
	ctx.lr = 0x820B7B00;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7b3c
	if (ctx.cr6.eq) goto loc_820B7B3C;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bne cr6,0x820b7b38
	if (!ctx.cr6.eq) goto loc_820B7B38;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820B7B38:
	// bl 0x82172d60
	ctx.lr = 0x820B7B3C;
	sub_82172D60(ctx, base);
loc_820B7B3C:
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

__attribute__((alias("__imp__sub_820B7B54"))) PPC_WEAK_FUNC(sub_820B7B54);
PPC_FUNC_IMPL(__imp__sub_820B7B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7B58"))) PPC_WEAK_FUNC(sub_820B7B58);
PPC_FUNC_IMPL(__imp__sub_820B7B58) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82087078
	ctx.lr = 0x820B7B70;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7b88
	if (ctx.cr6.eq) goto loc_820B7B88;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// beq cr6,0x820b7ba8
	if (ctx.cr6.eq) goto loc_820B7BA8;
	// bl 0x82172d60
	ctx.lr = 0x820B7B88;
	sub_82172D60(ctx, base);
loc_820B7B88:
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
loc_820B7BA8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821677d8
	ctx.lr = 0x820B7BB0;
	sub_821677D8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82172d60
	ctx.lr = 0x820B7BB8;
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

__attribute__((alias("__imp__sub_820B7BD0"))) PPC_WEAK_FUNC(sub_820B7BD0);
PPC_FUNC_IMPL(__imp__sub_820B7BD0) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82087078
	ctx.lr = 0x820B7BE8;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7c00
	if (ctx.cr6.eq) goto loc_820B7C00;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// beq cr6,0x820b7c20
	if (ctx.cr6.eq) goto loc_820B7C20;
	// bl 0x82172d60
	ctx.lr = 0x820B7C00;
	sub_82172D60(ctx, base);
loc_820B7C00:
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
loc_820B7C20:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x820b7c40
	if (ctx.cr6.lt) goto loc_820B7C40;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x820b7c44
	if (!ctx.cr6.gt) goto loc_820B7C44;
loc_820B7C40:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_820B7C44:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f1,f12,f31,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// bl 0x821677d8
	ctx.lr = 0x820B7C68;
	sub_821677D8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82172d60
	ctx.lr = 0x820B7C70;
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

__attribute__((alias("__imp__sub_820B7C88"))) PPC_WEAK_FUNC(sub_820B7C88);
PPC_FUNC_IMPL(__imp__sub_820B7C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r4,r11,30976
	ctx.r4.s64 = ctx.r11.s64 + 30976;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r11,r10,31080
	ctx.r11.s64 = ctx.r10.s64 + 31080;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r10,r9,31456
	ctx.r10.s64 = ctx.r9.s64 + 31456;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r9,r8,31576
	ctx.r9.s64 = ctx.r8.s64 + 31576;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r7,31696
	ctx.r8.s64 = ctx.r7.s64 + 31696;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r7,r6,31216
	ctx.r7.s64 = ctx.r6.s64 + 31216;
	// addi r6,r5,31360
	ctx.r6.s64 = ctx.r5.s64 + 31360;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7CE0"))) PPC_WEAK_FUNC(sub_820B7CE0);
PPC_FUNC_IMPL(__imp__sub_820B7CE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218e6a0
	sub_8218E6A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7CE4"))) PPC_WEAK_FUNC(sub_820B7CE4);
PPC_FUNC_IMPL(__imp__sub_820B7CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7CE8"))) PPC_WEAK_FUNC(sub_820B7CE8);
PPC_FUNC_IMPL(__imp__sub_820B7CE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218e778
	sub_8218E778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7CEC"))) PPC_WEAK_FUNC(sub_820B7CEC);
PPC_FUNC_IMPL(__imp__sub_820B7CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7CF0"))) PPC_WEAK_FUNC(sub_820B7CF0);
PPC_FUNC_IMPL(__imp__sub_820B7CF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218e840
	sub_8218E840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7CF4"))) PPC_WEAK_FUNC(sub_820B7CF4);
PPC_FUNC_IMPL(__imp__sub_820B7CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7CF8"))) PPC_WEAK_FUNC(sub_820B7CF8);
PPC_FUNC_IMPL(__imp__sub_820B7CF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218e928
	sub_8218E928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7CFC"))) PPC_WEAK_FUNC(sub_820B7CFC);
PPC_FUNC_IMPL(__imp__sub_820B7CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7D00"))) PPC_WEAK_FUNC(sub_820B7D00);
PPC_FUNC_IMPL(__imp__sub_820B7D00) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218ea80
	sub_8218EA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7D04"))) PPC_WEAK_FUNC(sub_820B7D04);
PPC_FUNC_IMPL(__imp__sub_820B7D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7D08"))) PPC_WEAK_FUNC(sub_820B7D08);
PPC_FUNC_IMPL(__imp__sub_820B7D08) {
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
	// lis r11,-6410
	ctx.r11.s64 = -420085760;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// bl 0x8218eb48
	ctx.lr = 0x820B7D3C;
	sub_8218EB48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7D4C"))) PPC_WEAK_FUNC(sub_820B7D4C);
PPC_FUNC_IMPL(__imp__sub_820B7D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7D50"))) PPC_WEAK_FUNC(sub_820B7D50);
PPC_FUNC_IMPL(__imp__sub_820B7D50) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218eb48
	sub_8218EB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7D54"))) PPC_WEAK_FUNC(sub_820B7D54);
PPC_FUNC_IMPL(__imp__sub_820B7D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7D58"))) PPC_WEAK_FUNC(sub_820B7D58);
PPC_FUNC_IMPL(__imp__sub_820B7D58) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218ecf0
	sub_8218ECF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7D5C"))) PPC_WEAK_FUNC(sub_820B7D5C);
PPC_FUNC_IMPL(__imp__sub_820B7D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7D60"))) PPC_WEAK_FUNC(sub_820B7D60);
PPC_FUNC_IMPL(__imp__sub_820B7D60) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218ed88
	sub_8218ED88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7D64"))) PPC_WEAK_FUNC(sub_820B7D64);
PPC_FUNC_IMPL(__imp__sub_820B7D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7D68"))) PPC_WEAK_FUNC(sub_820B7D68);
PPC_FUNC_IMPL(__imp__sub_820B7D68) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218ec08
	sub_8218EC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7D6C"))) PPC_WEAK_FUNC(sub_820B7D6C);
PPC_FUNC_IMPL(__imp__sub_820B7D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7D70"))) PPC_WEAK_FUNC(sub_820B7D70);
PPC_FUNC_IMPL(__imp__sub_820B7D70) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218ee50
	sub_8218EE50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7D74"))) PPC_WEAK_FUNC(sub_820B7D74);
PPC_FUNC_IMPL(__imp__sub_820B7D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7D78"))) PPC_WEAK_FUNC(sub_820B7D78);
PPC_FUNC_IMPL(__imp__sub_820B7D78) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82087078
	ctx.lr = 0x820B7D98;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7da8
	if (ctx.cr6.eq) goto loc_820B7DA8;
	// lfs f31,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82172d60
	ctx.lr = 0x820B7DA8;
	sub_82172D60(ctx, base);
loc_820B7DA8:
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

__attribute__((alias("__imp__sub_820B7DC0"))) PPC_WEAK_FUNC(sub_820B7DC0);
PPC_FUNC_IMPL(__imp__sub_820B7DC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218ef30
	sub_8218EF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7DC4"))) PPC_WEAK_FUNC(sub_820B7DC4);
PPC_FUNC_IMPL(__imp__sub_820B7DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7DC8"))) PPC_WEAK_FUNC(sub_820B7DC8);
PPC_FUNC_IMPL(__imp__sub_820B7DC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8218eff8
	sub_8218EFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7DCC"))) PPC_WEAK_FUNC(sub_820B7DCC);
PPC_FUNC_IMPL(__imp__sub_820B7DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7DD0"))) PPC_WEAK_FUNC(sub_820B7DD0);
PPC_FUNC_IMPL(__imp__sub_820B7DD0) {
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
	ctx.lr = 0x820B7DEC;
	sub_82085870(ctx, base);
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b7e10
	if (!ctx.cr6.eq) goto loc_820B7E10;
loc_820B7DFC:
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
loc_820B7E10:
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7dfc
	if (ctx.cr6.eq) goto loc_820B7DFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7e34
	if (ctx.cr6.eq) goto loc_820B7E34;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_820B7E34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7E44"))) PPC_WEAK_FUNC(sub_820B7E44);
PPC_FUNC_IMPL(__imp__sub_820B7E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7E48"))) PPC_WEAK_FUNC(sub_820B7E48);
PPC_FUNC_IMPL(__imp__sub_820B7E48) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82087078
	ctx.lr = 0x820B7E60;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7e70
	if (ctx.cr6.eq) goto loc_820B7E70;
	// lwz r31,88(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// bl 0x82172d60
	ctx.lr = 0x820B7E70;
	sub_82172D60(ctx, base);
loc_820B7E70:
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

__attribute__((alias("__imp__sub_820B7E88"))) PPC_WEAK_FUNC(sub_820B7E88);
PPC_FUNC_IMPL(__imp__sub_820B7E88) {
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
	// li r30,-1
	ctx.r30.s64 = -1;
	// bl 0x82087078
	ctx.lr = 0x820B7EA8;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7ed8
	if (ctx.cr6.eq) goto loc_820B7ED8;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820b7ec4
	if (ctx.cr6.lt) goto loc_820B7EC4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x820b7edc
	goto loc_820B7EDC;
loc_820B7EC4:
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82172d60
	ctx.lr = 0x820B7ED8;
	sub_82172D60(ctx, base);
loc_820B7ED8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820B7EDC:
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

__attribute__((alias("__imp__sub_820B7EF4"))) PPC_WEAK_FUNC(sub_820B7EF4);
PPC_FUNC_IMPL(__imp__sub_820B7EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7EF8"))) PPC_WEAK_FUNC(sub_820B7EF8);
PPC_FUNC_IMPL(__imp__sub_820B7EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x820B7F00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82085870
	ctx.lr = 0x820B7F2C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7fa4
	if (ctx.cr6.eq) goto loc_820B7FA4;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7fa4
	if (ctx.cr6.eq) goto loc_820B7FA4;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820b7fa4
	if (!ctx.cr6.lt) goto loc_820B7FA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82087078
	ctx.lr = 0x820B7F5C;
	sub_82087078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7fa4
	if (ctx.cr6.eq) goto loc_820B7FA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82172e00
	ctx.lr = 0x820B7F70;
	sub_82172E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7fa4
	if (ctx.cr6.eq) goto loc_820B7FA4;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218d9b0
	ctx.lr = 0x820B7F9C;
	sub_8218D9B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_820B7FA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7FB0"))) PPC_WEAK_FUNC(sub_820B7FB0);
PPC_FUNC_IMPL(__imp__sub_820B7FB0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8218ecf0
	sub_8218ECF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7FB8"))) PPC_WEAK_FUNC(sub_820B7FB8);
PPC_FUNC_IMPL(__imp__sub_820B7FB8) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8218ea80
	sub_8218EA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B7FC0"))) PPC_WEAK_FUNC(sub_820B7FC0);
PPC_FUNC_IMPL(__imp__sub_820B7FC0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x820B7FC8;
	__savegprlr_20(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r11,r11,32696
	ctx.r11.s64 = ctx.r11.s64 + 32696;
	// addi r10,r10,32688
	ctx.r10.s64 = ctx.r10.s64 + 32688;
	// addi r9,r9,31968
	ctx.r9.s64 = ctx.r9.s64 + 31968;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r8,r8,31976
	ctx.r8.s64 = ctx.r8.s64 + 31976;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// addi r7,r7,31984
	ctx.r7.s64 = ctx.r7.s64 + 31984;
	// addi r6,r6,31992
	ctx.r6.s64 = ctx.r6.s64 + 31992;
	// addi r5,r5,32000
	ctx.r5.s64 = ctx.r5.s64 + 32000;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r4,r4,32008
	ctx.r4.s64 = ctx.r4.s64 + 32008;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// addi r11,r31,32080
	ctx.r11.s64 = ctx.r31.s64 + 32080;
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// addi r10,r30,32088
	ctx.r10.s64 = ctx.r30.s64 + 32088;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// addi r9,r29,32096
	ctx.r9.s64 = ctx.r29.s64 + 32096;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// addi r8,r28,32104
	ctx.r8.s64 = ctx.r28.s64 + 32104;
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// addi r7,r27,32112
	ctx.r7.s64 = ctx.r27.s64 + 32112;
	// addi r6,r26,32120
	ctx.r6.s64 = ctx.r26.s64 + 32120;
	// addi r5,r25,32192
	ctx.r5.s64 = ctx.r25.s64 + 32192;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// addi r4,r24,32200
	ctx.r4.s64 = ctx.r24.s64 + 32200;
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// addi r11,r23,32208
	ctx.r11.s64 = ctx.r23.s64 + 32208;
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// addi r10,r22,32328
	ctx.r10.s64 = ctx.r22.s64 + 32328;
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// addi r9,r21,32392
	ctx.r9.s64 = ctx.r21.s64 + 32392;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// addi r8,r20,32504
	ctx.r8.s64 = ctx.r20.s64 + 32504;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B80BC"))) PPC_WEAK_FUNC(sub_820B80BC);
PPC_FUNC_IMPL(__imp__sub_820B80BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B80C0"))) PPC_WEAK_FUNC(sub_820B80C0);
PPC_FUNC_IMPL(__imp__sub_820B80C0) {
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
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B80E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820B80FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820B8114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820B812C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B8144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_820B815C"))) PPC_WEAK_FUNC(sub_820B815C);
PPC_FUNC_IMPL(__imp__sub_820B815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8160"))) PPC_WEAK_FUNC(sub_820B8160);
PPC_FUNC_IMPL(__imp__sub_820B8160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B8168;
	__savegprlr_29(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,26796
	ctx.r29.s64 = ctx.r11.s64 + 26796;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823052d8
	ctx.lr = 0x820B8188;
	sub_823052D8(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r5,r10,-32640
	ctx.r5.s64 = ctx.r10.s64 + -32640;
	// addi r4,r9,-32632
	ctx.r4.s64 = ctx.r9.s64 + -32632;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8233cc00
	ctx.lr = 0x820B81A4;
	sub_8233CC00(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bb4d0
	ctx.lr = 0x820B81B0;
	sub_821BB4D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82307eb0
	ctx.lr = 0x820B81BC;
	sub_82307EB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82307b88
	ctx.lr = 0x820B81C8;
	sub_82307B88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823051a8
	ctx.lr = 0x820B81D0;
	sub_823051A8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B81D8"))) PPC_WEAK_FUNC(sub_820B81D8);
PPC_FUNC_IMPL(__imp__sub_820B81D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27400
	ctx.r9.s64 = ctx.r11.s64 + 27400;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B81EC"))) PPC_WEAK_FUNC(sub_820B81EC);
PPC_FUNC_IMPL(__imp__sub_820B81EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B81F0"))) PPC_WEAK_FUNC(sub_820B81F0);
PPC_FUNC_IMPL(__imp__sub_820B81F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,27400
	ctx.r9.s64 = ctx.r11.s64 + 27400;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8204"))) PPC_WEAK_FUNC(sub_820B8204);
PPC_FUNC_IMPL(__imp__sub_820B8204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8208"))) PPC_WEAK_FUNC(sub_820B8208);
PPC_FUNC_IMPL(__imp__sub_820B8208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,26320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26320);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8218"))) PPC_WEAK_FUNC(sub_820B8218);
PPC_FUNC_IMPL(__imp__sub_820B8218) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bne cr6,0x820b828c
	if (!ctx.cr6.eq) goto loc_820B828C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r30,5
	ctx.r30.s64 = 5;
	// lwz r11,25072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_820B8254:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b827c
	if (ctx.cr6.eq) goto loc_820B827C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B827C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B827C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820b8254
	if (!ctx.cr0.eq) goto loc_820B8254;
	// b 0x820b82c4
	goto loc_820B82C4;
loc_820B828C:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,25072(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25072);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820b82c8
	if (ctx.cr6.eq) goto loc_820B82C8;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B82C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B82C4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820B82C8:
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

__attribute__((alias("__imp__sub_820B82E0"))) PPC_WEAK_FUNC(sub_820B82E0);
PPC_FUNC_IMPL(__imp__sub_820B82E0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// bne cr6,0x820b835c
	if (!ctx.cr6.eq) goto loc_820B835C;
	// lwz r10,25072(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b8308
	if (ctx.cr6.eq) goto loc_820B8308;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_820B8308:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b831c
	if (ctx.cr6.eq) goto loc_820B831C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_820B831C:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8330
	if (ctx.cr6.eq) goto loc_820B8330;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_820B8330:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8344
	if (ctx.cr6.eq) goto loc_820B8344;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_820B8344:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_820B835C:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lwz r11,25072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8380"))) PPC_WEAK_FUNC(sub_820B8380);
PPC_FUNC_IMPL(__imp__sub_820B8380) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// bne cr6,0x820b83fc
	if (!ctx.cr6.eq) goto loc_820B83FC;
	// lwz r10,25072(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b83a8
	if (ctx.cr6.eq) goto loc_820B83A8;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_820B83A8:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b83bc
	if (ctx.cr6.eq) goto loc_820B83BC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_820B83BC:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b83d0
	if (ctx.cr6.eq) goto loc_820B83D0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_820B83D0:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b83e4
	if (ctx.cr6.eq) goto loc_820B83E4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_820B83E4:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_820B83FC:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lwz r11,25072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8420"))) PPC_WEAK_FUNC(sub_820B8420);
PPC_FUNC_IMPL(__imp__sub_820B8420) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// bne cr6,0x820b849c
	if (!ctx.cr6.eq) goto loc_820B849C;
	// lwz r10,25072(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b8448
	if (ctx.cr6.eq) goto loc_820B8448;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_820B8448:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b845c
	if (ctx.cr6.eq) goto loc_820B845C;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_820B845C:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8470
	if (ctx.cr6.eq) goto loc_820B8470;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_820B8470:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8484
	if (ctx.cr6.eq) goto loc_820B8484;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_820B8484:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_820B849C:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lwz r11,25072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B84C0"))) PPC_WEAK_FUNC(sub_820B84C0);
PPC_FUNC_IMPL(__imp__sub_820B84C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// lwz r11,25072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// bne cr6,0x820b852c
	if (!ctx.cr6.eq) goto loc_820B852C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b84e8
	if (ctx.cr6.eq) goto loc_820B84E8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
loc_820B84E8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b84fc
	if (ctx.cr6.eq) goto loc_820B84FC;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
loc_820B84FC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b8510
	if (ctx.cr6.eq) goto loc_820B8510;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
loc_820B8510:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b8524
	if (ctx.cr6.eq) goto loc_820B8524;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
loc_820B8524:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x820b8538
	goto loc_820B8538;
loc_820B852C:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_820B8538:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B854C"))) PPC_WEAK_FUNC(sub_820B854C);
PPC_FUNC_IMPL(__imp__sub_820B854C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8550"))) PPC_WEAK_FUNC(sub_820B8550);
PPC_FUNC_IMPL(__imp__sub_820B8550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r4,2188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2188, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b85a8
	if (ctx.cr6.eq) goto loc_820B85A8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2192
	ctx.r10.s64 = ctx.r1.s64 + 2192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233ce00
	ctx.lr = 0x820B859C;
	sub_8233CE00(ctx, base);
	// lis r9,-13569
	ctx.r9.s64 = -889257984;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r8,-13570(r9)
	PPC_STORE_U32(ctx.r9.u32 + -13570, ctx.r8.u32);
loc_820B85A8:
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B85B8"))) PPC_WEAK_FUNC(sub_820B85B8);
PPC_FUNC_IMPL(__imp__sub_820B85B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B85C0"))) PPC_WEAK_FUNC(sub_820B85C0);
PPC_FUNC_IMPL(__imp__sub_820B85C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B85C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82087078
	ctx.lr = 0x820B85D8;
	sub_82087078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b866c
	if (ctx.cr6.eq) goto loc_820B866C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b8624
	if (ctx.cr6.eq) goto loc_820B8624;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b8600
	if (ctx.cr6.eq) goto loc_820B8600;
	// bl 0x820b91d0
	ctx.lr = 0x820B85FC;
	sub_820B91D0(ctx, base);
	// b 0x820b861c
	goto loc_820B861C;
loc_820B8600:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8614
	if (ctx.cr6.eq) goto loc_820B8614;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x820b861c
	goto loc_820B861C;
loc_820B8614:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b90a0
	ctx.lr = 0x820B861C;
	sub_820B90A0(ctx, base);
loc_820B861C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_820B8624:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b8664
	if (ctx.cr6.eq) goto loc_820B8664;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b8640
	if (ctx.cr6.eq) goto loc_820B8640;
	// bl 0x820b91d0
	ctx.lr = 0x820B863C;
	sub_820B91D0(ctx, base);
	// b 0x820b865c
	goto loc_820B865C;
loc_820B8640:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8654
	if (ctx.cr6.eq) goto loc_820B8654;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x820b865c
	goto loc_820B865C;
loc_820B8654:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b90a0
	ctx.lr = 0x820B865C;
	sub_820B90A0(ctx, base);
loc_820B865C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_820B8664:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172d60
	ctx.lr = 0x820B866C;
	sub_82172D60(ctx, base);
loc_820B866C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B8674"))) PPC_WEAK_FUNC(sub_820B8674);
PPC_FUNC_IMPL(__imp__sub_820B8674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8678"))) PPC_WEAK_FUNC(sub_820B8678);
PPC_FUNC_IMPL(__imp__sub_820B8678) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b8688
	if (ctx.cr6.eq) goto loc_820B8688;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_820B8688:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B869C"))) PPC_WEAK_FUNC(sub_820B869C);
PPC_FUNC_IMPL(__imp__sub_820B869C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B86A0"))) PPC_WEAK_FUNC(sub_820B86A0);
PPC_FUNC_IMPL(__imp__sub_820B86A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b86b0
	if (ctx.cr6.eq) goto loc_820B86B0;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_820B86B0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B86C4"))) PPC_WEAK_FUNC(sub_820B86C4);
PPC_FUNC_IMPL(__imp__sub_820B86C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B86C8"))) PPC_WEAK_FUNC(sub_820B86C8);
PPC_FUNC_IMPL(__imp__sub_820B86C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b86d8
	if (ctx.cr6.eq) goto loc_820B86D8;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_820B86D8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820b86e8
	if (ctx.cr6.eq) goto loc_820B86E8;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_820B86E8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,2013
	ctx.r11.s64 = 2013;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B86FC"))) PPC_WEAK_FUNC(sub_820B86FC);
PPC_FUNC_IMPL(__imp__sub_820B86FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8700"))) PPC_WEAK_FUNC(sub_820B8700);
PPC_FUNC_IMPL(__imp__sub_820B8700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,22200
	ctx.r11.s64 = ctx.r11.s64 + 22200;
	// addi r3,r11,401
	ctx.r3.s64 = ctx.r11.s64 + 401;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8710"))) PPC_WEAK_FUNC(sub_820B8710);
PPC_FUNC_IMPL(__imp__sub_820B8710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// stb r3,-26960(r11)
	PPC_STORE_U8(ctx.r11.u32 + -26960, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B871C"))) PPC_WEAK_FUNC(sub_820B871C);
PPC_FUNC_IMPL(__imp__sub_820B871C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8720"))) PPC_WEAK_FUNC(sub_820B8720);
PPC_FUNC_IMPL(__imp__sub_820B8720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820B8728;
	__savegprlr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820b8868
	if (ctx.cr6.eq) goto loc_820B8868;
	// bl 0x82081c00
	ctx.lr = 0x820B8750;
	sub_82081C00(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,26816
	ctx.r29.s64 = ctx.r11.s64 + 26816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r29,36
	ctx.r10.s64 = ctx.r29.s64 + 36;
loc_820B8764:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820b8784
	if (ctx.cr6.eq) goto loc_820B8784;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,176
	ctx.r10.s64 = ctx.r10.s64 + 176;
	// cmplwi cr6,r11,1760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1760, ctx.xer);
	// blt cr6,0x820b8764
	if (ctx.cr6.lt) goto loc_820B8764;
loc_820B8784:
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10, ctx.xer);
	// bne cr6,0x820b87c4
	if (!ctx.cr6.eq) goto loc_820B87C4;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820B8798;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b87a4
	if (!ctx.cr6.eq) goto loc_820B87A4;
	// bl 0x821b3000
	ctx.lr = 0x820B87A4;
	sub_821B3000(ctx, base);
loc_820B87A4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b87b8
	if (ctx.cr6.eq) goto loc_820B87B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820B87B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820B87C4:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x820b87d4
	if (!ctx.cr6.eq) goto loc_820B87D4;
	// li r28,2
	ctx.r28.s64 = 2;
loc_820B87D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bb4d0
	ctx.lr = 0x820B87E0;
	sub_821BB4D0(ctx, base);
	// mulli r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 * 176;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x82308050
	ctx.lr = 0x820B87F4;
	sub_82308050(ctx, base);
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r3,-27096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27096);
	// beq cr6,0x820b883c
	if (ctx.cr6.eq) goto loc_820B883C;
	// bl 0x82388734
	ctx.lr = 0x820B8810;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b881c
	if (!ctx.cr6.eq) goto loc_820B881C;
	// bl 0x821b3000
	ctx.lr = 0x820B881C;
	sub_821B3000(ctx, base);
loc_820B881C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b87b8
	if (ctx.cr6.eq) goto loc_820B87B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_820B883C:
	// oris r31,r31,64189
	ctx.r31.u64 = ctx.r31.u64 | 4206690304;
	// bl 0x82388734
	ctx.lr = 0x820B8844;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b8850
	if (!ctx.cr6.eq) goto loc_820B8850;
	// bl 0x821b3000
	ctx.lr = 0x820B8850;
	sub_821B3000(ctx, base);
loc_820B8850:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8864
	if (ctx.cr6.eq) goto loc_820B8864;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820B8864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B8868:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B8870"))) PPC_WEAK_FUNC(sub_820B8870);
PPC_FUNC_IMPL(__imp__sub_820B8870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r11,1040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b88a8
	if (!ctx.cr6.eq) goto loc_820B88A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B88A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bb4d0
	ctx.lr = 0x820B88B0;
	sub_821BB4D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82307d70
	ctx.lr = 0x820B88BC;
	sub_82307D70(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82247430
	ctx.lr = 0x820B88C4;
	sub_82247430(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B88E4"))) PPC_WEAK_FUNC(sub_820B88E4);
PPC_FUNC_IMPL(__imp__sub_820B88E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B88E8"))) PPC_WEAK_FUNC(sub_820B88E8);
PPC_FUNC_IMPL(__imp__sub_820B88E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r11,1040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b8920
	if (!ctx.cr6.eq) goto loc_820B8920;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B8920:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bb4d0
	ctx.lr = 0x820B8928;
	sub_821BB4D0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_820B8930:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820b8930
	if (!ctx.cr6.eq) goto loc_820B8930;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// blt cr6,0x820b895c
	if (ctx.cr6.lt) goto loc_820B895C;
	// li r7,255
	ctx.r7.s64 = 255;
loc_820B895C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r8,r8,4556
	ctx.r8.s64 = ctx.r8.s64 + 4556;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820B897C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x820b897c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B897C;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stbx r10,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x82307d70
	ctx.lr = 0x820B89A0;
	sub_82307D70(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82247430
	ctx.lr = 0x820B89A8;
	sub_82247430(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B89C8"))) PPC_WEAK_FUNC(sub_820B89C8);
PPC_FUNC_IMPL(__imp__sub_820B89C8) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r11,1040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820b8a48
	if (ctx.cr6.eq) goto loc_820B8A48;
	// rlwinm r11,r3,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,-1347
	ctx.r10.s64 = -88276992;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820b8a48
	if (!ctx.cr6.eq) goto loc_820B8A48;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// mulli r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 * 176;
	// addi r11,r9,26816
	ctx.r11.s64 = ctx.r9.s64 + 26816;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8a40
	if (ctx.cr6.eq) goto loc_820B8A40;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// subfic r5,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r5.s64 = 4 - ctx.r11.s64;
	// addi r4,r10,-32624
	ctx.r4.s64 = ctx.r10.s64 + -32624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b8ff0
	ctx.lr = 0x820B8A40;
	sub_820B8FF0(ctx, base);
loc_820B8A40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307cb0
	ctx.lr = 0x820B8A48;
	sub_82307CB0(ctx, base);
loc_820B8A48:
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

__attribute__((alias("__imp__sub_820B8A5C"))) PPC_WEAK_FUNC(sub_820B8A5C);
PPC_FUNC_IMPL(__imp__sub_820B8A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8A60"))) PPC_WEAK_FUNC(sub_820B8A60);
PPC_FUNC_IMPL(__imp__sub_820B8A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r11,1040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r3,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,-1347
	ctx.r10.s64 = -88276992;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// mulli r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 * 176;
	// addi r11,r9,26816
	ctx.r11.s64 = ctx.r9.s64 + 26816;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8208cfb0
	sub_8208CFB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B8A9C"))) PPC_WEAK_FUNC(sub_820B8A9C);
PPC_FUNC_IMPL(__imp__sub_820B8A9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8AA0"))) PPC_WEAK_FUNC(sub_820B8AA0);
PPC_FUNC_IMPL(__imp__sub_820B8AA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820b8ac8
	if (!ctx.cr6.lt) goto loc_820B8AC8;
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820B8AC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8AD0"))) PPC_WEAK_FUNC(sub_820B8AD0);
PPC_FUNC_IMPL(__imp__sub_820B8AD0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// bge cr6,0x820b8af8
	if (!ctx.cr6.lt) goto loc_820B8AF8;
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,308
	ctx.r3.s64 = ctx.r11.s64 + 308;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820B8AF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8B00"))) PPC_WEAK_FUNC(sub_820B8B00);
PPC_FUNC_IMPL(__imp__sub_820B8B00) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,6348
	ctx.r11.s64 = ctx.r11.s64 + 6348;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x820f6340
	ctx.lr = 0x820B8B28;
	sub_820F6340(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8b3c
	if (ctx.cr6.eq) goto loc_820B8B3C;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_820B8B3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8B4C"))) PPC_WEAK_FUNC(sub_820B8B4C);
PPC_FUNC_IMPL(__imp__sub_820B8B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8B50"))) PPC_WEAK_FUNC(sub_820B8B50);
PPC_FUNC_IMPL(__imp__sub_820B8B50) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B8B58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b8b58
	if (!ctx.cr6.eq) goto loc_820B8B58;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,253
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 253, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,22200
	ctx.r11.s64 = ctx.r11.s64 + 22200;
	// addi r4,r10,-22128
	ctx.r4.s64 = ctx.r10.s64 + -22128;
	// addi r3,r11,657
	ctx.r3.s64 = ctx.r11.s64 + 657;
	// b 0x8233cc00
	sub_8233CC00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B8B94"))) PPC_WEAK_FUNC(sub_820B8B94);
PPC_FUNC_IMPL(__imp__sub_820B8B94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8B98"))) PPC_WEAK_FUNC(sub_820B8B98);
PPC_FUNC_IMPL(__imp__sub_820B8B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820B8BA0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r11,r11,-21912
	ctx.r11.s64 = ctx.r11.s64 + -21912;
	// addi r9,r9,-21912
	ctx.r9.s64 = ctx.r9.s64 + -21912;
	// addi r8,r8,-32416
	ctx.r8.s64 = ctx.r8.s64 + -32416;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r7,r7,-21912
	ctx.r7.s64 = ctx.r7.s64 + -21912;
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r8,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r8.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// addi r11,r10,-30048
	ctx.r11.s64 = ctx.r10.s64 + -30048;
	// addi r3,r3,-32272
	ctx.r3.s64 = ctx.r3.s64 + -32272;
	// addi r6,r6,-21912
	ctx.r6.s64 = ctx.r6.s64 + -21912;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// addi r5,r5,-32296
	ctx.r5.s64 = ctx.r5.s64 + -32296;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// addi r10,r30,-30000
	ctx.r10.s64 = ctx.r30.s64 + -30000;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// addi r9,r29,-30944
	ctx.r9.s64 = ctx.r29.s64 + -30944;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// addi r8,r28,-30264
	ctx.r8.s64 = ctx.r28.s64 + -30264;
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// addi r7,r4,-30112
	ctx.r7.s64 = ctx.r4.s64 + -30112;
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// stw r8,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x820B8C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820B8C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// addi r4,r4,-30608
	ctx.r4.s64 = ctx.r4.s64 + -30608;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r4,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r4.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r30,-32226
	ctx.r30.s64 = -2111963136;
	// addi r11,r11,-30488
	ctx.r11.s64 = ctx.r11.s64 + -30488;
	// addi r4,r3,-6736
	ctx.r4.s64 = ctx.r3.s64 + -6736;
	// lis r29,-32226
	ctx.r29.s64 = -2111963136;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// addi r10,r10,-32248
	ctx.r10.s64 = ctx.r10.s64 + -32248;
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// addi r9,r9,-32032
	ctx.r9.s64 = ctx.r9.s64 + -32032;
	// addi r8,r8,-31712
	ctx.r8.s64 = ctx.r8.s64 + -31712;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r7,r7,-31872
	ctx.r7.s64 = ctx.r7.s64 + -31872;
	// stw r9,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r9.u32);
	// addi r6,r6,-32232
	ctx.r6.s64 = ctx.r6.s64 + -32232;
	// stw r8,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r8.u32);
	// addi r5,r5,-6736
	ctx.r5.s64 = ctx.r5.s64 + -6736;
	// stw r7,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r7.u32);
	// addi r3,r30,-21912
	ctx.r3.s64 = ctx.r30.s64 + -21912;
	// stw r6,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// addi r11,r29,-21912
	ctx.r11.s64 = ctx.r29.s64 + -21912;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// addi r10,r10,-31408
	ctx.r10.s64 = ctx.r10.s64 + -31408;
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// addi r9,r9,-31304
	ctx.r9.s64 = ctx.r9.s64 + -31304;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// addi r8,r8,-31304
	ctx.r8.s64 = ctx.r8.s64 + -31304;
	// addi r7,r7,-31304
	ctx.r7.s64 = ctx.r7.s64 + -31304;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// addi r6,r6,-31304
	ctx.r6.s64 = ctx.r6.s64 + -31304;
	// stw r8,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r8.u32);
	// addi r5,r5,-31304
	ctx.r5.s64 = ctx.r5.s64 + -31304;
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r5,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r5.u32);
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// lis r29,-32226
	ctx.r29.s64 = -2111963136;
	// lis r28,-32226
	ctx.r28.s64 = -2111963136;
	// lis r27,-32226
	ctx.r27.s64 = -2111963136;
	// lis r26,-32226
	ctx.r26.s64 = -2111963136;
	// lis r25,-32226
	ctx.r25.s64 = -2111963136;
	// addi r3,r3,-31304
	ctx.r3.s64 = ctx.r3.s64 + -31304;
	// addi r4,r4,-31304
	ctx.r4.s64 = ctx.r4.s64 + -31304;
	// addi r11,r11,-31304
	ctx.r11.s64 = ctx.r11.s64 + -31304;
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
	// addi r10,r30,-31304
	ctx.r10.s64 = ctx.r30.s64 + -31304;
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
	// lis r23,-32226
	ctx.r23.s64 = -2111963136;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r14,-32248
	ctx.r14.s64 = -2113404928;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// addi r9,r29,-21912
	ctx.r9.s64 = ctx.r29.s64 + -21912;
	// addi r8,r28,-21912
	ctx.r8.s64 = ctx.r28.s64 + -21912;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// addi r7,r27,-21912
	ctx.r7.s64 = ctx.r27.s64 + -21912;
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// addi r6,r26,-21912
	ctx.r6.s64 = ctx.r26.s64 + -21912;
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// addi r5,r25,-21912
	ctx.r5.s64 = ctx.r25.s64 + -21912;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lis r24,-32226
	ctx.r24.s64 = -2111963136;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lis r22,-32226
	ctx.r22.s64 = -2111963136;
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// lis r20,-32244
	ctx.r20.s64 = -2113142784;
	// lis r19,-32244
	ctx.r19.s64 = -2113142784;
	// lis r18,-32244
	ctx.r18.s64 = -2113142784;
	// lis r17,-32244
	ctx.r17.s64 = -2113142784;
	// lis r16,-32242
	ctx.r16.s64 = -2113011712;
	// addi r3,r23,-21912
	ctx.r3.s64 = ctx.r23.s64 + -21912;
	// addi r4,r24,-21912
	ctx.r4.s64 = ctx.r24.s64 + -21912;
	// addi r11,r22,-21912
	ctx.r11.s64 = ctx.r22.s64 + -21912;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// addi r10,r21,-31296
	ctx.r10.s64 = ctx.r21.s64 + -31296;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r15,-32226
	ctx.r15.s64 = -2111963136;
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// lis r14,-32248
	ctx.r14.s64 = -2113404928;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r9,r20,-31112
	ctx.r9.s64 = ctx.r20.s64 + -31112;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r8,r19,-31072
	ctx.r8.s64 = ctx.r19.s64 + -31072;
	// addi r7,r18,-31032
	ctx.r7.s64 = ctx.r18.s64 + -31032;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// addi r6,r17,-30976
	ctx.r6.s64 = ctx.r17.s64 + -30976;
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// addi r5,r16,-7032
	ctx.r5.s64 = ctx.r16.s64 + -7032;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// addi r4,r15,-21912
	ctx.r4.s64 = ctx.r15.s64 + -21912;
	// stw r6,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r6.u32);
	// addi r11,r3,11696
	ctx.r11.s64 = ctx.r3.s64 + 11696;
	// stw r5,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r5.u32);
	// addi r10,r14,11696
	ctx.r10.s64 = ctx.r14.s64 + 11696;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// stw r4,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r4.u32);
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r9,r9,-21912
	ctx.r9.s64 = ctx.r9.s64 + -21912;
	// addi r8,r8,-21912
	ctx.r8.s64 = ctx.r8.s64 + -21912;
	// addi r7,r7,-21912
	ctx.r7.s64 = ctx.r7.s64 + -21912;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// addi r6,r6,-21912
	ctx.r6.s64 = ctx.r6.s64 + -21912;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// addi r5,r5,-21912
	ctx.r5.s64 = ctx.r5.s64 + -21912;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// lis r4,-32226
	ctx.r4.s64 = -2111963136;
	// stw r6,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// lis r3,-32226
	ctx.r3.s64 = -2111963136;
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lis r28,-32226
	ctx.r28.s64 = -2111963136;
	// lis r27,-32226
	ctx.r27.s64 = -2111963136;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// addi r11,r11,-21912
	ctx.r11.s64 = ctx.r11.s64 + -21912;
	// addi r4,r4,-21912
	ctx.r4.s64 = ctx.r4.s64 + -21912;
	// addi r3,r3,-21912
	ctx.r3.s64 = ctx.r3.s64 + -21912;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r10,r10,-21912
	ctx.r10.s64 = ctx.r10.s64 + -21912;
	// stw r4,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r4.u32);
	// lis r23,-32226
	ctx.r23.s64 = -2111963136;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// addi r9,r30,-6736
	ctx.r9.s64 = ctx.r30.s64 + -6736;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// addi r8,r29,-6736
	ctx.r8.s64 = ctx.r29.s64 + -6736;
	// addi r7,r28,-21912
	ctx.r7.s64 = ctx.r28.s64 + -21912;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// addi r6,r27,-21912
	ctx.r6.s64 = ctx.r27.s64 + -21912;
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// addi r5,r26,-30960
	ctx.r5.s64 = ctx.r26.s64 + -30960;
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// stw r5,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r5.u32);
	// lis r22,-32226
	ctx.r22.s64 = -2111963136;
	// lis r21,-32226
	ctx.r21.s64 = -2111963136;
	// lis r20,-32242
	ctx.r20.s64 = -2113011712;
	// lis r19,-32242
	ctx.r19.s64 = -2113011712;
	// lis r18,-32242
	ctx.r18.s64 = -2113011712;
	// lis r17,-32242
	ctx.r17.s64 = -2113011712;
	// lis r14,-32226
	ctx.r14.s64 = -2111963136;
	// addi r11,r23,-21912
	ctx.r11.s64 = ctx.r23.s64 + -21912;
	// addi r4,r25,-6736
	ctx.r4.s64 = ctx.r25.s64 + -6736;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// addi r3,r24,-6736
	ctx.r3.s64 = ctx.r24.s64 + -6736;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// addi r10,r22,-21912
	ctx.r10.s64 = ctx.r22.s64 + -21912;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r16,-32242
	ctx.r16.s64 = -2113011712;
	// stw r4,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r4.u32);
	// lis r15,-32242
	ctx.r15.s64 = -2113011712;
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// addi r9,r21,-21912
	ctx.r9.s64 = ctx.r21.s64 + -21912;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r8,r20,-6736
	ctx.r8.s64 = ctx.r20.s64 + -6736;
	// addi r7,r19,-6736
	ctx.r7.s64 = ctx.r19.s64 + -6736;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// addi r6,r18,-6736
	ctx.r6.s64 = ctx.r18.s64 + -6736;
	// stw r8,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// addi r5,r17,-6736
	ctx.r5.s64 = ctx.r17.s64 + -6736;
	// stw r7,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r7.u32);
	// lis r14,-32226
	ctx.r14.s64 = -2111963136;
	// stw r6,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r6.u32);
	// addi r4,r16,-6736
	ctx.r4.s64 = ctx.r16.s64 + -6736;
	// stw r5,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r5.u32);
	// addi r3,r15,-6736
	ctx.r3.s64 = ctx.r15.s64 + -6736;
	// addi r10,r11,-21912
	ctx.r10.s64 = ctx.r11.s64 + -21912;
	// addi r9,r14,-21912
	ctx.r9.s64 = ctx.r14.s64 + -21912;
	// stw r4,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r4.u32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// lis r4,-32226
	ctx.r4.s64 = -2111963136;
	// lis r3,-32226
	ctx.r3.s64 = -2111963136;
	// addi r11,r8,-31552
	ctx.r11.s64 = ctx.r8.s64 + -31552;
	// addi r10,r7,-29952
	ctx.r10.s64 = ctx.r7.s64 + -29952;
	// addi r9,r6,-29872
	ctx.r9.s64 = ctx.r6.s64 + -29872;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// addi r8,r5,-21912
	ctx.r8.s64 = ctx.r5.s64 + -21912;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// addi r7,r4,-21912
	ctx.r7.s64 = ctx.r4.s64 + -21912;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// addi r6,r3,-21912
	ctx.r6.s64 = ctx.r3.s64 + -21912;
	// stw r8,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r8.u32);
	// stw r7,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r7.u32);
	// stw r6,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r6.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B8FD4"))) PPC_WEAK_FUNC(sub_820B8FD4);
PPC_FUNC_IMPL(__imp__sub_820B8FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8FD8"))) PPC_WEAK_FUNC(sub_820B8FD8);
PPC_FUNC_IMPL(__imp__sub_820B8FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,31144
	ctx.r3.s64 = ctx.r11.s64 + 31144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8FE4"))) PPC_WEAK_FUNC(sub_820B8FE4);
PPC_FUNC_IMPL(__imp__sub_820B8FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8FE8"))) PPC_WEAK_FUNC(sub_820B8FE8);
PPC_FUNC_IMPL(__imp__sub_820B8FE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,85
	ctx.r3.s64 = 85;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B8FF0"))) PPC_WEAK_FUNC(sub_820B8FF0);
PPC_FUNC_IMPL(__imp__sub_820B8FF0) {
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
	// lhz r11,38(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9020
	if (ctx.cr6.eq) goto loc_820B9020;
	// bl 0x823079b0
	ctx.lr = 0x820B901C;
	sub_823079B0(ctx, base);
	// b 0x820b9084
	goto loc_820B9084;
loc_820B9020:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x820b907c
	if (!ctx.cr6.gt) goto loc_820B907C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x820B9040;
	sub_8233E4E0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bne cr6,0x820b9074
	if (!ctx.cr6.eq) goto loc_820B9074;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x820b9074
	if (!ctx.cr6.gt) goto loc_820B9074;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_820B9074:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x820b9084
	goto loc_820B9084;
loc_820B907C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307820
	ctx.lr = 0x820B9084;
	sub_82307820(ctx, base);
loc_820B9084:
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

__attribute__((alias("__imp__sub_820B909C"))) PPC_WEAK_FUNC(sub_820B909C);
PPC_FUNC_IMPL(__imp__sub_820B909C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B90A0"))) PPC_WEAK_FUNC(sub_820B90A0);
PPC_FUNC_IMPL(__imp__sub_820B90A0) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b90d8
	if (ctx.cr6.eq) goto loc_820B90D8;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
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
loc_820B90D8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b910c
	if (ctx.cr6.eq) goto loc_820B910C;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
loc_820B90EC:
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// beq cr6,0x820b910c
	if (ctx.cr6.eq) goto loc_820B910C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b90ec
	if (!ctx.cr6.eq) goto loc_820B90EC;
loc_820B910C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b9164
	if (ctx.cr6.eq) goto loc_820B9164;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,-29208
	ctx.r7.s64 = ctx.r11.s64 + -29208;
loc_820B9124:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// blt cr6,0x820b9138
	if (ctx.cr6.lt) goto loc_820B9138;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b9144
	goto loc_820B9144;
loc_820B9138:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r7,8
	ctx.r6.s64 = ctx.r7.s64 + 8;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
loc_820B9144:
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm r6,r11,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820b91c8
	if (!ctx.cr6.eq) goto loc_820B91C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820b9124
	if (ctx.cr6.lt) goto loc_820B9124;
loc_820B9164:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B9168:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b91b0
	if (ctx.cr6.eq) goto loc_820B91B0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820b91b0
	if (ctx.cr6.eq) goto loc_820B91B0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820b91b0
	if (ctx.cr6.eq) goto loc_820B91B0;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// bl 0x821783b8
	ctx.lr = 0x820B91B0;
	sub_821783B8(ctx, base);
loc_820B91B0:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
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
loc_820B91C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820b9168
	goto loc_820B9168;
}

__attribute__((alias("__imp__sub_820B91D0"))) PPC_WEAK_FUNC(sub_820B91D0);
PPC_FUNC_IMPL(__imp__sub_820B91D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b91ec
	if (ctx.cr6.eq) goto loc_820B91EC;
loc_820B91DC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b91dc
	if (!ctx.cr6.eq) goto loc_820B91DC;
loc_820B91EC:
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9200
	if (ctx.cr6.eq) goto loc_820B9200;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// blr 
	return;
loc_820B9200:
	// b 0x820b90a0
	sub_820B90A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9204"))) PPC_WEAK_FUNC(sub_820B9204);
PPC_FUNC_IMPL(__imp__sub_820B9204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9208"))) PPC_WEAK_FUNC(sub_820B9208);
PPC_FUNC_IMPL(__imp__sub_820B9208) {
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
	// bl 0x823073b0
	ctx.lr = 0x820B9228;
	sub_823073B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9248
	if (ctx.cr6.eq) goto loc_820B9248;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b9248
	if (ctx.cr6.eq) goto loc_820B9248;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820B9248;
	sub_82080000(ctx, base);
loc_820B9248:
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

__attribute__((alias("__imp__sub_820B9264"))) PPC_WEAK_FUNC(sub_820B9264);
PPC_FUNC_IMPL(__imp__sub_820B9264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9268"))) PPC_WEAK_FUNC(sub_820B9268);
PPC_FUNC_IMPL(__imp__sub_820B9268) {
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
	// bl 0x82308a40
	ctx.lr = 0x820B9288;
	sub_82308A40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b92a8
	if (ctx.cr6.eq) goto loc_820B92A8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b92a8
	if (ctx.cr6.eq) goto loc_820B92A8;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82080000
	ctx.lr = 0x820B92A8;
	sub_82080000(ctx, base);
loc_820B92A8:
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

__attribute__((alias("__imp__sub_820B92C4"))) PPC_WEAK_FUNC(sub_820B92C4);
PPC_FUNC_IMPL(__imp__sub_820B92C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B92C8"))) PPC_WEAK_FUNC(sub_820B92C8);
PPC_FUNC_IMPL(__imp__sub_820B92C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B92D0"))) PPC_WEAK_FUNC(sub_820B92D0);
PPC_FUNC_IMPL(__imp__sub_820B92D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820B92D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B92F8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9370
	if (ctx.cr6.eq) goto loc_820B9370;
loc_820B9304:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// or r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 | ctx.r27.u64;
	// rlwinm r10,r30,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b9328
	if (ctx.cr6.eq) goto loc_820B9328;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b9328
	if (!ctx.cr6.eq) goto loc_820B9328;
	// rlwinm r30,r30,0,28,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_820B9328:
	// rlwinm r10,r30,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b9348
	if (!ctx.cr6.eq) goto loc_820B9348;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9348
	if (ctx.cr6.eq) goto loc_820B9348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e8090
	ctx.lr = 0x820B9348;
	sub_820E8090(ctx, base);
loc_820B9348:
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9364;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b9304
	if (!ctx.cr6.eq) goto loc_820B9304;
loc_820B9370:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9378"))) PPC_WEAK_FUNC(sub_820B9378);
PPC_FUNC_IMPL(__imp__sub_820B9378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820B9380;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B93A0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b941c
	if (ctx.cr6.eq) goto loc_820B941C;
	// not r27,r30
	ctx.r27.u64 = ~ctx.r30.u64;
loc_820B93B0:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// and r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 & ctx.r11.u64;
	// rlwinm r10,r30,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b93d4
	if (ctx.cr6.eq) goto loc_820B93D4;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b93d4
	if (!ctx.cr6.eq) goto loc_820B93D4;
	// rlwinm r30,r30,0,28,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_820B93D4:
	// rlwinm r10,r30,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b93f4
	if (!ctx.cr6.eq) goto loc_820B93F4;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b93f4
	if (ctx.cr6.eq) goto loc_820B93F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e8090
	ctx.lr = 0x820B93F4;
	sub_820E8090(ctx, base);
loc_820B93F4:
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9410;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b93b0
	if (!ctx.cr6.eq) goto loc_820B93B0;
loc_820B941C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9424"))) PPC_WEAK_FUNC(sub_820B9424);
PPC_FUNC_IMPL(__imp__sub_820B9424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9428"))) PPC_WEAK_FUNC(sub_820B9428);
PPC_FUNC_IMPL(__imp__sub_820B9428) {
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
	// bne cr6,0x820b9468
	if (!ctx.cr6.eq) goto loc_820B9468;
	// bl 0x820ddca8
	ctx.lr = 0x820B9450;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9460
	if (ctx.cr6.eq) goto loc_820B9460;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b9484
	goto loc_820B9484;
loc_820B9460:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b9484
	goto loc_820B9484;
loc_820B9468:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b94b0
	if (!ctx.cr6.eq) goto loc_820B94B0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b94f8
	if (ctx.cr6.eq) goto loc_820B94F8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B9484:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b94a0
	if (ctx.cr6.eq) goto loc_820B94A0;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-259
	ctx.r10.s64 = ctx.r10.s64 + -259;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B94A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b94d8
	if (ctx.cr6.eq) goto loc_820B94D8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b94d8
	goto loc_820B94D8;
loc_820B94B0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b94c0
	if (!ctx.cr6.eq) goto loc_820B94C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b94d8
	goto loc_820B94D8;
loc_820B94C0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B94D4;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B94D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b94f8
	if (ctx.cr6.eq) goto loc_820B94F8;
	// lwz r3,300(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
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
loc_820B94F8:
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

__attribute__((alias("__imp__sub_820B9510"))) PPC_WEAK_FUNC(sub_820B9510);
PPC_FUNC_IMPL(__imp__sub_820B9510) {
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
	// bl 0x82087078
	ctx.lr = 0x820B9528;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9540
	if (ctx.cr6.eq) goto loc_820B9540;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// or r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 | ctx.r31.u64;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// bl 0x82172d60
	ctx.lr = 0x820B9540;
	sub_82172D60(ctx, base);
loc_820B9540:
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

__attribute__((alias("__imp__sub_820B9554"))) PPC_WEAK_FUNC(sub_820B9554);
PPC_FUNC_IMPL(__imp__sub_820B9554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9558"))) PPC_WEAK_FUNC(sub_820B9558);
PPC_FUNC_IMPL(__imp__sub_820B9558) {
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
	// bl 0x82087078
	ctx.lr = 0x820B9570;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9588
	if (ctx.cr6.eq) goto loc_820B9588;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// andc r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// bl 0x82172d60
	ctx.lr = 0x820B9588;
	sub_82172D60(ctx, base);
loc_820B9588:
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

__attribute__((alias("__imp__sub_820B959C"))) PPC_WEAK_FUNC(sub_820B959C);
PPC_FUNC_IMPL(__imp__sub_820B959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B95A0"))) PPC_WEAK_FUNC(sub_820B95A0);
PPC_FUNC_IMPL(__imp__sub_820B95A0) {
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
	ctx.lr = 0x820B95B4;
	sub_82087078(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b95e0
	if (ctx.cr6.eq) goto loc_820B95E0;
	// lwz r31,76(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x82172d60
	ctx.lr = 0x820B95C8;
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
loc_820B95E0:
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
}

__attribute__((alias("__imp__sub_820B95F8"))) PPC_WEAK_FUNC(sub_820B95F8);
PPC_FUNC_IMPL(__imp__sub_820B95F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B9600;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82087078
	ctx.lr = 0x820B961C;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9648
	if (ctx.cr6.eq) goto loc_820B9648;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f31,320(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// stw r29,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r29.u32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// stw r31,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r31.u32);
	// stw r30,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r30.u32);
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// bl 0x82172d60
	ctx.lr = 0x820B9648;
	sub_82172D60(ctx, base);
loc_820B9648:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9654"))) PPC_WEAK_FUNC(sub_820B9654);
PPC_FUNC_IMPL(__imp__sub_820B9654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9658"))) PPC_WEAK_FUNC(sub_820B9658);
PPC_FUNC_IMPL(__imp__sub_820B9658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B9660;
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x82087078
	ctx.lr = 0x820B9684;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b96a4
	if (ctx.cr6.eq) goto loc_820B96A4;
	// stfs f31,320(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// stw r29,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r29.u32);
	// stfs f30,324(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// stw r31,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r31.u32);
	// stw r30,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r30.u32);
	// bl 0x82172d60
	ctx.lr = 0x820B96A4;
	sub_82172D60(ctx, base);
loc_820B96A4:
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

__attribute__((alias("__imp__sub_820B96B4"))) PPC_WEAK_FUNC(sub_820B96B4);
PPC_FUNC_IMPL(__imp__sub_820B96B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B96B8"))) PPC_WEAK_FUNC(sub_820B96B8);
PPC_FUNC_IMPL(__imp__sub_820B96B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820B96C0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B96E8;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b974c
	if (ctx.cr6.eq) goto loc_820B974C;
loc_820B96F4:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b9728
	if (!ctx.cr6.eq) goto loc_820B9728;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820b9728
	if (ctx.cr6.eq) goto loc_820B9728;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_820B9710:
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e8f70
	ctx.lr = 0x820B9720;
	sub_820E8F70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x820b9710
	if (!ctx.cr0.eq) goto loc_820B9710;
loc_820B9728:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9740;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b96f4
	if (!ctx.cr6.eq) goto loc_820B96F4;
loc_820B974C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9758"))) PPC_WEAK_FUNC(sub_820B9758);
PPC_FUNC_IMPL(__imp__sub_820B9758) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9788;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b981c
	if (ctx.cr6.eq) goto loc_820B981C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
loc_820B979C:
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820b97fc
	if (!ctx.cr6.gt) goto loc_820B97FC;
	// addi r9,r3,312
	ctx.r9.s64 = ctx.r3.s64 + 312;
loc_820B97B0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,132(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820b97e8
	if (ctx.cr6.eq) goto loc_820B97E8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b97e8
	if (ctx.cr6.eq) goto loc_820B97E8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b97e8
	if (ctx.cr6.eq) goto loc_820B97E8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-112
	ctx.r11.s64 = ctx.r10.s64 + -112;
loc_820B97E0:
	// stfsu f31,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	ea = 112 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820b97e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B97E0;
loc_820B97E8:
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820b97b0
	if (ctx.cr6.lt) goto loc_820B97B0;
loc_820B97FC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9814;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b979c
	if (!ctx.cr6.eq) goto loc_820B979C;
loc_820B981C:
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

__attribute__((alias("__imp__sub_820B9838"))) PPC_WEAK_FUNC(sub_820B9838);
PPC_FUNC_IMPL(__imp__sub_820B9838) {
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
	// bl 0x82087078
	ctx.lr = 0x820B9850;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9864
	if (ctx.cr6.eq) goto loc_820B9864;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82172488
	ctx.lr = 0x820B9860;
	sub_82172488(ctx, base);
	// bl 0x82172d60
	ctx.lr = 0x820B9864;
	sub_82172D60(ctx, base);
loc_820B9864:
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

__attribute__((alias("__imp__sub_820B9878"))) PPC_WEAK_FUNC(sub_820B9878);
PPC_FUNC_IMPL(__imp__sub_820B9878) {
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
	// bl 0x82087078
	ctx.lr = 0x820B9890;
	sub_82087078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b98a4
	if (ctx.cr6.eq) goto loc_820B98A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82172010
	ctx.lr = 0x820B98A0;
	sub_82172010(ctx, base);
	// bl 0x82172d60
	ctx.lr = 0x820B98A4;
	sub_82172D60(ctx, base);
loc_820B98A4:
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

__attribute__((alias("__imp__sub_820B98B8"))) PPC_WEAK_FUNC(sub_820B98B8);
PPC_FUNC_IMPL(__imp__sub_820B98B8) {
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
	// bne cr6,0x820b98f8
	if (!ctx.cr6.eq) goto loc_820B98F8;
	// bl 0x820ddca8
	ctx.lr = 0x820B98E0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b98f0
	if (ctx.cr6.eq) goto loc_820B98F0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b9914
	goto loc_820B9914;
loc_820B98F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b9914
	goto loc_820B9914;
loc_820B98F8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b9940
	if (!ctx.cr6.eq) goto loc_820B9940;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b9988
	if (ctx.cr6.eq) goto loc_820B9988;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B9914:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9930
	if (ctx.cr6.eq) goto loc_820B9930;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-259
	ctx.r10.s64 = ctx.r10.s64 + -259;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B9930:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b9968
	if (ctx.cr6.eq) goto loc_820B9968;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b9968
	goto loc_820B9968;
loc_820B9940:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b9950
	if (!ctx.cr6.eq) goto loc_820B9950;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b9968
	goto loc_820B9968;
loc_820B9950:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B9964;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B9968:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9988
	if (ctx.cr6.eq) goto loc_820B9988;
	// lwz r3,308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
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
loc_820B9988:
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

__attribute__((alias("__imp__sub_820B99A0"))) PPC_WEAK_FUNC(sub_820B99A0);
PPC_FUNC_IMPL(__imp__sub_820B99A0) {
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
	// bne cr6,0x820b99e8
	if (!ctx.cr6.eq) goto loc_820B99E8;
	// bl 0x820ddca8
	ctx.lr = 0x820B99D0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b99e0
	if (ctx.cr6.eq) goto loc_820B99E0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b9a04
	goto loc_820B9A04;
loc_820B99E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b9a04
	goto loc_820B9A04;
loc_820B99E8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b9a30
	if (!ctx.cr6.eq) goto loc_820B9A30;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b9a78
	if (ctx.cr6.eq) goto loc_820B9A78;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B9A04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9a20
	if (ctx.cr6.eq) goto loc_820B9A20;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-259
	ctx.r10.s64 = ctx.r10.s64 + -259;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B9A20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b9a58
	if (ctx.cr6.eq) goto loc_820B9A58;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b9a58
	goto loc_820B9A58;
loc_820B9A30:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b9a40
	if (!ctx.cr6.eq) goto loc_820B9A40;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b9a58
	goto loc_820B9A58;
loc_820B9A40:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B9A54;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B9A58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9a78
	if (ctx.cr6.eq) goto loc_820B9A78;
	// addi r10,r30,78
	ctx.r10.s64 = ctx.r30.s64 + 78;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x820b9a7c
	goto loc_820B9A7C;
loc_820B9A78:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820B9A7C:
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

__attribute__((alias("__imp__sub_820B9A94"))) PPC_WEAK_FUNC(sub_820B9A94);
PPC_FUNC_IMPL(__imp__sub_820B9A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9A98"))) PPC_WEAK_FUNC(sub_820B9A98);
PPC_FUNC_IMPL(__imp__sub_820B9A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B9AA0;
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b9adc
	if (!ctx.cr6.eq) goto loc_820B9ADC;
	// bl 0x820ddca8
	ctx.lr = 0x820B9AC4;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9ad4
	if (ctx.cr6.eq) goto loc_820B9AD4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b9af8
	goto loc_820B9AF8;
loc_820B9AD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b9af8
	goto loc_820B9AF8;
loc_820B9ADC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b9b24
	if (!ctx.cr6.eq) goto loc_820B9B24;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b9b64
	if (ctx.cr6.eq) goto loc_820B9B64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B9AF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9b14
	if (ctx.cr6.eq) goto loc_820B9B14;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-259
	ctx.r10.s64 = ctx.r10.s64 + -259;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B9B14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b9b4c
	if (ctx.cr6.eq) goto loc_820B9B4C;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b9b4c
	goto loc_820B9B4C;
loc_820B9B24:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b9b34
	if (!ctx.cr6.eq) goto loc_820B9B34;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b9b4c
	goto loc_820B9B4C;
loc_820B9B34:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B9B48;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B9B4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9b64
	if (ctx.cr6.eq) goto loc_820B9B64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820eb960
	ctx.lr = 0x820B9B64;
	sub_820EB960(ctx, base);
loc_820B9B64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9B6C"))) PPC_WEAK_FUNC(sub_820B9B6C);
PPC_FUNC_IMPL(__imp__sub_820B9B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9B70"))) PPC_WEAK_FUNC(sub_820B9B70);
PPC_FUNC_IMPL(__imp__sub_820B9B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820B9B78;
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
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9B9C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9bdc
	if (ctx.cr6.eq) goto loc_820B9BDC;
loc_820B9BA8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820eba78
	ctx.lr = 0x820B9BB8;
	sub_820EBA78(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9BD0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b9ba8
	if (!ctx.cr6.eq) goto loc_820B9BA8;
loc_820B9BDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9BE4"))) PPC_WEAK_FUNC(sub_820B9BE4);
PPC_FUNC_IMPL(__imp__sub_820B9BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9BE8"))) PPC_WEAK_FUNC(sub_820B9BE8);
PPC_FUNC_IMPL(__imp__sub_820B9BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B9BF0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9C14;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9c94
	if (ctx.cr6.eq) goto loc_820B9C94;
	// addi r11,r29,78
	ctx.r11.s64 = ctx.r29.s64 + 78;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
loc_820B9C30:
	// lwzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f13,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820b9c50
	if (ctx.cr6.gt) goto loc_820B9C50;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820B9C50:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// rlwinm r9,r10,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stfs f11,76(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x820ec6a8
	ctx.lr = 0x820B9C70;
	sub_820EC6A8(ctx, base);
	// bl 0x820ebc50
	ctx.lr = 0x820B9C74;
	sub_820EBC50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9C8C;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b9c30
	if (!ctx.cr6.eq) goto loc_820B9C30;
loc_820B9C94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9CA0"))) PPC_WEAK_FUNC(sub_820B9CA0);
PPC_FUNC_IMPL(__imp__sub_820B9CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820B9CA8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9CCC;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9d28
	if (ctx.cr6.eq) goto loc_820B9D28;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f31.f64 = double(temp.f32);
loc_820B9CE0:
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// addi r11,r3,284
	ctx.r11.s64 = ctx.r3.s64 + 284;
	// stw r31,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b9d08
	if (ctx.cr6.eq) goto loc_820B9D08;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,12(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
loc_820B9D08:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9D20;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b9ce0
	if (!ctx.cr6.eq) goto loc_820B9CE0;
loc_820B9D28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9D34"))) PPC_WEAK_FUNC(sub_820B9D34);
PPC_FUNC_IMPL(__imp__sub_820B9D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9D38"))) PPC_WEAK_FUNC(sub_820B9D38);
PPC_FUNC_IMPL(__imp__sub_820B9D38) {
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
	// bne cr6,0x820b9d78
	if (!ctx.cr6.eq) goto loc_820B9D78;
	// bl 0x820ddca8
	ctx.lr = 0x820B9D60;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9d70
	if (ctx.cr6.eq) goto loc_820B9D70;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820b9d94
	goto loc_820B9D94;
loc_820B9D70:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b9d94
	goto loc_820B9D94;
loc_820B9D78:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b9dc0
	if (!ctx.cr6.eq) goto loc_820B9DC0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b9e08
	if (ctx.cr6.eq) goto loc_820B9E08;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820B9D94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9db0
	if (ctx.cr6.eq) goto loc_820B9DB0;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-259
	ctx.r10.s64 = ctx.r10.s64 + -259;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820B9DB0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b9de8
	if (ctx.cr6.eq) goto loc_820B9DE8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820b9de8
	goto loc_820B9DE8;
loc_820B9DC0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820b9dd0
	if (!ctx.cr6.eq) goto loc_820B9DD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820b9de8
	goto loc_820B9DE8;
loc_820B9DD0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820B9DE4;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820B9DE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9e08
	if (ctx.cr6.eq) goto loc_820B9E08;
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
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
loc_820B9E08:
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

__attribute__((alias("__imp__sub_820B9E20"))) PPC_WEAK_FUNC(sub_820B9E20);
PPC_FUNC_IMPL(__imp__sub_820B9E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x820B9E28;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
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
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9E50;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b9ea0
	if (ctx.cr6.eq) goto loc_820B9EA0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820B9E68:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820eace0
	ctx.lr = 0x820B9E7C;
	sub_820EACE0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9E94;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b9e68
	if (!ctx.cr6.eq) goto loc_820B9E68;
loc_820B9EA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9EAC"))) PPC_WEAK_FUNC(sub_820B9EAC);
PPC_FUNC_IMPL(__imp__sub_820B9EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9EB0"))) PPC_WEAK_FUNC(sub_820B9EB0);
PPC_FUNC_IMPL(__imp__sub_820B9EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820B9EB8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820B9EDC;
	sub_82085870(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba018
	if (ctx.cr6.eq) goto loc_820BA018;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f31,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_820B9EF8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r28,412
	ctx.r31.s64 = ctx.r28.s64 + 412;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,448(r28)
	PPC_STORE_U32(ctx.r28.u32 + 448, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,452(r28)
	PPC_STORE_U32(ctx.r28.u32 + 452, ctx.r10.u32);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,456(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 456, temp.u32);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,460(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 460, temp.u32);
	// lfs f12,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,472(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 472, temp.u32);
	// lfs f11,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,476(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 476, temp.u32);
	// lfs f10,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,464(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 464, temp.u32);
	// lfs f9,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,468(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 468, temp.u32);
	// lfs f8,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,480(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + 480, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,412(r28)
	PPC_STORE_U32(ctx.r28.u32 + 412, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 416, ctx.r8.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,420(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 420, temp.u32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,424(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + 424, temp.u32);
	// lfs f5,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,436(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 436, temp.u32);
	// lfs f4,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,440(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 440, temp.u32);
	// lfs f3,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,428(r28)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r28.u32 + 428, temp.u32);
	// lfs f2,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,432(r28)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r28.u32 + 432, temp.u32);
	// lfs f1,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,444(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 444, temp.u32);
	// bl 0x820aeba8
	ctx.lr = 0x820B9F94;
	sub_820AEBA8(ctx, base);
	// lfs f0,476(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,468(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,484(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 484);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,460(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 460);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,440(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r7,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lfs f9,432(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,424(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,504(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 504);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,484(r28)
	PPC_STORE_U32(ctx.r28.u32 + 484, ctx.r11.u32);
	// stfs f31,492(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 492, temp.u32);
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
	// beq cr6,0x820b9fe4
	if (ctx.cr6.eq) goto loc_820B9FE4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x820b9fe8
	goto loc_820B9FE8;
loc_820B9FE4:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_820B9FE8:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822275c8
	ctx.lr = 0x820B9FF4;
	sub_822275C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82085870
	ctx.lr = 0x820BA00C;
	sub_82085870(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b9ef8
	if (!ctx.cr6.eq) goto loc_820B9EF8;
loc_820BA018:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA024"))) PPC_WEAK_FUNC(sub_820BA024);
PPC_FUNC_IMPL(__imp__sub_820BA024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA028"))) PPC_WEAK_FUNC(sub_820BA028);
PPC_FUNC_IMPL(__imp__sub_820BA028) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,259
	ctx.r6.s64 = 259;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820BA06C;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba0b4
	if (ctx.cr6.eq) goto loc_820BA0B4;
loc_820BA078:
	// lwz r11,484(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 484);
	// stfs f31,496(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 496, temp.u32);
	// stfs f30,500(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 500, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// stfs f29,504(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 504, temp.u32);
	// li r6,259
	ctx.r6.s64 = 259;
	// stw r10,484(r5)
	PPC_STORE_U32(ctx.r5.u32 + 484, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r5,412
	ctx.r11.s64 = ctx.r5.s64 + 412;
	// bl 0x82085870
	ctx.lr = 0x820BA0A8;
	sub_82085870(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ba078
	if (!ctx.cr6.eq) goto loc_820BA078;
loc_820BA0B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_820BA0D8"))) PPC_WEAK_FUNC(sub_820BA0D8);
PPC_FUNC_IMPL(__imp__sub_820BA0D8) {
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
	// bne cr6,0x820ba120
	if (!ctx.cr6.eq) goto loc_820BA120;
	// bl 0x820ddca8
	ctx.lr = 0x820BA108;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba118
	if (ctx.cr6.eq) goto loc_820BA118;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820ba13c
	goto loc_820BA13C;
loc_820BA118:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ba13c
	goto loc_820BA13C;
loc_820BA120:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ba168
	if (!ctx.cr6.eq) goto loc_820BA168;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ba1c0
	if (ctx.cr6.eq) goto loc_820BA1C0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BA13C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba158
	if (ctx.cr6.eq) goto loc_820BA158;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-259
	ctx.r10.s64 = ctx.r10.s64 + -259;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820BA158:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ba190
	if (ctx.cr6.eq) goto loc_820BA190;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820ba190
	goto loc_820BA190;
loc_820BA168:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820ba178
	if (!ctx.cr6.eq) goto loc_820BA178;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ba190
	goto loc_820BA190;
loc_820BA178:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BA18C;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820BA190:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba1c0
	if (ctx.cr6.eq) goto loc_820BA1C0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bge cr6,0x820ba1c4
	if (!ctx.cr6.lt) goto loc_820BA1C4;
	// addi r10,r30,131
	ctx.r10.s64 = ctx.r30.s64 + 131;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba1c4
	if (ctx.cr6.eq) goto loc_820BA1C4;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// b 0x820ba1c4
	goto loc_820BA1C4;
loc_820BA1C0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820BA1C4:
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

__attribute__((alias("__imp__sub_820BA1DC"))) PPC_WEAK_FUNC(sub_820BA1DC);
PPC_FUNC_IMPL(__imp__sub_820BA1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA1E0"))) PPC_WEAK_FUNC(sub_820BA1E0);
PPC_FUNC_IMPL(__imp__sub_820BA1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820BA1E8;
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
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820BA210;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba25c
	if (ctx.cr6.eq) goto loc_820BA25C;
loc_820BA21C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ebcb0
	ctx.lr = 0x820BA22C;
	sub_820EBCB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// or r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82085870
	ctx.lr = 0x820BA250;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ba21c
	if (!ctx.cr6.eq) goto loc_820BA21C;
loc_820BA25C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA268"))) PPC_WEAK_FUNC(sub_820BA268);
PPC_FUNC_IMPL(__imp__sub_820BA268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820BA270;
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ba2ac
	if (!ctx.cr6.eq) goto loc_820BA2AC;
	// bl 0x820ddca8
	ctx.lr = 0x820BA294;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba2a4
	if (ctx.cr6.eq) goto loc_820BA2A4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820ba2c8
	goto loc_820BA2C8;
loc_820BA2A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ba2c8
	goto loc_820BA2C8;
loc_820BA2AC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ba2f4
	if (!ctx.cr6.eq) goto loc_820BA2F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ba37c
	if (ctx.cr6.eq) goto loc_820BA37C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BA2C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba2e4
	if (ctx.cr6.eq) goto loc_820BA2E4;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-259
	ctx.r10.s64 = ctx.r10.s64 + -259;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820BA2E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ba31c
	if (ctx.cr6.eq) goto loc_820BA31C;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820ba31c
	goto loc_820BA31C;
loc_820BA2F4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820ba304
	if (!ctx.cr6.eq) goto loc_820BA304;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ba31c
	goto loc_820BA31C;
loc_820BA304:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BA318;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820BA31C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba37c
	if (ctx.cr6.eq) goto loc_820BA37C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820ba338
	if (!ctx.cr6.eq) goto loc_820BA338;
loc_820BA32C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820BA338:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// bge cr6,0x820ba32c
	if (!ctx.cr6.lt) goto loc_820BA32C;
	// addi r10,r30,131
	ctx.r10.s64 = ctx.r30.s64 + 131;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ba32c
	if (ctx.cr6.eq) goto loc_820BA32C;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BA370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820BA37C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA388"))) PPC_WEAK_FUNC(sub_820BA388);
PPC_FUNC_IMPL(__imp__sub_820BA388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x820BA390;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r24,r11,1
	ctx.r24.u64 = ctx.r11.u64 | 1;
	// lis r27,-32197
	ctx.r27.s64 = -2110062592;
	// ori r25,r10,6
	ctx.r25.u64 = ctx.r10.u64 | 6;
	// li r26,1
	ctx.r26.s64 = 1;
loc_820BA3C0:
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x820ba414
	if (!ctx.cr6.eq) goto loc_820BA414;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820ba4b4
	if (!ctx.cr6.eq) goto loc_820BA4B4;
	// lwz r3,-27096(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820BA3D8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ba3e4
	if (!ctx.cr6.eq) goto loc_820BA3E4;
	// bl 0x821b3000
	ctx.lr = 0x820BA3E4;
	sub_821B3000(ctx, base);
loc_820BA3E4:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ba40c
	if (ctx.cr6.eq) goto loc_820BA40C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba40c
	if (ctx.cr6.eq) goto loc_820BA40C;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820ba430
	goto loc_820BA430;
loc_820BA40C:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820ba430
	goto loc_820BA430;
loc_820BA414:
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x820ba45c
	if (!ctx.cr6.eq) goto loc_820BA45C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ba4b4
	if (ctx.cr6.eq) goto loc_820BA4B4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820ba4b4
	if (!ctx.cr6.eq) goto loc_820BA4B4;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BA430:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820ba44c
	if (ctx.cr6.eq) goto loc_820BA44C;
	// lwz r11,280(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 280);
	// addi r11,r11,-259
	ctx.r11.s64 = ctx.r11.s64 + -259;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 & ctx.r5.u64;
loc_820BA44C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ba484
	if (ctx.cr6.eq) goto loc_820BA484;
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// b 0x820ba484
	goto loc_820BA484;
loc_820BA45C:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820ba46c
	if (!ctx.cr6.eq) goto loc_820BA46C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820ba484
	goto loc_820BA484;
loc_820BA46C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BA480;
	sub_820F3178(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_820BA484:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820ba4b4
	if (ctx.cr6.eq) goto loc_820BA4B4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r10,652(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 652);
	// slw r9,r26,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r29.u8 & 0x3F));
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// andc r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 & ctx.r9.u64;
	// or r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 | ctx.r3.u64;
	// stw r11,652(r5)
	PPC_STORE_U32(ctx.r5.u32 + 652, ctx.r11.u32);
	// b 0x820ba3c0
	goto loc_820BA3C0;
loc_820BA4B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA4BC"))) PPC_WEAK_FUNC(sub_820BA4BC);
PPC_FUNC_IMPL(__imp__sub_820BA4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA4C0"))) PPC_WEAK_FUNC(sub_820BA4C0);
PPC_FUNC_IMPL(__imp__sub_820BA4C0) {
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
	// bne cr6,0x820ba508
	if (!ctx.cr6.eq) goto loc_820BA508;
	// bl 0x820ddca8
	ctx.lr = 0x820BA4F0;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba500
	if (ctx.cr6.eq) goto loc_820BA500;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820ba524
	goto loc_820BA524;
loc_820BA500:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ba524
	goto loc_820BA524;
loc_820BA508:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ba550
	if (!ctx.cr6.eq) goto loc_820BA550;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ba59c
	if (ctx.cr6.eq) goto loc_820BA59C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BA524:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba540
	if (ctx.cr6.eq) goto loc_820BA540;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-259
	ctx.r10.s64 = ctx.r10.s64 + -259;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820BA540:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ba578
	if (ctx.cr6.eq) goto loc_820BA578;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820ba578
	goto loc_820BA578;
loc_820BA550:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820ba560
	if (!ctx.cr6.eq) goto loc_820BA560;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ba578
	goto loc_820BA578;
loc_820BA560:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BA574;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820BA578:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba59c
	if (ctx.cr6.eq) goto loc_820BA59C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,652(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// slw r8,r10,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820ba5a0
	goto loc_820BA5A0;
loc_820BA59C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820BA5A0:
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

__attribute__((alias("__imp__sub_820BA5B8"))) PPC_WEAK_FUNC(sub_820BA5B8);
PPC_FUNC_IMPL(__imp__sub_820BA5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x820BA5C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82085870
	ctx.lr = 0x820BA5E0;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba628
	if (ctx.cr6.eq) goto loc_820BA628;
loc_820BA5EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ec480
	ctx.lr = 0x820BA5F8;
	sub_820EC480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ba634
	if (!ctx.cr6.eq) goto loc_820BA634;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085870
	ctx.lr = 0x820BA61C;
	sub_82085870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ba5ec
	if (!ctx.cr6.eq) goto loc_820BA5EC;
loc_820BA628:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_820BA634:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA640"))) PPC_WEAK_FUNC(sub_820BA640);
PPC_FUNC_IMPL(__imp__sub_820BA640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA650"))) PPC_WEAK_FUNC(sub_820BA650);
PPC_FUNC_IMPL(__imp__sub_820BA650) {
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
	// li r6,259
	ctx.r6.s64 = 259;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82085870
	ctx.lr = 0x820BA674;
	sub_82085870(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ba6a0
	if (ctx.cr6.eq) goto loc_820BA6A0;
	// addi r11,r31,78
	ctx.r11.s64 = ctx.r31.s64 + 78;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lfs f1,240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
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
loc_820BA6A0:
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

__attribute__((alias("__imp__sub_820BA6C0"))) PPC_WEAK_FUNC(sub_820BA6C0);
PPC_FUNC_IMPL(__imp__sub_820BA6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x820BA6C8;
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
loc_820BA6F8:
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x820ba74c
	if (!ctx.cr6.eq) goto loc_820BA74C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ba7e4
	if (!ctx.cr6.eq) goto loc_820BA7E4;
	// lwz r3,-27096(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27096);
	// bl 0x82388734
	ctx.lr = 0x820BA710;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ba71c
	if (!ctx.cr6.eq) goto loc_820BA71C;
	// bl 0x821b3000
	ctx.lr = 0x820BA71C;
	sub_821B3000(ctx, base);
loc_820BA71C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ba744
	if (ctx.cr6.eq) goto loc_820BA744;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba744
	if (ctx.cr6.eq) goto loc_820BA744;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820ba768
	goto loc_820BA768;
loc_820BA744:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ba768
	goto loc_820BA768;
loc_820BA74C:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820ba794
	if (!ctx.cr6.eq) goto loc_820BA794;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ba7e4
	if (ctx.cr6.eq) goto loc_820BA7E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ba7e4
	if (!ctx.cr6.eq) goto loc_820BA7E4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BA768:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba784
	if (ctx.cr6.eq) goto loc_820BA784;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// addi r10,r10,-259
	ctx.r10.s64 = ctx.r10.s64 + -259;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_820BA784:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ba7c0
	if (ctx.cr6.eq) goto loc_820BA7C0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x820ba7c0
	goto loc_820BA7C0;
loc_820BA794:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820ba7a4
	if (!ctx.cr6.eq) goto loc_820BA7A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ba7c0
	goto loc_820BA7C0;
loc_820BA7A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,259
	ctx.r6.s64 = 259;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BA7BC;
	sub_820F3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820BA7C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ba7e4
	if (ctx.cr6.eq) goto loc_820BA7E4;
	// addi r10,r28,78
	ctx.r10.s64 = ctx.r28.s64 + 78;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ba6f8
	if (ctx.cr6.eq) goto loc_820BA6F8;
	// stfs f31,240(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 240, temp.u32);
	// b 0x820ba6f8
	goto loc_820BA6F8;
loc_820BA7E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA7F0"))) PPC_WEAK_FUNC(sub_820BA7F0);
PPC_FUNC_IMPL(__imp__sub_820BA7F0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820BA7F8;
	__savegprlr_14(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-27952
	ctx.r11.s64 = ctx.r11.s64 + -27952;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// addi r10,r10,-27784
	ctx.r10.s64 = ctx.r10.s64 + -27784;
	// addi r9,r9,-27608
	ctx.r9.s64 = ctx.r9.s64 + -27608;
	// addi r8,r8,-27376
	ctx.r8.s64 = ctx.r8.s64 + -27376;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r7,r7,-27304
	ctx.r7.s64 = ctx.r7.s64 + -27304;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r6,r6,-27232
	ctx.r6.s64 = ctx.r6.s64 + -27232;
	// addi r5,r5,-26952
	ctx.r5.s64 = ctx.r5.s64 + -26952;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r4,r4,-26792
	ctx.r4.s64 = ctx.r4.s64 + -26792;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// addi r11,r31,-26568
	ctx.r11.s64 = ctx.r31.s64 + -26568;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r27,-32244
	ctx.r27.s64 = -2113142784;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// lis r25,-32244
	ctx.r25.s64 = -2113142784;
	// lis r24,-32244
	ctx.r24.s64 = -2113142784;
	// lis r23,-32244
	ctx.r23.s64 = -2113142784;
	// addi r10,r30,-26504
	ctx.r10.s64 = ctx.r30.s64 + -26504;
	// addi r9,r29,-26440
	ctx.r9.s64 = ctx.r29.s64 + -26440;
	// addi r8,r28,-26208
	ctx.r8.s64 = ctx.r28.s64 + -26208;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lis r22,-32244
	ctx.r22.s64 = -2113142784;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// addi r7,r27,-25960
	ctx.r7.s64 = ctx.r27.s64 + -25960;
	// addi r6,r26,-25744
	ctx.r6.s64 = ctx.r26.s64 + -25744;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,-25440
	ctx.r5.s64 = ctx.r25.s64 + -25440;
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// addi r4,r24,-25288
	ctx.r4.s64 = ctx.r24.s64 + -25288;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// addi r11,r23,-25056
	ctx.r11.s64 = ctx.r23.s64 + -25056;
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// lis r20,-32244
	ctx.r20.s64 = -2113142784;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lis r19,-32226
	ctx.r19.s64 = -2111963136;
	// lis r18,-32244
	ctx.r18.s64 = -2113142784;
	// lis r17,-32244
	ctx.r17.s64 = -2113142784;
	// lis r16,-32244
	ctx.r16.s64 = -2113142784;
	// lis r15,-32244
	ctx.r15.s64 = -2113142784;
	// addi r10,r22,-24912
	ctx.r10.s64 = ctx.r22.s64 + -24912;
	// addi r9,r21,-25624
	ctx.r9.s64 = ctx.r21.s64 + -25624;
	// addi r8,r20,-22976
	ctx.r8.s64 = ctx.r20.s64 + -22976;
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,-21912
	ctx.r7.s64 = ctx.r19.s64 + -21912;
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// addi r6,r18,-22960
	ctx.r6.s64 = ctx.r18.s64 + -22960;
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// addi r5,r17,-22848
	ctx.r5.s64 = ctx.r17.s64 + -22848;
	// stw r7,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// addi r4,r16,-24360
	ctx.r4.s64 = ctx.r16.s64 + -24360;
	// stw r6,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r6.u32);
	// addi r11,r15,-24096
	ctx.r11.s64 = ctx.r15.s64 + -24096;
	// stw r5,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r5.u32);
	// addi r9,r10,-23960
	ctx.r9.s64 = ctx.r10.s64 + -23960;
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// addi r8,r14,-23672
	ctx.r8.s64 = ctx.r14.s64 + -23672;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r7,-23360
	ctx.r10.s64 = ctx.r7.s64 + -23360;
	// addi r9,r6,-24536
	ctx.r9.s64 = ctx.r6.s64 + -24536;
	// addi r8,r5,-23112
	ctx.r8.s64 = ctx.r5.s64 + -23112;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// addi r7,r4,-27144
	ctx.r7.s64 = ctx.r4.s64 + -27144;
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// addi r6,r11,-27048
	ctx.r6.s64 = ctx.r11.s64 + -27048;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// stw r7,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r7.u32);
	// stw r6,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r6.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA984"))) PPC_WEAK_FUNC(sub_820BA984);
PPC_FUNC_IMPL(__imp__sub_820BA984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA988"))) PPC_WEAK_FUNC(sub_820BA988);
PPC_FUNC_IMPL(__imp__sub_820BA988) {
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
	// addi r31,r3,412
	ctx.r31.s64 = ctx.r3.s64 + 412;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820aeb10
	ctx.lr = 0x820BA9AC;
	sub_820AEB10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820aeba8
	ctx.lr = 0x820BA9B4;
	sub_820AEBA8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,504(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820aec50
	ctx.lr = 0x820BA9C4;
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

__attribute__((alias("__imp__sub_820BA9DC"))) PPC_WEAK_FUNC(sub_820BA9DC);
PPC_FUNC_IMPL(__imp__sub_820BA9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA9E0"))) PPC_WEAK_FUNC(sub_820BA9E0);
PPC_FUNC_IMPL(__imp__sub_820BA9E0) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,22200
	ctx.r31.s64 = ctx.r11.s64 + 22200;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r3,r31,141
	ctx.r3.s64 = ctx.r31.s64 + 141;
	// bl 0x8233c048
	ctx.lr = 0x820BAA08;
	sub_8233C048(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_820BAA24"))) PPC_WEAK_FUNC(sub_820BAA24);
PPC_FUNC_IMPL(__imp__sub_820BAA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAA28"))) PPC_WEAK_FUNC(sub_820BAA28);
PPC_FUNC_IMPL(__imp__sub_820BAA28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// stb r11,968(r9)
	PPC_STORE_U8(ctx.r9.u32 + 968, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAA3C"))) PPC_WEAK_FUNC(sub_820BAA3C);
PPC_FUNC_IMPL(__imp__sub_820BAA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAA40"))) PPC_WEAK_FUNC(sub_820BAA40);
PPC_FUNC_IMPL(__imp__sub_820BAA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r3,984(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAA50"))) PPC_WEAK_FUNC(sub_820BAA50);
PPC_FUNC_IMPL(__imp__sub_820BAA50) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820baa94
	if (!ctx.cr6.eq) goto loc_820BAA94;
	// bl 0x820ddca8
	ctx.lr = 0x820BAA7C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820baa8c
	if (ctx.cr6.eq) goto loc_820BAA8C;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820baab0
	goto loc_820BAAB0;
loc_820BAA8C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820baab0
	goto loc_820BAAB0;
loc_820BAA94:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820baac0
	if (!ctx.cr6.eq) goto loc_820BAAC0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bab0c
	if (ctx.cr6.eq) goto loc_820BAB0C;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820BAAB0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820baae0
	if (ctx.cr6.eq) goto loc_820BAAE0;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820baae0
	goto loc_820BAAE0;
loc_820BAAC0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bab0c
	if (ctx.cr6.eq) goto loc_820BAB0C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BAADC;
	sub_820F3178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820BAAE0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bab0c
	if (ctx.cr6.eq) goto loc_820BAB0C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820bab00
	if (!ctx.cr6.eq) goto loc_820BAB00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820BAAFC;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820BAB00:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// stw r11,-8820(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8820, ctx.r11.u32);
loc_820BAB0C:
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

__attribute__((alias("__imp__sub_820BAB24"))) PPC_WEAK_FUNC(sub_820BAB24);
PPC_FUNC_IMPL(__imp__sub_820BAB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAB28"))) PPC_WEAK_FUNC(sub_820BAB28);
PPC_FUNC_IMPL(__imp__sub_820BAB28) {
	PPC_FUNC_PROLOGUE();
	// b 0x821b1ea0
	sub_821B1EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BAB2C"))) PPC_WEAK_FUNC(sub_820BAB2C);
PPC_FUNC_IMPL(__imp__sub_820BAB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAB30"))) PPC_WEAK_FUNC(sub_820BAB30);
PPC_FUNC_IMPL(__imp__sub_820BAB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAB40"))) PPC_WEAK_FUNC(sub_820BAB40);
PPC_FUNC_IMPL(__imp__sub_820BAB40) {
	PPC_FUNC_PROLOGUE();
	// b 0x821b27c8
	sub_821B27C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BAB44"))) PPC_WEAK_FUNC(sub_820BAB44);
PPC_FUNC_IMPL(__imp__sub_820BAB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAB48"))) PPC_WEAK_FUNC(sub_820BAB48);
PPC_FUNC_IMPL(__imp__sub_820BAB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lwz r3,1500(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1500);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAB58"))) PPC_WEAK_FUNC(sub_820BAB58);
PPC_FUNC_IMPL(__imp__sub_820BAB58) {
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
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820baba4
	if (!ctx.cr6.eq) goto loc_820BABA4;
	// bl 0x820ddca8
	ctx.lr = 0x820BAB8C;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bab9c
	if (ctx.cr6.eq) goto loc_820BAB9C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820babd8
	goto loc_820BABD8;
loc_820BAB9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820babd8
	goto loc_820BABD8;
loc_820BABA4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820babf8
	if (!ctx.cr6.eq) goto loc_820BABF8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820babd4
	if (!ctx.cr6.eq) goto loc_820BABD4;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// stw r30,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r30.u32);
	// stw r11,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r11.u32);
	// b 0x820bac2c
	goto loc_820BAC2C;
loc_820BABD4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_820BABD8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820babe4
	if (ctx.cr6.eq) goto loc_820BABE4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_820BABE4:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r9,r10,22200
	ctx.r9.s64 = ctx.r10.s64 + 22200;
	// stw r30,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r30.u32);
	// stw r11,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r11.u32);
	// b 0x820bac2c
	goto loc_820BAC2C;
loc_820BABF8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820bac08
	if (!ctx.cr6.eq) goto loc_820BAC08;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bac1c
	goto loc_820BAC1C;
loc_820BAC08:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BAC1C;
	sub_820F3178(ctx, base);
loc_820BAC1C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// stw r30,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r30.u32);
	// stw r3,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r3.u32);
loc_820BAC2C:
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

__attribute__((alias("__imp__sub_820BAC44"))) PPC_WEAK_FUNC(sub_820BAC44);
PPC_FUNC_IMPL(__imp__sub_820BAC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAC48"))) PPC_WEAK_FUNC(sub_820BAC48);
PPC_FUNC_IMPL(__imp__sub_820BAC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,26188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAC64"))) PPC_WEAK_FUNC(sub_820BAC64);
PPC_FUNC_IMPL(__imp__sub_820BAC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAC68"))) PPC_WEAK_FUNC(sub_820BAC68);
PPC_FUNC_IMPL(__imp__sub_820BAC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,26184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26184);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,26180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26180);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAC84"))) PPC_WEAK_FUNC(sub_820BAC84);
PPC_FUNC_IMPL(__imp__sub_820BAC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAC88"))) PPC_WEAK_FUNC(sub_820BAC88);
PPC_FUNC_IMPL(__imp__sub_820BAC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x820bad30
	if (ctx.cr6.gt) goto loc_820BAD30;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820bacd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BACD8;
	// bdzf 4*cr6+eq,0x820bace8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BACE8;
	// bne cr6,0x820bad18
	if (!ctx.cr6.eq) goto loc_820BAD18;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,22200
	ctx.r9.s64 = ctx.r11.s64 + 22200;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// lfs f0,980(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f13,252(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820bacd0
	if (!ctx.cr6.gt) goto loc_820BACD0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820BACD0:
	// fmuls f1,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
loc_820BACD8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lfs f1,980(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820BACE8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,22200
	ctx.r9.s64 = ctx.r11.s64 + 22200;
	// addi r8,r10,31376
	ctx.r8.s64 = ctx.r10.s64 + 31376;
	// lfs f0,980(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,252(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_820BAD18:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lfs f0,980(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
loc_820BAD30:
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

__attribute__((alias("__imp__sub_820BAD40"))) PPC_WEAK_FUNC(sub_820BAD40);
PPC_FUNC_IMPL(__imp__sub_820BAD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r10,r11,31376
	ctx.r10.s64 = ctx.r11.s64 + 31376;
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// stfs f1,28(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAD7C"))) PPC_WEAK_FUNC(sub_820BAD7C);
PPC_FUNC_IMPL(__imp__sub_820BAD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAD80"))) PPC_WEAK_FUNC(sub_820BAD80);
PPC_FUNC_IMPL(__imp__sub_820BAD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// lfs f1,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAD90"))) PPC_WEAK_FUNC(sub_820BAD90);
PPC_FUNC_IMPL(__imp__sub_820BAD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// stw r3,1040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1040, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BADA0"))) PPC_WEAK_FUNC(sub_820BADA0);
PPC_FUNC_IMPL(__imp__sub_820BADA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-17344
	ctx.r10.s64 = ctx.r11.s64 + -17344;
	// lwz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BADC4"))) PPC_WEAK_FUNC(sub_820BADC4);
PPC_FUNC_IMPL(__imp__sub_820BADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BADC8"))) PPC_WEAK_FUNC(sub_820BADC8);
PPC_FUNC_IMPL(__imp__sub_820BADC8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82247340
	ctx.lr = 0x820BADDC;
	sub_82247340(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BADF0"))) PPC_WEAK_FUNC(sub_820BADF0);
PPC_FUNC_IMPL(__imp__sub_820BADF0) {
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
	// bl 0x823413b0
	ctx.lr = 0x820BAE00;
	sub_823413B0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lfs f0,-27088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27088);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAE20"))) PPC_WEAK_FUNC(sub_820BAE20);
PPC_FUNC_IMPL(__imp__sub_820BAE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,22200
	ctx.r10.s64 = ctx.r11.s64 + 22200;
	// stb r3,972(r10)
	PPC_STORE_U8(ctx.r10.u32 + 972, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAE30"))) PPC_WEAK_FUNC(sub_820BAE30);
PPC_FUNC_IMPL(__imp__sub_820BAE30) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x820BAE38;
	__savegprlr_18(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// addi r11,r11,-21976
	ctx.r11.s64 = ctx.r11.s64 + -21976;
	// addi r10,r10,-21952
	ctx.r10.s64 = ctx.r10.s64 + -21952;
	// addi r9,r9,-21936
	ctx.r9.s64 = ctx.r9.s64 + -21936;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r8,r8,-21720
	ctx.r8.s64 = ctx.r8.s64 + -21720;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r7,r7,-21672
	ctx.r7.s64 = ctx.r7.s64 + -21672;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r6,r6,-21712
	ctx.r6.s64 = ctx.r6.s64 + -21712;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// lis r29,-32226
	ctx.r29.s64 = -2111963136;
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// lis r27,-32226
	ctx.r27.s64 = -2111963136;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// addi r5,r5,-21688
	ctx.r5.s64 = ctx.r5.s64 + -21688;
	// addi r4,r4,-21696
	ctx.r4.s64 = ctx.r4.s64 + -21696;
	// addi r11,r31,-21432
	ctx.r11.s64 = ctx.r31.s64 + -21432;
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// addi r10,r30,-21400
	ctx.r10.s64 = ctx.r30.s64 + -21400;
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// addi r9,r29,-21912
	ctx.r9.s64 = ctx.r29.s64 + -21912;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r8,r28,-21368
	ctx.r8.s64 = ctx.r28.s64 + -21368;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// addi r7,r27,-21912
	ctx.r7.s64 = ctx.r27.s64 + -21912;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// addi r6,r26,-22048
	ctx.r6.s64 = ctx.r26.s64 + -22048;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// lis r25,-32244
	ctx.r25.s64 = -2113142784;
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lis r24,-32244
	ctx.r24.s64 = -2113142784;
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// lis r23,-32242
	ctx.r23.s64 = -2113011712;
	// lis r22,-32244
	ctx.r22.s64 = -2113142784;
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// lis r20,-32244
	ctx.r20.s64 = -2113142784;
	// lis r19,-32244
	ctx.r19.s64 = -2113142784;
	// lis r18,-32244
	ctx.r18.s64 = -2113142784;
	// addi r5,r25,-21184
	ctx.r5.s64 = ctx.r25.s64 + -21184;
	// addi r4,r24,-21120
	ctx.r4.s64 = ctx.r24.s64 + -21120;
	// addi r11,r23,-6736
	ctx.r11.s64 = ctx.r23.s64 + -6736;
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// addi r10,r22,-21104
	ctx.r10.s64 = ctx.r22.s64 + -21104;
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// addi r9,r21,-21088
	ctx.r9.s64 = ctx.r21.s64 + -21088;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// addi r8,r20,-21048
	ctx.r8.s64 = ctx.r20.s64 + -21048;
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// addi r7,r19,-21008
	ctx.r7.s64 = ctx.r19.s64 + -21008;
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// addi r6,r18,-20960
	ctx.r6.s64 = ctx.r18.s64 + -20960;
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BAF44"))) PPC_WEAK_FUNC(sub_820BAF44);
PPC_FUNC_IMPL(__imp__sub_820BAF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAF48"))) PPC_WEAK_FUNC(sub_820BAF48);
PPC_FUNC_IMPL(__imp__sub_820BAF48) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bafc0
	if (!ctx.cr6.lt) goto loc_820BAFC0;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bafc0
	if (ctx.cr6.eq) goto loc_820BAFC0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bafc0
	if (!ctx.cr6.lt) goto loc_820BAFC0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bafc0
	if (ctx.cr6.eq) goto loc_820BAFC0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bafc0
	if (ctx.cr6.eq) goto loc_820BAFC0;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820bafc0
	if (!ctx.cr6.lt) goto loc_820BAFC0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mulli r11,r4,960
	ctx.r11.s64 = ctx.r4.s64 * 960;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_820BAFC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAFC8"))) PPC_WEAK_FUNC(sub_820BAFC8);
PPC_FUNC_IMPL(__imp__sub_820BAFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820BAFD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-29208
	ctx.r9.s64 = ctx.r11.s64 + -29208;
	// ori r8,r10,49172
	ctx.r8.u64 = ctx.r10.u64 | 49172;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r6,r7,49168
	ctx.r6.u64 = ctx.r7.u64 | 49168;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// divwu r5,r3,r11
	ctx.r5.u32 = ctx.r3.u32 / ctx.r11.u32;
	// twllei r11,0
	// lwzx r10,r9,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f63e0
	ctx.lr = 0x820BB024;
	sub_820F63E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x820bb050
	if (ctx.cr6.eq) goto loc_820BB050;
loc_820BB030:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820bb04c
	if (ctx.cr6.eq) goto loc_820BB04C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820bb030
	if (!ctx.cr6.eq) goto loc_820BB030;
	// b 0x820bb050
	goto loc_820BB050;
loc_820BB04C:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_820BB050:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x820bb06c
	if (ctx.cr6.eq) goto loc_820BB06C;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_820BB06C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BB078"))) PPC_WEAK_FUNC(sub_820BB078);
PPC_FUNC_IMPL(__imp__sub_820BB078) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bb0b4
	if (!ctx.cr6.lt) goto loc_820BB0B4;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb0c4
	if (!ctx.cr6.eq) goto loc_820BB0C4;
loc_820BB0B4:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x820bb0c8
	goto loc_820BB0C8;
loc_820BB0C4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BB0C8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bb0e0
	if (ctx.cr6.eq) goto loc_820BB0E0;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821ae6c8
	ctx.lr = 0x820BB0E0;
	sub_821AE6C8(ctx, base);
loc_820BB0E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB0F0"))) PPC_WEAK_FUNC(sub_820BB0F0);
PPC_FUNC_IMPL(__imp__sub_820BB0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bb11c
	if (!ctx.cr6.lt) goto loc_820BB11C;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb128
	if (!ctx.cr6.eq) goto loc_820BB128;
loc_820BB11C:
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bb168
	goto loc_820BB168;
loc_820BB128:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bb158
	if (!ctx.cr6.lt) goto loc_820BB158;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb158
	if (ctx.cr6.eq) goto loc_820BB158;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb164
	if (!ctx.cr6.eq) goto loc_820BB164;
loc_820BB158:
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bb168
	goto loc_820BB168;
loc_820BB164:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BB168:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r1,-36
	ctx.r10.s64 = ctx.r1.s64 + -36;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820BB188:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820bb188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BB188;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,-36
	ctx.r11.s64 = ctx.r1.s64 + -36;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820BB1A4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820bb1a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BB1A4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB1B4"))) PPC_WEAK_FUNC(sub_820BB1B4);
PPC_FUNC_IMPL(__imp__sub_820BB1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB1B8"))) PPC_WEAK_FUNC(sub_820BB1B8);
PPC_FUNC_IMPL(__imp__sub_820BB1B8) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bb1f0
	if (!ctx.cr6.lt) goto loc_820BB1F0;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb200
	if (!ctx.cr6.eq) goto loc_820BB200;
loc_820BB1F0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x820bb204
	goto loc_820BB204;
loc_820BB200:
	// li r9,1
	ctx.r9.s64 = 1;
loc_820BB204:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bb254
	if (ctx.cr6.eq) goto loc_820BB254;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bb24c
	if (ctx.cr6.eq) goto loc_820BB24C;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bb24c
	if (!ctx.cr6.lt) goto loc_820BB24C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bb24c
	if (ctx.cr6.eq) goto loc_820BB24C;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bb24c
	if (ctx.cr6.eq) goto loc_820BB24C;
	// stw r4,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
loc_820BB24C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821adf50
	ctx.lr = 0x820BB254;
	sub_821ADF50(ctx, base);
loc_820BB254:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB264"))) PPC_WEAK_FUNC(sub_820BB264);
PPC_FUNC_IMPL(__imp__sub_820BB264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB268"))) PPC_WEAK_FUNC(sub_820BB268);
PPC_FUNC_IMPL(__imp__sub_820BB268) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bb2a0
	if (!ctx.cr6.lt) goto loc_820BB2A0;
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
	// bne cr6,0x820bb2b0
	if (!ctx.cr6.eq) goto loc_820BB2B0;
loc_820BB2A0:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x820bb2b8
	goto loc_820BB2B8;
loc_820BB2B0:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BB2B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb2d8
	if (!ctx.cr6.eq) goto loc_820BB2D8;
loc_820BB2C4:
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
loc_820BB2D8:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x821aca90
	ctx.lr = 0x820BB2E0;
	sub_821ACA90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bb2c4
	if (ctx.cr6.eq) goto loc_820BB2C4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820bb324
	if (!ctx.cr6.lt) goto loc_820BB324;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb324
	if (ctx.cr6.eq) goto loc_820BB324;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BB324:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB33C"))) PPC_WEAK_FUNC(sub_820BB33C);
PPC_FUNC_IMPL(__imp__sub_820BB33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB340"))) PPC_WEAK_FUNC(sub_820BB340);
PPC_FUNC_IMPL(__imp__sub_820BB340) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bb378
	if (!ctx.cr6.lt) goto loc_820BB378;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb380
	if (!ctx.cr6.eq) goto loc_820BB380;
loc_820BB378:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820bb3c0
	goto loc_820BB3C0;
loc_820BB380:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bb3b0
	if (!ctx.cr6.lt) goto loc_820BB3B0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb3b0
	if (ctx.cr6.eq) goto loc_820BB3B0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb3b8
	if (!ctx.cr6.eq) goto loc_820BB3B8;
loc_820BB3B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820bb3c0
	goto loc_820BB3C0;
loc_820BB3B8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BB3C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb3e0
	if (!ctx.cr6.eq) goto loc_820BB3E0;
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
loc_820BB3E0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// bl 0x82108b08
	ctx.lr = 0x820BB3EC;
	sub_82108B08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB3FC"))) PPC_WEAK_FUNC(sub_820BB3FC);
PPC_FUNC_IMPL(__imp__sub_820BB3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB400"))) PPC_WEAK_FUNC(sub_820BB400);
PPC_FUNC_IMPL(__imp__sub_820BB400) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bb42c
	if (!ctx.cr6.lt) goto loc_820BB42C;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb438
	if (!ctx.cr6.eq) goto loc_820BB438;
loc_820BB42C:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bb478
	goto loc_820BB478;
loc_820BB438:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bb468
	if (!ctx.cr6.lt) goto loc_820BB468;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb468
	if (ctx.cr6.eq) goto loc_820BB468;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb474
	if (!ctx.cr6.eq) goto loc_820BB474;
loc_820BB468:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bb478
	goto loc_820BB478;
loc_820BB474:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BB478:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rlwimi r9,r5,7,17,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 7) & 0x7F80) | (ctx.r9.u64 & 0xFFFFFFFFFFFF807F);
	// stb r9,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB4B8"))) PPC_WEAK_FUNC(sub_820BB4B8);
PPC_FUNC_IMPL(__imp__sub_820BB4B8) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bb4e4
	if (!ctx.cr6.lt) goto loc_820BB4E4;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb4f0
	if (!ctx.cr6.eq) goto loc_820BB4F0;
loc_820BB4E4:
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820bb534
	goto loc_820BB534;
loc_820BB4F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bb520
	if (!ctx.cr6.lt) goto loc_820BB520;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb520
	if (ctx.cr6.eq) goto loc_820BB520;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb52c
	if (!ctx.cr6.eq) goto loc_820BB52C;
loc_820BB520:
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820bb534
	goto loc_820BB534;
loc_820BB52C:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BB534:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,84(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,80(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// mulli r10,r4,960
	ctx.r10.s64 = ctx.r4.s64 * 960;
	// mulli r9,r5,960
	ctx.r9.s64 = ctx.r5.s64 * 960;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,328(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 328);
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r5,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB5C0"))) PPC_WEAK_FUNC(sub_820BB5C0);
PPC_FUNC_IMPL(__imp__sub_820BB5C0) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bb5ec
	if (!ctx.cr6.lt) goto loc_820BB5EC;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-29208
	ctx.r11.s64 = ctx.r10.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb5f8
	if (!ctx.cr6.eq) goto loc_820BB5F8;
loc_820BB5EC:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bb638
	goto loc_820BB638;
loc_820BB5F8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820bb628
	if (!ctx.cr6.lt) goto loc_820BB628;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb628
	if (ctx.cr6.eq) goto loc_820BB628;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb634
	if (!ctx.cr6.eq) goto loc_820BB634;
loc_820BB628:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bb638
	goto loc_820BB638;
loc_820BB634:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BB638:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB650"))) PPC_WEAK_FUNC(sub_820BB650);
PPC_FUNC_IMPL(__imp__sub_820BB650) {
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
	// bl 0x820baf48
	ctx.lr = 0x820BB660;
	sub_820BAF48(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r9,4323
	ctx.r7.s64 = ctx.r9.s64 + 4323;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB684"))) PPC_WEAK_FUNC(sub_820BB684);
PPC_FUNC_IMPL(__imp__sub_820BB684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB688"))) PPC_WEAK_FUNC(sub_820BB688);
PPC_FUNC_IMPL(__imp__sub_820BB688) {
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
	// bl 0x820baf48
	ctx.lr = 0x820BB698;
	sub_820BAF48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bb6d0
	if (ctx.cr6.eq) goto loc_820BB6D0;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bb6c8
	if (ctx.cr6.eq) goto loc_820BB6C8;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820BB6C8:
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_820BB6D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB6E0"))) PPC_WEAK_FUNC(sub_820BB6E0);
PPC_FUNC_IMPL(__imp__sub_820BB6E0) {
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
	// bl 0x820baf48
	ctx.lr = 0x820BB6F8;
	sub_820BAF48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bb718
	if (!ctx.cr6.eq) goto loc_820BB718;
loc_820BB700:
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
loc_820BB718:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x82108b08
	ctx.lr = 0x820BB724;
	sub_82108B08(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bb700
	if (ctx.cr6.eq) goto loc_820BB700;
	// rlwinm r11,r31,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
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

__attribute__((alias("__imp__sub_820BB748"))) PPC_WEAK_FUNC(sub_820BB748);
PPC_FUNC_IMPL(__imp__sub_820BB748) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bb78c
	if (!ctx.cr6.lt) goto loc_820BB78C;
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r8,-29208
	ctx.r11.s64 = ctx.r8.s64 + -29208;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb798
	if (!ctx.cr6.eq) goto loc_820BB798;
loc_820BB78C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820bb7dc
	goto loc_820BB7DC;
loc_820BB798:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x820bb7c8
	if (!ctx.cr6.lt) goto loc_820BB7C8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb7c8
	if (ctx.cr6.eq) goto loc_820BB7C8;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb7d4
	if (!ctx.cr6.eq) goto loc_820BB7D4;
loc_820BB7C8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820bb7dc
	goto loc_820BB7DC;
loc_820BB7D4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BB7DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb84c
	if (ctx.cr6.eq) goto loc_820BB84C;
	// srawi r30,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 16;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820bb7f8
	if (!ctx.cr6.eq) goto loc_820BB7F8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_820BB7F8:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820bb84c
	if (!ctx.cr6.lt) goto loc_820BB84C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820bb84c
	if (!ctx.cr6.lt) goto loc_820BB84C;
	// lwz r31,80(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mulli r11,r30,960
	ctx.r11.s64 = ctx.r30.s64 * 960;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820bb830
	if (ctx.cr6.lt) goto loc_820BB830;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820bb83c
	goto loc_820BB83C;
loc_820BB830:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_820BB83C:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bl 0x8210a6d0
	ctx.lr = 0x820BB84C;
	sub_8210A6D0(ctx, base);
loc_820BB84C:
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

__attribute__((alias("__imp__sub_820BB864"))) PPC_WEAK_FUNC(sub_820BB864);
PPC_FUNC_IMPL(__imp__sub_820BB864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB868"))) PPC_WEAK_FUNC(sub_820BB868);
PPC_FUNC_IMPL(__imp__sub_820BB868) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bb8a0
	if (!ctx.cr6.lt) goto loc_820BB8A0;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb8ac
	if (!ctx.cr6.eq) goto loc_820BB8AC;
loc_820BB8A0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bb8ec
	goto loc_820BB8EC;
loc_820BB8AC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bb8dc
	if (!ctx.cr6.lt) goto loc_820BB8DC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb8dc
	if (ctx.cr6.eq) goto loc_820BB8DC;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb8e8
	if (!ctx.cr6.eq) goto loc_820BB8E8;
loc_820BB8DC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bb8ec
	goto loc_820BB8EC;
loc_820BB8E8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BB8EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bb92c
	if (ctx.cr6.eq) goto loc_820BB92C;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820bb92c
	if (!ctx.cr6.lt) goto loc_820BB92C;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bb92c
	if (ctx.cr6.eq) goto loc_820BB92C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8218bdc0
	ctx.lr = 0x820BB92C;
	sub_8218BDC0(ctx, base);
loc_820BB92C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB93C"))) PPC_WEAK_FUNC(sub_820BB93C);
PPC_FUNC_IMPL(__imp__sub_820BB93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB940"))) PPC_WEAK_FUNC(sub_820BB940);
PPC_FUNC_IMPL(__imp__sub_820BB940) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bb96c
	if (!ctx.cr6.lt) goto loc_820BB96C;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb978
	if (!ctx.cr6.eq) goto loc_820BB978;
loc_820BB96C:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bb9b8
	goto loc_820BB9B8;
loc_820BB978:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bb9a8
	if (!ctx.cr6.lt) goto loc_820BB9A8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb9a8
	if (ctx.cr6.eq) goto loc_820BB9A8;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb9b4
	if (!ctx.cr6.eq) goto loc_820BB9B4;
loc_820BB9A8:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bb9b8
	goto loc_820BB9B8;
loc_820BB9B4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BB9B8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// bne cr6,0x820bba04
	if (!ctx.cr6.eq) goto loc_820BBA04;
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_820BBA04:
	// stw r9,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BBA0C"))) PPC_WEAK_FUNC(sub_820BBA0C);
PPC_FUNC_IMPL(__imp__sub_820BBA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BBA10"))) PPC_WEAK_FUNC(sub_820BBA10);
PPC_FUNC_IMPL(__imp__sub_820BBA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bba3c
	if (!ctx.cr6.lt) goto loc_820BBA3C;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bba48
	if (!ctx.cr6.eq) goto loc_820BBA48;
loc_820BBA3C:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bba88
	goto loc_820BBA88;
loc_820BBA48:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bba78
	if (!ctx.cr6.lt) goto loc_820BBA78;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bba78
	if (ctx.cr6.eq) goto loc_820BBA78;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bba84
	if (!ctx.cr6.eq) goto loc_820BBA84;
loc_820BBA78:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bba88
	goto loc_820BBA88;
loc_820BBA84:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BBA88:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f1,568(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
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
	// stfs f1,520(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 520, temp.u32);
	// addi r8,r11,568
	ctx.r8.s64 = ctx.r11.s64 + 568;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_820BBAF0:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820bbaf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BBAF0;
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// stfs f1,584(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 584, temp.u32);
	// stfs f1,588(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stfs f1,592(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 592, temp.u32);
	// stfs f1,596(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 596, temp.u32);
	// stfs f1,600(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 600, temp.u32);
	// stw r9,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BBB20"))) PPC_WEAK_FUNC(sub_820BBB20);
PPC_FUNC_IMPL(__imp__sub_820BBB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bbb4c
	if (!ctx.cr6.lt) goto loc_820BBB4C;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bbb58
	if (!ctx.cr6.eq) goto loc_820BBB58;
loc_820BBB4C:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bbb98
	goto loc_820BBB98;
loc_820BBB58:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bbb88
	if (!ctx.cr6.lt) goto loc_820BBB88;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bbb88
	if (ctx.cr6.eq) goto loc_820BBB88;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bbb94
	if (!ctx.cr6.eq) goto loc_820BBB94;
loc_820BBB88:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bbb98
	goto loc_820BBB98;
loc_820BBB94:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BBB98:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bbbb4
	if (!ctx.cr6.eq) goto loc_820BBBB4;
loc_820BBBA4:
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
loc_820BBBB4:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820bbba4
	if (!ctx.cr6.lt) goto loc_820BBBA4;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bbba4
	if (ctx.cr6.eq) goto loc_820BBBA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BBBE8"))) PPC_WEAK_FUNC(sub_820BBBE8);
PPC_FUNC_IMPL(__imp__sub_820BBBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bbc14
	if (!ctx.cr6.lt) goto loc_820BBC14;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bbc20
	if (!ctx.cr6.eq) goto loc_820BBC20;
loc_820BBC14:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bbc60
	goto loc_820BBC60;
loc_820BBC20:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bbc50
	if (!ctx.cr6.lt) goto loc_820BBC50;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bbc50
	if (ctx.cr6.eq) goto loc_820BBC50;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bbc5c
	if (!ctx.cr6.eq) goto loc_820BBC5C;
loc_820BBC50:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bbc60
	goto loc_820BBC60;
loc_820BBC5C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BBC60:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f1,492(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BBC9C"))) PPC_WEAK_FUNC(sub_820BBC9C);
PPC_FUNC_IMPL(__imp__sub_820BBC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BBCA0"))) PPC_WEAK_FUNC(sub_820BBCA0);
PPC_FUNC_IMPL(__imp__sub_820BBCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bbccc
	if (!ctx.cr6.lt) goto loc_820BBCCC;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bbcd8
	if (!ctx.cr6.eq) goto loc_820BBCD8;
loc_820BBCCC:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bbd18
	goto loc_820BBD18;
loc_820BBCD8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bbd08
	if (!ctx.cr6.lt) goto loc_820BBD08;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bbd08
	if (ctx.cr6.eq) goto loc_820BBD08;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bbd14
	if (!ctx.cr6.eq) goto loc_820BBD14;
loc_820BBD08:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bbd18
	goto loc_820BBD18;
loc_820BBD14:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BBD18:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bbd34
	if (!ctx.cr6.eq) goto loc_820BBD34;
loc_820BBD24:
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
loc_820BBD34:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820bbd24
	if (!ctx.cr6.lt) goto loc_820BBD24;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bbd24
	if (ctx.cr6.eq) goto loc_820BBD24;
	// lfs f1,492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BBD64"))) PPC_WEAK_FUNC(sub_820BBD64);
PPC_FUNC_IMPL(__imp__sub_820BBD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BBD68"))) PPC_WEAK_FUNC(sub_820BBD68);
PPC_FUNC_IMPL(__imp__sub_820BBD68) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bbdc0
	if (!ctx.cr6.lt) goto loc_820BBDC0;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bbdcc
	if (!ctx.cr6.eq) goto loc_820BBDCC;
loc_820BBDC0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bbe0c
	goto loc_820BBE0C;
loc_820BBDCC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bbdfc
	if (!ctx.cr6.lt) goto loc_820BBDFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bbdfc
	if (ctx.cr6.eq) goto loc_820BBDFC;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bbe08
	if (!ctx.cr6.eq) goto loc_820BBE08;
loc_820BBDFC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bbe0c
	goto loc_820BBE0C;
loc_820BBE08:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BBE0C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bbe48
	if (ctx.cr6.eq) goto loc_820BBE48;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8217f9a0
	ctx.lr = 0x820BBE48;
	sub_8217F9A0(ctx, base);
loc_820BBE48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BBE58"))) PPC_WEAK_FUNC(sub_820BBE58);
PPC_FUNC_IMPL(__imp__sub_820BBE58) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bbe94
	if (!ctx.cr6.lt) goto loc_820BBE94;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bbea0
	if (!ctx.cr6.eq) goto loc_820BBEA0;
loc_820BBE94:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bbee0
	goto loc_820BBEE0;
loc_820BBEA0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bbed0
	if (!ctx.cr6.lt) goto loc_820BBED0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bbed0
	if (ctx.cr6.eq) goto loc_820BBED0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bbedc
	if (!ctx.cr6.eq) goto loc_820BBEDC;
loc_820BBED0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bbee0
	goto loc_820BBEE0;
loc_820BBEDC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BBEE0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bbf0c
	if (ctx.cr6.eq) goto loc_820BBF0C;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8217fb68
	ctx.lr = 0x820BBF0C;
	sub_8217FB68(ctx, base);
loc_820BBF0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BBF1C"))) PPC_WEAK_FUNC(sub_820BBF1C);
PPC_FUNC_IMPL(__imp__sub_820BBF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BBF20"))) PPC_WEAK_FUNC(sub_820BBF20);
PPC_FUNC_IMPL(__imp__sub_820BBF20) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bbf64
	if (!ctx.cr6.lt) goto loc_820BBF64;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bbf70
	if (!ctx.cr6.eq) goto loc_820BBF70;
loc_820BBF64:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bbfb0
	goto loc_820BBFB0;
loc_820BBF70:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bbfa0
	if (!ctx.cr6.lt) goto loc_820BBFA0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bbfa0
	if (ctx.cr6.eq) goto loc_820BBFA0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bbfac
	if (!ctx.cr6.eq) goto loc_820BBFAC;
loc_820BBFA0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820bbfb0
	goto loc_820BBFB0;
loc_820BBFAC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BBFB0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bc00c
	if (ctx.cr6.eq) goto loc_820BC00C;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bc00c
	if (ctx.cr6.eq) goto loc_820BC00C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820bbfec
	if (ctx.cr6.lt) goto loc_820BBFEC;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_820BBFEC:
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// bl 0x8233e4e0
	ctx.lr = 0x820BC000;
	sub_8233E4E0(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
loc_820BC00C:
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

__attribute__((alias("__imp__sub_820BC024"))) PPC_WEAK_FUNC(sub_820BC024);
PPC_FUNC_IMPL(__imp__sub_820BC024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC028"))) PPC_WEAK_FUNC(sub_820BC028);
PPC_FUNC_IMPL(__imp__sub_820BC028) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820baf48
	ctx.lr = 0x820BC044;
	sub_820BAF48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bc06c
	if (ctx.cr6.eq) goto loc_820BC06C;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bc060
	if (ctx.cr6.eq) goto loc_820BC060;
	// bl 0x82172d60
	ctx.lr = 0x820BC060;
	sub_82172D60(ctx, base);
loc_820BC060:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82087078
	ctx.lr = 0x820BC068;
	sub_82087078(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
loc_820BC06C:
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

__attribute__((alias("__imp__sub_820BC084"))) PPC_WEAK_FUNC(sub_820BC084);
PPC_FUNC_IMPL(__imp__sub_820BC084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC088"))) PPC_WEAK_FUNC(sub_820BC088);
PPC_FUNC_IMPL(__imp__sub_820BC088) {
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
	// bl 0x820baf48
	ctx.lr = 0x820BC098;
	sub_820BAF48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bc0c0
	if (ctx.cr6.eq) goto loc_820BC0C0;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bc0c0
	if (ctx.cr6.eq) goto loc_820BC0C0;
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
loc_820BC0C0:
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

__attribute__((alias("__imp__sub_820BC0D4"))) PPC_WEAK_FUNC(sub_820BC0D4);
PPC_FUNC_IMPL(__imp__sub_820BC0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC0D8"))) PPC_WEAK_FUNC(sub_820BC0D8);
PPC_FUNC_IMPL(__imp__sub_820BC0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x820BC0E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bc118
	if (!ctx.cr6.lt) goto loc_820BC118;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bc124
	if (!ctx.cr6.eq) goto loc_820BC124;
loc_820BC118:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820bc164
	goto loc_820BC164;
loc_820BC124:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bc154
	if (!ctx.cr6.lt) goto loc_820BC154;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bc154
	if (ctx.cr6.eq) goto loc_820BC154;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820bc160
	if (!ctx.cr6.eq) goto loc_820BC160;
loc_820BC154:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820bc164
	goto loc_820BC164;
loc_820BC160:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BC164:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bc244
	if (ctx.cr6.eq) goto loc_820BC244;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x820ac088
	ctx.lr = 0x820BC178;
	sub_820AC088(ctx, base);
	// rlwinm r9,r3,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r3,16,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF00;
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// rlwinm r7,r3,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// or r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 | ctx.r7.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 | ctx.r5.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r11,r6,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r6,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r9,r6,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// addi r8,r5,31376
	ctx.r8.s64 = ctx.r5.s64 + 31376;
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// lfs f0,244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// rlwinm r7,r3,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
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
loc_820BC244:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC24C"))) PPC_WEAK_FUNC(sub_820BC24C);
PPC_FUNC_IMPL(__imp__sub_820BC24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC250"))) PPC_WEAK_FUNC(sub_820BC250);
PPC_FUNC_IMPL(__imp__sub_820BC250) {
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
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x820bc290
	if (!ctx.cr6.lt) goto loc_820BC290;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29208
	ctx.r11.s64 = ctx.r9.s64 + -29208;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bc29c
	if (!ctx.cr6.eq) goto loc_820BC29C;
loc_820BC290:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820bc2dc
	goto loc_820BC2DC;
loc_820BC29C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bc2cc
	if (!ctx.cr6.lt) goto loc_820BC2CC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bc2cc
	if (ctx.cr6.eq) goto loc_820BC2CC;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bc2d8
	if (!ctx.cr6.eq) goto loc_820BC2D8;
loc_820BC2CC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820bc2dc
	goto loc_820BC2DC;
loc_820BC2D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BC2DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bc38c
	if (ctx.cr6.eq) goto loc_820BC38C;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x820ac088
	ctx.lr = 0x820BC310;
	sub_820AC088(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r4,r3,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r3,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r8,r3,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// addi r9,r9,31376
	ctx.r9.s64 = ctx.r9.s64 + 31376;
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// lfs f0,244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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
loc_820BC38C:
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

__attribute__((alias("__imp__sub_820BC3A0"))) PPC_WEAK_FUNC(sub_820BC3A0);
PPC_FUNC_IMPL(__imp__sub_820BC3A0) {
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
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bge cr6,0x820bc3d8
	if (!ctx.cr6.lt) goto loc_820BC3D8;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,-29208
	ctx.r10.s64 = ctx.r9.s64 + -29208;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bc3e8
	if (!ctx.cr6.eq) goto loc_820BC3E8;
loc_820BC3D8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x820bc3ec
	goto loc_820BC3EC;
loc_820BC3E8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_820BC3EC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820bc40c
	if (!ctx.cr6.eq) goto loc_820BC40C;
loc_820BC3F8:
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
loc_820BC40C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bc3f8
	if (!ctx.cr6.lt) goto loc_820BC3F8;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820bc3f8
	if (ctx.cr6.eq) goto loc_820BC3F8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82108b08
	ctx.lr = 0x820BC43C;
	sub_82108B08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC44C"))) PPC_WEAK_FUNC(sub_820BC44C);
PPC_FUNC_IMPL(__imp__sub_820BC44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC450"))) PPC_WEAK_FUNC(sub_820BC450);
PPC_FUNC_IMPL(__imp__sub_820BC450) {
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
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bge cr6,0x820bc48c
	if (!ctx.cr6.lt) goto loc_820BC48C;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,-29208
	ctx.r10.s64 = ctx.r9.s64 + -29208;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// lwzx r10,r8,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bc49c
	if (!ctx.cr6.eq) goto loc_820BC49C;
loc_820BC48C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x820bc4a0
	goto loc_820BC4A0;
loc_820BC49C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_820BC4A0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bc528
	if (ctx.cr6.eq) goto loc_820BC528;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bc528
	if (!ctx.cr6.lt) goto loc_820BC528;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,176(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// or r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 | ctx.r11.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x820bc528
	if (!ctx.cr6.lt) goto loc_820BC528;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r9,r7,68
	ctx.r9.s64 = ctx.r7.s64 * 68;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r9,66(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// rlwinm r8,r9,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820bc528
	if (!ctx.cr6.eq) goto loc_820BC528;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// ori r6,r9,16
	ctx.r6.u64 = ctx.r9.u64 | 16;
	// addi r9,r8,20000
	ctx.r9.s64 = ctx.r8.s64 + 20000;
	// sth r6,66(r11)
	PPC_STORE_U16(ctx.r11.u32 + 66, ctx.r6.u16);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r9,10004
	ctx.r3.s64 = ctx.r9.s64 + 10004;
	// lwz r6,156(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// bl 0x8213a408
	ctx.lr = 0x820BC528;
	sub_8213A408(ctx, base);
loc_820BC528:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC538"))) PPC_WEAK_FUNC(sub_820BC538);
PPC_FUNC_IMPL(__imp__sub_820BC538) {
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
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bge cr6,0x820bc574
	if (!ctx.cr6.lt) goto loc_820BC574;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,-29208
	ctx.r10.s64 = ctx.r9.s64 + -29208;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bc584
	if (!ctx.cr6.eq) goto loc_820BC584;
loc_820BC574:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x820bc588
	goto loc_820BC588;
loc_820BC584:
	// li r9,1
	ctx.r9.s64 = 1;
loc_820BC588:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bc608
	if (ctx.cr6.eq) goto loc_820BC608;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820bc608
	if (!ctx.cr6.lt) goto loc_820BC608;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,176(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r7,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// or r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 | ctx.r11.u64;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x820bc608
	if (!ctx.cr6.lt) goto loc_820BC608;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r10,r5,68
	ctx.r10.s64 = ctx.r5.s64 * 68;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,66(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820bc608
	if (ctx.cr6.eq) goto loc_820BC608;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// sth r10,66(r11)
	PPC_STORE_U16(ctx.r11.u32 + 66, ctx.r10.u16);
	// addi r11,r9,20000
	ctx.r11.s64 = ctx.r9.s64 + 20000;
	// addi r3,r11,10004
	ctx.r3.s64 = ctx.r11.s64 + 10004;
	// bl 0x8213a510
	ctx.lr = 0x820BC608;
	sub_8213A510(ctx, base);
loc_820BC608:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC618"))) PPC_WEAK_FUNC(sub_820BC618);
PPC_FUNC_IMPL(__imp__sub_820BC618) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x820BC620;
	__savegprlr_14(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-20536
	ctx.r11.s64 = ctx.r11.s64 + -20536;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// addi r10,r10,-20360
	ctx.r10.s64 = ctx.r10.s64 + -20360;
	// addi r9,r9,-20240
	ctx.r9.s64 = ctx.r9.s64 + -20240;
	// addi r8,r8,-20040
	ctx.r8.s64 = ctx.r8.s64 + -20040;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r7,r7,-19864
	ctx.r7.s64 = ctx.r7.s64 + -19864;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r6,r6,-19648
	ctx.r6.s64 = ctx.r6.s64 + -19648;
	// addi r5,r5,-19456
	ctx.r5.s64 = ctx.r5.s64 + -19456;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r4,r4,-19272
	ctx.r4.s64 = ctx.r4.s64 + -19272;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// addi r11,r31,-18808
	ctx.r11.s64 = ctx.r31.s64 + -18808;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r27,-32244
	ctx.r27.s64 = -2113142784;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// lis r25,-32244
	ctx.r25.s64 = -2113142784;
	// lis r24,-32244
	ctx.r24.s64 = -2113142784;
	// lis r23,-32244
	ctx.r23.s64 = -2113142784;
	// addi r10,r30,-18720
	ctx.r10.s64 = ctx.r30.s64 + -18720;
	// addi r9,r29,-18616
	ctx.r9.s64 = ctx.r29.s64 + -18616;
	// addi r8,r28,-18328
	ctx.r8.s64 = ctx.r28.s64 + -18328;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lis r22,-32244
	ctx.r22.s64 = -2113142784;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// addi r7,r27,-18112
	ctx.r7.s64 = ctx.r27.s64 + -18112;
	// addi r6,r26,-17904
	ctx.r6.s64 = ctx.r26.s64 + -17904;
	// stw r14,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r5,r25,-17632
	ctx.r5.s64 = ctx.r25.s64 + -17632;
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// addi r4,r24,-17432
	ctx.r4.s64 = ctx.r24.s64 + -17432;
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// addi r11,r23,-17248
	ctx.r11.s64 = ctx.r23.s64 + -17248;
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// lis r20,-32244
	ctx.r20.s64 = -2113142784;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lis r19,-32244
	ctx.r19.s64 = -2113142784;
	// lis r18,-32244
	ctx.r18.s64 = -2113142784;
	// lis r17,-32244
	ctx.r17.s64 = -2113142784;
	// lis r16,-32244
	ctx.r16.s64 = -2113142784;
	// lis r15,-32244
	ctx.r15.s64 = -2113142784;
	// addi r10,r22,-16808
	ctx.r10.s64 = ctx.r22.s64 + -16808;
	// addi r9,r21,-17048
	ctx.r9.s64 = ctx.r21.s64 + -17048;
	// addi r8,r20,-16608
	ctx.r8.s64 = ctx.r20.s64 + -16608;
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r19,-16344
	ctx.r7.s64 = ctx.r19.s64 + -16344;
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// addi r6,r18,-16248
	ctx.r6.s64 = ctx.r18.s64 + -16248;
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// addi r5,r17,-16168
	ctx.r5.s64 = ctx.r17.s64 + -16168;
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// addi r4,r16,-15792
	ctx.r4.s64 = ctx.r16.s64 + -15792;
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// addi r11,r15,-19008
	ctx.r11.s64 = ctx.r15.s64 + -19008;
	// stw r5,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r5.u32);
	// addi r9,r10,-18864
	ctx.r9.s64 = ctx.r10.s64 + -18864;
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// addi r8,r14,-15456
	ctx.r8.s64 = ctx.r14.s64 + -15456;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r8,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// addi r8,r7,-15280
	ctx.r8.s64 = ctx.r7.s64 + -15280;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r7,r6,-15048
	ctx.r7.s64 = ctx.r6.s64 + -15048;
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r5,-21912
	ctx.r6.s64 = ctx.r5.s64 + -21912;
	// stw r7,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r7.u32);
	// addi r5,r4,-6736
	ctx.r5.s64 = ctx.r4.s64 + -6736;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stw r6,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r6.u32);
	// addi r4,r11,-21912
	ctx.r4.s64 = ctx.r11.s64 + -21912;
	// stw r5,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r5.u32);
	// addi r11,r10,-15536
	ctx.r11.s64 = ctx.r10.s64 + -15536;
	// addi r10,r9,-21912
	ctx.r10.s64 = ctx.r9.s64 + -21912;
	// stw r4,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r4.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC7C4"))) PPC_WEAK_FUNC(sub_820BC7C4);
PPC_FUNC_IMPL(__imp__sub_820BC7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC7C8"))) PPC_WEAK_FUNC(sub_820BC7C8);
PPC_FUNC_IMPL(__imp__sub_820BC7C8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bc80c
	if (!ctx.cr6.eq) goto loc_820BC80C;
	// bl 0x820ddca8
	ctx.lr = 0x820BC7F4;
	sub_820DDCA8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bc804
	if (ctx.cr6.eq) goto loc_820BC804;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x820bc828
	goto loc_820BC828;
loc_820BC804:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820bc828
	goto loc_820BC828;
loc_820BC80C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bc838
	if (!ctx.cr6.eq) goto loc_820BC838;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bc880
	if (ctx.cr6.eq) goto loc_820BC880;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_820BC828:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bc858
	if (ctx.cr6.eq) goto loc_820BC858;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// b 0x820bc858
	goto loc_820BC858;
loc_820BC838:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820bc880
	if (ctx.cr6.eq) goto loc_820BC880;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f3178
	ctx.lr = 0x820BC854;
	sub_820F3178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_820BC858:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820bc880
	if (ctx.cr6.eq) goto loc_820BC880;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820bc878
	if (!ctx.cr6.eq) goto loc_820BC878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5f90
	ctx.lr = 0x820BC874;
	sub_820F5F90(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820BC878:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x820bc884
	goto loc_820BC884;
loc_820BC880:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820BC884:
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

__attribute__((alias("__imp__sub_820BC89C"))) PPC_WEAK_FUNC(sub_820BC89C);
PPC_FUNC_IMPL(__imp__sub_820BC89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

