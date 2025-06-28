#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8238C7D8"))) PPC_WEAK_FUNC(sub_8238C7D8);
PPC_FUNC_IMPL(__imp__sub_8238C7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e43c
	ctx.lr = 0x8238C7E0;
	__savegprlr_17(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// vspltisw v10,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_set1_epi32(int(0x0)));
	// li r29,16
	ctx.r29.s64 = 16;
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r30,32
	ctx.r30.s64 = 32;
	// li r31,48
	ctx.r31.s64 = 48;
	// li r23,80
	ctx.r23.s64 = 80;
	// li r24,64
	ctx.r24.s64 = 64;
	// li r25,112
	ctx.r25.s64 = 112;
	// li r26,96
	ctx.r26.s64 = 96;
	// li r27,8
	ctx.r27.s64 = 8;
loc_8238C828:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bge cr6,0x8238c884
	if (!ctx.cr6.lt) goto loc_8238C884;
	// dcbzl r0,r10
	memset(base + ((ctx.r10.u32) & ~127), 0, 128);
	// dcbzl r11,r10
	memset(base + ((ctx.r11.u32 + ctx.r10.u32) & ~127), 0, 128);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbzl r8,r10
	memset(base + ((ctx.r8.u32 + ctx.r10.u32) & ~127), 0, 128);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// dcbzl r7,r10
	memset(base + ((ctx.r7.u32 + ctx.r10.u32) & ~127), 0, 128);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbzl r8,r10
	memset(base + ((ctx.r8.u32 + ctx.r10.u32) & ~127), 0, 128);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// dcbzl r7,r10
	memset(base + ((ctx.r7.u32 + ctx.r10.u32) & ~127), 0, 128);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbzl r7,r10
	memset(base + ((ctx.r7.u32 + ctx.r10.u32) & ~127), 0, 128);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// dcbzl r7,r10
	memset(base + ((ctx.r7.u32 + ctx.r10.u32) & ~127), 0, 128);
loc_8238C884:
	// lvlx v13,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx v0,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvlx v12,r29,r3
	temp.u32 = ctx.r29.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vavgub v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx v11,r29,r4
	temp.u32 = ctx.r29.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,r30,r3
	temp.u32 = ctx.r30.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vavgub v13,v11,v12
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvlx v8,r30,r4
	temp.u32 = ctx.r30.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,r31,r3
	temp.u32 = ctx.r31.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vavgub v12,v8,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// lvlx v6,r31,r4
	temp.u32 = ctx.r31.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vavgub v11,v6,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// bge cr6,0x8238c930
	if (!ctx.cr6.lt) goto loc_8238C930;
	// vmrglb v9,v10,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// lvlx v8,r29,r9
	temp.u32 = ctx.r29.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v7,v10,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// lvlx v6,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v5,v10,v13
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// lvlx v4,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v3,v10,v13
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// lvlx v2,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v1,v10,v12
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// lvlx v31,r23,r9
	temp.u32 = ctx.r23.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v30,v10,v12
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// lvlx v29,r24,r9
	temp.u32 = ctx.r24.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v28,v10,v11
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// lvlx v27,r25,r9
	temp.u32 = ctx.r25.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v26,v10,v11
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// lvlx v25,r26,r9
	temp.u32 = ctx.r26.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddshs v24,v9,v8
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// vaddshs v23,v7,v6
	_mm_store_si128((__m128i*)ctx.v23.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v7.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// vaddshs v22,v5,v4
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vaddshs v21,v3,v2
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// vaddshs v20,v1,v31
	_mm_store_si128((__m128i*)ctx.v20.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v1.s16), _mm_load_si128((__m128i*)ctx.v31.s16)));
	// vaddshs v19,v30,v29
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v29.s16)));
	// vpkshus v0,v23,v24
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v23.s16)));
	// vaddshs v18,v28,v27
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v27.s16)));
	// vaddshs v17,v26,v25
	_mm_store_si128((__m128i*)ctx.v17.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v25.s16)));
	// vpkshus v13,v21,v22
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v21.s16)));
	// vpkshus v12,v19,v20
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v19.s16)));
	// vpkshus v11,v17,v18
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v17.s16)));
loc_8238C930:
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// vsldoi128 v63,v0,v0,8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 8));
	// vsldoi128 v62,v13,v13,8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 8));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// vsldoi128 v61,v12,v12,8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 8));
	// vsldoi128 v60,v11,v11,8
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v11.u8), 8));
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8238c9b8
	if (!ctx.cr6.eq) goto loc_8238C9B8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvrx128 v63,r10,r27
	ea = ctx.r10.u32 + ctx.r27.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r21,r8,8
	ctx.r21.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r20,r11,8
	ctx.r20.s64 = ctx.r11.s64 + 8;
	// addi r19,r11,2
	ctx.r19.s64 = ctx.r11.s64 + 2;
	// rlwinm r18,r11,3,0,28
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r17,r8,8
	ctx.r17.s64 = ctx.r8.s64 + 8;
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stvrx v0,r10,r20
	ea = ctx.r10.u32 + ctx.r20.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// rlwinm r7,r19,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r11,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r11.s64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stvrx128 v62,r10,r22
	ea = ctx.r10.u32 + ctx.r22.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvrx v13,r10,r21
	ea = ctx.r10.u32 + ctx.r21.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stvrx128 v61,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvrx v12,r10,r17
	ea = ctx.r10.u32 + ctx.r17.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// stvrx128 v60,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// stvrx v11,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// b 0x8238ca00
	goto loc_8238CA00;
loc_8238C9B8:
	// rlwinm r22,r11,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// add r21,r11,r8
	ctx.r21.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvlx128 v63,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvlx v13,r10,r22
	ea = ctx.r10.u32 + ctx.r22.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// rlwinm r20,r11,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r11,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stvlx128 v62,r10,r21
	ea = ctx.r10.u32 + ctx.r21.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r11.s64;
	// stvlx v12,r10,r20
	ea = ctx.r10.u32 + ctx.r20.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v61,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx v11,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v60,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
loc_8238CA00:
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bdnz 0x8238c828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238C828;
	// b 0x8233e48c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238CA1C"))) PPC_WEAK_FUNC(sub_8238CA1C);
PPC_FUNC_IMPL(__imp__sub_8238CA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238CA20"))) PPC_WEAK_FUNC(sub_8238CA20);
PPC_FUNC_IMPL(__imp__sub_8238CA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8238CA28;
	__savegprlr_29(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r9,r10,1712
	ctx.r9.s64 = ctx.r10.s64 + 1712;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bgt cr6,0x8238caa0
	if (ctx.cr6.gt) goto loc_8238CAA0;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// lvlx128 v61,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x8238cb40
	goto loc_8238CB40;
loc_8238CAA0:
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v60,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvrx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// vor128 v63,v63,v61
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r10,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// lvlx128 v57,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
	// lvlx128 v56,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v58,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lvrx128 v54,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lvrx128 v55,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// lvlx128 v53,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r7,16
	ctx.r3.s64 = ctx.r7.s64 + 16;
	// lvrx128 v52,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx128 v51,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v62,v62,v55
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// lvlx128 v50,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v53,v54
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v54.u8)));
	// lvrx128 v49,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v60,v60,v52
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// lvrx128 v48,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v59,v50,v51
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v51.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v58,v58,v49
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// vor128 v57,v57,v48
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
	// vor128 v56,v56,v47
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
loc_8238CB40:
	// vperm128 v46,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r11,32
	ctx.r11.s64 = 32;
	// vperm128 v45,v61,v60,v0
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r10,48
	ctx.r10.s64 = 48;
	// vperm128 v44,v59,v58,v0
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v43,v57,v56,v0
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v46,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v45,r4,r5
	ea = ctx.r4.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v44,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v43,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238CB6C"))) PPC_WEAK_FUNC(sub_8238CB6C);
PPC_FUNC_IMPL(__imp__sub_8238CB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238CB70"))) PPC_WEAK_FUNC(sub_8238CB70);
PPC_FUNC_IMPL(__imp__sub_8238CB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8238CB78;
	__savegprlr_27(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r9,r10,1712
	ctx.r9.s64 = ctx.r10.s64 + 1712;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// lvlx v5,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bgt cr6,0x8238cbf8
	if (ctx.cr6.gt) goto loc_8238CBF8;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx v7,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx v0,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvlx v13,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx v12,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v6,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x8238ccb8
	goto loc_8238CCB8;
loc_8238CBF8:
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v60,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvrx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vor128 v7,v63,v61
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// subf r7,r10,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lvlx128 v58,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// lvlx128 v57,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 2;
	// lvlx128 v59,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r10,16
	ctx.r29.s64 = ctx.r10.s64 + 16;
	// lvrx128 v55,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r3,r7,16
	ctx.r3.s64 = ctx.r7.s64 + 16;
	// lvrx128 v53,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// vor128 v12,v60,v53
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v53.u8)));
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lvrx128 v56,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// lvrx128 v48,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v54,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvrx128 v52,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v51,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v0,v62,v56
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// lvrx128 v50,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v13,v54,v55
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// lvrx128 v49,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v11,v51,v52
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// lvrx128 v47,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v10,v59,v50
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// lvlx128 v46,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v58,v49
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// vor128 v8,v57,v48
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
	// vor128 v6,v46,v47
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
loc_8238CCB8:
	// vavgub v4,v0,v13
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// li r11,32
	ctx.r11.s64 = 32;
	// vavgub v3,v7,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r10,48
	ctx.r10.s64 = 48;
	// vavgub v2,v12,v11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vavgub v1,v13,v12
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vavgub v31,v10,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// vavgub v30,v11,v10
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vperm128 v45,v3,v4,v5
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vavgub v29,v8,v6
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vavgub v28,v9,v8
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vperm128 v44,v1,v2,v5
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vperm128 v43,v30,v31,v5
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vperm128 v42,v28,v29,v5
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stvlx128 v45,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v44,r4,r5
	ea = ctx.r4.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v43,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v42,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238CD04"))) PPC_WEAK_FUNC(sub_8238CD04);
PPC_FUNC_IMPL(__imp__sub_8238CD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238CD08"))) PPC_WEAK_FUNC(sub_8238CD08);
PPC_FUNC_IMPL(__imp__sub_8238CD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x8238CD10;
	__savegprlr_29(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r9,r10,1712
	ctx.r9.s64 = ctx.r10.s64 + 1712;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// lvlx v6,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bgt cr6,0x8238cd88
	if (ctx.cr6.gt) goto loc_8238CD88;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx v13,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// lvlx v12,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x8238ce30
	goto loc_8238CE30;
loc_8238CD88:
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v60,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvrx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vor128 v0,v63,v61
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// subf r7,r10,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// lvlx128 v58,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
	// lvlx128 v57,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lvrx128 v55,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lvrx128 v56,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// lvlx128 v54,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r7,16
	ctx.r3.s64 = ctx.r7.s64 + 16;
	// lvrx128 v53,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx128 v52,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v13,v62,v56
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// lvlx128 v51,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v54,v55
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// lvrx128 v50,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v11,v60,v53
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v53.u8)));
	// lvrx128 v49,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v10,v51,v52
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// lvrx128 v48,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v9,v59,v50
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// vor128 v8,v58,v49
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// vor128 v7,v57,v48
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
loc_8238CE30:
	// vsldoi v5,v13,v13,1
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 15));
	// li r11,32
	ctx.r11.s64 = 32;
	// vsldoi v4,v0,v0,1
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 15));
	// li r10,48
	ctx.r10.s64 = 48;
	// vsldoi v3,v11,v11,1
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v11.u8), 15));
	// vsldoi v2,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vsldoi v1,v9,v9,1
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v9.u8), 15));
	// vavgub v31,v13,v5
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsldoi v30,v10,v10,1
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v10.u8), 15));
	// vavgub v29,v0,v4
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vsldoi v28,v7,v7,1
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v7.u8), 15));
	// vavgub v27,v11,v3
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vsldoi v26,v8,v8,1
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v8.u8), 15));
	// vavgub v25,v12,v2
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vavgub v24,v9,v1
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vavgub v23,v10,v30
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vperm128 v47,v29,v31,v6
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vavgub v22,v7,v28
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vavgub v21,v8,v26
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v26.u8)));
	// vperm128 v46,v25,v27,v6
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v45,v23,v24,v6
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v44,v21,v22,v6
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// stvlx128 v47,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v46,r4,r5
	ea = ctx.r4.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v45,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v44,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238CE9C"))) PPC_WEAK_FUNC(sub_8238CE9C);
PPC_FUNC_IMPL(__imp__sub_8238CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238CEA0"))) PPC_WEAK_FUNC(sub_8238CEA0);
PPC_FUNC_IMPL(__imp__sub_8238CEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x8238CEA8;
	__savegprlr_27(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r9,r10,1712
	ctx.r9.s64 = ctx.r10.s64 + 1712;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx v2,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt cr6,0x8238cf2c
	if (ctx.cr6.gt) goto loc_8238CF2C;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx v11,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvlx v10,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx v9,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx v8,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v6,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v5,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v4,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v3,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x8238cfe8
	goto loc_8238CFE8;
loc_8238CF2C:
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvrx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// vor128 v11,v63,v61
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r10,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lvlx128 v60,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 2;
	// lvlx128 v58,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r10,16
	ctx.r29.s64 = ctx.r10.s64 + 16;
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvrx128 v55,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lvrx128 v56,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lvlx128 v54,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// lvlx128 v51,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lvrx128 v53,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvrx128 v52,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx128 v50,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v10,v62,v56
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// lvrx128 v49,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v9,v54,v55
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// lvrx128 v48,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v8,v60,v53
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v53.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v7,v51,v52
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// lvlx128 v46,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v6,v59,v50
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// vor128 v5,v58,v49
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// vor128 v4,v57,v48
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
	// vor128 v3,v46,v47
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
loc_8238CFE8:
	// vsldoi v1,v11,v11,1
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v11.u8), 15));
	// li r11,32
	ctx.r11.s64 = 32;
	// vsldoi v31,v10,v10,1
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v10.u8), 15));
	// li r10,48
	ctx.r10.s64 = 48;
	// vsldoi v30,v9,v9,1
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v9.u8), 15));
	// vsldoi v29,v8,v8,1
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v8.u8), 15));
	// vavgub v25,v11,v1
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vsldoi v28,v7,v7,1
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v7.u8), 15));
	// vavgub v13,v10,v31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// vsldoi v27,v6,v6,1
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v6.u8), 15));
	// vavgub v12,v9,v30
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vsldoi v26,v5,v5,1
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v5.u8), 15));
	// vxor128 v45,v11,v1
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vavgub v11,v7,v28
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vxor128 v44,v25,v13
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vxor128 v43,v13,v12
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vavgub v1,v13,v12
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vavgub v25,v25,v13
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vavgub v13,v8,v29
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v29.u8)));
	// vxor128 v42,v10,v31
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// vsldoi v10,v4,v4,1
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v4.u8), 15));
	// vxor128 v41,v9,v30
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vsldoi v31,v3,v3,1
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v3.u8), 15));
	// vxor128 v40,v8,v29
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v29.u8)));
	// vxor128 v39,v13,v11
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vavgub v24,v13,v11
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vxor128 v38,v12,v13
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vavgub v23,v12,v13
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vxor128 v37,v7,v28
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vavgub v13,v6,v27
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v27.u8)));
	// vavgub v12,v5,v26
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v26.u8)));
	// vxor128 v36,v6,v27
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v27.u8)));
	// vxor128 v35,v5,v26
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v26.u8)));
	// vor128 v33,v45,v42
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// vor128 v34,v42,v41
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// vor128 v32,v41,v40
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v40.u8)));
	// vor128 v63,v40,v37
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v37.u8)));
	// vxor128 v62,v11,v13
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vxor128 v61,v13,v12
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vor128 v60,v37,v36
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v36.u8)));
	// vor128 v59,v36,v35
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v35.u8)));
	// vand128 v58,v34,v43
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v43.u8)));
	// vand128 v57,v33,v44
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// vand128 v56,v32,v38
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v38.u8)));
	// vand128 v55,v63,v39
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v39.u8)));
	// vand128 v54,v60,v62
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vand128 v53,v59,v61
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vand128 v22,v58,v0
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand128 v21,v57,v0
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand128 v20,v56,v0
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand128 v19,v55,v0
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vavgub v18,v11,v13
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vavgub v17,v13,v12
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vand128 v16,v54,v0
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand128 v15,v53,v0
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsububs v13,v25,v21
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v21.u8)));
	// vsububs v14,v1,v22
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v22.u8)));
	// vavgub v11,v4,v10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vavgub v9,v3,v31
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// vsububs v8,v23,v20
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v20.u8)));
	// vsububs v7,v24,v19
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v19.u8)));
	// vperm128 v52,v13,v14,v2
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vsububs v6,v18,v16
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)ctx.v16.u8)));
	// vsububs v5,v17,v15
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v15.u8)));
	// vor v13,v11,v11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vxor128 v50,v4,v10
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vperm128 v51,v8,v7,v2
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vor v11,v9,v9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vxor128 v49,v3,v31
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// vperm128 v48,v6,v5,v2
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vxor128 v47,v12,v13
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// stvlx128 v52,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// vor128 v45,v35,v50
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// vxor128 v46,v13,v11
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vor128 v44,v50,v49
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// stvlx128 v51,r4,r5
	ea = ctx.r4.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// vavgub v4,v13,v11
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vavgub v3,v12,v13
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// stvlx128 v48,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// vand128 v43,v45,v47
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
	// vand128 v42,v44,v46
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// vand128 v1,v42,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand128 v31,v43,v0
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsububs v30,v4,v1
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vsububs v29,v3,v31
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// vperm128 v41,v29,v30,v2
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// stvlx128 v41,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238D148"))) PPC_WEAK_FUNC(sub_8238D148);
PPC_FUNC_IMPL(__imp__sub_8238D148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8238D150;
	__savegprlr_24(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,-16
	ctx.r9.s64 = -16;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r10,1728
	ctx.r8.s64 = ctx.r10.s64 + 1728;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r7,r11,28
	ctx.r7.u64 = ctx.r11.u32 & 0xF;
	// li r30,16
	ctx.r30.s64 = 16;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lvlx v0,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx v7,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bne cr6,0x8238d230
	if (!ctx.cr6.eq) goto loc_8238D230;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v61,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v60,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v58,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r31,r10,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v57,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvlx128 v54,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lvlx128 v53,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r28,r10,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// rlwinm r27,r10,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r6,r10,11
	ctx.r6.s64 = ctx.r10.s64 * 11;
	// lvlx128 v59,r26,r11
	temp.u32 = ctx.r26.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v55,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r3,r10,13
	ctx.r3.s64 = ctx.r10.s64 * 13;
	// lvlx128 v51,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v50,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// lvlx128 v49,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x8238d38c
	goto loc_8238D38C;
loc_8238D230:
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v58,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v61,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v63,v63,v61
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r5
	ctx.r28.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v57,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r10,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r10.s64;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lvrx128 v50,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v56,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mulli r5,r10,11
	ctx.r5.s64 = ctx.r10.s64 * 11;
	// lvlx128 v55,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v57,v50
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// lvrx128 v49,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v44,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v58,v58,v49
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// lvlx128 v51,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r10,8
	ctx.r28.s64 = ctx.r10.s64 + 8;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// lvrx128 v42,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvrx128 v38,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v38.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r27,r10,4
	ctx.r27.s64 = ctx.r10.s64 + 4;
	// lvlx128 v54,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r26,r10,2
	ctx.r26.s64 = ctx.r10.s64 + 2;
	// lvrx128 v47,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// subf r3,r10,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lvrx128 v43,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r4,r10,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lvrx128 v37,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r25,r10,16
	ctx.r25.s64 = ctx.r10.s64 + 16;
	// vor128 v57,v56,v43
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v43.u8)));
	// rlwinm r24,r10,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// vor128 v56,v55,v42
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// rlwinm r28,r10,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// vor128 v53,v53,v38
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v38.u8)));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// vor128 v52,v52,v37
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v37.u8)));
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lvrx128 v48,r25,r11
	temp.u32 = ctx.r25.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r31,r26,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v46,r24,r11
	temp.u32 = ctx.r24.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mulli r8,r10,13
	ctx.r8.s64 = ctx.r10.s64 * 13;
	// lvlx128 v40,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v39,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v62,v62,v48
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
	// lvrx128 v36,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v61,v46,v47
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
	// lvrx128 v45,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v54,v54,v39
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v39.u8)));
	// lvrx128 v41,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v59,v44,v45
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v45.u8)));
	// lvlx128 v35,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v55,v40,v41
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// vor128 v51,v51,v36
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v36.u8)));
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// lvlx128 v34,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v33,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v32,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx128 v49,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v50,v35,v32
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v32.u8)));
	// lvrx128 v48,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v49,v34,v49
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// vor128 v48,v33,v48
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
loc_8238D38C:
	// vperm128 v47,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r11,32
	ctx.r11.s64 = 32;
	// vperm128 v46,v61,v60,v0
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r10,48
	ctx.r10.s64 = 48;
	// vperm128 v45,v59,v58,v0
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r9,64
	ctx.r9.s64 = 64;
	// vperm128 v44,v57,v56,v0
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r8,80
	ctx.r8.s64 = 80;
	// vperm128 v43,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r7,96
	ctx.r7.s64 = 96;
	// vperm128 v42,v61,v60,v7
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r6,112
	ctx.r6.s64 = 112;
	// vperm128 v41,v59,v58,v7
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r5,128
	ctx.r5.s64 = 128;
	// vperm128 v40,v57,v56,v7
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvlx128 v47,r0,r29
	ea = ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// vperm128 v39,v55,v54,v0
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v46,r29,r30
	ea = ctx.r29.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// vperm128 v38,v53,v52,v0
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v45,r29,r11
	ea = ctx.r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// vperm128 v37,v51,v50,v0
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v44,r29,r10
	ea = ctx.r29.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// li r4,144
	ctx.r4.s64 = 144;
	// vperm128 v36,v49,v48,v0
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v43,r29,r9
	ea = ctx.r29.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// li r3,160
	ctx.r3.s64 = 160;
	// vperm128 v35,v55,v54,v7
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvlx128 v42,r29,r8
	ea = ctx.r29.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// li r11,176
	ctx.r11.s64 = 176;
	// vperm128 v34,v53,v52,v7
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvlx128 v41,r29,r7
	ea = ctx.r29.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// li r10,192
	ctx.r10.s64 = 192;
	// vperm128 v33,v51,v50,v7
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvlx128 v40,r29,r6
	ea = ctx.r29.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// li r9,208
	ctx.r9.s64 = 208;
	// vperm128 v32,v49,v48,v7
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvlx128 v39,r29,r5
	ea = ctx.r29.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// li r8,224
	ctx.r8.s64 = 224;
	// stvlx128 v38,r29,r4
	ea = ctx.r29.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// li r7,240
	ctx.r7.s64 = 240;
	// stvlx128 v37,r29,r3
	ea = ctx.r29.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v36,r29,r11
	ea = ctx.r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v35,r29,r10
	ea = ctx.r29.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v34,r29,r9
	ea = ctx.r29.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v33,r29,r8
	ea = ctx.r29.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v32,r29,r7
	ea = ctx.r29.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238D448"))) PPC_WEAK_FUNC(sub_8238D448);
PPC_FUNC_IMPL(__imp__sub_8238D448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x8238D450;
	__savegprlr_24(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,-16
	ctx.r9.s64 = -16;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r10,1728
	ctx.r8.s64 = ctx.r10.s64 + 1728;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r7,r11,28
	ctx.r7.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,16
	ctx.r30.s64 = 16;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lvlx v0,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx v7,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bne cr6,0x8238d538
	if (!ctx.cr6.eq) goto loc_8238D538;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx v10,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx v12,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx v8,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx v11,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvlx v6,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r31,r10,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx v3,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lvlx v2,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r28,r10,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// rlwinm r27,r10,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r6,r10,11
	ctx.r6.s64 = ctx.r10.s64 * 11;
	// lvlx v31,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,r26,r11
	temp.u32 = ctx.r26.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v5,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v4,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v1,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mulli r3,r10,13
	ctx.r3.s64 = ctx.r10.s64 * 13;
	// lvlx v30,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r10,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r10.s64;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lvlx v29,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v28,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v27,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x8238d6ac
	goto loc_8238D6AC;
loc_8238D538:
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r10,r8
	ctx.r28.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvrx128 v61,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// vor128 v13,v63,v61
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// rlwinm r27,r10,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v59,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r10,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r10.s64;
	// addi r27,r10,4
	ctx.r27.s64 = ctx.r10.s64 + 4;
	// lvlx128 v60,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvlx128 v57,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v52,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// vor128 v8,v59,v52
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// lvlx128 v56,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r4,r28,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvlx128 v58,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r28,r10,8
	ctx.r28.s64 = ctx.r10.s64 + 8;
	// lvrx128 v46,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// lvrx128 v51,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// mulli r5,r10,11
	ctx.r5.s64 = ctx.r10.s64 * 11;
	// lvlx128 v55,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v43,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v3,v60,v51
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v51.u8)));
	// lvrx128 v47,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v5,v56,v43
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v43.u8)));
	// vor128 v10,v58,v47
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
	// lvrx128 v40,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v54,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v2,v55,v40
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v40.u8)));
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r26,r10,2
	ctx.r26.s64 = ctx.r10.s64 + 2;
	// lvrx128 v49,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// lvlx128 v45,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r25,r10,16
	ctx.r25.s64 = ctx.r10.s64 + 16;
	// vor128 v9,v45,v46
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// rlwinm r24,r10,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v53,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r6,16
	ctx.r4.s64 = ctx.r6.s64 + 16;
	// lvlx128 v41,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// rlwinm r28,r26,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// lvrx128 v50,r25,r11
	temp.u32 = ctx.r25.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// mulli r7,r10,13
	ctx.r7.s64 = ctx.r10.s64 * 13;
	// lvlx128 v48,r24,r11
	temp.u32 = ctx.r24.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v38.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v12,v62,v50
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// lvrx128 v44,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v11,v48,v49
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// lvrx128 v42,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v6,v57,v44
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// lvrx128 v39,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v4,v41,v42
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// lvlx128 v37,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v54,v39
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v39.u8)));
	// vor128 v31,v53,v38
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v38.u8)));
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lvlx128 v36,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// addi r5,r9,16
	ctx.r5.s64 = ctx.r9.s64 + 16;
	// lvlx128 v35,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lvlx128 v34,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v33,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx128 v32,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v30,v37,v33
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v33.u8)));
	// vor128 v29,v36,v32
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v32.u8)));
	// lvrx128 v63,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx128 v62,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v28,v35,v63
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vor128 v27,v34,v62
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
loc_8238D6AC:
	// vavgub v13,v13,v12
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// li r11,32
	ctx.r11.s64 = 32;
	// vavgub v12,v12,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// li r10,48
	ctx.r10.s64 = 48;
	// vavgub v11,v11,v10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// li r9,64
	ctx.r9.s64 = 64;
	// vavgub v10,v10,v9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// li r8,80
	ctx.r8.s64 = 80;
	// vavgub v9,v9,v8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// li r7,96
	ctx.r7.s64 = 96;
	// vperm128 v61,v13,v12,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vavgub v8,v8,v6
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v60,v13,v12,v7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vavgub v6,v6,v5
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vavgub v13,v5,v4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vperm128 v59,v11,v10,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v58,v11,v10,v7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vavgub v12,v4,v3
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vavgub v11,v3,v2
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vperm128 v57,v9,v8,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v56,v9,v8,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vavgub v10,v2,v1
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vperm128 v55,v6,v13,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vavgub v9,v1,v31
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// vperm128 v54,v6,v13,v7
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vavgub v13,v31,v30
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vperm128 v53,v12,v11,v0
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vavgub v8,v30,v29
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v29.u8)));
	// vperm128 v52,v12,v11,v7
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vavgub v6,v29,v28
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vavgub v12,v28,v27
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v27.u8)));
	// stvlx128 v61,r0,r29
	ea = ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v59,r29,r30
	ea = ctx.r29.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// li r6,112
	ctx.r6.s64 = 112;
	// vperm128 v51,v10,v9,v0
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v57,r29,r11
	ea = ctx.r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// li r5,128
	ctx.r5.s64 = 128;
	// vperm128 v50,v13,v8,v0
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v55,r29,r10
	ea = ctx.r29.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// li r4,144
	ctx.r4.s64 = 144;
	// vperm128 v49,v6,v12,v0
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v60,r29,r9
	ea = ctx.r29.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// li r3,160
	ctx.r3.s64 = 160;
	// stvlx128 v58,r29,r8
	ea = ctx.r29.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// li r11,176
	ctx.r11.s64 = 176;
	// vperm128 v48,v10,v9,v7
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvlx128 v56,r29,r7
	ea = ctx.r29.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// li r10,192
	ctx.r10.s64 = 192;
	// vperm128 v47,v13,v8,v7
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvlx128 v54,r29,r6
	ea = ctx.r29.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// li r9,208
	ctx.r9.s64 = 208;
	// vperm128 v46,v6,v12,v7
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvlx128 v53,r29,r5
	ea = ctx.r29.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// li r8,224
	ctx.r8.s64 = 224;
	// stvlx128 v51,r29,r4
	ea = ctx.r29.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// li r7,240
	ctx.r7.s64 = 240;
	// stvlx128 v50,r29,r3
	ea = ctx.r29.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v49,r29,r11
	ea = ctx.r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v52,r29,r10
	ea = ctx.r29.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v48,r29,r9
	ea = ctx.r29.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvlx128 v47,r29,r8
	ea = ctx.r29.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v46,r29,r7
	ea = ctx.r29.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238D7A8"))) PPC_WEAK_FUNC(sub_8238D7A8);
PPC_FUNC_IMPL(__imp__sub_8238D7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e440
	ctx.lr = 0x8238D7B0;
	__savegprlr_18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,-16
	ctx.r9.s64 = -16;
	// lwz r23,24(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r11,1728
	ctx.r8.s64 = ctx.r11.s64 + 1728;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// li r24,16
	ctx.r24.s64 = 16;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx v0,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bne cr6,0x8238d8a0
	if (!ctx.cr6.eq) goto loc_8238D8A0;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx v27,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r31,r11,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lvlx v26,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r3,r11,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lvlx v22,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r28,r11,r31
	ctx.r28.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// rlwinm r29,r3,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v62,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stvx128 v62,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r30,r11,r7
	ctx.r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lvlx128 v63,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r25,r11,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r11,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r11.s64;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx v21,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r25,r11,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx v20,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lvlx v15,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx v25,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mulli r3,r11,11
	ctx.r3.s64 = ctx.r11.s64 * 11;
	// lvlx v24,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v23,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v19,r25,r10
	temp.u32 = ctx.r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v18,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v17,r4,r10
	temp.u32 = ctx.r4.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v16,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mulli r30,r11,13
	ctx.r30.s64 = ctx.r11.s64 * 13;
	// lvlx v14,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x8238da18
	goto loc_8238DA18;
loc_8238D8A0:
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lvlx128 v60,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lvrx128 v59,r24,r10
	temp.u32 = ctx.r24.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v57,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vor128 v27,v61,v59
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v45,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r29,r5,16
	ctx.r29.s64 = ctx.r5.s64 + 16;
	// lvlx128 v54,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r4,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lvrx128 v48,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
	// addi r25,r11,16
	ctx.r25.s64 = ctx.r11.s64 + 16;
	// lvrx128 v39,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r22,r9,16
	ctx.r22.s64 = ctx.r9.s64 + 16;
	// vor128 v18,v54,v39
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v39.u8)));
	// addi r21,r8,16
	ctx.r21.s64 = ctx.r8.s64 + 16;
	// lvlx128 v56,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r20,r7,16
	ctx.r20.s64 = ctx.r7.s64 + 16;
	// lvlx128 v58,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r6,16
	ctx.r30.s64 = ctx.r6.s64 + 16;
	// lvlx128 v55,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// lvrx128 v50,r25,r10
	temp.u32 = ctx.r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v47,r22,r10
	temp.u32 = ctx.r22.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lvrx128 v44,r21,r10
	temp.u32 = ctx.r21.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// mulli r3,r11,11
	ctx.r3.s64 = ctx.r11.s64 * 11;
	// lvrx128 v43,r20,r10
	temp.u32 = ctx.r20.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx128 v42,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v26,v60,v50
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// vor128 v24,v58,v47
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
	// lvlx128 v53,r4,r10
	temp.u32 = ctx.r4.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v22,v57,v44
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// vor128 v21,v56,v43
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v43.u8)));
	// lvlx128 v52,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v20,v55,v42
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r22,r4,16
	ctx.r22.s64 = ctx.r4.s64 + 16;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v51,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r25,r11,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lvrx128 v40,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r21,r3,16
	ctx.r21.s64 = ctx.r3.s64 + 16;
	// addi r20,r31,16
	ctx.r20.s64 = ctx.r31.s64 + 16;
	// lvrx128 v38,r22,r10
	temp.u32 = ctx.r22.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v38.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v49,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mulli r30,r11,13
	ctx.r30.s64 = ctx.r11.s64 * 13;
	// lvlx128 v46,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v41,r25,r10
	temp.u32 = ctx.r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v25,v49,v48
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
	// lvrx128 v37,r21,r10
	temp.u32 = ctx.r21.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v23,v46,v45
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v45.u8)));
	// lvrx128 v36,r20,r10
	temp.u32 = ctx.r20.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v19,v41,v40
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v40.u8)));
	// lvlx128 v34,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v17,v53,v38
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v38.u8)));
	// lvlx128 v35,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v16,v52,v37
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v37.u8)));
	// vor128 v15,v51,v36
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v36.u8)));
	// rlwinm r28,r11,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r22,r29,16
	ctx.r22.s64 = ctx.r29.s64 + 16;
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addi r21,r28,16
	ctx.r21.s64 = ctx.r28.s64 + 16;
	// lvlx128 v33,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r20,r30,16
	ctx.r20.s64 = ctx.r30.s64 + 16;
	// lvrx128 v32,r22,r10
	temp.u32 = ctx.r22.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r19,r1,-160
	ctx.r19.s64 = ctx.r1.s64 + -160;
	// vor128 v62,v34,v32
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v32.u8)));
	// addi r18,r1,-144
	ctx.r18.s64 = ctx.r1.s64 + -144;
	// lvrx128 v63,r21,r10
	temp.u32 = ctx.r21.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v61,v33,v63
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lvrx128 v60,r20,r10
	temp.u32 = ctx.r20.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v14,v35,v60
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v60.u8)));
	// stvx128 v62,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8238DA18:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r22,r10,28
	ctx.r22.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8238da6c
	if (!ctx.cr6.eq) goto loc_8238DA6C;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v6,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v5,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v4,r25,r10
	temp.u32 = ctx.r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v3,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v2,r4,r10
	temp.u32 = ctx.r4.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v1,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v31,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v30,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v29,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v28,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x8238db74
	goto loc_8238DB74;
loc_8238DA6C:
	// lvlx128 v58,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// addi r21,r11,4
	ctx.r21.s64 = ctx.r11.s64 + 4;
	// lvlx128 v57,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r20,r11,2
	ctx.r20.s64 = ctx.r11.s64 + 2;
	// lvlx128 v56,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvlx128 v55,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r27,r22,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v53,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lvlx128 v52,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r26,r21,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lvlx128 v59,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// lvrx128 v49,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r11,r20,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 3) & 0xFFFFFFF8;
	// lvrx128 v48,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx128 v47,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r27,r5,16
	ctx.r27.s64 = ctx.r5.s64 + 16;
	// lvrx128 v46,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// lvrx128 v45,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r26,r3,16
	ctx.r26.s64 = ctx.r3.s64 + 16;
	// lvrx128 v44,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// lvrx128 v43,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// lvrx128 v51,r24,r10
	temp.u32 = ctx.r24.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// lvlx128 v42,r25,r10
	temp.u32 = ctx.r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v41,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v13,v59,v51
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v51.u8)));
	// lvlx128 v40,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v58,v50
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// lvrx128 v39,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v11,v57,v49
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// lvlx128 v38,r4,r10
	temp.u32 = ctx.r4.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v56,v48
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
	// lvrx128 v37,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v9,v55,v47
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
	// lvlx128 v36,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v54,v46
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// lvrx128 v35,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v6,v53,v45
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v45.u8)));
	// lvlx128 v34,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v52,v44
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// lvrx128 v33,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v4,v42,v43
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v43.u8)));
	// lvlx128 v32,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v3,v40,v41
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// lvrx128 v63,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v2,v38,v39
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v39.u8)));
	// lvlx128 v62,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v36,v37
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v37.u8)));
	// lvrx128 v61,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v31,v34,v35
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v35.u8)));
	// lvlx128 v60,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v30,v32,v33
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v33.u8)));
	// vor128 v29,v62,v63
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vor128 v28,v60,v61
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
loc_8238DB74:
	// vavgub v13,v27,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// addi r11,r1,-160
	ctx.r11.s64 = ctx.r1.s64 + -160;
	// vavgub v12,v26,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// vavgub v11,v25,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// li r9,32
	ctx.r9.s64 = 32;
	// vavgub v10,v24,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// li r8,48
	ctx.r8.s64 = 48;
	// vavgub v9,v23,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// li r7,64
	ctx.r7.s64 = 64;
	// vperm128 v59,v13,v12,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v59,r0,r23
	ea = ctx.r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// vperm128 v58,v13,v12,v7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vavgub v8,v22,v8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vavgub v6,v21,v6
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v57,v11,v10,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vavgub v13,v20,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vperm128 v56,v11,v10,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vavgub v12,v19,v4
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// li r6,80
	ctx.r6.s64 = 80;
	// vperm128 v55,v9,v8,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vavgub v11,v18,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vperm128 v54,v9,v8,v7
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vavgub v8,v14,v30
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vperm128 v53,v6,v13,v0
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vavgub v10,v17,v2
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vperm128 v52,v6,v13,v7
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vavgub v13,v15,v31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// vperm128 v51,v12,v11,v0
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vavgub v9,v16,v1
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vperm128 v50,v12,v11,v7
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,112
	ctx.r4.s64 = 112;
	// vperm128 v47,v13,v8,v0
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r3,128
	ctx.r3.s64 = 128;
	// vperm128 v46,v13,v8,v7
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r31,144
	ctx.r31.s64 = 144;
	// vperm128 v49,v10,v9,v0
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r30,160
	ctx.r30.s64 = 160;
	// vperm128 v48,v10,v9,v7
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r29,176
	ctx.r29.s64 = 176;
	// li r28,192
	ctx.r28.s64 = 192;
	// li r27,208
	ctx.r27.s64 = 208;
	// li r26,224
	ctx.r26.s64 = 224;
	// li r25,240
	ctx.r25.s64 = 240;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vavgub v6,v13,v29
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v29.u8)));
	// vavgub v12,v12,v28
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// stvlx128 v57,r23,r24
	ea = ctx.r23.u32 + ctx.r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v55,r23,r9
	ea = ctx.r23.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v53,r23,r8
	ea = ctx.r23.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v58,r23,r7
	ea = ctx.r23.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// vperm128 v45,v6,v12,v0
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v56,r23,r6
	ea = ctx.r23.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// stvlx128 v54,r23,r5
	ea = ctx.r23.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// vperm128 v44,v6,v12,v7
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvlx128 v52,r23,r4
	ea = ctx.r23.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v51,r23,r3
	ea = ctx.r23.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v49,r23,r31
	ea = ctx.r23.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v47,r23,r30
	ea = ctx.r23.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v45,r23,r29
	ea = ctx.r23.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v50,r23,r28
	ea = ctx.r23.u32 + ctx.r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v48,r23,r27
	ea = ctx.r23.u32 + ctx.r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvlx128 v46,r23,r26
	ea = ctx.r23.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v44,r23,r25
	ea = ctx.r23.u32 + ctx.r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// b 0x8233e490
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238DC80"))) PPC_WEAK_FUNC(sub_8238DC80);
PPC_FUNC_IMPL(__imp__sub_8238DC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e434
	ctx.lr = 0x8238DC88;
	__savegprlr_15(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,-16
	ctx.r9.s64 = -16;
	// lwz r22,24(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r11,1728
	ctx.r8.s64 = ctx.r11.s64 + 1728;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// vspltisb v0,1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x1)));
	// li r23,16
	ctx.r23.s64 = 16;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx v7,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx v6,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r24,r11,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x8238ddc4
	if (!ctx.cr6.eq) goto loc_8238DDC4;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v61,r24,r10
	temp.u32 = ctx.r24.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvlx v31,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lvlx v30,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r21,r11,r9
	ctx.r21.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r4,r31,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx v26,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r6,r11,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r7,r1,-304
	ctx.r7.s64 = ctx.r1.s64 + -304;
	// lvlx128 v63,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mulli r30,r11,13
	ctx.r30.s64 = ctx.r11.s64 * 13;
	// lvlx v28,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r4,r10
	temp.u32 = ctx.r4.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v62,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v57,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r26,r1,-288
	ctx.r26.s64 = ctx.r1.s64 + -288;
	// addi r25,r1,-224
	ctx.r25.s64 = ctx.r1.s64 + -224;
	// addi r20,r1,-320
	ctx.r20.s64 = ctx.r1.s64 + -320;
	// addi r7,r1,-272
	ctx.r7.s64 = ctx.r1.s64 + -272;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r11,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stvx128 v61,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r29,r11,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stvx128 v63,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mulli r3,r11,11
	ctx.r3.s64 = ctx.r11.s64 * 11;
	// stvx128 v60,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v59,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
	// rlwinm r27,r11,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r19,r1,-192
	ctx.r19.s64 = ctx.r1.s64 + -192;
	// addi r18,r1,-176
	ctx.r18.s64 = ctx.r1.s64 + -176;
	// addi r17,r1,-240
	ctx.r17.s64 = ctx.r1.s64 + -240;
	// lvlx128 v56,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r16,r1,-208
	ctx.r16.s64 = ctx.r1.s64 + -208;
	// lvlx128 v55,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r20,r1,-256
	ctx.r20.s64 = ctx.r1.s64 + -256;
	// lvlx128 v54,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r26,r11,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v59,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v58,r0,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r7,r21,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v56,r0,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v29,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v27,r25,r10
	temp.u32 = ctx.r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v14,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x8238df84
	goto loc_8238DF84;
loc_8238DDC4:
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v47,r24,r10
	temp.u32 = ctx.r24.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lvlx128 v53,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lvrx128 v51,r23,r10
	temp.u32 = ctx.r23.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lvlx128 v52,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// vor128 v31,v53,v51
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v51.u8)));
	// addi r29,r6,16
	ctx.r29.s64 = ctx.r6.s64 + 16;
	// rlwinm r31,r31,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvlx128 v50,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v49,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lvrx128 v48,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v46,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// vor128 v45,v49,v48
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
	// add r28,r11,r7
	ctx.r28.u64 = ctx.r11.u64 + ctx.r7.u64;
	// vor128 v44,v47,v46
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v43,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v41,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v40,r4,r10
	temp.u32 = ctx.r4.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// addi r28,r9,16
	ctx.r28.s64 = ctx.r9.s64 + 16;
	// lvrx128 v35,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lvrx128 v37,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r21,r7,16
	ctx.r21.s64 = ctx.r7.s64 + 16;
	// lvlx128 v38,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r8,16
	ctx.r30.s64 = ctx.r8.s64 + 16;
	// lvlx128 v42,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r5,16
	ctx.r29.s64 = ctx.r5.s64 + 16;
	// vor128 v30,v52,v37
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v37.u8)));
	// lvrx128 v34,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// mulli r3,r11,11
	ctx.r3.s64 = ctx.r11.s64 * 11;
	// lvrx128 v32,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v28,v50,v34
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v34.u8)));
	// lvrx128 v62,r21,r10
	temp.u32 = ctx.r21.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx128 v63,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v14,v42,v62
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// lvrx128 v61,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v26,v43,v63
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lvlx128 v39,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v56,v41,v61
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// addi r28,r1,-304
	ctx.r28.s64 = ctx.r1.s64 + -304;
	// addi r21,r31,16
	ctx.r21.s64 = ctx.r31.s64 + 16;
	// rlwinm r26,r11,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r4,16
	ctx.r27.s64 = ctx.r4.s64 + 16;
	// addi r19,r3,16
	ctx.r19.s64 = ctx.r3.s64 + 16;
	// stvx128 v45,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r20,r1,-288
	ctx.r20.s64 = ctx.r1.s64 + -288;
	// lvrx128 v58,r21,r10
	temp.u32 = ctx.r21.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// mulli r30,r11,13
	ctx.r30.s64 = ctx.r11.s64 * 13;
	// lvlx128 v36,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v33,r25,r10
	temp.u32 = ctx.r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v29,v36,v35
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v35.u8)));
	// lvrx128 v60,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v27,v33,v32
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v32.u8)));
	// lvrx128 v59,r19,r10
	temp.u32 = ctx.r19.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v55,v40,v60
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v60.u8)));
	// stvx128 v44,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v54,v39,v59
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// lvlx128 v57,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v53,v38,v58
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v58.u8)));
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r11,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r21,r1,-224
	ctx.r21.s64 = ctx.r1.s64 + -224;
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r11,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stvx128 v56,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r21,r30,16
	ctx.r21.s64 = ctx.r30.s64 + 16;
	// lvlx128 v52,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r20,r29,16
	ctx.r20.s64 = ctx.r29.s64 + 16;
	// lvlx128 v51,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r19,r28,16
	ctx.r19.s64 = ctx.r28.s64 + 16;
	// addi r18,r27,16
	ctx.r18.s64 = ctx.r27.s64 + 16;
	// lvlx128 v50,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r17,r1,-320
	ctx.r17.s64 = ctx.r1.s64 + -320;
	// lvrx128 v49,r21,r10
	temp.u32 = ctx.r21.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r21,r1,-192
	ctx.r21.s64 = ctx.r1.s64 + -192;
	// lvrx128 v48,r20,r10
	temp.u32 = ctx.r20.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r20,r1,-176
	ctx.r20.s64 = ctx.r1.s64 + -176;
	// lvrx128 v47,r19,r10
	temp.u32 = ctx.r19.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r19,r1,-272
	ctx.r19.s64 = ctx.r1.s64 + -272;
	// lvrx128 v46,r18,r10
	temp.u32 = ctx.r18.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r18,r1,-240
	ctx.r18.s64 = ctx.r1.s64 + -240;
	// addi r16,r1,-208
	ctx.r16.s64 = ctx.r1.s64 + -208;
	// vor128 v45,v57,v49
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// addi r15,r1,-256
	ctx.r15.s64 = ctx.r1.s64 + -256;
	// vor128 v44,v51,v48
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
	// vor128 v43,v52,v47
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
	// stvx128 v55,r0,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v42,v50,v46
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// stvx128 v54,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v45,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v44,r0,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r0,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8238DF84:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r21,r10,28
	ctx.r21.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x8238dfdc
	if (!ctx.cr6.eq) goto loc_8238DFDC;
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v5,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v4,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v3,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v2,r25,r10
	temp.u32 = ctx.r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v1,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v25,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v24,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v23,r24,r10
	temp.u32 = ctx.r24.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v22,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v21,r4,r10
	temp.u32 = ctx.r4.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v20,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v19,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v18,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v17,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v16,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v15,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x8238e0f4
	goto loc_8238E0F4;
loc_8238DFDC:
	// lvlx128 v40,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r21,r11,8
	ctx.r21.s64 = ctx.r11.s64 + 8;
	// addi r20,r11,4
	ctx.r20.s64 = ctx.r11.s64 + 4;
	// lvlx128 v39,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r19,r11,2
	ctx.r19.s64 = ctx.r11.s64 + 2;
	// lvlx128 v38,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvlx128 v37,r25,r10
	temp.u32 = ctx.r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v36,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r26,r21,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v35,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lvlx128 v34,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r25,r20,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lvlx128 v56,r24,r10
	temp.u32 = ctx.r24.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v32,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// lvrx128 v63,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r11,r19,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// lvrx128 v62,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx128 v61,r25,r10
	temp.u32 = ctx.r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r26,r5,16
	ctx.r26.s64 = ctx.r5.s64 + 16;
	// lvrx128 v60,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// lvrx128 v59,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r25,r3,16
	ctx.r25.s64 = ctx.r3.s64 + 16;
	// lvrx128 v58,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// lvlx128 v41,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// lvrx128 v33,r23,r10
	temp.u32 = ctx.r23.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r24,r27,16
	ctx.r24.s64 = ctx.r27.s64 + 16;
	// vor128 v9,v41,v33
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v33.u8)));
	// vor128 v5,v40,v32
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v32.u8)));
	// lvrx128 v55,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v54,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v4,v39,v63
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lvrx128 v53,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v3,v38,v62
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// lvlx128 v52,r4,r10
	temp.u32 = ctx.r4.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v2,v37,v61
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// lvrx128 v51,r25,r10
	temp.u32 = ctx.r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v1,v36,v60
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v60.u8)));
	// lvlx128 v50,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v25,v35,v59
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// lvrx128 v49,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v24,v34,v58
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v58.u8)));
	// lvlx128 v48,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v23,v56,v57
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v57.u8)));
	// lvrx128 v47,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v22,v54,v55
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// lvlx128 v46,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v21,v52,v53
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v53.u8)));
	// lvrx128 v45,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v20,v50,v51
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v51.u8)));
	// lvlx128 v44,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v19,v48,v49
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// lvrx128 v43,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v18,v46,v47
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
	// lvlx128 v42,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v17,v44,v45
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v45.u8)));
	// lvrx128 v41,r24,r10
	temp.u32 = ctx.r24.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v16,v42,v43
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v43.u8)));
	// lvlx128 v40,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v15,v40,v41
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
loc_8238E0F4:
	// vavgub v13,v30,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// addi r10,r1,-288
	ctx.r10.s64 = ctx.r1.s64 + -288;
	// vxor128 v39,v30,v5
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// vavgub v8,v31,v9
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// addi r8,r1,-320
	ctx.r8.s64 = ctx.r1.s64 + -320;
	// vxor128 v35,v31,v9
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// addi r11,r1,-304
	ctx.r11.s64 = ctx.r1.s64 + -304;
	// vavgub v12,v29,v4
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// vavgub v11,v28,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// addi r28,r1,-224
	ctx.r28.s64 = ctx.r1.s64 + -224;
	// vxor128 v38,v29,v4
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// lvx128 v4,r0,r10
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor128 v37,v28,v3
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvx128 v3,r0,r9
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vavgub v10,v27,v2
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// addi r30,r1,-304
	ctx.r30.s64 = ctx.r1.s64 + -304;
	// vxor128 v34,v8,v13
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// addi r29,r1,-288
	ctx.r29.s64 = ctx.r1.s64 + -288;
	// vxor128 v36,v27,v2
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// lvx128 v2,r0,r8
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v61,v35,v39
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v39.u8)));
	// addi r10,r1,-224
	ctx.r10.s64 = ctx.r1.s64 + -224;
	// vxor128 v33,v13,v12
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvx128 v5,r0,r11
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor128 v32,v12,v11
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// addi r27,r1,-320
	ctx.r27.s64 = ctx.r1.s64 + -320;
	// vor128 v62,v39,v38
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v38.u8)));
	// addi r6,r1,-176
	ctx.r6.s64 = ctx.r1.s64 + -176;
	// vor128 v60,v38,v37
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v37.u8)));
	// addi r5,r1,-272
	ctx.r5.s64 = ctx.r1.s64 + -272;
	// vavgub v8,v8,v13
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// addi r9,r1,-288
	ctx.r9.s64 = ctx.r1.s64 + -288;
	// vxor128 v63,v11,v10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// addi r8,r1,-304
	ctx.r8.s64 = ctx.r1.s64 + -304;
	// vor128 v59,v37,v36
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v36.u8)));
	// lvx128 v31,r0,r7
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v57,v61,v34
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v34.u8)));
	// addi r11,r1,-320
	ctx.r11.s64 = ctx.r1.s64 + -320;
	// vavgub v13,v13,v12
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// addi r4,r1,-240
	ctx.r4.s64 = ctx.r1.s64 + -240;
	// vavgub v12,v12,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// addi r3,r1,-208
	ctx.r3.s64 = ctx.r1.s64 + -208;
	// vavgub v11,v11,v10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// vavgub v9,v26,v1
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// vxor128 v54,v26,v1
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// lvx128 v51,r0,r28
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v58,v62,v33
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v33.u8)));
	// lvx128 v53,r0,r30
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v56,v60,v32
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v32.u8)));
	// lvx128 v52,r0,r29
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v1,v57,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v55,v59,v63
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lvx128 v30,r0,r6
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r0,r5
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v49,v6,v6
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// lvx128 v50,r0,r27
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v48,v7,v7
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vavgub v12,v5,v24
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v6,v58,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand128 v7,v56,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v47,v0,v0
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvx128 v28,r0,r4
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vavgub v11,v4,v23
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v23.u8)));
	// lvx128 v27,r0,r3
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vavgub v8,v3,v22
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v22.u8)));
	// lvx128 v26,r0,r31
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vavgub v5,v2,v21
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v21.u8)));
	// stvx128 v1,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v0,v55,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vavgub v13,v14,v25
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v25.u8)));
	// vavgub v4,v31,v20
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v20.u8)));
	// vavgub v3,v30,v19
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v19.u8)));
	// vavgub v2,v29,v18
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v18.u8)));
	// vavgub v1,v28,v17
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v17.u8)));
	// lvx128 v28,r0,r7
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r0,r8
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vavgub v31,v27,v16
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v16.u8)));
	// lvx128 v27,r0,r11
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vavgub v30,v26,v15
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v15.u8)));
	// lvx128 v26,r0,r10
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsububs v29,v29,v28
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vsububs v28,v27,v6
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// vsububs v27,v26,v7
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v26,r0,r9
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,-176
	ctx.r10.s64 = ctx.r1.s64 + -176;
	// vxor128 v44,v14,v25
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v25.u8)));
	// addi r9,r1,-272
	ctx.r9.s64 = ctx.r1.s64 + -272;
	// vxor128 v43,v53,v24
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r8,r1,-240
	ctx.r8.s64 = ctx.r1.s64 + -240;
	// vxor128 v42,v52,v23
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v23.u8)));
	// addi r7,r1,-208
	ctx.r7.s64 = ctx.r1.s64 + -208;
	// vxor128 v41,v51,v22
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v22.u8)));
	// lvx128 v35,r0,r11
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,-256
	ctx.r6.s64 = ctx.r1.s64 + -256;
	// lvx128 v34,r0,r10
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v45,v36,v54
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v54.u8)));
	// lvx128 v32,r0,r9
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor128 v40,v50,v21
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v21.u8)));
	// lvx128 v62,r0,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor128 v46,v10,v9
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// lvx128 v60,r0,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor128 v33,v35,v20
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v20.u8)));
	// vxor128 v63,v34,v19
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v19.u8)));
	// lvx128 v57,r0,r6
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor128 v61,v32,v18
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v18.u8)));
	// vxor128 v59,v62,v17
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v17.u8)));
	// vor128 v55,v54,v44
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// vxor128 v58,v60,v16
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v16.u8)));
	// vor128 v54,v44,v43
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v43.u8)));
	// vor128 v53,v43,v42
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// vor128 v52,v42,v41
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// vxor128 v39,v9,v13
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vxor128 v38,v13,v12
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vxor128 v37,v12,v11
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vxor128 v36,v11,v8
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vor128 v51,v41,v40
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v40.u8)));
	// vand128 v50,v45,v46
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// vor128 v45,v40,v33
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v33.u8)));
	// vor128 v43,v33,v63
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vor128 v41,v63,v61
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vor128 v35,v61,v59
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// vxor128 v56,v8,v5
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsububs v26,v26,v0
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vor128 v0,v47,v47
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v47.u8));
	// vor128 v33,v59,v58
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v58.u8)));
	// vxor128 v32,v57,v15
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v15.u8)));
	// vand128 v63,v55,v39
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v39.u8)));
	// vand128 v62,v54,v38
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v38.u8)));
	// vand128 v61,v53,v37
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v37.u8)));
	// vand128 v60,v52,v36
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v36.u8)));
	// vxor128 v46,v5,v4
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vxor128 v44,v4,v3
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vxor128 v42,v3,v2
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vxor128 v40,v2,v1
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vxor128 v34,v1,v31
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// vand128 v59,v51,v56
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// vavgub v25,v10,v9
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// vavgub v24,v9,v13
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vavgub v23,v13,v12
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vavgub v22,v12,v11
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vavgub v21,v11,v8
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vand128 v57,v45,v46
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// vand128 v56,v43,v44
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// vand128 v55,v41,v42
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// vand128 v54,v35,v40
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v40.u8)));
	// vand128 v53,v33,v34
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v34.u8)));
	// vxor128 v52,v31,v30
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vor128 v51,v58,v32
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v32.u8)));
	// vand128 v20,v50,v0
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand128 v19,v63,v0
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand128 v18,v62,v0
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand128 v17,v61,v0
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand128 v16,v60,v0
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r5,r1,-256
	ctx.r5.s64 = ctx.r1.s64 + -256;
	// vand128 v12,v56,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,-208
	ctx.r3.s64 = ctx.r1.s64 + -208;
	// vand128 v11,v55,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,-240
	ctx.r11.s64 = ctx.r1.s64 + -240;
	// vand128 v10,v54,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// vand128 v13,v57,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand128 v9,v53,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v7,v48,v48
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v48.u8));
	// vand128 v50,v51,v52
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// li r4,48
	ctx.r4.s64 = 48;
	// vsububs v13,v25,v20
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v20.u8)));
	// li r9,112
	ctx.r9.s64 = 112;
	// vsububs v12,v24,v19
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v19.u8)));
	// li r8,128
	ctx.r8.s64 = 128;
	// vsububs v11,v23,v18
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v18.u8)));
	// vperm128 v48,v29,v28,v7
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsububs v10,v22,v17
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)ctx.v17.u8)));
	// vperm128 v47,v27,v26,v7
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vor128 v6,v49,v49
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v49.u8));
	// li r7,144
	ctx.r7.s64 = 144;
	// vavgub v14,v8,v5
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vperm128 v46,v13,v12,v7
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vand128 v25,v50,v0
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vavgub v24,v31,v30
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vperm128 v45,v11,v10,v7
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vavgub v5,v5,v4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vperm128 v44,v29,v28,v6
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vavgub v4,v4,v3
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vperm128 v43,v27,v26,v6
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vavgub v3,v3,v2
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vperm128 v42,v13,v12,v6
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vavgub v2,v2,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vperm128 v41,v11,v10,v6
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v22,r0,r5
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsububs v9,v21,v16
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v16.u8)));
	// li r5,32
	ctx.r5.s64 = 32;
	// lvx128 v20,r0,r3
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v15,v59,v0
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r3,64
	ctx.r3.s64 = 64;
	// vavgub v1,v1,v31
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_avg_epu8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// lvx128 v19,r0,r11
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsububs v21,v24,v25
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v25.u8)));
	// li r11,80
	ctx.r11.s64 = 80;
	// lvx128 v23,r0,r6
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsububs v4,v4,v22
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v22.u8)));
	// lvx128 v18,r0,r10
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,96
	ctx.r10.s64 = 96;
	// stvlx128 v48,r0,r22
	ea = ctx.r22.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// vsububs v8,v14,v15
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v15.u8)));
	// stvlx128 v47,r22,r23
	ea = ctx.r22.u32 + ctx.r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// vsububs v5,v5,v23
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v23.u8)));
	// stvlx128 v46,r22,r5
	ea = ctx.r22.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// vsububs v3,v3,v20
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v20.u8)));
	// vsububs v2,v2,v19
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v19.u8)));
	// stvlx128 v45,r22,r4
	ea = ctx.r22.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// vsububs v1,v1,v18
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_subs_epu8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v18.u8)));
	// stvlx128 v44,r22,r3
	ea = ctx.r22.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// vor128 v63,v21,v21
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v21.u8));
	// stvlx128 v43,r22,r11
	ea = ctx.r22.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v42,r22,r10
	ea = ctx.r22.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// vperm128 v40,v9,v8,v7
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v39,v5,v4,v7
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r6,160
	ctx.r6.s64 = 160;
	// vperm128 v38,v3,v2,v7
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r5,176
	ctx.r5.s64 = 176;
	// vperm128 v37,v1,v63,v7
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r4,192
	ctx.r4.s64 = 192;
	// vperm128 v36,v9,v8,v6
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// stvlx128 v41,r22,r9
	ea = ctx.r22.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// vperm128 v35,v5,v4,v6
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// li r3,208
	ctx.r3.s64 = 208;
	// vperm128 v34,v3,v2,v6
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v33,v1,v63,v6
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// stvlx128 v40,r22,r8
	ea = ctx.r22.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// li r11,224
	ctx.r11.s64 = 224;
	// stvlx128 v39,r22,r7
	ea = ctx.r22.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// li r10,240
	ctx.r10.s64 = 240;
	// stvlx128 v38,r22,r6
	ea = ctx.r22.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v37,r22,r5
	ea = ctx.r22.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v36,r22,r4
	ea = ctx.r22.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v35,r22,r3
	ea = ctx.r22.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v34,r22,r11
	ea = ctx.r22.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v33,r22,r10
	ea = ctx.r22.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// b 0x8233e484
	__restgprlr_15(ctx, base);
	return;
}

