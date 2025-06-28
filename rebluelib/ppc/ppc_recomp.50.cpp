#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82320EE0"))) PPC_WEAK_FUNC(sub_82320EE0);
PPC_FUNC_IMPL(__imp__sub_82320EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82320F08"))) PPC_WEAK_FUNC(sub_82320F08);
PPC_FUNC_IMPL(__imp__sub_82320F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320F0C"))) PPC_WEAK_FUNC(sub_82320F0C);
PPC_FUNC_IMPL(__imp__sub_82320F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320F10"))) PPC_WEAK_FUNC(sub_82320F10);
PPC_FUNC_IMPL(__imp__sub_82320F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82320F44"))) PPC_WEAK_FUNC(sub_82320F44);
PPC_FUNC_IMPL(__imp__sub_82320F44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320F48"))) PPC_WEAK_FUNC(sub_82320F48);
PPC_FUNC_IMPL(__imp__sub_82320F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82320F70"))) PPC_WEAK_FUNC(sub_82320F70);
PPC_FUNC_IMPL(__imp__sub_82320F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320F74"))) PPC_WEAK_FUNC(sub_82320F74);
PPC_FUNC_IMPL(__imp__sub_82320F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320F78"))) PPC_WEAK_FUNC(sub_82320F78);
PPC_FUNC_IMPL(__imp__sub_82320F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82320FA0"))) PPC_WEAK_FUNC(sub_82320FA0);
PPC_FUNC_IMPL(__imp__sub_82320FA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320FA4"))) PPC_WEAK_FUNC(sub_82320FA4);
PPC_FUNC_IMPL(__imp__sub_82320FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320FA8"))) PPC_WEAK_FUNC(sub_82320FA8);
PPC_FUNC_IMPL(__imp__sub_82320FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82320FD0"))) PPC_WEAK_FUNC(sub_82320FD0);
PPC_FUNC_IMPL(__imp__sub_82320FD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320FD4"))) PPC_WEAK_FUNC(sub_82320FD4);
PPC_FUNC_IMPL(__imp__sub_82320FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320FD8"))) PPC_WEAK_FUNC(sub_82320FD8);
PPC_FUNC_IMPL(__imp__sub_82320FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8232100C"))) PPC_WEAK_FUNC(sub_8232100C);
PPC_FUNC_IMPL(__imp__sub_8232100C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321010"))) PPC_WEAK_FUNC(sub_82321010);
PPC_FUNC_IMPL(__imp__sub_82321010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321044
	if (ctx.cr6.eq) goto loc_82321044;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232103c
	if (ctx.cr6.eq) goto loc_8232103C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8232103C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82321044:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232104C"))) PPC_WEAK_FUNC(sub_8232104C);
PPC_FUNC_IMPL(__imp__sub_8232104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321050"))) PPC_WEAK_FUNC(sub_82321050);
PPC_FUNC_IMPL(__imp__sub_82321050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82321084"))) PPC_WEAK_FUNC(sub_82321084);
PPC_FUNC_IMPL(__imp__sub_82321084) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321088"))) PPC_WEAK_FUNC(sub_82321088);
PPC_FUNC_IMPL(__imp__sub_82321088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823210BC"))) PPC_WEAK_FUNC(sub_823210BC);
PPC_FUNC_IMPL(__imp__sub_823210BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823210C0"))) PPC_WEAK_FUNC(sub_823210C0);
PPC_FUNC_IMPL(__imp__sub_823210C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823210F4"))) PPC_WEAK_FUNC(sub_823210F4);
PPC_FUNC_IMPL(__imp__sub_823210F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823210F8"))) PPC_WEAK_FUNC(sub_823210F8);
PPC_FUNC_IMPL(__imp__sub_823210F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82321120"))) PPC_WEAK_FUNC(sub_82321120);
PPC_FUNC_IMPL(__imp__sub_82321120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321124"))) PPC_WEAK_FUNC(sub_82321124);
PPC_FUNC_IMPL(__imp__sub_82321124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321128"))) PPC_WEAK_FUNC(sub_82321128);
PPC_FUNC_IMPL(__imp__sub_82321128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82321150"))) PPC_WEAK_FUNC(sub_82321150);
PPC_FUNC_IMPL(__imp__sub_82321150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321154"))) PPC_WEAK_FUNC(sub_82321154);
PPC_FUNC_IMPL(__imp__sub_82321154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321158"))) PPC_WEAK_FUNC(sub_82321158);
PPC_FUNC_IMPL(__imp__sub_82321158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82321180"))) PPC_WEAK_FUNC(sub_82321180);
PPC_FUNC_IMPL(__imp__sub_82321180) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321184"))) PPC_WEAK_FUNC(sub_82321184);
PPC_FUNC_IMPL(__imp__sub_82321184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321188"))) PPC_WEAK_FUNC(sub_82321188);
PPC_FUNC_IMPL(__imp__sub_82321188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823211B0"))) PPC_WEAK_FUNC(sub_823211B0);
PPC_FUNC_IMPL(__imp__sub_823211B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823211B4"))) PPC_WEAK_FUNC(sub_823211B4);
PPC_FUNC_IMPL(__imp__sub_823211B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823211B8"))) PPC_WEAK_FUNC(sub_823211B8);
PPC_FUNC_IMPL(__imp__sub_823211B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823211E0"))) PPC_WEAK_FUNC(sub_823211E0);
PPC_FUNC_IMPL(__imp__sub_823211E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823211E4"))) PPC_WEAK_FUNC(sub_823211E4);
PPC_FUNC_IMPL(__imp__sub_823211E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823211E8"))) PPC_WEAK_FUNC(sub_823211E8);
PPC_FUNC_IMPL(__imp__sub_823211E8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823211F4"))) PPC_WEAK_FUNC(sub_823211F4);
PPC_FUNC_IMPL(__imp__sub_823211F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823211F8"))) PPC_WEAK_FUNC(sub_823211F8);
PPC_FUNC_IMPL(__imp__sub_823211F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823275e0
	sub_823275E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823211FC"))) PPC_WEAK_FUNC(sub_823211FC);
PPC_FUNC_IMPL(__imp__sub_823211FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321200"))) PPC_WEAK_FUNC(sub_82321200);
PPC_FUNC_IMPL(__imp__sub_82321200) {
	PPC_FUNC_PROLOGUE();
	// b 0x821daa68
	sub_821DAA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321204"))) PPC_WEAK_FUNC(sub_82321204);
PPC_FUNC_IMPL(__imp__sub_82321204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321208"))) PPC_WEAK_FUNC(sub_82321208);
PPC_FUNC_IMPL(__imp__sub_82321208) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r4,r11,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bne cr6,0x82321234
	if (!ctx.cr6.eq) goto loc_82321234;
	// li r4,64
	ctx.r4.s64 = 64;
loc_82321234:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8233a848
	ctx.lr = 0x82321240;
	sub_8233A848(ctx, base);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321254"))) PPC_WEAK_FUNC(sub_82321254);
PPC_FUNC_IMPL(__imp__sub_82321254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321258"))) PPC_WEAK_FUNC(sub_82321258);
PPC_FUNC_IMPL(__imp__sub_82321258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82321260;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823275f8
	ctx.lr = 0x82321274;
	sub_823275F8(ctx, base);
	// lwz r9,2992(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2992);
	// addi r29,r3,104
	ctx.r29.s64 = ctx.r3.s64 + 104;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// mulli r7,r9,3200
	ctx.r7.s64 = ctx.r9.s64 * 3200;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// divwu r10,r7,r8
	ctx.r10.u32 = ctx.r7.u32 / ctx.r8.u32;
	// twllei r8,0
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r27,r9,2112
	ctx.r27.s64 = ctx.r9.s64 * 2112;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mullw r26,r6,r9
	ctx.r26.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// beq cr6,0x823212dc
	if (ctx.cr6.eq) goto loc_823212DC;
	// li r28,1
	ctx.r28.s64 = 1;
loc_823212AC:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8233a9c0
	ctx.lr = 0x823212C8;
	sub_8233A9C0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823212ac
	if (ctx.cr6.lt) goto loc_823212AC;
loc_823212DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823212E8"))) PPC_WEAK_FUNC(sub_823212E8);
PPC_FUNC_IMPL(__imp__sub_823212E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x823212F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321380
	if (ctx.cr6.eq) goto loc_82321380;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82321380
	if (ctx.cr6.eq) goto loc_82321380;
	// rlwinm r26,r5,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r26,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82321380
	if (ctx.cr6.eq) goto loc_82321380;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321334
	if (ctx.cr6.eq) goto loc_82321334;
	// bl 0x82327608
	ctx.lr = 0x82321330;
	sub_82327608(ctx, base);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
loc_82321334:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82321370
	if (!ctx.cr6.gt) goto loc_82321370;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
loc_82321348:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232135c
	if (ctx.cr6.eq) goto loc_8232135C;
	// bl 0x82339928
	ctx.lr = 0x82321358;
	sub_82339928(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8232135C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82321348
	if (ctx.cr6.lt) goto loc_82321348;
loc_82321370:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82337d50
	ctx.lr = 0x8232137C;
	sub_82337D50(ctx, base);
	// stwx r28,r26,r27
	PPC_STORE_U32(ctx.r26.u32 + ctx.r27.u32, ctx.r28.u32);
loc_82321380:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321388"))) PPC_WEAK_FUNC(sub_82321388);
PPC_FUNC_IMPL(__imp__sub_82321388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82321390;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321464
	if (ctx.cr6.eq) goto loc_82321464;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321464
	if (ctx.cr6.eq) goto loc_82321464;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321464
	if (ctx.cr6.eq) goto loc_82321464;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823213dc
	if (!ctx.cr6.gt) goto loc_823213DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3084
	ctx.r4.s64 = ctx.r11.s64 + -3084;
	// bl 0x8231b3c8
	ctx.lr = 0x823213DC;
	sub_8231B3C8(ctx, base);
loc_823213DC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82321464
	if (ctx.cr6.eq) goto loc_82321464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8231b588
	ctx.lr = 0x823213F0;
	sub_8231B588(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82321400
	if (ctx.cr6.eq) goto loc_82321400;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82321464
	if (!ctx.cr6.eq) goto loc_82321464;
loc_82321400:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82339988
	ctx.lr = 0x8232140C;
	sub_82339988(ctx, base);
	// lwz r11,2992(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2992);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// divwu r30,r3,r11
	ctx.r30.u32 = ctx.r3.u32 / ctx.r11.u32;
	// twllei r11,0
	// ble cr6,0x82321458
	if (!ctx.cr6.gt) goto loc_82321458;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_82321428:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82339988
	ctx.lr = 0x82321434;
	sub_82339988(ctx, base);
	// lwz r11,2992(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2992);
	// twllei r11,0
	// divwu r11,r3,r11
	ctx.r11.u32 = ctx.r3.u32 / ctx.r11.u32;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8232144c
	if (!ctx.cr6.lt) goto loc_8232144C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8232144C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82321428
	if (!ctx.cr0.eq) goto loc_82321428;
loc_82321458:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82321464:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321470"))) PPC_WEAK_FUNC(sub_82321470);
PPC_FUNC_IMPL(__imp__sub_82321470) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823214e4
	if (ctx.cr6.eq) goto loc_823214E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823214e4
	if (ctx.cr6.eq) goto loc_823214E4;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823214e4
	if (ctx.cr6.eq) goto loc_823214E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823276a8
	ctx.lr = 0x823214AC;
	sub_823276A8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x823214c8
	if (!ctx.cr6.eq) goto loc_823214C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-2976
	ctx.r4.s64 = ctx.r11.s64 + -2976;
	// bl 0x8231b3e8
	ctx.lr = 0x823214C4;
	sub_8231B3E8(ctx, base);
	// b 0x823214e4
	goto loc_823214E4;
loc_823214C8:
	// lis r30,-32185
	ctx.r30.s64 = -2109276160;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-15068(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15068, ctx.r11.u32);
	// bl 0x82327a68
	ctx.lr = 0x823214DC;
	sub_82327A68(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-15068(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15068, ctx.r10.u32);
loc_823214E4:
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

__attribute__((alias("__imp__sub_823214FC"))) PPC_WEAK_FUNC(sub_823214FC);
PPC_FUNC_IMPL(__imp__sub_823214FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321500"))) PPC_WEAK_FUNC(sub_82321500);
PPC_FUNC_IMPL(__imp__sub_82321500) {
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
	// beq cr6,0x82321570
	if (ctx.cr6.eq) goto loc_82321570;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82321570
	if (ctx.cr6.eq) goto loc_82321570;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321570
	if (ctx.cr6.eq) goto loc_82321570;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x823276a8
	ctx.lr = 0x82321538;
	sub_823276A8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82321558
	if (ctx.cr6.eq) goto loc_82321558;
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
loc_82321558:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82339988
	ctx.lr = 0x82321564;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82321574
	if (!ctx.cr6.eq) goto loc_82321574;
loc_82321570:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82321574:
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

__attribute__((alias("__imp__sub_82321588"))) PPC_WEAK_FUNC(sub_82321588);
PPC_FUNC_IMPL(__imp__sub_82321588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82321590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823215e0
	if (ctx.cr6.eq) goto loc_823215E0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823215e0
	if (ctx.cr6.eq) goto loc_823215E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823215e0
	if (ctx.cr6.eq) goto loc_823215E0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823215ec
	if (!ctx.cr6.gt) goto loc_823215EC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-2948
	ctx.r4.s64 = ctx.r11.s64 + -2948;
	// bl 0x8231b3c8
	ctx.lr = 0x823215E0;
	sub_8231B3C8(ctx, base);
loc_823215E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823215E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_823215EC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823215e0
	if (ctx.cr6.eq) goto loc_823215E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231b588
	ctx.lr = 0x82321600;
	sub_8231B588(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82321610
	if (ctx.cr6.eq) goto loc_82321610;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x823215e0
	if (!ctx.cr6.eq) goto loc_823215E0;
loc_82321610:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82321388
	ctx.lr = 0x82321620;
	sub_82321388(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x823215e4
	if (!ctx.cr6.lt) goto loc_823215E4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321634"))) PPC_WEAK_FUNC(sub_82321634);
PPC_FUNC_IMPL(__imp__sub_82321634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321638"))) PPC_WEAK_FUNC(sub_82321638);
PPC_FUNC_IMPL(__imp__sub_82321638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82321640;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823216ec
	if (!ctx.cr6.gt) goto loc_823216EC;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82321664:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823216d8
	if (ctx.cr6.eq) goto loc_823216D8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823216d8
	if (ctx.cr6.eq) goto loc_823216D8;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232168c
	if (ctx.cr6.eq) goto loc_8232168C;
	// bl 0x82327608
	ctx.lr = 0x82321688;
	sub_82327608(ctx, base);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
loc_8232168C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823216c8
	if (!ctx.cr6.gt) goto loc_823216C8;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
loc_823216A0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823216b4
	if (ctx.cr6.eq) goto loc_823216B4;
	// bl 0x82339928
	ctx.lr = 0x823216B0;
	sub_82339928(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_823216B4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823216a0
	if (ctx.cr6.lt) goto loc_823216A0;
loc_823216C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82337d50
	ctx.lr = 0x823216D4;
	sub_82337D50(ctx, base);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_823216D8:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82321664
	if (ctx.cr6.lt) goto loc_82321664;
loc_823216EC:
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321700
	if (ctx.cr6.eq) goto loc_82321700;
	// bl 0x82339928
	ctx.lr = 0x823216FC;
	sub_82339928(ctx, base);
	// stw r28,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r28.u32);
loc_82321700:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82337d50
	ctx.lr = 0x8232170C;
	sub_82337D50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321714"))) PPC_WEAK_FUNC(sub_82321714);
PPC_FUNC_IMPL(__imp__sub_82321714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321718"))) PPC_WEAK_FUNC(sub_82321718);
PPC_FUNC_IMPL(__imp__sub_82321718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e450
	ctx.lr = 0x82321720;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,98
	ctx.r11.s64 = ctx.r7.s64 + 98;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x823217a0
	if (!ctx.cr6.gt) goto loc_823217A0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-2724
	ctx.r5.s64 = ctx.r11.s64 + -2724;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82337c48
	ctx.lr = 0x82321768;
	sub_82337C48(ctx, base);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r10,r22
	PPC_STORE_U32(ctx.r10.u32 + ctx.r22.u32, ctx.r3.u32);
	// bne cr6,0x823217ac
	if (!ctx.cr6.eq) goto loc_823217AC;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823212e8
	ctx.lr = 0x8232178C;
	sub_823212E8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-2776
	ctx.r4.s64 = ctx.r11.s64 + -2776;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8231b3c8
	ctx.lr = 0x823217A0;
	sub_8231B3C8(ctx, base);
loc_823217A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_823217AC:
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x823217BC;
	sub_8233EAF0(ctx, base);
	// lis r11,16467
	ctx.r11.s64 = 1079181312;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// ori r9,r11,17985
	ctx.r9.u64 = ctx.r11.u64 | 17985;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,2988(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2988);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// beq cr6,0x82321810
	if (ctx.cr6.eq) goto loc_82321810;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82321810:
	// bl 0x82327c48
	ctx.lr = 0x82321814;
	sub_82327C48(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82321854
	if (!ctx.cr6.eq) goto loc_82321854;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823212e8
	ctx.lr = 0x82321834;
	sub_823212E8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2820
	ctx.r4.s64 = ctx.r11.s64 + -2820;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8231b3b8
	ctx.lr = 0x82321848;
	sub_8231B3B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_82321854:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821daa68
	ctx.lr = 0x8232185C;
	sub_821DAA68(ctx, base);
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// ble cr6,0x823218dc
	if (!ctx.cr6.gt) goto loc_823218DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// addi r26,r11,-2840
	ctx.r26.s64 = ctx.r11.s64 + -2840;
loc_82321880:
	// lwz r9,2992(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2992);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r6,4
	ctx.r6.s64 = 4;
	// mulli r5,r9,3200
	ctx.r5.s64 = ctx.r9.s64 * 3200;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// divwu r10,r5,r8
	ctx.r10.u32 = ctx.r5.u32 / ctx.r8.u32;
	// mulli r5,r9,2112
	ctx.r5.s64 = ctx.r9.s64 * 2112;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// twllei r8,0
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// bl 0x8233aa20
	ctx.lr = 0x823218BC;
	sub_8233AA20(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321934
	if (ctx.cr6.eq) goto loc_82321934;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82321880
	if (ctx.cr6.lt) goto loc_82321880;
loc_823218DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82327668
	ctx.lr = 0x823218E8;
	sub_82327668(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8232191c
	if (!ctx.cr6.gt) goto loc_8232191C;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
loc_823218FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82327670
	ctx.lr = 0x8232190C;
	sub_82327670(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823218fc
	if (ctx.cr6.lt) goto loc_823218FC;
loc_8232191C:
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
loc_82321934:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823212e8
	ctx.lr = 0x82321944;
	sub_823212E8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2888
	ctx.r4.s64 = ctx.r11.s64 + -2888;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8231b3b8
	ctx.lr = 0x82321958;
	sub_8231B3B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4a0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321964"))) PPC_WEAK_FUNC(sub_82321964);
PPC_FUNC_IMPL(__imp__sub_82321964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321968"))) PPC_WEAK_FUNC(sub_82321968);
PPC_FUNC_IMPL(__imp__sub_82321968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82321970;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232199c
	if (ctx.cr6.eq) goto loc_8232199C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x8231c1e8
	ctx.lr = 0x8232199C;
	sub_8231C1E8(ctx, base);
loc_8232199C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82321a64
	if (!ctx.cr6.gt) goto loc_82321A64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r26,r11,-3028
	ctx.r26.s64 = ctx.r11.s64 + -3028;
loc_823219BC:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82321a04
	if (ctx.cr6.eq) goto loc_82321A04;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82321a04
	if (ctx.cr6.eq) goto loc_82321A04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321a04
	if (ctx.cr6.eq) goto loc_82321A04;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823219fc
	if (!ctx.cr6.eq) goto loc_823219FC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231b3b8
	ctx.lr = 0x823219FC;
	sub_8231B3B8(ctx, base);
loc_823219FC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82327680
	ctx.lr = 0x82321A04;
	sub_82327680(ctx, base);
loc_82321A04:
	// lwz r11,3036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82321a50
	if (!ctx.cr6.gt) goto loc_82321A50;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321a50
	if (ctx.cr6.eq) goto loc_82321A50;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82321a50
	if (ctx.cr6.eq) goto loc_82321A50;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,146
	ctx.r10.s64 = ctx.r10.s64 + 146;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,2340(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// lwz r5,2332(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2332);
	// lwzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// bl 0x82327af8
	ctx.lr = 0x82321A50;
	sub_82327AF8(ctx, base);
loc_82321A50:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823219bc
	if (ctx.cr6.lt) goto loc_823219BC;
loc_82321A64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321A6C"))) PPC_WEAK_FUNC(sub_82321A6C);
PPC_FUNC_IMPL(__imp__sub_82321A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321A70"))) PPC_WEAK_FUNC(sub_82321A70);
PPC_FUNC_IMPL(__imp__sub_82321A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82321A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82321ac4
	if (!ctx.cr6.gt) goto loc_82321AC4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82321A94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321ab0
	if (ctx.cr6.eq) goto loc_82321AB0;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321ab0
	if (ctx.cr6.eq) goto loc_82321AB0;
	// bl 0x82327698
	ctx.lr = 0x82321AB0;
	sub_82327698(ctx, base);
loc_82321AB0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82321a94
	if (ctx.cr6.lt) goto loc_82321A94;
loc_82321AC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321ACC"))) PPC_WEAK_FUNC(sub_82321ACC);
PPC_FUNC_IMPL(__imp__sub_82321ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321AD0"))) PPC_WEAK_FUNC(sub_82321AD0);
PPC_FUNC_IMPL(__imp__sub_82321AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82321AD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321b64
	if (ctx.cr6.eq) goto loc_82321B64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321af8
	if (ctx.cr6.eq) goto loc_82321AF8;
	// bl 0x82339948
	ctx.lr = 0x82321AF8;
	sub_82339948(ctx, base);
loc_82321AF8:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82321b64
	if (!ctx.cr6.gt) goto loc_82321B64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82321B0C:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82321b50
	if (ctx.cr6.eq) goto loc_82321B50;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82321b50
	if (!ctx.cr6.gt) goto loc_82321B50;
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
loc_82321B2C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321b3c
	if (ctx.cr6.eq) goto loc_82321B3C;
	// bl 0x82339948
	ctx.lr = 0x82321B3C;
	sub_82339948(ctx, base);
loc_82321B3C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82321b2c
	if (ctx.cr6.lt) goto loc_82321B2C;
loc_82321B50:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82321b0c
	if (ctx.cr6.lt) goto loc_82321B0C;
loc_82321B64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321B6C"))) PPC_WEAK_FUNC(sub_82321B6C);
PPC_FUNC_IMPL(__imp__sub_82321B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321B70"))) PPC_WEAK_FUNC(sub_82321B70);
PPC_FUNC_IMPL(__imp__sub_82321B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82321B78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321bd8
	if (ctx.cr6.eq) goto loc_82321BD8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82321bd8
	if (!ctx.cr6.gt) goto loc_82321BD8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82321BA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321bc4
	if (ctx.cr6.eq) goto loc_82321BC4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82321bc4
	if (ctx.cr6.eq) goto loc_82321BC4;
	// stw r28,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r28.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82327ae8
	ctx.lr = 0x82321BC4;
	sub_82327AE8(ctx, base);
loc_82321BC4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82321ba0
	if (ctx.cr6.lt) goto loc_82321BA0;
loc_82321BD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321BE0"))) PPC_WEAK_FUNC(sub_82321BE0);
PPC_FUNC_IMPL(__imp__sub_82321BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82321BE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82321c2c
	if (!ctx.cr6.gt) goto loc_82321C2C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82321C0C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82321c44
	if (ctx.cr6.eq) goto loc_82321C44;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82321c0c
	if (ctx.cr6.lt) goto loc_82321C0C;
loc_82321C2C:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82339978
	ctx.lr = 0x82321C38;
	sub_82339978(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82321C44:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x82339968
	ctx.lr = 0x82321C54;
	sub_82339968(ctx, base);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321cbc
	if (ctx.cr6.eq) goto loc_82321CBC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82321cbc
	if (ctx.cr6.eq) goto loc_82321CBC;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82321cbc
	if (ctx.cr6.eq) goto loc_82321CBC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823276a8
	ctx.lr = 0x82321C84;
	sub_823276A8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82321ca0
	if (!ctx.cr6.eq) goto loc_82321CA0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-2976
	ctx.r4.s64 = ctx.r11.s64 + -2976;
	// bl 0x8231b3e8
	ctx.lr = 0x82321C9C;
	sub_8231B3E8(ctx, base);
	// b 0x82321cbc
	goto loc_82321CBC;
loc_82321CA0:
	// lis r26,-32185
	ctx.r26.s64 = -2109276160;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-15068(r26)
	PPC_STORE_U32(ctx.r26.u32 + -15068, ctx.r11.u32);
	// bl 0x82327a68
	ctx.lr = 0x82321CB4;
	sub_82327A68(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-15068(r26)
	PPC_STORE_U32(ctx.r26.u32 + -15068, ctx.r10.u32);
loc_82321CBC:
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82321d1c
	if (!ctx.cr6.gt) goto loc_82321D1C;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
loc_82321CE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82321cf4
	if (!ctx.cr6.lt) goto loc_82321CF4;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82321CF4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82321d18
	if (!ctx.cr6.lt) goto loc_82321D18;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82321ce4
	if (ctx.cr6.lt) goto loc_82321CE4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82321D18:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82321D1C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321D28"))) PPC_WEAK_FUNC(sub_82321D28);
PPC_FUNC_IMPL(__imp__sub_82321D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82321D30;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x82339988
	ctx.lr = 0x82321D60;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321e10
	if (ctx.cr6.eq) goto loc_82321E10;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f31,-17956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17956);
	ctx.f31.f64 = double(temp.f32);
loc_82321D78:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339958
	ctx.lr = 0x82321D8C;
	sub_82339958(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x82321dfc
	if (ctx.cr6.lt) goto loc_82321DFC;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a580
	ctx.lr = 0x82321DA4;
	sub_8233A580(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233a710
	ctx.lr = 0x82321DB4;
	sub_8233A710(ctx, base);
	// lbz r11,159(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82321e68
	if (!ctx.cr6.eq) goto loc_82321E68;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321dec
	if (ctx.cr6.eq) goto loc_82321DEC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82321DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82321f10
	if (!ctx.cr6.eq) goto loc_82321F10;
loc_82321DEC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339978
	ctx.lr = 0x82321DFC;
	sub_82339978(ctx, base);
loc_82321DFC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339988
	ctx.lr = 0x82321E08;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82321d78
	if (!ctx.cr6.eq) goto loc_82321D78;
loc_82321E10:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339988
	ctx.lr = 0x82321E1C;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82321e5c
	if (!ctx.cr6.eq) goto loc_82321E5C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82321e5c
	if (!ctx.cr6.gt) goto loc_82321E5C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82321E34:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82321e48
	if (!ctx.cr6.eq) goto loc_82321E48;
	// bl 0x82321470
	ctx.lr = 0x82321E48;
	sub_82321470(ctx, base);
loc_82321E48:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82321e34
	if (ctx.cr6.lt) goto loc_82321E34;
loc_82321E5C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82321E68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82321dec
	if (!ctx.cr6.eq) goto loc_82321DEC;
	// lwz r11,3036(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82321ef0
	if (!ctx.cr6.gt) goto loc_82321EF0;
	// lwz r10,3056(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3056);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82321ef0
	if (ctx.cr6.eq) goto loc_82321EF0;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f11,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r6,2296(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2296);
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fmuls f3,f7,f31
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fdivs f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f2.f64));
	// fdivs f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 / ctx.f4.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82321dec
	if (ctx.cr6.lt) goto loc_82321DEC;
	// stw r26,3056(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3056, ctx.r26.u32);
loc_82321EF0:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lbz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82321be0
	ctx.lr = 0x82321F04;
	sub_82321BE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82321e5c
	if (ctx.cr6.eq) goto loc_82321E5C;
	// b 0x82321dfc
	goto loc_82321DFC;
loc_82321F10:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339968
	ctx.lr = 0x82321F20;
	sub_82339968(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321F2C"))) PPC_WEAK_FUNC(sub_82321F2C);
PPC_FUNC_IMPL(__imp__sub_82321F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321F30"))) PPC_WEAK_FUNC(sub_82321F30);
PPC_FUNC_IMPL(__imp__sub_82321F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82321F38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321fe4
	if (ctx.cr6.eq) goto loc_82321FE4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82321fe4
	if (!ctx.cr6.gt) goto loc_82321FE4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,60
	ctx.r26.s64 = 60;
loc_82321F64:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82321fd0
	if (ctx.cr6.eq) goto loc_82321FD0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82321fd0
	if (ctx.cr6.eq) goto loc_82321FD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321fd0
	if (ctx.cr6.eq) goto loc_82321FD0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x823276a8
	ctx.lr = 0x82321F8C;
	sub_823276A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82321ff0
	if (ctx.cr6.eq) goto loc_82321FF0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82321ff0
	if (ctx.cr6.eq) goto loc_82321FF0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,2992(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2992);
	// divwu r9,r11,r26
	ctx.r9.u32 = ctx.r11.u32 / ctx.r26.u32;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r31,r8,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82339988
	ctx.lr = 0x82321FBC;
	sub_82339988(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82321fd0
	if (!ctx.cr6.lt) goto loc_82321FD0;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321ff0
	if (ctx.cr6.eq) goto loc_82321FF0;
loc_82321FD0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82321f64
	if (ctx.cr6.lt) goto loc_82321F64;
loc_82321FE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82321FF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321FFC"))) PPC_WEAK_FUNC(sub_82321FFC);
PPC_FUNC_IMPL(__imp__sub_82321FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322000"))) PPC_WEAK_FUNC(sub_82322000);
PPC_FUNC_IMPL(__imp__sub_82322000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82322008;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82322088
	if (ctx.cr6.eq) goto loc_82322088;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82322088
	if (!ctx.cr6.gt) goto loc_82322088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82322030:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82322074
	if (ctx.cr6.eq) goto loc_82322074;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82322074
	if (ctx.cr6.eq) goto loc_82322074;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82322074
	if (ctx.cr6.eq) goto loc_82322074;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x823276a8
	ctx.lr = 0x82322058;
	sub_823276A8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82322094
	if (!ctx.cr6.eq) goto loc_82322094;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82339988
	ctx.lr = 0x8232206C;
	sub_82339988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82322094
	if (!ctx.cr6.eq) goto loc_82322094;
loc_82322074:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82322030
	if (ctx.cr6.lt) goto loc_82322030;
loc_82322088:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82322094:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823220A0"))) PPC_WEAK_FUNC(sub_823220A0);
PPC_FUNC_IMPL(__imp__sub_823220A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823220b0
	if (!ctx.cr6.eq) goto loc_823220B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823220B0:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82321500
	sub_82321500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823220BC"))) PPC_WEAK_FUNC(sub_823220BC);
PPC_FUNC_IMPL(__imp__sub_823220BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823220C0"))) PPC_WEAK_FUNC(sub_823220C0);
PPC_FUNC_IMPL(__imp__sub_823220C0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82321388
	sub_82321388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823220D8"))) PPC_WEAK_FUNC(sub_823220D8);
PPC_FUNC_IMPL(__imp__sub_823220D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x823220E0;
	__savegprlr_18(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// bl 0x82321588
	ctx.lr = 0x82322100;
	sub_82321588(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82322114
	if (!ctx.cr6.eq) goto loc_82322114;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
loc_82322114:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8232214c
	if (ctx.cr6.eq) goto loc_8232214C;
	// clrlwi r10,r22,2
	ctx.r10.u64 = ctx.r22.u32 & 0x3FFFFFFF;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232213c
	if (ctx.cr6.eq) goto loc_8232213C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82322134:
	// stwu r20,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82322134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82322134;
loc_8232213C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r5,r9,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x8233e968
	ctx.lr = 0x8232214C;
	sub_8233E968(ctx, base);
loc_8232214C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322200
	if (ctx.cr6.eq) goto loc_82322200;
loc_82322158:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x823221f4
	if (ctx.cr6.eq) goto loc_823221F4;
	// addi r26,r21,32
	ctx.r26.s64 = ctx.r21.s64 + 32;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_8232216C:
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2992(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2992);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r28,r31,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mullw r5,r28,r11
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// bl 0x82339958
	ctx.lr = 0x82322190;
	sub_82339958(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823221d4
	if (ctx.cr6.eq) goto loc_823221D4;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// lwz r10,2992(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2992);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divwu r18,r11,r10
	ctx.r18.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r5,r10,r18
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r18.s32);
	// lwzx r29,r31,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x823221C0;
	sub_8233E4E0(ctx, base);
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r18,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r18.s64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r9,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// stwx r8,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
loc_823221D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82339978
	ctx.lr = 0x823221E4;
	sub_82339978(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8232216c
	if (!ctx.cr0.eq) goto loc_8232216C;
loc_823221F4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82322158
	if (!ctx.cr6.eq) goto loc_82322158;
loc_82322200:
	// stw r22,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r22.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r20,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r20.u32);
	// lwz r11,2332(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2332);
	// stw r11,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232221C"))) PPC_WEAK_FUNC(sub_8232221C);
PPC_FUNC_IMPL(__imp__sub_8232221C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322220"))) PPC_WEAK_FUNC(sub_82322220);
PPC_FUNC_IMPL(__imp__sub_82322220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x82322228;
	__savegprlr_17(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// bl 0x82321588
	ctx.lr = 0x82322248;
	sub_82321588(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8232225c
	if (!ctx.cr6.eq) goto loc_8232225C;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
loc_8232225C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// std r19,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r19.u64);
	// std r19,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r19.u64);
	// std r19,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r19.u64);
	// beq cr6,0x823222ac
	if (ctx.cr6.eq) goto loc_823222AC;
	// clrlwi r10,r22,2
	ctx.r10.u64 = ctx.r22.u32 & 0x3FFFFFFF;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232229c
	if (ctx.cr6.eq) goto loc_8232229C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82322294:
	// stwu r20,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82322294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82322294;
loc_8232229C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r5,r9,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x8233e968
	ctx.lr = 0x823222AC;
	sub_8233E968(ctx, base);
loc_823222AC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322360
	if (ctx.cr6.eq) goto loc_82322360;
loc_823222B8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82322354
	if (ctx.cr6.eq) goto loc_82322354;
	// addi r26,r21,32
	ctx.r26.s64 = ctx.r21.s64 + 32;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_823222CC:
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2992(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2992);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r28,r31,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mullw r5,r28,r11
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// bl 0x82339958
	ctx.lr = 0x823222F0;
	sub_82339958(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322334
	if (ctx.cr6.eq) goto loc_82322334;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// lwz r10,2992(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2992);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divwu r17,r11,r10
	ctx.r17.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r5,r10,r17
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r17.s32);
	// lwzx r29,r31,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82322320;
	sub_8233E4E0(ctx, base);
	// rlwinm r11,r17,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r17,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r17.s64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r9,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// stwx r8,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
loc_82322334:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82339978
	ctx.lr = 0x82322344;
	sub_82339978(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x823222cc
	if (!ctx.cr0.eq) goto loc_823222CC;
loc_82322354:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823222b8
	if (!ctx.cr6.eq) goto loc_823222B8;
loc_82322360:
	// stw r22,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r22.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r20,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r20.u32);
	// lwz r11,2332(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2332);
	// stw r11,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232237C"))) PPC_WEAK_FUNC(sub_8232237C);
PPC_FUNC_IMPL(__imp__sub_8232237C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322380"))) PPC_WEAK_FUNC(sub_82322380);
PPC_FUNC_IMPL(__imp__sub_82322380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82322388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-2600
	ctx.r5.s64 = ctx.r11.s64 + -2600;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82337c48
	ctx.lr = 0x823223B0;
	sub_82337C48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823223dc
	if (!ctx.cr6.eq) goto loc_823223DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,-2648
	ctx.r4.s64 = ctx.r11.s64 + -2648;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8231b3c8
	ctx.lr = 0x823223D0;
	sub_8231B3C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_823223DC:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823223EC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823223ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823223EC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r5,r11,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bne cr6,0x82322410
	if (!ctx.cr6.eq) goto loc_82322410;
	// li r5,64
	ctx.r5.s64 = 64;
loc_82322410:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233a898
	ctx.lr = 0x8232241C;
	sub_8233A898(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8232244c
	if (!ctx.cr6.eq) goto loc_8232244C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82321638
	ctx.lr = 0x82322434;
	sub_82321638(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2696
	ctx.r4.s64 = ctx.r11.s64 + -2696;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8231b3b8
	ctx.lr = 0x82322448;
	sub_8231B3B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232244C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322454"))) PPC_WEAK_FUNC(sub_82322454);
PPC_FUNC_IMPL(__imp__sub_82322454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322458"))) PPC_WEAK_FUNC(sub_82322458);
PPC_FUNC_IMPL(__imp__sub_82322458) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x823220d8
	sub_823220D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232247C"))) PPC_WEAK_FUNC(sub_8232247C);
PPC_FUNC_IMPL(__imp__sub_8232247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322480"))) PPC_WEAK_FUNC(sub_82322480);
PPC_FUNC_IMPL(__imp__sub_82322480) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82322220
	sub_82322220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823224A4"))) PPC_WEAK_FUNC(sub_823224A4);
PPC_FUNC_IMPL(__imp__sub_823224A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823224A8"))) PPC_WEAK_FUNC(sub_823224A8);
PPC_FUNC_IMPL(__imp__sub_823224A8) {
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
	// bl 0x8231e200
	ctx.lr = 0x823224B8;
	sub_8231E200(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// stw r3,-24768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823224D0"))) PPC_WEAK_FUNC(sub_823224D0);
PPC_FUNC_IMPL(__imp__sub_823224D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823224F8"))) PPC_WEAK_FUNC(sub_823224F8);
PPC_FUNC_IMPL(__imp__sub_823224F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823224FC"))) PPC_WEAK_FUNC(sub_823224FC);
PPC_FUNC_IMPL(__imp__sub_823224FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322500"))) PPC_WEAK_FUNC(sub_82322500);
PPC_FUNC_IMPL(__imp__sub_82322500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82322528"))) PPC_WEAK_FUNC(sub_82322528);
PPC_FUNC_IMPL(__imp__sub_82322528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232252C"))) PPC_WEAK_FUNC(sub_8232252C);
PPC_FUNC_IMPL(__imp__sub_8232252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322530"))) PPC_WEAK_FUNC(sub_82322530);
PPC_FUNC_IMPL(__imp__sub_82322530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82322564"))) PPC_WEAK_FUNC(sub_82322564);
PPC_FUNC_IMPL(__imp__sub_82322564) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82322568"))) PPC_WEAK_FUNC(sub_82322568);
PPC_FUNC_IMPL(__imp__sub_82322568) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823225ac
	if (ctx.cr6.eq) goto loc_823225AC;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823225ac
	if (ctx.cr6.eq) goto loc_823225AC;
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823225AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823225AC:
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

__attribute__((alias("__imp__sub_823225C0"))) PPC_WEAK_FUNC(sub_823225C0);
PPC_FUNC_IMPL(__imp__sub_823225C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823225E8"))) PPC_WEAK_FUNC(sub_823225E8);
PPC_FUNC_IMPL(__imp__sub_823225E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823225EC"))) PPC_WEAK_FUNC(sub_823225EC);
PPC_FUNC_IMPL(__imp__sub_823225EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823225F0"))) PPC_WEAK_FUNC(sub_823225F0);
PPC_FUNC_IMPL(__imp__sub_823225F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82322624"))) PPC_WEAK_FUNC(sub_82322624);
PPC_FUNC_IMPL(__imp__sub_82322624) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82322628"))) PPC_WEAK_FUNC(sub_82322628);
PPC_FUNC_IMPL(__imp__sub_82322628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8232265C"))) PPC_WEAK_FUNC(sub_8232265C);
PPC_FUNC_IMPL(__imp__sub_8232265C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82322660"))) PPC_WEAK_FUNC(sub_82322660);
PPC_FUNC_IMPL(__imp__sub_82322660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82322688"))) PPC_WEAK_FUNC(sub_82322688);
PPC_FUNC_IMPL(__imp__sub_82322688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232268C"))) PPC_WEAK_FUNC(sub_8232268C);
PPC_FUNC_IMPL(__imp__sub_8232268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322690"))) PPC_WEAK_FUNC(sub_82322690);
PPC_FUNC_IMPL(__imp__sub_82322690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823226C4"))) PPC_WEAK_FUNC(sub_823226C4);
PPC_FUNC_IMPL(__imp__sub_823226C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823226C8"))) PPC_WEAK_FUNC(sub_823226C8);
PPC_FUNC_IMPL(__imp__sub_823226C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823226F0"))) PPC_WEAK_FUNC(sub_823226F0);
PPC_FUNC_IMPL(__imp__sub_823226F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823226F4"))) PPC_WEAK_FUNC(sub_823226F4);
PPC_FUNC_IMPL(__imp__sub_823226F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823226F8"))) PPC_WEAK_FUNC(sub_823226F8);
PPC_FUNC_IMPL(__imp__sub_823226F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82322720"))) PPC_WEAK_FUNC(sub_82322720);
PPC_FUNC_IMPL(__imp__sub_82322720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82322724"))) PPC_WEAK_FUNC(sub_82322724);
PPC_FUNC_IMPL(__imp__sub_82322724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322728"))) PPC_WEAK_FUNC(sub_82322728);
PPC_FUNC_IMPL(__imp__sub_82322728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82322750"))) PPC_WEAK_FUNC(sub_82322750);
PPC_FUNC_IMPL(__imp__sub_82322750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82322754"))) PPC_WEAK_FUNC(sub_82322754);
PPC_FUNC_IMPL(__imp__sub_82322754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322758"))) PPC_WEAK_FUNC(sub_82322758);
PPC_FUNC_IMPL(__imp__sub_82322758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8232278C"))) PPC_WEAK_FUNC(sub_8232278C);
PPC_FUNC_IMPL(__imp__sub_8232278C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82322790"))) PPC_WEAK_FUNC(sub_82322790);
PPC_FUNC_IMPL(__imp__sub_82322790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823227c4
	if (ctx.cr6.eq) goto loc_823227C4;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823227bc
	if (ctx.cr6.eq) goto loc_823227BC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823227BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823227C4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823227CC"))) PPC_WEAK_FUNC(sub_823227CC);
PPC_FUNC_IMPL(__imp__sub_823227CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823227D0"))) PPC_WEAK_FUNC(sub_823227D0);
PPC_FUNC_IMPL(__imp__sub_823227D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82322804"))) PPC_WEAK_FUNC(sub_82322804);
PPC_FUNC_IMPL(__imp__sub_82322804) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82322808"))) PPC_WEAK_FUNC(sub_82322808);
PPC_FUNC_IMPL(__imp__sub_82322808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8232283C"))) PPC_WEAK_FUNC(sub_8232283C);
PPC_FUNC_IMPL(__imp__sub_8232283C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82322840"))) PPC_WEAK_FUNC(sub_82322840);
PPC_FUNC_IMPL(__imp__sub_82322840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82322874"))) PPC_WEAK_FUNC(sub_82322874);
PPC_FUNC_IMPL(__imp__sub_82322874) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82322878"))) PPC_WEAK_FUNC(sub_82322878);
PPC_FUNC_IMPL(__imp__sub_82322878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823228A0"))) PPC_WEAK_FUNC(sub_823228A0);
PPC_FUNC_IMPL(__imp__sub_823228A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823228A4"))) PPC_WEAK_FUNC(sub_823228A4);
PPC_FUNC_IMPL(__imp__sub_823228A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823228A8"))) PPC_WEAK_FUNC(sub_823228A8);
PPC_FUNC_IMPL(__imp__sub_823228A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823228D0"))) PPC_WEAK_FUNC(sub_823228D0);
PPC_FUNC_IMPL(__imp__sub_823228D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823228D4"))) PPC_WEAK_FUNC(sub_823228D4);
PPC_FUNC_IMPL(__imp__sub_823228D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823228D8"))) PPC_WEAK_FUNC(sub_823228D8);
PPC_FUNC_IMPL(__imp__sub_823228D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,-24768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82322900"))) PPC_WEAK_FUNC(sub_82322900);
PPC_FUNC_IMPL(__imp__sub_82322900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82322904"))) PPC_WEAK_FUNC(sub_82322904);
PPC_FUNC_IMPL(__imp__sub_82322904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322908"))) PPC_WEAK_FUNC(sub_82322908);
PPC_FUNC_IMPL(__imp__sub_82322908) {
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
	// bl 0x8231e1e0
	ctx.lr = 0x82322918;
	sub_8231E1E0(ctx, base);
	// bl 0x82320d20
	ctx.lr = 0x8232291C;
	sub_82320D20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232292C"))) PPC_WEAK_FUNC(sub_8232292C);
PPC_FUNC_IMPL(__imp__sub_8232292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322930"))) PPC_WEAK_FUNC(sub_82322930);
PPC_FUNC_IMPL(__imp__sub_82322930) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -3, ctx.xer);
	// beq cr6,0x8232296c
	if (ctx.cr6.eq) goto loc_8232296C;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// beq cr6,0x82322960
	if (ctx.cr6.eq) goto loc_82322960;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82322954
	if (ctx.cr6.eq) goto loc_82322954;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-2332
	ctx.r3.s64 = ctx.r11.s64 + -2332;
	// b 0x82322974
	goto loc_82322974;
loc_82322954:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-2352
	ctx.r3.s64 = ctx.r11.s64 + -2352;
	// b 0x82322974
	goto loc_82322974;
loc_82322960:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-2376
	ctx.r3.s64 = ctx.r11.s64 + -2376;
	// b 0x82322974
	goto loc_82322974;
loc_8232296C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-2400
	ctx.r3.s64 = ctx.r11.s64 + -2400;
loc_82322974:
	// b 0x82327d08
	sub_82327D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322978"))) PPC_WEAK_FUNC(sub_82322978);
PPC_FUNC_IMPL(__imp__sub_82322978) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82322994
	if (!ctx.cr6.eq) goto loc_82322994;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-2176
	ctx.r3.s64 = ctx.r10.s64 + -2176;
	// b 0x823234c8
	sub_823234C8(ctx, base);
	return;
loc_82322994:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823229b4
	if (!ctx.cr6.eq) goto loc_823229B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-2188
	ctx.r3.s64 = ctx.r10.s64 + -2188;
	// b 0x823234c8
	sub_823234C8(ctx, base);
	return;
loc_823229B4:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823229E0"))) PPC_WEAK_FUNC(sub_823229E0);
PPC_FUNC_IMPL(__imp__sub_823229E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82322a00
	if (!ctx.cr6.eq) goto loc_82322A00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-2092
	ctx.r3.s64 = ctx.r10.s64 + -2092;
	// b 0x823234c8
	sub_823234C8(ctx, base);
	return;
loc_82322A00:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82322a20
	if (!ctx.cr6.eq) goto loc_82322A20;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-2104
	ctx.r3.s64 = ctx.r10.s64 + -2104;
	// b 0x823234c8
	sub_823234C8(ctx, base);
	return;
loc_82322A20:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82322a40
	if (!ctx.cr6.eq) goto loc_82322A40;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2128
	ctx.r4.s64 = ctx.r11.s64 + -2128;
	// addi r3,r10,-2140
	ctx.r3.s64 = ctx.r10.s64 + -2140;
	// b 0x823234c8
	sub_823234C8(ctx, base);
	return;
loc_82322A40:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82322acc
	if (!ctx.cr6.eq) goto loc_82322ACC;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82322a68
	if (ctx.cr6.lt) goto loc_82322A68;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82322A68:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// bge cr6,0x82322a78
	if (!ctx.cr6.lt) goto loc_82322A78;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82322A78:
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// divw r7,r11,r9
	ctx.r7.s32 = ctx.r11.s32 / ctx.r9.s32;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
loc_82322ACC:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82322b58
	if (!ctx.cr6.eq) goto loc_82322B58;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82322af4
	if (ctx.cr6.lt) goto loc_82322AF4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82322AF4:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// bge cr6,0x82322b04
	if (!ctx.cr6.lt) goto loc_82322B04;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82322B04:
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// divw r9,r11,r7
	ctx.r9.s32 = ctx.r11.s32 / ctx.r7.s32;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
loc_82322B58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82322B80"))) PPC_WEAK_FUNC(sub_82322B80);
PPC_FUNC_IMPL(__imp__sub_82322B80) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82322bbc
	if (!ctx.cr6.eq) goto loc_82322BBC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-2068
	ctx.r3.s64 = ctx.r10.s64 + -2068;
loc_82322BB4:
	// bl 0x823234c8
	ctx.lr = 0x82322BB8;
	sub_823234C8(ctx, base);
	// b 0x82322d0c
	goto loc_82322D0C;
loc_82322BBC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82322bdc
	if (!ctx.cr6.eq) goto loc_82322BDC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-2080
	ctx.r3.s64 = ctx.r10.s64 + -2080;
	// b 0x82322bb4
	goto loc_82322BB4;
loc_82322BDC:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82322d0c
	if (!ctx.cr6.gt) goto loc_82322D0C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322d0c
	if (ctx.cr6.eq) goto loc_82322D0C;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82322cbc
	if (!ctx.cr6.eq) goto loc_82322CBC;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322c18
	if (ctx.cr6.eq) goto loc_82322C18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82322C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82322C18:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82322c58
	if (!ctx.cr6.lt) goto loc_82322C58;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82322c44
	if (ctx.cr6.lt) goto loc_82322C44;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82322C44:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82322C58;
	sub_8233E4E0(ctx, base);
loc_82322C58:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r3,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82322c98
	if (!ctx.cr6.gt) goto loc_82322C98;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82322c88
	if (ctx.cr6.lt) goto loc_82322C88;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82322C88:
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82322C98;
	sub_8233E4E0(ctx, base);
loc_82322C98:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x82322d0c
	goto loc_82322D0C;
loc_82322CBC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82322ce4
	if (!ctx.cr6.eq) goto loc_82322CE4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82322d0c
	goto loc_82322D0C;
loc_82322CE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322d0c
	if (ctx.cr6.eq) goto loc_82322D0C;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82322D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82322D0C:
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

__attribute__((alias("__imp__sub_82322D24"))) PPC_WEAK_FUNC(sub_82322D24);
PPC_FUNC_IMPL(__imp__sub_82322D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322D28"))) PPC_WEAK_FUNC(sub_82322D28);
PPC_FUNC_IMPL(__imp__sub_82322D28) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82322d64
	if (!ctx.cr6.eq) goto loc_82322D64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-2032
	ctx.r3.s64 = ctx.r10.s64 + -2032;
loc_82322D5C:
	// bl 0x823234c8
	ctx.lr = 0x82322D60;
	sub_823234C8(ctx, base);
	// b 0x82322eec
	goto loc_82322EEC;
loc_82322D64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82322d84
	if (!ctx.cr6.eq) goto loc_82322D84;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-2044
	ctx.r3.s64 = ctx.r10.s64 + -2044;
	// b 0x82322d5c
	goto loc_82322D5C;
loc_82322D84:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82322da4
	if (!ctx.cr6.eq) goto loc_82322DA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2128
	ctx.r4.s64 = ctx.r11.s64 + -2128;
	// addi r3,r10,-2056
	ctx.r3.s64 = ctx.r10.s64 + -2056;
	// b 0x82322d5c
	goto loc_82322D5C;
loc_82322DA4:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82322eec
	if (!ctx.cr6.gt) goto loc_82322EEC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82322eec
	if (ctx.cr6.eq) goto loc_82322EEC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82322e40
	if (!ctx.cr6.eq) goto loc_82322E40;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// divw r9,r8,r11
	ctx.r9.s32 = ctx.r8.s32 / ctx.r11.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// divw r7,r10,r11
	ctx.r7.s32 = ctx.r10.s32 / ctx.r11.s32;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82322e10
	if (!ctx.cr6.eq) goto loc_82322E10;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82322e2c
	goto loc_82322E2C;
loc_82322E10:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322e2c
	if (ctx.cr6.eq) goto loc_82322E2C;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82322E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82322E2C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82322eec
	goto loc_82322EEC;
loc_82322E40:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82322ec4
	if (!ctx.cr6.eq) goto loc_82322EC4;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// divw r9,r8,r11
	ctx.r9.s32 = ctx.r8.s32 / ctx.r11.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// divw r7,r10,r11
	ctx.r7.s32 = ctx.r10.s32 / ctx.r11.s32;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82322e94
	if (!ctx.cr6.eq) goto loc_82322E94;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82322eb0
	goto loc_82322EB0;
loc_82322E94:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322eb0
	if (ctx.cr6.eq) goto loc_82322EB0;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82322EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82322EB0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x82322eec
	goto loc_82322EEC;
loc_82322EC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322eec
	if (ctx.cr6.eq) goto loc_82322EEC;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82322EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82322EEC:
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

__attribute__((alias("__imp__sub_82322F04"))) PPC_WEAK_FUNC(sub_82322F04);
PPC_FUNC_IMPL(__imp__sub_82322F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322F08"))) PPC_WEAK_FUNC(sub_82322F08);
PPC_FUNC_IMPL(__imp__sub_82322F08) {
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
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-2496
	ctx.r11.s64 = ctx.r11.s64 + -2496;
	// stw r11,-15064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15064, ctx.r11.u32);
	// bl 0x82327da0
	ctx.lr = 0x82322F30;
	sub_82327DA0(ctx, base);
	// bl 0x82327e80
	ctx.lr = 0x82322F34;
	sub_82327E80(ctx, base);
	// lis r30,-32185
	ctx.r30.s64 = -2109276160;
	// lwz r31,-15060(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15060);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82322f58
	if (!ctx.cr6.eq) goto loc_82322F58;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r5,27648
	ctx.r5.s64 = 27648;
	// addi r3,r11,13120
	ctx.r3.s64 = ctx.r11.s64 + 13120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82322F58;
	sub_8233EAF0(ctx, base);
loc_82322F58:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,-15060(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15060, ctx.r11.u32);
	// bl 0x82327ec0
	ctx.lr = 0x82322F64;
	sub_82327EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82322F7C"))) PPC_WEAK_FUNC(sub_82322F7C);
PPC_FUNC_IMPL(__imp__sub_82322F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322F80"))) PPC_WEAK_FUNC(sub_82322F80);
PPC_FUNC_IMPL(__imp__sub_82322F80) {
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
	// bl 0x82327e80
	ctx.lr = 0x82322F90;
	sub_82327E80(ctx, base);
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lwz r11,-15060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15060);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-15060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15060, ctx.r11.u32);
	// bne 0x82322fb8
	if (!ctx.cr0.eq) goto loc_82322FB8;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r5,27648
	ctx.r5.s64 = 27648;
	// addi r3,r11,13120
	ctx.r3.s64 = ctx.r11.s64 + 13120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82322FB8;
	sub_8233EAF0(ctx, base);
loc_82322FB8:
	// bl 0x82327ec0
	ctx.lr = 0x82322FBC;
	sub_82327EC0(ctx, base);
	// bl 0x82327e18
	ctx.lr = 0x82322FC0;
	sub_82327E18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82322FD0"))) PPC_WEAK_FUNC(sub_82322FD0);
PPC_FUNC_IMPL(__imp__sub_82322FD0) {
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
	// bl 0x82327e80
	ctx.lr = 0x82322FE8;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82323008
	if (!ctx.cr6.eq) goto loc_82323008;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-2276
	ctx.r3.s64 = ctx.r10.s64 + -2276;
loc_82323000:
	// bl 0x823234c8
	ctx.lr = 0x82323004;
	sub_823234C8(ctx, base);
	// b 0x82323040
	goto loc_82323040;
loc_82323008:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323028
	if (!ctx.cr6.eq) goto loc_82323028;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-2320
	ctx.r3.s64 = ctx.r10.s64 + -2320;
	// b 0x82323000
	goto loc_82323000;
loc_82323028:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82323038;
	sub_8233EAF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82323040:
	// bl 0x82327ec0
	ctx.lr = 0x82323044;
	sub_82327EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82323058"))) PPC_WEAK_FUNC(sub_82323058);
PPC_FUNC_IMPL(__imp__sub_82323058) {
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
	// bl 0x82327e80
	ctx.lr = 0x82323070;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82323094
	if (!ctx.cr6.eq) goto loc_82323094;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-2224
	ctx.r3.s64 = ctx.r10.s64 + -2224;
loc_82323088:
	// bl 0x823234c8
	ctx.lr = 0x8232308C;
	sub_823234C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x823230b8
	goto loc_823230B8;
loc_82323094:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823230b4
	if (!ctx.cr6.eq) goto loc_823230B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-2236
	ctx.r3.s64 = ctx.r10.s64 + -2236;
	// b 0x82323088
	goto loc_82323088;
loc_823230B4:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_823230B8:
	// bl 0x82327ec0
	ctx.lr = 0x823230BC;
	sub_82327EC0(ctx, base);
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

__attribute__((alias("__imp__sub_823230D4"))) PPC_WEAK_FUNC(sub_823230D4);
PPC_FUNC_IMPL(__imp__sub_823230D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823230D8"))) PPC_WEAK_FUNC(sub_823230D8);
PPC_FUNC_IMPL(__imp__sub_823230D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823230E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82327e80
	ctx.lr = 0x823230F4;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82323114
	if (!ctx.cr6.eq) goto loc_82323114;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-2200
	ctx.r3.s64 = ctx.r10.s64 + -2200;
loc_8232310C:
	// bl 0x823234c8
	ctx.lr = 0x82323110;
	sub_823234C8(ctx, base);
	// b 0x8232313c
	goto loc_8232313C;
loc_82323114:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323134
	if (!ctx.cr6.eq) goto loc_82323134;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-2212
	ctx.r3.s64 = ctx.r10.s64 + -2212;
	// b 0x8232310c
	goto loc_8232310C;
loc_82323134:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_8232313C:
	// bl 0x82327ec0
	ctx.lr = 0x82323140;
	sub_82327EC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323148"))) PPC_WEAK_FUNC(sub_82323148);
PPC_FUNC_IMPL(__imp__sub_82323148) {
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
	// bl 0x82327e80
	ctx.lr = 0x82323160;
	sub_82327E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322978
	ctx.lr = 0x82323168;
	sub_82322978(ctx, base);
	// bl 0x82327ec0
	ctx.lr = 0x8232316C;
	sub_82327EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82323180"))) PPC_WEAK_FUNC(sub_82323180);
PPC_FUNC_IMPL(__imp__sub_82323180) {
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
	// bl 0x82327e80
	ctx.lr = 0x823231A0;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823231c0
	if (!ctx.cr6.eq) goto loc_823231C0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-2152
	ctx.r3.s64 = ctx.r10.s64 + -2152;
loc_823231B8:
	// bl 0x823234c8
	ctx.lr = 0x823231BC;
	sub_823234C8(ctx, base);
	// b 0x8232321c
	goto loc_8232321C;
loc_823231C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823231e0
	if (!ctx.cr6.eq) goto loc_823231E0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-2164
	ctx.r3.s64 = ctx.r10.s64 + -2164;
	// b 0x823231b8
	goto loc_823231B8;
loc_823231E0:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x823231f0
	if (!ctx.cr6.eq) goto loc_823231F0;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82323220
	goto loc_82323220;
loc_823231F0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82323200
	if (!ctx.cr6.eq) goto loc_82323200;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x82323220
	goto loc_82323220;
loc_82323200:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232321c
	if (ctx.cr6.eq) goto loc_8232321C;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232321C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232321C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82323220:
	// bl 0x82327ec0
	ctx.lr = 0x82323224;
	sub_82327EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82323240"))) PPC_WEAK_FUNC(sub_82323240);
PPC_FUNC_IMPL(__imp__sub_82323240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82323248;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x82327e80
	ctx.lr = 0x82323260;
	sub_82327E80(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823229e0
	ctx.lr = 0x82323274;
	sub_823229E0(ctx, base);
	// bl 0x82327ec0
	ctx.lr = 0x82323278;
	sub_82327EC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323280"))) PPC_WEAK_FUNC(sub_82323280);
PPC_FUNC_IMPL(__imp__sub_82323280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82323288;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82327e80
	ctx.lr = 0x8232329C;
	sub_82327E80(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322b80
	ctx.lr = 0x823232AC;
	sub_82322B80(ctx, base);
	// bl 0x82327ec0
	ctx.lr = 0x823232B0;
	sub_82327EC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823232B8"))) PPC_WEAK_FUNC(sub_823232B8);
PPC_FUNC_IMPL(__imp__sub_823232B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823232C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82327e80
	ctx.lr = 0x823232D4;
	sub_82327E80(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322d28
	ctx.lr = 0x823232E4;
	sub_82322D28(ctx, base);
	// bl 0x82327ec0
	ctx.lr = 0x823232E8;
	sub_82327EC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823232F0"))) PPC_WEAK_FUNC(sub_823232F0);
PPC_FUNC_IMPL(__imp__sub_823232F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823232F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x82327e80
	ctx.lr = 0x82323310;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82323334
	if (!ctx.cr6.eq) goto loc_82323334;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-2008
	ctx.r3.s64 = ctx.r10.s64 + -2008;
loc_82323328:
	// bl 0x823234c8
	ctx.lr = 0x8232332C;
	sub_823234C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x823233dc
	goto loc_823233DC;
loc_82323334:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323354
	if (!ctx.cr6.eq) goto loc_82323354;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-2020
	ctx.r3.s64 = ctx.r10.s64 + -2020;
	// b 0x82323328
	goto loc_82323328;
loc_82323354:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82323370
	if (!ctx.cr6.eq) goto loc_82323370;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x82323388
	goto loc_82323388;
loc_82323370:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x823233ac
	if (!ctx.cr6.eq) goto loc_823233AC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82323388:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8232339c
	if (!ctx.cr6.lt) goto loc_8232339C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8232339C:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x823233cc
	if (ctx.cr6.lt) goto loc_823233CC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x823233cc
	goto loc_823233CC;
loc_823233AC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823233cc
	if (ctx.cr6.eq) goto loc_823233CC;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823233CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823233CC:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_823233DC:
	// bl 0x82327ec0
	ctx.lr = 0x823233E0;
	sub_82327EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823233EC"))) PPC_WEAK_FUNC(sub_823233EC);
PPC_FUNC_IMPL(__imp__sub_823233EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823233F0"))) PPC_WEAK_FUNC(sub_823233F0);
PPC_FUNC_IMPL(__imp__sub_823233F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823233F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82327e80
	ctx.lr = 0x8232340C;
	sub_82327E80(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,13120
	ctx.r11.s64 = ctx.r11.s64 + 13120;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_82323420:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82323440
	if (ctx.cr6.eq) goto loc_82323440;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// addi r7,r11,27652
	ctx.r7.s64 = ctx.r11.s64 + 27652;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82323420
	if (ctx.cr6.lt) goto loc_82323420;
loc_82323440:
	// cmpwi cr6,r10,384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 384, ctx.xer);
	// bne cr6,0x82323450
	if (!ctx.cr6.eq) goto loc_82323450;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// b 0x823234a4
	goto loc_823234A4;
loc_82323450:
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r9,-32198
	ctx.r9.s64 = -2110128128;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stw r31,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r31.u32);
	// lis r6,-32206
	ctx.r6.s64 = -2110652416;
	// addi r9,r9,-22372
	ctx.r9.s64 = ctx.r9.s64 + -22372;
	// addi r7,r7,-2416
	ctx.r7.s64 = ctx.r7.s64 + -2416;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// addi r6,r6,10544
	ctx.r6.s64 = ctx.r6.s64 + 10544;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82322978
	ctx.lr = 0x823234A4;
	sub_82322978(ctx, base);
loc_823234A4:
	// bl 0x82327ec0
	ctx.lr = 0x823234A8;
	sub_82327EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823234B4"))) PPC_WEAK_FUNC(sub_823234B4);
PPC_FUNC_IMPL(__imp__sub_823234B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823234B8"))) PPC_WEAK_FUNC(sub_823234B8);
PPC_FUNC_IMPL(__imp__sub_823234B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-1980
	ctx.r3.s64 = ctx.r11.s64 + -1980;
	// b 0x82327d08
	sub_82327D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823234C4"))) PPC_WEAK_FUNC(sub_823234C4);
PPC_FUNC_IMPL(__imp__sub_823234C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823234C8"))) PPC_WEAK_FUNC(sub_823234C8);
PPC_FUNC_IMPL(__imp__sub_823234C8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82327d10
	ctx.lr = 0x823234EC;
	sub_82327D10(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82327d70
	ctx.lr = 0x823234FC;
	sub_82327D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82327d08
	ctx.lr = 0x82323504;
	sub_82327D08(ctx, base);
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

__attribute__((alias("__imp__sub_82323518"))) PPC_WEAK_FUNC(sub_82323518);
PPC_FUNC_IMPL(__imp__sub_82323518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82323534
	if (!ctx.cr6.eq) goto loc_82323534;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-1788
	ctx.r3.s64 = ctx.r10.s64 + -1788;
	// b 0x823234c8
	sub_823234C8(ctx, base);
	return;
loc_82323534:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323554
	if (!ctx.cr6.eq) goto loc_82323554;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-1800
	ctx.r3.s64 = ctx.r10.s64 + -1800;
	// b 0x823234c8
	sub_823234C8(ctx, base);
	return;
loc_82323554:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82323590
	if (!ctx.cr6.eq) goto loc_82323590;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82323590:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82323604
	if (!ctx.cr6.eq) goto loc_82323604;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addme r9,r9
	temp.u64 = ctx.r9.u64 + ctx.xer.ca - 1;
	ctx.xer.ca = (ctx.r9.u64 > temp.u64) || (ctx.r9.u64 == temp.u64 && ctx.xer.ca);
	ctx.r9.u64 = temp.u64;
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823235d0
	if (ctx.cr6.lt) goto loc_823235D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823235D0:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82323604:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8232362C"))) PPC_WEAK_FUNC(sub_8232362C);
PPC_FUNC_IMPL(__imp__sub_8232362C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82323630"))) PPC_WEAK_FUNC(sub_82323630);
PPC_FUNC_IMPL(__imp__sub_82323630) {
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
	// bl 0x82327da0
	ctx.lr = 0x82323648;
	sub_82327DA0(ctx, base);
	// bl 0x82327e80
	ctx.lr = 0x8232364C;
	sub_82327E80(ctx, base);
	// lis r30,-32185
	ctx.r30.s64 = -2109276160;
	// lwz r31,-15056(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15056);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82323670
	if (!ctx.cr6.eq) goto loc_82323670;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r5,1728
	ctx.r5.s64 = 1728;
	// addi r3,r11,11392
	ctx.r3.s64 = ctx.r11.s64 + 11392;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x82323670;
	sub_8233EAF0(ctx, base);
loc_82323670:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,-15056(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15056, ctx.r11.u32);
	// bl 0x82327ec0
	ctx.lr = 0x8232367C;
	sub_82327EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82323694"))) PPC_WEAK_FUNC(sub_82323694);
PPC_FUNC_IMPL(__imp__sub_82323694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82323698"))) PPC_WEAK_FUNC(sub_82323698);
PPC_FUNC_IMPL(__imp__sub_82323698) {
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
	// bl 0x82327e80
	ctx.lr = 0x823236A8;
	sub_82327E80(ctx, base);
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lwz r11,-15056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15056);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-15056(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15056, ctx.r11.u32);
	// bne 0x823236d0
	if (!ctx.cr0.eq) goto loc_823236D0;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r5,1728
	ctx.r5.s64 = 1728;
	// addi r3,r11,11392
	ctx.r3.s64 = ctx.r11.s64 + 11392;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x823236D0;
	sub_8233EAF0(ctx, base);
loc_823236D0:
	// bl 0x82327ec0
	ctx.lr = 0x823236D4;
	sub_82327EC0(ctx, base);
	// bl 0x82327e18
	ctx.lr = 0x823236D8;
	sub_82327E18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823236E8"))) PPC_WEAK_FUNC(sub_823236E8);
PPC_FUNC_IMPL(__imp__sub_823236E8) {
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
	// bl 0x82327e80
	ctx.lr = 0x82323700;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82323720
	if (!ctx.cr6.eq) goto loc_82323720;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-1956
	ctx.r3.s64 = ctx.r10.s64 + -1956;
loc_82323718:
	// bl 0x823234c8
	ctx.lr = 0x8232371C;
	sub_823234C8(ctx, base);
	// b 0x82323758
	goto loc_82323758;
loc_82323720:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323740
	if (!ctx.cr6.eq) goto loc_82323740;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-1968
	ctx.r3.s64 = ctx.r10.s64 + -1968;
	// b 0x82323718
	goto loc_82323718;
loc_82323740:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82323750;
	sub_8233EAF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82323758:
	// bl 0x82327ec0
	ctx.lr = 0x8232375C;
	sub_82327EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82323770"))) PPC_WEAK_FUNC(sub_82323770);
PPC_FUNC_IMPL(__imp__sub_82323770) {
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
	// bl 0x82327e80
	ctx.lr = 0x82323788;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823237ac
	if (!ctx.cr6.eq) goto loc_823237AC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-1932
	ctx.r3.s64 = ctx.r10.s64 + -1932;
loc_823237A0:
	// bl 0x823234c8
	ctx.lr = 0x823237A4;
	sub_823234C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x823237d0
	goto loc_823237D0;
loc_823237AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823237cc
	if (!ctx.cr6.eq) goto loc_823237CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-1944
	ctx.r3.s64 = ctx.r10.s64 + -1944;
	// b 0x823237a0
	goto loc_823237A0;
loc_823237CC:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_823237D0:
	// bl 0x82327ec0
	ctx.lr = 0x823237D4;
	sub_82327EC0(ctx, base);
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

__attribute__((alias("__imp__sub_823237EC"))) PPC_WEAK_FUNC(sub_823237EC);
PPC_FUNC_IMPL(__imp__sub_823237EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823237F0"))) PPC_WEAK_FUNC(sub_823237F0);
PPC_FUNC_IMPL(__imp__sub_823237F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823237F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82327e80
	ctx.lr = 0x8232380C;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8232382c
	if (!ctx.cr6.eq) goto loc_8232382C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-1908
	ctx.r3.s64 = ctx.r10.s64 + -1908;
loc_82323824:
	// bl 0x823234c8
	ctx.lr = 0x82323828;
	sub_823234C8(ctx, base);
	// b 0x82323854
	goto loc_82323854;
loc_8232382C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232384c
	if (!ctx.cr6.eq) goto loc_8232384C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-1920
	ctx.r3.s64 = ctx.r10.s64 + -1920;
	// b 0x82323824
	goto loc_82323824;
loc_8232384C:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_82323854:
	// bl 0x82327ec0
	ctx.lr = 0x82323858;
	sub_82327EC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323860"))) PPC_WEAK_FUNC(sub_82323860);
PPC_FUNC_IMPL(__imp__sub_82323860) {
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
	// bl 0x82327e80
	ctx.lr = 0x82323878;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82323898
	if (!ctx.cr6.eq) goto loc_82323898;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-1884
	ctx.r3.s64 = ctx.r10.s64 + -1884;
loc_82323890:
	// bl 0x823234c8
	ctx.lr = 0x82323894;
	sub_823234C8(ctx, base);
	// b 0x823238c8
	goto loc_823238C8;
loc_82323898:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823238b8
	if (!ctx.cr6.eq) goto loc_823238B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-1896
	ctx.r3.s64 = ctx.r10.s64 + -1896;
	// b 0x82323890
	goto loc_82323890;
loc_823238B8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_823238C8:
	// bl 0x82327ec0
	ctx.lr = 0x823238CC;
	sub_82327EC0(ctx, base);
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

__attribute__((alias("__imp__sub_823238E0"))) PPC_WEAK_FUNC(sub_823238E0);
PPC_FUNC_IMPL(__imp__sub_823238E0) {
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
	// bl 0x82327e80
	ctx.lr = 0x82323900;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82323920
	if (!ctx.cr6.eq) goto loc_82323920;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-1860
	ctx.r3.s64 = ctx.r10.s64 + -1860;
loc_82323918:
	// bl 0x823234c8
	ctx.lr = 0x8232391C;
	sub_823234C8(ctx, base);
	// b 0x82323974
	goto loc_82323974;
loc_82323920:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323940
	if (!ctx.cr6.eq) goto loc_82323940;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-1872
	ctx.r3.s64 = ctx.r10.s64 + -1872;
	// b 0x82323918
	goto loc_82323918;
loc_82323940:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82323950
	if (!ctx.cr6.eq) goto loc_82323950;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82323978
	goto loc_82323978;
loc_82323950:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82323974
	if (ctx.cr6.eq) goto loc_82323974;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82323974
	if (ctx.cr6.eq) goto loc_82323974;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82323974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82323974:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82323978:
	// bl 0x82327ec0
	ctx.lr = 0x8232397C;
	sub_82327EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82323998"))) PPC_WEAK_FUNC(sub_82323998);
PPC_FUNC_IMPL(__imp__sub_82323998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823239A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82327e80
	ctx.lr = 0x823239B8;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823239d8
	if (!ctx.cr6.eq) goto loc_823239D8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-1836
	ctx.r3.s64 = ctx.r10.s64 + -1836;
loc_823239D0:
	// bl 0x823234c8
	ctx.lr = 0x823239D4;
	sub_823234C8(ctx, base);
	// b 0x82323a84
	goto loc_82323A84;
loc_823239D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823239f8
	if (!ctx.cr6.eq) goto loc_823239F8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-1848
	ctx.r3.s64 = ctx.r10.s64 + -1848;
	// b 0x823239d0
	goto loc_823239D0;
loc_823239F8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82323a10
	if (!ctx.cr6.eq) goto loc_82323A10;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82323a84
	goto loc_82323A84;
loc_82323A10:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82323a5c
	if (!ctx.cr6.eq) goto loc_82323A5C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82323a28
	if (ctx.cr6.lt) goto loc_82323A28;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82323A28:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82323a84
	goto loc_82323A84;
loc_82323A5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82323a84
	if (ctx.cr6.eq) goto loc_82323A84;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82323A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82323A84:
	// bl 0x82327ec0
	ctx.lr = 0x82323A88;
	sub_82327EC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323A90"))) PPC_WEAK_FUNC(sub_82323A90);
PPC_FUNC_IMPL(__imp__sub_82323A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82323A98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82327e80
	ctx.lr = 0x82323AAC;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82323acc
	if (!ctx.cr6.eq) goto loc_82323ACC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-1812
	ctx.r3.s64 = ctx.r10.s64 + -1812;
loc_82323AC4:
	// bl 0x823234c8
	ctx.lr = 0x82323AC8;
	sub_823234C8(ctx, base);
	// b 0x82323b3c
	goto loc_82323B3C;
loc_82323ACC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323aec
	if (!ctx.cr6.eq) goto loc_82323AEC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-1824
	ctx.r3.s64 = ctx.r10.s64 + -1824;
	// b 0x82323ac4
	goto loc_82323AC4;
loc_82323AEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82323b3c
	if (!ctx.cr6.gt) goto loc_82323B3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82323b3c
	if (ctx.cr6.eq) goto loc_82323B3C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82323b3c
	if (ctx.cr6.eq) goto loc_82323B3C;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82323b3c
	if (ctx.cr6.eq) goto loc_82323B3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82323b3c
	if (ctx.cr6.eq) goto loc_82323B3C;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82323B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82323B3C:
	// bl 0x82327ec0
	ctx.lr = 0x82323B40;
	sub_82327EC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323B48"))) PPC_WEAK_FUNC(sub_82323B48);
PPC_FUNC_IMPL(__imp__sub_82323B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82323B50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82327e80
	ctx.lr = 0x82323B64;
	sub_82327E80(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82323518
	ctx.lr = 0x82323B74;
	sub_82323518(ctx, base);
	// bl 0x82327ec0
	ctx.lr = 0x82323B78;
	sub_82327EC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323B80"))) PPC_WEAK_FUNC(sub_82323B80);
PPC_FUNC_IMPL(__imp__sub_82323B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82323B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x82327e80
	ctx.lr = 0x82323BA0;
	sub_82327E80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82323bc4
	if (!ctx.cr6.eq) goto loc_82323BC4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// addi r3,r10,-1764
	ctx.r3.s64 = ctx.r10.s64 + -1764;
loc_82323BB8:
	// bl 0x823234c8
	ctx.lr = 0x82323BBC;
	sub_823234C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82323c38
	goto loc_82323C38;
loc_82323BC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323be4
	if (!ctx.cr6.eq) goto loc_82323BE4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r10,-1776
	ctx.r3.s64 = ctx.r10.s64 + -1776;
	// b 0x82323bb8
	goto loc_82323BB8;
loc_82323BE4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82323c28
	if (ctx.cr6.eq) goto loc_82323C28;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82323c08
	if (!ctx.cr6.eq) goto loc_82323C08;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82323c28
	if (ctx.cr6.lt) goto loc_82323C28;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82323c28
	goto loc_82323C28;
loc_82323C08:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82323c28
	if (ctx.cr6.eq) goto loc_82323C28;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82323C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82323C28:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82323C38:
	// bl 0x82327ec0
	ctx.lr = 0x82323C3C;
	sub_82327EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323C48"))) PPC_WEAK_FUNC(sub_82323C48);
PPC_FUNC_IMPL(__imp__sub_82323C48) {
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
	// bl 0x82327e80
	ctx.lr = 0x82323C68;
	sub_82327E80(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11392
	ctx.r11.s64 = ctx.r11.s64 + 11392;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_82323C78:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82323c98
	if (ctx.cr6.eq) goto loc_82323C98;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r8,r11,1732
	ctx.r8.s64 = ctx.r11.s64 + 1732;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82323c78
	if (ctx.cr6.lt) goto loc_82323C78;
loc_82323C98:
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// bne cr6,0x82323ca8
	if (!ctx.cr6.eq) goto loc_82323CA8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82323cf8
	goto loc_82323CF8;
loc_82323CA8:
	// mulli r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 * 36;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r8,-32206
	ctx.r8.s64 = -2110652416;
	// stw r11,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r11.u32);
	// addi r10,r10,-22324
	ctx.r10.s64 = ctx.r10.s64 + -22324;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,13496
	ctx.r10.s64 = ctx.r8.s64 + 13496;
	// addi r9,r9,-1996
	ctx.r9.s64 = ctx.r9.s64 + -1996;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
loc_82323CF8:
	// bl 0x82327ec0
	ctx.lr = 0x82323CFC;
	sub_82327EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82323D18"))) PPC_WEAK_FUNC(sub_82323D18);
PPC_FUNC_IMPL(__imp__sub_82323D18) {
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
	// bl 0x820de5b0
	ctx.lr = 0x82323D28;
	sub_820DE5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82323d50
	if (ctx.cr6.eq) goto loc_82323D50;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,65283
	ctx.r4.u64 = ctx.r4.u64 | 65283;
	// bl 0x823251a0
	ctx.lr = 0x82323D40;
	sub_823251A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82323D50:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r11,-1520
	ctx.r3.s64 = ctx.r11.s64 + -1520;
	// li r4,5420
	ctx.r4.s64 = 5420;
	// bl 0x82327f00
	ctx.lr = 0x82323D64;
	sub_82327F00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82323d8c
	if (ctx.cr6.eq) goto loc_82323D8C;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,65287
	ctx.r4.u64 = ctx.r4.u64 | 65287;
	// bl 0x823251a0
	ctx.lr = 0x82323D7C;
	sub_823251A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82323D8C:
	// bl 0x823274d8
	ctx.lr = 0x82323D90;
	sub_823274D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82323da8
	if (ctx.cr6.eq) goto loc_82323DA8;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,65289
	ctx.r4.u64 = ctx.r4.u64 | 65289;
	// bl 0x823251a0
	ctx.lr = 0x82323DA8;
	sub_823251A0(ctx, base);
loc_82323DA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82323DB8"))) PPC_WEAK_FUNC(sub_82323DB8);
PPC_FUNC_IMPL(__imp__sub_82323DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r10,384
	ctx.r10.s64 = 384;
	// addi r8,r11,-15040
	ctx.r8.s64 = ctx.r11.s64 + -15040;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82323DD0:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82323dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323DD0;
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,384
	ctx.r11.s64 = ctx.r8.s64 + 384;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82323DE8:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82323de8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323DE8;
	// li r10,384
	ctx.r10.s64 = 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82323E0C:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82323e0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323E0C;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r11,r8,384
	ctx.r11.s64 = ctx.r8.s64 + 384;
	// stw r11,11388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82323E24"))) PPC_WEAK_FUNC(sub_82323E24);
PPC_FUNC_IMPL(__imp__sub_82323E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82323E28"))) PPC_WEAK_FUNC(sub_82323E28);
PPC_FUNC_IMPL(__imp__sub_82323E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// addi r11,r11,-14016
	ctx.r11.s64 = ctx.r11.s64 + -14016;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r11,-28280
	ctx.r11.s64 = ctx.r11.s64 + -28280;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,33024
	ctx.r10.u64 = ctx.r10.u64 | 33024;
loc_82323E64:
	// stwux r9,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82323e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323E64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82323E70"))) PPC_WEAK_FUNC(sub_82323E70);
PPC_FUNC_IMPL(__imp__sub_82323E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4416);
	// addi r11,r3,2816
	ctx.r11.s64 = ctx.r3.s64 + 2816;
	// addi r9,r3,256
	ctx.r9.s64 = ctx.r3.s64 + 256;
	// stw r3,4628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4628, ctx.r3.u32);
	// addi r8,r11,384
	ctx.r8.s64 = ctx.r11.s64 + 384;
	// stw r11,4632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4632, ctx.r11.u32);
	// addi r7,r3,384
	ctx.r7.s64 = ctx.r3.s64 + 384;
	// addi r6,r3,512
	ctx.r6.s64 = ctx.r3.s64 + 512;
	// stw r8,4636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4636, ctx.r8.u32);
	// addi r5,r3,640
	ctx.r5.s64 = ctx.r3.s64 + 640;
	// stw r10,4624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4624, ctx.r10.u32);
	// addi r4,r3,128
	ctx.r4.s64 = ctx.r3.s64 + 128;
	// stw r9,5256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5256, ctx.r9.u32);
	// stw r7,5260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5260, ctx.r7.u32);
	// stw r6,5264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5264, ctx.r6.u32);
	// stw r5,5268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5268, ctx.r5.u32);
	// stw r3,5272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5272, ctx.r3.u32);
	// stw r4,5276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5276, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82323EBC"))) PPC_WEAK_FUNC(sub_82323EBC);
PPC_FUNC_IMPL(__imp__sub_82323EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82323EC0"))) PPC_WEAK_FUNC(sub_82323EC0);
PPC_FUNC_IMPL(__imp__sub_82323EC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// sth r10,80(r3)
	PPC_STORE_U16(ctx.r3.u32 + 80, ctx.r10.u16);
	// sth r10,82(r3)
	PPC_STORE_U16(ctx.r3.u32 + 82, ctx.r10.u16);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// stb r10,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, ctx.r10.u8);
	// stb r10,86(r3)
	PPC_STORE_U8(ctx.r3.u32 + 86, ctx.r10.u8);
	// stb r10,87(r3)
	PPC_STORE_U8(ctx.r3.u32 + 87, ctx.r10.u8);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stb r8,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r8.u8);
	// stb r11,90(r3)
	PPC_STORE_U8(ctx.r3.u32 + 90, ctx.r11.u8);
	// stb r11,91(r3)
	PPC_STORE_U8(ctx.r3.u32 + 91, ctx.r11.u8);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stb r9,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r9.u8);
	// stb r10,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r10.u8);
	// stb r10,95(r3)
	PPC_STORE_U8(ctx.r3.u32 + 95, ctx.r10.u8);
	// stb r10,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r10.u8);
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r11.u8);
	// stb r9,98(r3)
	PPC_STORE_U8(ctx.r3.u32 + 98, ctx.r9.u8);
	// stb r9,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r9.u8);
	// stb r9,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r9.u8);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82323F7C"))) PPC_WEAK_FUNC(sub_82323F7C);
PPC_FUNC_IMPL(__imp__sub_82323F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82323F80"))) PPC_WEAK_FUNC(sub_82323F80);
PPC_FUNC_IMPL(__imp__sub_82323F80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-14016
	ctx.r9.s64 = ctx.r10.s64 + -14016;
	// lwz r3,88(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r9,84(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82323fc0
	if (!ctx.cr6.gt) goto loc_82323FC0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,33024
	ctx.r10.u64 = ctx.r10.u64 | 33024;
loc_82323FA4:
	// lwz r8,4744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4744);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82323fa4
	if (ctx.cr6.lt) goto loc_82323FA4;
loc_82323FC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82323FC8"))) PPC_WEAK_FUNC(sub_82323FC8);
PPC_FUNC_IMPL(__imp__sub_82323FC8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,2816
	ctx.r11.s64 = ctx.r3.s64 + 2816;
	// addi r10,r3,768
	ctx.r10.s64 = ctx.r3.s64 + 768;
	// addi r9,r3,5256
	ctx.r9.s64 = ctx.r3.s64 + 5256;
	// stw r11,4544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4544, ctx.r11.u32);
	// stw r10,4516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4516, ctx.r10.u32);
	// stw r9,4520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4520, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82323FE4"))) PPC_WEAK_FUNC(sub_82323FE4);
PPC_FUNC_IMPL(__imp__sub_82323FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82323FE8"))) PPC_WEAK_FUNC(sub_82323FE8);
PPC_FUNC_IMPL(__imp__sub_82323FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// addi r10,r11,-14016
	ctx.r10.s64 = ctx.r11.s64 + -14016;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,6
	ctx.r9.s64 = 6;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,33024
	ctx.r10.u64 = ctx.r10.u64 | 33024;
loc_8232401C:
	// lwz r9,4744(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4744);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82324034
	if (!ctx.cr6.eq) goto loc_82324034;
	// addi r9,r3,1188
	ctx.r9.s64 = ctx.r3.s64 + 1188;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
loc_82324034:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x8232401c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232401C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324040"))) PPC_WEAK_FUNC(sub_82324040);
PPC_FUNC_IMPL(__imp__sub_82324040) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82324054
	if (!ctx.cr6.eq) goto loc_82324054;
loc_8232404C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82324054:
	// lwz r10,4744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4744);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8232404c
	if (!ctx.cr6.eq) goto loc_8232404C;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-15048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15048, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324070"))) PPC_WEAK_FUNC(sub_82324070);
PPC_FUNC_IMPL(__imp__sub_82324070) {
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
	// bl 0x82323db8
	ctx.lr = 0x82324088;
	sub_82323DB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823240ac
	if (ctx.cr6.eq) goto loc_823240AC;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r11,-15040
	ctx.r4.s64 = ctx.r11.s64 + -15040;
	// bl 0x82329ab8
	ctx.lr = 0x823240A0;
	sub_82329AB8(ctx, base);
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r11,r31,384
	ctx.r11.s64 = ctx.r31.s64 + 384;
	// stw r11,11388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11388, ctx.r11.u32);
loc_823240AC:
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

__attribute__((alias("__imp__sub_823240C0"))) PPC_WEAK_FUNC(sub_823240C0);
PPC_FUNC_IMPL(__imp__sub_823240C0) {
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
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// addi r8,r10,-14016
	ctx.r8.s64 = ctx.r10.s64 + -14016;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// lwz r10,11384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11384);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// lis r5,-32171
	ctx.r5.s64 = -2108358656;
	// lis r4,-32171
	ctx.r4.s64 = -2108358656;
	// lwz r11,80(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// lis r31,-32171
	ctx.r31.s64 = -2108358656;
	// stw r10,4368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4368, ctx.r10.u32);
	// addi r30,r11,4576
	ctx.r30.s64 = ctx.r11.s64 + 4576;
	// lwz r10,11368(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11368);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r10,4372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4372, ctx.r10.u32);
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r10,r11,4352
	ctx.r10.s64 = ctx.r11.s64 + 4352;
	// lwz r11,11344(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11344);
	// addi r7,r11,-32
	ctx.r7.s64 = ctx.r11.s64 + -32;
	// stw r7,4376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4376, ctx.r7.u32);
	// lwz r11,11380(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11380);
	// addi r6,r11,-32
	ctx.r6.s64 = ctx.r11.s64 + -32;
	// stw r6,4380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4380, ctx.r6.u32);
	// lwz r11,11300(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 11300);
	// stw r11,4384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4384, ctx.r11.u32);
	// lwz r11,11304(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 11304);
	// stw r11,4388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4388, ctx.r11.u32);
	// lwz r11,11376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11376);
	// stw r30,4408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4408, ctx.r30.u32);
	// stw r9,4412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4412, ctx.r9.u32);
	// stw r10,4400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4400, ctx.r10.u32);
	// stw r11,4392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4392, ctx.r11.u32);
	// lwz r11,11388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11388);
	// stw r11,4416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4416, ctx.r11.u32);
	// bl 0x82323e70
	ctx.lr = 0x82324168;
	sub_82323E70(ctx, base);
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

__attribute__((alias("__imp__sub_82324180"))) PPC_WEAK_FUNC(sub_82324180);
PPC_FUNC_IMPL(__imp__sub_82324180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82324188;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,127
	ctx.r11.s64 = ctx.r4.s64 + 127;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// rlwinm r30,r11,0,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r5,r10,11,2,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x3FFFF800;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82329b88
	ctx.lr = 0x823241AC;
	sub_82329B88(ctx, base);
	// lis r9,-32185
	ctx.r9.s64 = -2109276160;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r28,r9,-14016
	ctx.r28.s64 = ctx.r9.s64 + -14016;
	// mulli r11,r31,5504
	ctx.r11.s64 = ctx.r31.s64 * 5504;
	// addi r4,r8,-1592
	ctx.r4.s64 = ctx.r8.s64 + -1592;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x820d9658
	ctx.lr = 0x823241D0;
	sub_820D9658(ctx, base);
	// addi r11,r29,1056
	ctx.r11.s64 = ctx.r29.s64 + 1056;
	// stw r29,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r29.u32);
	// stw r11,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r11.u32);
	// stw r31,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r31.u32);
	// stw r30,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823241EC"))) PPC_WEAK_FUNC(sub_823241EC);
PPC_FUNC_IMPL(__imp__sub_823241EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823241F0"))) PPC_WEAK_FUNC(sub_823241F0);
PPC_FUNC_IMPL(__imp__sub_823241F0) {
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
	// bl 0x821daa68
	ctx.lr = 0x82324200;
	sub_821DAA68(ctx, base);
	// bl 0x82329c08
	ctx.lr = 0x82324204;
	sub_82329C08(ctx, base);
	// bl 0x821daa68
	ctx.lr = 0x82324208;
	sub_821DAA68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324218"))) PPC_WEAK_FUNC(sub_82324218);
PPC_FUNC_IMPL(__imp__sub_82324218) {
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
	// addi r3,r3,4472
	ctx.r3.s64 = ctx.r3.s64 + 4472;
	// bl 0x8232a4d8
	ctx.lr = 0x82324234;
	sub_8232A4D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82323fc8
	ctx.lr = 0x8232423C;
	sub_82323FC8(ctx, base);
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

__attribute__((alias("__imp__sub_82324250"))) PPC_WEAK_FUNC(sub_82324250);
PPC_FUNC_IMPL(__imp__sub_82324250) {
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
	// bl 0x82324040
	ctx.lr = 0x82324268;
	sub_82324040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82324294
	if (ctx.cr6.eq) goto loc_82324294;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,513
	ctx.r4.u64 = ctx.r4.u64 | 513;
	// bl 0x823251a0
	ctx.lr = 0x82324280;
	sub_823251A0(ctx, base);
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
loc_82324294:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821daa68
	ctx.lr = 0x8232429C;
	sub_821DAA68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82329c50
	ctx.lr = 0x823242A4;
	sub_82329C50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4744, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823242C4"))) PPC_WEAK_FUNC(sub_823242C4);
PPC_FUNC_IMPL(__imp__sub_823242C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823242C8"))) PPC_WEAK_FUNC(sub_823242C8);
PPC_FUNC_IMPL(__imp__sub_823242C8) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823242fc
	if (!ctx.cr6.eq) goto loc_823242FC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82323fe8
	ctx.lr = 0x823242F0;
	sub_82323FE8(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// addi r11,r11,-14016
	ctx.r11.s64 = ctx.r11.s64 + -14016;
	// b 0x82324330
	goto loc_82324330;
loc_823242FC:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82324040
	ctx.lr = 0x82324304;
	sub_82324040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232432c
	if (ctx.cr6.eq) goto loc_8232432C;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,514
	ctx.r4.u64 = ctx.r4.u64 | 514;
	// bl 0x823251a0
	ctx.lr = 0x8232431C;
	sub_823251A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8232432C:
	// addi r11,r6,4752
	ctx.r11.s64 = ctx.r6.s64 + 4752;
loc_82324330:
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x821daa68
	ctx.lr = 0x82324344;
	sub_821DAA68(ctx, base);
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

__attribute__((alias("__imp__sub_82324358"))) PPC_WEAK_FUNC(sub_82324358);
PPC_FUNC_IMPL(__imp__sub_82324358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82324360;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r31,r11,-14016
	ctx.r31.s64 = ctx.r11.s64 + -14016;
	// addi r9,r10,-1680
	ctx.r9.s64 = ctx.r10.s64 + -1680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,-1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1028, ctx.r9.u32);
	// bl 0x82323d18
	ctx.lr = 0x82324384;
	sub_82323D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823243a8
	if (ctx.cr6.eq) goto loc_823243A8;
	// lis r11,-253
	ctx.r11.s64 = -16580608;
	// ori r11,r11,65285
	ctx.r11.u64 = ctx.r11.u64 | 65285;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82324404
	if (!ctx.cr6.eq) goto loc_82324404;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_823243A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821daa68
	ctx.lr = 0x823243B0;
	sub_821DAA68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82324180
	ctx.lr = 0x823243BC;
	sub_82324180(ctx, base);
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x821daa68
	ctx.lr = 0x823243C4;
	sub_821DAA68(ctx, base);
	// bl 0x823252a8
	ctx.lr = 0x823243C8;
	sub_823252A8(ctx, base);
	// bl 0x821daa68
	ctx.lr = 0x823243CC;
	sub_821DAA68(ctx, base);
	// bl 0x82329c00
	ctx.lr = 0x823243D0;
	sub_82329C00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,4656
	ctx.r3.s64 = ctx.r31.s64 + 4656;
	// bl 0x82329a60
	ctx.lr = 0x823243DC;
	sub_82329A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ac08
	ctx.lr = 0x823243E4;
	sub_8232AC08(ctx, base);
	// bl 0x8232a398
	ctx.lr = 0x823243E8;
	sub_8232A398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232a650
	ctx.lr = 0x823243F0;
	sub_8232A650(ctx, base);
	// addi r3,r31,6112
	ctx.r3.s64 = ctx.r31.s64 + 6112;
	// bl 0x82324070
	ctx.lr = 0x823243F8;
	sub_82324070(ctx, base);
	// bl 0x82323e28
	ctx.lr = 0x823243FC;
	sub_82323E28(ctx, base);
	// bl 0x821daa68
	ctx.lr = 0x82324400;
	sub_821DAA68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82324404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232440C"))) PPC_WEAK_FUNC(sub_8232440C);
PPC_FUNC_IMPL(__imp__sub_8232440C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324410"))) PPC_WEAK_FUNC(sub_82324410);
PPC_FUNC_IMPL(__imp__sub_82324410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82324418;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823240c0
	ctx.lr = 0x82324424;
	sub_823240C0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// stw r30,4748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4748, ctx.r30.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,-14016
	ctx.r4.s64 = ctx.r11.s64 + -14016;
	// addi r3,r3,4752
	ctx.r3.s64 = ctx.r3.s64 + 4752;
	// bl 0x820d9658
	ctx.lr = 0x82324440;
	sub_820D9658(ctx, base);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r30,4820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4820, ctx.r30.u32);
	// addi r3,r31,4956
	ctx.r3.s64 = ctx.r31.s64 + 4956;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stw r30,4824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4824, ctx.r30.u32);
	// stw r9,4816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4816, ctx.r9.u32);
	// bl 0x82325158
	ctx.lr = 0x8232445C;
	sub_82325158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ad18
	ctx.lr = 0x82324464;
	sub_8232AD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82324218
	ctx.lr = 0x8232446C;
	sub_82324218(ctx, base);
	// addi r3,r31,4828
	ctx.r3.s64 = ctx.r31.s64 + 4828;
	// bl 0x82323ec0
	ctx.lr = 0x82324474;
	sub_82323EC0(ctx, base);
	// stw r30,5280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5280, ctx.r30.u32);
	// stw r30,5284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5284, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,5240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5240, ctx.r30.u32);
	// stw r30,5244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5244, ctx.r30.u32);
	// stw r30,5248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5248, ctx.r30.u32);
	// stw r30,5252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5252, ctx.r30.u32);
	// stw r30,5300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5300, ctx.r30.u32);
loc_82324494:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823253b0
	ctx.lr = 0x823244AC;
	sub_823253B0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82324494
	if (ctx.cr6.lt) goto loc_82324494;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823253d8
	ctx.lr = 0x823244C8;
	sub_823253D8(ctx, base);
	// stw r30,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82329c10
	ctx.lr = 0x823244D4;
	sub_82329C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820de5b0
	ctx.lr = 0x823244DC;
	sub_820DE5B0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,5328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5328, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4744, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823244F4"))) PPC_WEAK_FUNC(sub_823244F4);
PPC_FUNC_IMPL(__imp__sub_823244F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823244F8"))) PPC_WEAK_FUNC(sub_823244F8);
PPC_FUNC_IMPL(__imp__sub_823244F8) {
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
	// bl 0x82323f80
	ctx.lr = 0x82324508;
	sub_82323F80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82324520
	if (!ctx.cr6.eq) goto loc_82324520;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82324520:
	// bl 0x82324410
	ctx.lr = 0x82324524;
	sub_82324410(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324534"))) PPC_WEAK_FUNC(sub_82324534);
PPC_FUNC_IMPL(__imp__sub_82324534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324538"))) PPC_WEAK_FUNC(sub_82324538);
PPC_FUNC_IMPL(__imp__sub_82324538) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x82324548
	if (ctx.cr6.lt) goto loc_82324548;
	// li r10,5
	ctx.r10.s64 = 5;
loc_82324548:
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,14788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14788, ctx.r10.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// addi r9,r11,-13920
	ctx.r9.s64 = ctx.r11.s64 + -13920;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_82324568:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82324568
	if (!ctx.cr0.eq) goto loc_82324568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324594"))) PPC_WEAK_FUNC(sub_82324594);
PPC_FUNC_IMPL(__imp__sub_82324594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324598"))) PPC_WEAK_FUNC(sub_82324598);
PPC_FUNC_IMPL(__imp__sub_82324598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x823245A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r11,14780
	ctx.r28.s64 = ctx.r11.s64 + 14780;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8232461c
	if (!ctx.cr6.gt) goto loc_8232461C;
	// lis r9,23130
	ctx.r9.s64 = 1515847680;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r26,r9,23130
	ctx.r26.u64 = ctx.r9.u64 | 23130;
	// addi r29,r10,-13920
	ctx.r29.s64 = ctx.r10.s64 + -13920;
loc_823245D4:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82324608
	if (ctx.cr6.eq) goto loc_82324608;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82324600
	if (!ctx.cr6.eq) goto loc_82324600;
	// addi r11,r29,92
	ctx.r11.s64 = ctx.r29.s64 + 92;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
loc_82324600:
	// bl 0x8232b270
	ctx.lr = 0x82324604;
	sub_8232B270(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
loc_82324608:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823245d4
	if (ctx.cr6.lt) goto loc_823245D4;
loc_8232461C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324624"))) PPC_WEAK_FUNC(sub_82324624);
PPC_FUNC_IMPL(__imp__sub_82324624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324628"))) PPC_WEAK_FUNC(sub_82324628);
PPC_FUNC_IMPL(__imp__sub_82324628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// lwz r3,14796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14796);
	// b 0x8232b660
	sub_8232B660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324634"))) PPC_WEAK_FUNC(sub_82324634);
PPC_FUNC_IMPL(__imp__sub_82324634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324638"))) PPC_WEAK_FUNC(sub_82324638);
PPC_FUNC_IMPL(__imp__sub_82324638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// lwz r3,14796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14796);
	// b 0x8232b6f8
	sub_8232B6F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324644"))) PPC_WEAK_FUNC(sub_82324644);
PPC_FUNC_IMPL(__imp__sub_82324644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324648"))) PPC_WEAK_FUNC(sub_82324648);
PPC_FUNC_IMPL(__imp__sub_82324648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82324650;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82324704
	if (ctx.cr6.eq) goto loc_82324704;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// bl 0x820c7ae8
	ctx.lr = 0x8232466C;
	sub_820C7AE8(ctx, base);
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// addi r24,r3,-1
	ctx.r24.s64 = ctx.r3.s64 + -1;
	// addi r28,r11,14780
	ctx.r28.s64 = ctx.r11.s64 + 14780;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82324704
	if (!ctx.cr6.gt) goto loc_82324704;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8232469C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x823246e8
	if (!ctx.cr6.lt) goto loc_823246E8;
loc_823246A8:
	// slw r11,r25,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r31.u8 & 0x3F));
	// and r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 & ctx.r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823246c0
	if (ctx.cr6.eq) goto loc_823246C0;
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x823246d0
	if (ctx.cr6.lt) goto loc_823246D0;
loc_823246C0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x823246a8
	if (ctx.cr6.lt) goto loc_823246A8;
	// b 0x823246e8
	goto loc_823246E8;
loc_823246D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r30,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x8232b2f8
	ctx.lr = 0x823246E0;
	sub_8232B2F8(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_823246E8:
	// add r8,r30,r9
	ctx.r8.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// blt cr6,0x8232469c
	if (ctx.cr6.lt) goto loc_8232469C;
loc_82324704:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232470C"))) PPC_WEAK_FUNC(sub_8232470C);
PPC_FUNC_IMPL(__imp__sub_8232470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324710"))) PPC_WEAK_FUNC(sub_82324710);
PPC_FUNC_IMPL(__imp__sub_82324710) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x82324628
	ctx.lr = 0x82324730;
	sub_82324628(ctx, base);
	// li r10,150
	ctx.r10.s64 = 150;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// bl 0x82324638
	ctx.lr = 0x8232473C;
	sub_82324638(ctx, base);
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

__attribute__((alias("__imp__sub_82324750"))) PPC_WEAK_FUNC(sub_82324750);
PPC_FUNC_IMPL(__imp__sub_82324750) {
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
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,14792(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14792);
loc_8232476C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823247a0
	if (ctx.cr6.eq) goto loc_823247A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,19840
	ctx.r31.s64 = ctx.r31.s64 + 19840;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8232476c
	if (ctx.cr6.lt) goto loc_8232476C;
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
loc_823247A0:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x823247c0
	if (ctx.cr6.lt) goto loc_823247C0;
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
loc_823247C0:
	// li r5,19840
	ctx.r5.s64 = 19840;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x823247D0;
	sub_8233EAF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_823247F0"))) PPC_WEAK_FUNC(sub_823247F0);
PPC_FUNC_IMPL(__imp__sub_823247F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823247FC"))) PPC_WEAK_FUNC(sub_823247FC);
PPC_FUNC_IMPL(__imp__sub_823247FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324800"))) PPC_WEAK_FUNC(sub_82324800);
PPC_FUNC_IMPL(__imp__sub_82324800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82324808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82327e80
	ctx.lr = 0x82324818;
	sub_82327E80(ctx, base);
	// addi r31,r30,384
	ctx.r31.s64 = ctx.r30.s64 + 384;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x8233e4e0
	ctx.lr = 0x8232482C;
	sub_8233E4E0(ctx, base);
	// addi r3,r30,512
	ctx.r3.s64 = ctx.r30.s64 + 512;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x8232483C;
	sub_8233E4E0(ctx, base);
	// bl 0x82327ec0
	ctx.lr = 0x82324840;
	sub_82327EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232484C"))) PPC_WEAK_FUNC(sub_8232484C);
PPC_FUNC_IMPL(__imp__sub_8232484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324850"))) PPC_WEAK_FUNC(sub_82324850);
PPC_FUNC_IMPL(__imp__sub_82324850) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,260(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,150
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 150, ctx.xer);
	// blt cr6,0x82324868
	if (ctx.cr6.lt) goto loc_82324868;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82324868:
	// addi r8,r9,5
	ctx.r8.s64 = ctx.r9.s64 + 5;
	// rlwinm r11,r9,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r7,r8,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r4,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u32);
	// stw r8,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r8.u32);
	// stw r8,664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 664, ctx.r8.u32);
	// stw r8,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r8.u32);
	// stw r8,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r8.u32);
	// stw r6,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823248A0"))) PPC_WEAK_FUNC(sub_823248A0);
PPC_FUNC_IMPL(__imp__sub_823248A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823248A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82324628
	ctx.lr = 0x823248BC;
	sub_82324628(ctx, base);
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82324920
	if (!ctx.cr6.lt) goto loc_82324920;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82324920
	if (!ctx.cr6.lt) goto loc_82324920;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r4,r31,512
	ctx.r4.s64 = ctx.r31.s64 + 512;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x823248EC;
	sub_8233E4E0(ctx, base);
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82326050
	ctx.lr = 0x82324904;
	sub_82326050(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// bl 0x82324638
	ctx.lr = 0x82324914;
	sub_82324638(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82324920:
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82324638
	ctx.lr = 0x82324928;
	sub_82324638(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324934"))) PPC_WEAK_FUNC(sub_82324934);
PPC_FUNC_IMPL(__imp__sub_82324934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324938"))) PPC_WEAK_FUNC(sub_82324938);
PPC_FUNC_IMPL(__imp__sub_82324938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82324940;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// addi r31,r11,14776
	ctx.r31.s64 = ctx.r11.s64 + 14776;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82324a50
	if (!ctx.cr6.eq) goto loc_82324A50;
	// bl 0x820c7ae8
	ctx.lr = 0x82324964;
	sub_820C7AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82324a50
	if (!ctx.cr6.gt) goto loc_82324A50;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r30,r11,-13000
	ctx.r30.s64 = ctx.r11.s64 + -13000;
	// addi r3,r30,-860
	ctx.r3.s64 = ctx.r30.s64 + -860;
	// bl 0x8232b4f0
	ctx.lr = 0x82324980;
	sub_8232B4F0(ctx, base);
	// addi r10,r30,127
	ctx.r10.s64 = ctx.r30.s64 + 127;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,27648
	ctx.r5.u64 = ctx.r5.u64 | 27648;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x823249A4;
	sub_8233EAF0(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r5,640
	ctx.r5.s64 = 640;
	// addi r28,r11,-13828
	ctx.r28.s64 = ctx.r11.s64 + -13828;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r28,60
	ctx.r11.s64 = ctx.r28.s64 + 60;
	// addi r9,r11,127
	ctx.r9.s64 = ctx.r11.s64 + 127;
	// rlwinm r3,r9,0,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x8233eaf0
	ctx.lr = 0x823249C8;
	sub_8233EAF0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8232ad68
	ctx.lr = 0x823249D4;
	sub_8232AD68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82324a50
	if (!ctx.cr6.gt) goto loc_82324A50;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r28,-8
	ctx.r28.s64 = ctx.r28.s64 + -8;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_823249F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,88
	ctx.r4.s64 = 88;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8232b378
	ctx.lr = 0x82324A08;
	sub_8232B378(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x82324a40
	if (ctx.cr6.eq) goto loc_82324A40;
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// bl 0x8232b1f0
	ctx.lr = 0x82324A20;
	sub_8232B1F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,12(r28)
	ea = 12 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823249f4
	if (ctx.cr6.lt) goto loc_823249F4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82324A40:
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1538
	ctx.r4.u64 = ctx.r4.u64 | 1538;
	// bl 0x823251a0
	ctx.lr = 0x82324A50;
	sub_823251A0(ctx, base);
loc_82324A50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324A58"))) PPC_WEAK_FUNC(sub_82324A58);
PPC_FUNC_IMPL(__imp__sub_82324A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82324A60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// addi r31,r11,14780
	ctx.r31.s64 = ctx.r11.s64 + 14780;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne 0x82324ae4
	if (!ctx.cr0.eq) goto loc_82324AE4;
	// bl 0x820c7ae8
	ctx.lr = 0x82324A80;
	sub_820C7AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82324af4
	if (!ctx.cr6.gt) goto loc_82324AF4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82324aa4
	if (ctx.cr6.eq) goto loc_82324AA4;
	// bl 0x8232b5d0
	ctx.lr = 0x82324A9C;
	sub_8232B5D0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_82324AA4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82324adc
	if (ctx.cr0.lt) goto loc_82324ADC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r30,r29,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
loc_82324AB8:
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82324ad0
	if (ctx.cr6.eq) goto loc_82324AD0;
	// bl 0x8232b400
	ctx.lr = 0x82324AC8;
	sub_8232B400(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_82324AD0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-128
	ctx.r30.s64 = ctx.r30.s64 + -128;
	// bge 0x82324ab8
	if (!ctx.cr0.lt) goto loc_82324AB8;
loc_82324ADC:
	// bl 0x8232adc8
	ctx.lr = 0x82324AE0;
	sub_8232ADC8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82324AE4:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82324AF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324AFC"))) PPC_WEAK_FUNC(sub_82324AFC);
PPC_FUNC_IMPL(__imp__sub_82324AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324B00"))) PPC_WEAK_FUNC(sub_82324B00);
PPC_FUNC_IMPL(__imp__sub_82324B00) {
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
	// bl 0x820c7ae8
	ctx.lr = 0x82324B10;
	sub_820C7AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82324b30
	if (!ctx.cr6.gt) goto loc_82324B30;
	// bl 0x82324750
	ctx.lr = 0x82324B1C;
	sub_82324750(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82324b44
	if (!ctx.cr6.eq) goto loc_82324B44;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,1537
	ctx.r4.u64 = ctx.r4.u64 | 1537;
	// bl 0x823251a0
	ctx.lr = 0x82324B30;
	sub_823251A0(ctx, base);
loc_82324B30:
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
loc_82324B44:
	// lis r11,23130
	ctx.r11.s64 = 1515847680;
	// ori r10,r11,23130
	ctx.r10.u64 = ctx.r11.u64 | 23130;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324B60"))) PPC_WEAK_FUNC(sub_82324B60);
PPC_FUNC_IMPL(__imp__sub_82324B60) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82324c08
	if (!ctx.cr6.eq) goto loc_82324C08;
loc_82324B88:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823248a0
	ctx.lr = 0x82324B98;
	sub_823248A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82324c08
	if (!ctx.cr6.eq) goto loc_82324C08;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82324BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r9,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r8.u32);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r7,664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 664, ctx.r7.u32);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r6,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r6.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r5.u32);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82324c08
	if (!ctx.cr6.eq) goto loc_82324C08;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82324b88
	if (ctx.cr6.eq) goto loc_82324B88;
loc_82324C08:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324C20"))) PPC_WEAK_FUNC(sub_82324C20);
PPC_FUNC_IMPL(__imp__sub_82324C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x82324C28;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r24,r11,14780
	ctx.r24.s64 = ctx.r11.s64 + 14780;
	// stw r21,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r21.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r21,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r21.u32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r21,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r21.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,-4(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// beq cr6,0x82324f08
	if (ctx.cr6.eq) goto loc_82324F08;
	// lis r10,23130
	ctx.r10.s64 = 1515847680;
	// ori r9,r10,23130
	ctx.r9.u64 = ctx.r10.u64 | 23130;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82324f08
	if (ctx.cr6.eq) goto loc_82324F08;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// bl 0x82324598
	ctx.lr = 0x82324C7C;
	sub_82324598(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,150
	ctx.r10.s64 = 150;
	// stw r21,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r21.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r21.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82324800
	ctx.lr = 0x82324CA0;
	sub_82324800(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82324CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r21,32(r29)
	PPC_STORE_U16(ctx.r29.u32 + 32, ctx.r21.u16);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82324f08
	if (!ctx.cr6.eq) goto loc_82324F08;
loc_82324CD0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82325e60
	ctx.lr = 0x82324CDC;
	sub_82325E60(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82324d68
	if (ctx.cr6.eq) goto loc_82324D68;
	// lhz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// sth r9,32(r29)
	PPC_STORE_U16(ctx.r29.u32 + 32, ctx.r9.u16);
	// beq cr6,0x82324d34
	if (ctx.cr6.eq) goto loc_82324D34;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82324D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r4,r8,r20
	ctx.r4.s64 = ctx.r20.s64 - ctx.r8.s64;
	// bl 0x82324850
	ctx.lr = 0x82324D2C;
	sub_82324850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82324d5c
	if (!ctx.cr6.eq) goto loc_82324D5C;
loc_82324D34:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82325fe0
	ctx.lr = 0x82324D44;
	sub_82325FE0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82324cd0
	if (ctx.cr6.eq) goto loc_82324CD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
loc_82324D5C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_82324D68:
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// blt cr6,0x82324d84
	if (ctx.cr6.lt) goto loc_82324D84;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_82324D84:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82324e18
	if (!ctx.cr6.gt) goto loc_82324E18;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// addi r30,r1,108
	ctx.r30.s64 = ctx.r1.s64 + 108;
	// li r23,-1
	ctx.r23.s64 = -1;
loc_82324DA0:
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bge cr6,0x82324dfc
	if (!ctx.cr6.lt) goto loc_82324DFC;
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// addi r4,r26,1
	ctx.r4.s64 = ctx.r26.s64 + 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r30,-4
	ctx.r27.s64 = ctx.r30.s64 + -4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82324DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r9,-32206
	ctx.r9.s64 = -2110652416;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r9,19296
	ctx.r4.s64 = ctx.r9.s64 + 19296;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x8232b038
	ctx.lr = 0x82324DEC;
	sub_8232B038(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// b 0x82324e04
	goto loc_82324E04;
loc_82324DFC:
	// stw r21,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
	// stw r23,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r23.u32);
loc_82324E04:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r28,r28,128
	ctx.r28.s64 = ctx.r28.s64 + 128;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82324da0
	if (ctx.cr6.lt) goto loc_82324DA0;
loc_82324E18:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82324b60
	ctx.lr = 0x82324E2C;
	sub_82324B60(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82324e64
	if (ctx.cr6.eq) goto loc_82324E64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82324e9c
	if (!ctx.cr6.gt) goto loc_82324E9C;
	// addi r28,r1,100
	ctx.r28.s64 = ctx.r1.s64 + 100;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82324E48:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzu r3,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82324E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82324e48
	if (!ctx.cr0.eq) goto loc_82324E48;
loc_82324E64:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82324e9c
	if (!ctx.cr6.gt) goto loc_82324E9C;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82324E74:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82324e90
	if (ctx.cr6.lt) goto loc_82324E90;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8232b3c0
	ctx.lr = 0x82324E90;
	sub_8232B3C0(ctx, base);
loc_82324E90:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bne 0x82324e74
	if (!ctx.cr0.eq) goto loc_82324E74;
loc_82324E9C:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82324EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r5,r3,r20
	ctx.r5.s64 = ctx.r20.s64 - ctx.r3.s64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82326050
	ctx.lr = 0x82324EC4;
	sub_82326050(ctx, base);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82324f08
	if (!ctx.cr6.gt) goto loc_82324F08;
	// addi r10,r31,536
	ctx.r10.s64 = ctx.r31.s64 + 536;
loc_82324ED8:
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// lwzu r9,128(r10)
	ea = 128 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r8.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82324ed8
	if (ctx.cr6.lt) goto loc_82324ED8;
loc_82324F08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324F14"))) PPC_WEAK_FUNC(sub_82324F14);
PPC_FUNC_IMPL(__imp__sub_82324F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324F18"))) PPC_WEAK_FUNC(sub_82324F18);
PPC_FUNC_IMPL(__imp__sub_82324F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82324F20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82324040
	ctx.lr = 0x82324F34;
	sub_82324040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82324f54
	if (ctx.cr6.eq) goto loc_82324F54;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,521
	ctx.r4.u64 = ctx.r4.u64 | 521;
	// bl 0x823251a0
	ctx.lr = 0x82324F4C;
	sub_823251A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82324F54:
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823250b8
	if (ctx.cr6.eq) goto loc_823250B8;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823250b8
	if (ctx.cr6.eq) goto loc_823250B8;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823250b8
	if (ctx.cr6.eq) goto loc_823250B8;
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823250b8
	if (!ctx.cr6.eq) goto loc_823250B8;
	// clrlwi r8,r10,25
	ctx.r8.u64 = ctx.r10.u32 & 0x7F;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823250b8
	if (!ctx.cr6.eq) goto loc_823250B8;
	// clrlwi r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823250b8
	if (!ctx.cr6.eq) goto loc_823250B8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823250b8
	if (ctx.cr6.eq) goto loc_823250B8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823250b8
	if (ctx.cr6.eq) goto loc_823250B8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823250b8
	if (ctx.cr6.eq) goto loc_823250B8;
	// lhz r11,46(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 46);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823250b8
	if (!ctx.cr6.gt) goto loc_823250B8;
	// lhz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823250b8
	if (!ctx.cr6.gt) goto loc_823250B8;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bgt cr6,0x823250b8
	if (ctx.cr6.gt) goto loc_823250B8;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bgt cr6,0x823250b8
	if (ctx.cr6.gt) goto loc_823250B8;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823250b8
	if (!ctx.cr6.eq) goto loc_823250B8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823250b8
	if (!ctx.cr6.eq) goto loc_823250B8;
	// lwz r11,5240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5240);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82325020
	if (!ctx.cr6.eq) goto loc_82325020;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b85b8
	ctx.lr = 0x82325018;
	sub_820B85B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82325020:
	// addi r3,r31,4976
	ctx.r3.s64 = ctx.r31.s64 + 4976;
	// lwz r28,4968(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r27,4972(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4972);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r31,4956
	ctx.r11.s64 = ctx.r31.s64 + 4956;
	// bl 0x8233e4e0
	ctx.lr = 0x8232503C;
	sub_8233E4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232a370
	ctx.lr = 0x82325044;
	sub_8232A370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232aca0
	ctx.lr = 0x8232504C;
	sub_8232ACA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232acf0
	ctx.lr = 0x82325054;
	sub_8232ACF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232a680
	ctx.lr = 0x8232505C;
	sub_8232A680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232aae8
	ctx.lr = 0x82325064;
	sub_8232AAE8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82329f80
	ctx.lr = 0x82325070;
	sub_82329F80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821daa68
	ctx.lr = 0x8232507C;
	sub_821DAA68(ctx, base);
	// addi r4,r31,4828
	ctx.r4.s64 = ctx.r31.s64 + 4828;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x8233e4e0
	ctx.lr = 0x8232508C;
	sub_8233E4E0(ctx, base);
	// lwz r11,4968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r10,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// lwz r9,4972(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4972);
	// subf r8,r27,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r27.s64;
	// stw r8,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r8.u32);
	// lhz r7,5036(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5036);
	// sth r7,60(r30)
	PPC_STORE_U16(ctx.r30.u32 + 60, ctx.r7.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_823250B8:
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,774
	ctx.r4.u64 = ctx.r4.u64 | 774;
	// bl 0x823251a0
	ctx.lr = 0x823250C8;
	sub_823251A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823250D0"))) PPC_WEAK_FUNC(sub_823250D0);
PPC_FUNC_IMPL(__imp__sub_823250D0) {
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
	// bl 0x82324040
	ctx.lr = 0x823250E8;
	sub_82324040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82325114
	if (ctx.cr6.eq) goto loc_82325114;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,529
	ctx.r4.u64 = ctx.r4.u64 | 529;
	// bl 0x823251a0
	ctx.lr = 0x82325100;
	sub_823251A0(ctx, base);
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
loc_82325114:
	// lwz r11,5240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5240);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r10.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82325130
	if (!ctx.cr6.eq) goto loc_82325130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821daa68
	ctx.lr = 0x82325130;
	sub_821DAA68(ctx, base);
loc_82325130:
	// lwz r3,5416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82325140
	if (ctx.cr6.eq) goto loc_82325140;
	// bl 0x82324710
	ctx.lr = 0x82325140;
	sub_82324710(ctx, base);
loc_82325140:
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

__attribute__((alias("__imp__sub_82325154"))) PPC_WEAK_FUNC(sub_82325154);
PPC_FUNC_IMPL(__imp__sub_82325154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82325158"))) PPC_WEAK_FUNC(sub_82325158);
PPC_FUNC_IMPL(__imp__sub_82325158) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82325174"))) PPC_WEAK_FUNC(sub_82325174);
PPC_FUNC_IMPL(__imp__sub_82325174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82325178"))) PPC_WEAK_FUNC(sub_82325178);
PPC_FUNC_IMPL(__imp__sub_82325178) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8232519C"))) PPC_WEAK_FUNC(sub_8232519C);
PPC_FUNC_IMPL(__imp__sub_8232519C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823251A0"))) PPC_WEAK_FUNC(sub_823251A0);
PPC_FUNC_IMPL(__imp__sub_823251A0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823251c8
	if (!ctx.cr6.eq) goto loc_823251C8;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// addi r3,r11,14804
	ctx.r3.s64 = ctx.r11.s64 + 14804;
	// b 0x823251cc
	goto loc_823251CC;
loc_823251C8:
	// addi r3,r3,4956
	ctx.r3.s64 = ctx.r3.s64 + 4956;
loc_823251CC:
	// bl 0x82325178
	ctx.lr = 0x823251D0;
	sub_82325178(ctx, base);
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

__attribute__((alias("__imp__sub_823251E8"))) PPC_WEAK_FUNC(sub_823251E8);
PPC_FUNC_IMPL(__imp__sub_823251E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823251F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82325220
	if (!ctx.cr6.eq) goto loc_82325220;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// addi r11,r11,14804
	ctx.r11.s64 = ctx.r11.s64 + 14804;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82325220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82324040
	ctx.lr = 0x82325228;
	sub_82324040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82325248
	if (ctx.cr6.eq) goto loc_82325248;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,515
	ctx.r4.u64 = ctx.r4.u64 | 515;
	// bl 0x823251a0
	ctx.lr = 0x82325240;
	sub_823251A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
loc_82325248:
	// addi r11,r31,4956
	ctx.r11.s64 = ctx.r31.s64 + 4956;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82325260"))) PPC_WEAK_FUNC(sub_82325260);
PPC_FUNC_IMPL(__imp__sub_82325260) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// lwz r11,14944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14944);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,14944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82325274"))) PPC_WEAK_FUNC(sub_82325274);
PPC_FUNC_IMPL(__imp__sub_82325274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82325278"))) PPC_WEAK_FUNC(sub_82325278);
PPC_FUNC_IMPL(__imp__sub_82325278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r11,21088
	ctx.r9.s64 = ctx.r11.s64 + 21088;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8232529C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8232529c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232529C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823252A8"))) PPC_WEAK_FUNC(sub_823252A8);
PPC_FUNC_IMPL(__imp__sub_823252A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x823252B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r8,r11,14824
	ctx.r8.s64 = ctx.r11.s64 + 14824;
	// addi r3,r8,164
	ctx.r3.s64 = ctx.r8.s64 + 164;
	// bl 0x82325278
	ctx.lr = 0x823252C8;
	sub_82325278(ctx, base);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x82325278
	ctx.lr = 0x823252D4;
	sub_82325278(ctx, base);
	// addi r3,r8,80
	ctx.r3.s64 = ctx.r8.s64 + 80;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82325278
	ctx.lr = 0x823252E0;
	sub_82325278(ctx, base);
	// addi r3,r8,124
	ctx.r3.s64 = ctx.r8.s64 + 124;
	// bl 0x82325278
	ctx.lr = 0x823252E8;
	sub_82325278(ctx, base);
	// addi r3,r8,204
	ctx.r3.s64 = ctx.r8.s64 + 204;
	// bl 0x82325278
	ctx.lr = 0x823252F0;
	sub_82325278(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// addi r11,r11,-22672
	ctx.r11.s64 = ctx.r11.s64 + -22672;
	// addi r10,r10,-22672
	ctx.r10.s64 = ctx.r10.s64 + -22672;
	// addi r9,r9,-22376
	ctx.r9.s64 = ctx.r9.s64 + -22376;
	// stw r11,168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 168, ctx.r11.u32);
	// lis r25,-32199
	ctx.r25.s64 = -2110193664;
	// stw r10,172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 172, ctx.r10.u32);
	// lis r26,-32199
	ctx.r26.s64 = -2110193664;
	// stw r9,176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 176, ctx.r9.u32);
	// lis r27,-32199
	ctx.r27.s64 = -2110193664;
	// addi r11,r25,-23192
	ctx.r11.s64 = ctx.r25.s64 + -23192;
	// addi r10,r26,-23192
	ctx.r10.s64 = ctx.r26.s64 + -23192;
	// addi r9,r27,-23192
	ctx.r9.s64 = ctx.r27.s64 + -23192;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lis r28,-32199
	ctx.r28.s64 = -2110193664;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lis r29,-32199
	ctx.r29.s64 = -2110193664;
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lis r30,-32199
	ctx.r30.s64 = -2110193664;
	// addi r11,r28,-23192
	ctx.r11.s64 = ctx.r28.s64 + -23192;
	// addi r10,r29,-23192
	ctx.r10.s64 = ctx.r29.s64 + -23192;
	// addi r9,r30,-23192
	ctx.r9.s64 = ctx.r30.s64 + -23192;
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// lis r31,-32199
	ctx.r31.s64 = -2110193664;
	// stw r10,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r10.u32);
	// lis r3,-32199
	ctx.r3.s64 = -2110193664;
	// stw r9,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r9.u32);
	// lis r4,-32199
	ctx.r4.s64 = -2110193664;
	// addi r11,r31,-23192
	ctx.r11.s64 = ctx.r31.s64 + -23192;
	// addi r10,r3,-23192
	ctx.r10.s64 = ctx.r3.s64 + -23192;
	// addi r9,r4,-22176
	ctx.r9.s64 = ctx.r4.s64 + -22176;
	// stw r11,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r11.u32);
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// stw r10,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r10.u32);
	// lis r6,-32199
	ctx.r6.s64 = -2110193664;
	// stw r9,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r9.u32);
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// addi r11,r5,-22176
	ctx.r11.s64 = ctx.r5.s64 + -22176;
	// addi r10,r6,-21856
	ctx.r10.s64 = ctx.r6.s64 + -21856;
	// addi r9,r7,-21536
	ctx.r9.s64 = ctx.r7.s64 + -21536;
	// stw r11,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r11.u32);
	// stw r10,136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 136, ctx.r10.u32);
	// stw r9,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823253AC"))) PPC_WEAK_FUNC(sub_823253AC);
PPC_FUNC_IMPL(__imp__sub_823253AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823253B0"))) PPC_WEAK_FUNC(sub_823253B0);
PPC_FUNC_IMPL(__imp__sub_823253B0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,5336
	ctx.r10.s64 = ctx.r11.s64 + 5336;
	// stw r5,5336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5336, ctx.r5.u32);
	// stw r6,5340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5340, ctx.r6.u32);
	// stw r7,5344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5344, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823253D4"))) PPC_WEAK_FUNC(sub_823253D4);
PPC_FUNC_IMPL(__imp__sub_823253D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823253D8"))) PPC_WEAK_FUNC(sub_823253D8);
PPC_FUNC_IMPL(__imp__sub_823253D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,5384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5384, ctx.r4.u32);
	// stw r5,5388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5388, ctx.r5.u32);
	// stw r11,5392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823253EC"))) PPC_WEAK_FUNC(sub_823253EC);
PPC_FUNC_IMPL(__imp__sub_823253EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823253F0"))) PPC_WEAK_FUNC(sub_823253F0);
PPC_FUNC_IMPL(__imp__sub_823253F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82325400
	if (ctx.cr6.eq) goto loc_82325400;
	// lwz r11,5384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5384);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82325400:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,5392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5392);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82325414"))) PPC_WEAK_FUNC(sub_82325414);
PPC_FUNC_IMPL(__imp__sub_82325414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82325418"))) PPC_WEAK_FUNC(sub_82325418);
PPC_FUNC_IMPL(__imp__sub_82325418) {
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
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82325454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82325470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bge cr6,0x82325484
	if (!ctx.cr6.lt) goto loc_82325484;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8232548c
	goto loc_8232548C;
loc_82325484:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82327538
	ctx.lr = 0x8232548C;
	sub_82327538(ctx, base);
loc_8232548C:
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

__attribute__((alias("__imp__sub_823254A4"))) PPC_WEAK_FUNC(sub_823254A4);
PPC_FUNC_IMPL(__imp__sub_823254A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823254A8"))) PPC_WEAK_FUNC(sub_823254A8);
PPC_FUNC_IMPL(__imp__sub_823254A8) {
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
	// lwz r3,5240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5240);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82325538
	if (!ctx.cr6.eq) goto loc_82325538;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82327578
	ctx.lr = 0x823254E0;
	sub_82327578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82325534
	if (ctx.cr6.eq) goto loc_82325534;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,-1
	ctx.r5.s64 = -1;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82327578
	ctx.lr = 0x82325504;
	sub_82327578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82325534
	if (ctx.cr6.eq) goto loc_82325534;
	// bl 0x82327538
	ctx.lr = 0x82325510;
	sub_82327538(ctx, base);
	// rlwinm r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82325524
	if (ctx.cr6.eq) goto loc_82325524;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82325530
	goto loc_82325530;
loc_82325524:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82325534
	if (ctx.cr6.eq) goto loc_82325534;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82325530:
	// stw r11,5240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5240, ctx.r11.u32);
loc_82325534:
	// lwz r3,5240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5240);
loc_82325538:
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

