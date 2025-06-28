#include "ppc_recomp_shared.h"

__attribute__((alias("__imp____restvmx_99"))) PPC_WEAK_FUNC(__restvmx_99);
PPC_FUNC_IMPL(__imp____restvmx_99) {
	PPC_FUNC_PROLOGUE();
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	_mm_store_si128((__m128i*)ctx.v99.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	_mm_store_si128((__m128i*)ctx.v100.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	_mm_store_si128((__m128i*)ctx.v101.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	_mm_store_si128((__m128i*)ctx.v102.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	_mm_store_si128((__m128i*)ctx.v103.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	_mm_store_si128((__m128i*)ctx.v104.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	_mm_store_si128((__m128i*)ctx.v105.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	_mm_store_si128((__m128i*)ctx.v106.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	_mm_store_si128((__m128i*)ctx.v107.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	_mm_store_si128((__m128i*)ctx.v108.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_100"))) PPC_WEAK_FUNC(__restvmx_100);
PPC_FUNC_IMPL(__imp____restvmx_100) {
	PPC_FUNC_PROLOGUE();
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	_mm_store_si128((__m128i*)ctx.v100.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	_mm_store_si128((__m128i*)ctx.v101.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	_mm_store_si128((__m128i*)ctx.v102.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	_mm_store_si128((__m128i*)ctx.v103.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	_mm_store_si128((__m128i*)ctx.v104.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	_mm_store_si128((__m128i*)ctx.v105.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	_mm_store_si128((__m128i*)ctx.v106.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	_mm_store_si128((__m128i*)ctx.v107.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	_mm_store_si128((__m128i*)ctx.v108.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_101"))) PPC_WEAK_FUNC(__restvmx_101);
PPC_FUNC_IMPL(__imp____restvmx_101) {
	PPC_FUNC_PROLOGUE();
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	_mm_store_si128((__m128i*)ctx.v101.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	_mm_store_si128((__m128i*)ctx.v102.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	_mm_store_si128((__m128i*)ctx.v103.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	_mm_store_si128((__m128i*)ctx.v104.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	_mm_store_si128((__m128i*)ctx.v105.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	_mm_store_si128((__m128i*)ctx.v106.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	_mm_store_si128((__m128i*)ctx.v107.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	_mm_store_si128((__m128i*)ctx.v108.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_102"))) PPC_WEAK_FUNC(__restvmx_102);
PPC_FUNC_IMPL(__imp____restvmx_102) {
	PPC_FUNC_PROLOGUE();
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	_mm_store_si128((__m128i*)ctx.v102.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	_mm_store_si128((__m128i*)ctx.v103.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	_mm_store_si128((__m128i*)ctx.v104.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	_mm_store_si128((__m128i*)ctx.v105.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	_mm_store_si128((__m128i*)ctx.v106.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	_mm_store_si128((__m128i*)ctx.v107.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	_mm_store_si128((__m128i*)ctx.v108.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_103"))) PPC_WEAK_FUNC(__restvmx_103);
PPC_FUNC_IMPL(__imp____restvmx_103) {
	PPC_FUNC_PROLOGUE();
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	_mm_store_si128((__m128i*)ctx.v103.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	_mm_store_si128((__m128i*)ctx.v104.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	_mm_store_si128((__m128i*)ctx.v105.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	_mm_store_si128((__m128i*)ctx.v106.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	_mm_store_si128((__m128i*)ctx.v107.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	_mm_store_si128((__m128i*)ctx.v108.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_104"))) PPC_WEAK_FUNC(__restvmx_104);
PPC_FUNC_IMPL(__imp____restvmx_104) {
	PPC_FUNC_PROLOGUE();
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	_mm_store_si128((__m128i*)ctx.v104.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	_mm_store_si128((__m128i*)ctx.v105.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	_mm_store_si128((__m128i*)ctx.v106.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	_mm_store_si128((__m128i*)ctx.v107.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	_mm_store_si128((__m128i*)ctx.v108.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_105"))) PPC_WEAK_FUNC(__restvmx_105);
PPC_FUNC_IMPL(__imp____restvmx_105) {
	PPC_FUNC_PROLOGUE();
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	_mm_store_si128((__m128i*)ctx.v105.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	_mm_store_si128((__m128i*)ctx.v106.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	_mm_store_si128((__m128i*)ctx.v107.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	_mm_store_si128((__m128i*)ctx.v108.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_106"))) PPC_WEAK_FUNC(__restvmx_106);
PPC_FUNC_IMPL(__imp____restvmx_106) {
	PPC_FUNC_PROLOGUE();
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	_mm_store_si128((__m128i*)ctx.v106.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	_mm_store_si128((__m128i*)ctx.v107.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	_mm_store_si128((__m128i*)ctx.v108.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_107"))) PPC_WEAK_FUNC(__restvmx_107);
PPC_FUNC_IMPL(__imp____restvmx_107) {
	PPC_FUNC_PROLOGUE();
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	_mm_store_si128((__m128i*)ctx.v107.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	_mm_store_si128((__m128i*)ctx.v108.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_108"))) PPC_WEAK_FUNC(__restvmx_108);
PPC_FUNC_IMPL(__imp____restvmx_108) {
	PPC_FUNC_PROLOGUE();
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	_mm_store_si128((__m128i*)ctx.v108.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_109"))) PPC_WEAK_FUNC(__restvmx_109);
PPC_FUNC_IMPL(__imp____restvmx_109) {
	PPC_FUNC_PROLOGUE();
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_110"))) PPC_WEAK_FUNC(__restvmx_110);
PPC_FUNC_IMPL(__imp____restvmx_110) {
	PPC_FUNC_PROLOGUE();
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_111"))) PPC_WEAK_FUNC(__restvmx_111);
PPC_FUNC_IMPL(__imp____restvmx_111) {
	PPC_FUNC_PROLOGUE();
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_112"))) PPC_WEAK_FUNC(__restvmx_112);
PPC_FUNC_IMPL(__imp____restvmx_112) {
	PPC_FUNC_PROLOGUE();
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_113"))) PPC_WEAK_FUNC(__restvmx_113);
PPC_FUNC_IMPL(__imp____restvmx_113) {
	PPC_FUNC_PROLOGUE();
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_114"))) PPC_WEAK_FUNC(__restvmx_114);
PPC_FUNC_IMPL(__imp____restvmx_114) {
	PPC_FUNC_PROLOGUE();
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_115"))) PPC_WEAK_FUNC(__restvmx_115);
PPC_FUNC_IMPL(__imp____restvmx_115) {
	PPC_FUNC_PROLOGUE();
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_116"))) PPC_WEAK_FUNC(__restvmx_116);
PPC_FUNC_IMPL(__imp____restvmx_116) {
	PPC_FUNC_PROLOGUE();
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_117"))) PPC_WEAK_FUNC(__restvmx_117);
PPC_FUNC_IMPL(__imp____restvmx_117) {
	PPC_FUNC_PROLOGUE();
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_118"))) PPC_WEAK_FUNC(__restvmx_118);
PPC_FUNC_IMPL(__imp____restvmx_118) {
	PPC_FUNC_PROLOGUE();
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_119"))) PPC_WEAK_FUNC(__restvmx_119);
PPC_FUNC_IMPL(__imp____restvmx_119) {
	PPC_FUNC_PROLOGUE();
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_120"))) PPC_WEAK_FUNC(__restvmx_120);
PPC_FUNC_IMPL(__imp____restvmx_120) {
	PPC_FUNC_PROLOGUE();
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_121"))) PPC_WEAK_FUNC(__restvmx_121);
PPC_FUNC_IMPL(__imp____restvmx_121) {
	PPC_FUNC_PROLOGUE();
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_122"))) PPC_WEAK_FUNC(__restvmx_122);
PPC_FUNC_IMPL(__imp____restvmx_122) {
	PPC_FUNC_PROLOGUE();
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_123"))) PPC_WEAK_FUNC(__restvmx_123);
PPC_FUNC_IMPL(__imp____restvmx_123) {
	PPC_FUNC_PROLOGUE();
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_124"))) PPC_WEAK_FUNC(__restvmx_124);
PPC_FUNC_IMPL(__imp____restvmx_124) {
	PPC_FUNC_PROLOGUE();
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_125"))) PPC_WEAK_FUNC(__restvmx_125);
PPC_FUNC_IMPL(__imp____restvmx_125) {
	PPC_FUNC_PROLOGUE();
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_126"))) PPC_WEAK_FUNC(__restvmx_126);
PPC_FUNC_IMPL(__imp____restvmx_126) {
	PPC_FUNC_PROLOGUE();
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_127"))) PPC_WEAK_FUNC(__restvmx_127);
PPC_FUNC_IMPL(__imp____restvmx_127) {
	PPC_FUNC_PROLOGUE();
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_14"))) PPC_WEAK_FUNC(__savefpr_14);
PPC_FUNC_IMPL(__imp____savefpr_14) {
	PPC_FUNC_PROLOGUE();
	// stfd f14,-144(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -144, ctx.f14.u64);
	// stfd f15,-136(r12)
	PPC_STORE_U64(ctx.r12.u32 + -136, ctx.f15.u64);
	// stfd f16,-128(r12)
	PPC_STORE_U64(ctx.r12.u32 + -128, ctx.f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_15"))) PPC_WEAK_FUNC(__savefpr_15);
PPC_FUNC_IMPL(__imp____savefpr_15) {
	PPC_FUNC_PROLOGUE();
	// stfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -136, ctx.f15.u64);
	// stfd f16,-128(r12)
	PPC_STORE_U64(ctx.r12.u32 + -128, ctx.f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_16"))) PPC_WEAK_FUNC(__savefpr_16);
PPC_FUNC_IMPL(__imp____savefpr_16) {
	PPC_FUNC_PROLOGUE();
	// stfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -128, ctx.f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_17"))) PPC_WEAK_FUNC(__savefpr_17);
PPC_FUNC_IMPL(__imp____savefpr_17) {
	PPC_FUNC_PROLOGUE();
	// stfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_18"))) PPC_WEAK_FUNC(__savefpr_18);
PPC_FUNC_IMPL(__imp____savefpr_18) {
	PPC_FUNC_PROLOGUE();
	// stfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_19"))) PPC_WEAK_FUNC(__savefpr_19);
PPC_FUNC_IMPL(__imp____savefpr_19) {
	PPC_FUNC_PROLOGUE();
	// stfd f19,-104(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_20"))) PPC_WEAK_FUNC(__savefpr_20);
PPC_FUNC_IMPL(__imp____savefpr_20) {
	PPC_FUNC_PROLOGUE();
	// stfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_21"))) PPC_WEAK_FUNC(__savefpr_21);
PPC_FUNC_IMPL(__imp____savefpr_21) {
	PPC_FUNC_PROLOGUE();
	// stfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_22"))) PPC_WEAK_FUNC(__savefpr_22);
PPC_FUNC_IMPL(__imp____savefpr_22) {
	PPC_FUNC_PROLOGUE();
	// stfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_23"))) PPC_WEAK_FUNC(__savefpr_23);
PPC_FUNC_IMPL(__imp____savefpr_23) {
	PPC_FUNC_PROLOGUE();
	// stfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_24"))) PPC_WEAK_FUNC(__savefpr_24);
PPC_FUNC_IMPL(__imp____savefpr_24) {
	PPC_FUNC_PROLOGUE();
	// stfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_25"))) PPC_WEAK_FUNC(__savefpr_25);
PPC_FUNC_IMPL(__imp____savefpr_25) {
	PPC_FUNC_PROLOGUE();
	// stfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_26"))) PPC_WEAK_FUNC(__savefpr_26);
PPC_FUNC_IMPL(__imp____savefpr_26) {
	PPC_FUNC_PROLOGUE();
	// stfd f26,-48(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_27"))) PPC_WEAK_FUNC(__savefpr_27);
PPC_FUNC_IMPL(__imp____savefpr_27) {
	PPC_FUNC_PROLOGUE();
	// stfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_28"))) PPC_WEAK_FUNC(__savefpr_28);
PPC_FUNC_IMPL(__imp____savefpr_28) {
	PPC_FUNC_PROLOGUE();
	// stfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_29"))) PPC_WEAK_FUNC(__savefpr_29);
PPC_FUNC_IMPL(__imp____savefpr_29) {
	PPC_FUNC_PROLOGUE();
	// stfd f29,-24(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_30"))) PPC_WEAK_FUNC(__savefpr_30);
PPC_FUNC_IMPL(__imp____savefpr_30) {
	PPC_FUNC_PROLOGUE();
	// stfd f30,-16(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_31"))) PPC_WEAK_FUNC(__savefpr_31);
PPC_FUNC_IMPL(__imp____savefpr_31) {
	PPC_FUNC_PROLOGUE();
	// stfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_14"))) PPC_WEAK_FUNC(__restfpr_14);
PPC_FUNC_IMPL(__imp____restfpr_14) {
	PPC_FUNC_PROLOGUE();
	// lfd f14,-144(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f14.u64 = PPC_LOAD_U64(ctx.r12.u32 + -144);
	// lfd f15,-136(r12)
	ctx.f15.u64 = PPC_LOAD_U64(ctx.r12.u32 + -136);
	// lfd f16,-128(r12)
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_15"))) PPC_WEAK_FUNC(__restfpr_15);
PPC_FUNC_IMPL(__imp____restfpr_15) {
	PPC_FUNC_PROLOGUE();
	// lfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f15.u64 = PPC_LOAD_U64(ctx.r12.u32 + -136);
	// lfd f16,-128(r12)
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_16"))) PPC_WEAK_FUNC(__restfpr_16);
PPC_FUNC_IMPL(__imp____restfpr_16) {
	PPC_FUNC_PROLOGUE();
	// lfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_17"))) PPC_WEAK_FUNC(__restfpr_17);
PPC_FUNC_IMPL(__imp____restfpr_17) {
	PPC_FUNC_PROLOGUE();
	// lfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_18"))) PPC_WEAK_FUNC(__restfpr_18);
PPC_FUNC_IMPL(__imp____restfpr_18) {
	PPC_FUNC_PROLOGUE();
	// lfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_19"))) PPC_WEAK_FUNC(__restfpr_19);
PPC_FUNC_IMPL(__imp____restfpr_19) {
	PPC_FUNC_PROLOGUE();
	// lfd f19,-104(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_20"))) PPC_WEAK_FUNC(__restfpr_20);
PPC_FUNC_IMPL(__imp____restfpr_20) {
	PPC_FUNC_PROLOGUE();
	// lfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_21"))) PPC_WEAK_FUNC(__restfpr_21);
PPC_FUNC_IMPL(__imp____restfpr_21) {
	PPC_FUNC_PROLOGUE();
	// lfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_22"))) PPC_WEAK_FUNC(__restfpr_22);
PPC_FUNC_IMPL(__imp____restfpr_22) {
	PPC_FUNC_PROLOGUE();
	// lfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_23"))) PPC_WEAK_FUNC(__restfpr_23);
PPC_FUNC_IMPL(__imp____restfpr_23) {
	PPC_FUNC_PROLOGUE();
	// lfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_24"))) PPC_WEAK_FUNC(__restfpr_24);
PPC_FUNC_IMPL(__imp____restfpr_24) {
	PPC_FUNC_PROLOGUE();
	// lfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_25"))) PPC_WEAK_FUNC(__restfpr_25);
PPC_FUNC_IMPL(__imp____restfpr_25) {
	PPC_FUNC_PROLOGUE();
	// lfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_26"))) PPC_WEAK_FUNC(__restfpr_26);
PPC_FUNC_IMPL(__imp____restfpr_26) {
	PPC_FUNC_PROLOGUE();
	// lfd f26,-48(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_27"))) PPC_WEAK_FUNC(__restfpr_27);
PPC_FUNC_IMPL(__imp____restfpr_27) {
	PPC_FUNC_PROLOGUE();
	// lfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_28"))) PPC_WEAK_FUNC(__restfpr_28);
PPC_FUNC_IMPL(__imp____restfpr_28) {
	PPC_FUNC_PROLOGUE();
	// lfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_29"))) PPC_WEAK_FUNC(__restfpr_29);
PPC_FUNC_IMPL(__imp____restfpr_29) {
	PPC_FUNC_PROLOGUE();
	// lfd f29,-24(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_30"))) PPC_WEAK_FUNC(__restfpr_30);
PPC_FUNC_IMPL(__imp____restfpr_30) {
	PPC_FUNC_PROLOGUE();
	// lfd f30,-16(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_31"))) PPC_WEAK_FUNC(__restfpr_31);
PPC_FUNC_IMPL(__imp____restfpr_31) {
	PPC_FUNC_PROLOGUE();
	// lfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233FA98"))) PPC_WEAK_FUNC(sub_8233FA98);
PPC_FUNC_IMPL(__imp__sub_8233FA98) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8233fad0
	if (ctx.cr0.eq) goto loc_8233FAD0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8233fab4
	if (!ctx.cr6.eq) goto loc_8233FAB4;
	// li r11,768
	ctx.r11.s64 = 768;
	// b 0x8233fad0
	goto loc_8233FAD0;
loc_8233FAB4:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8233fac4
	if (!ctx.cr6.eq) goto loc_8233FAC4;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x8233fad0
	goto loc_8233FAD0;
loc_8233FAC4:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8233fad0
	if (!ctx.cr6.eq) goto loc_8233FAD0;
	// li r11,256
	ctx.r11.s64 = 256;
loc_8233FAD0:
	// rlwinm. r10,r3,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8233fadc
	if (ctx.cr0.eq) goto loc_8233FADC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_8233FADC:
	// rlwinm. r10,r3,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8233fae8
	if (ctx.cr0.eq) goto loc_8233FAE8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_8233FAE8:
	// rlwinm. r10,r3,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8233faf4
	if (ctx.cr0.eq) goto loc_8233FAF4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_8233FAF4:
	// rlwinm. r10,r3,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8233fb00
	if (ctx.cr0.eq) goto loc_8233FB00;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_8233FB00:
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8233fb0c
	if (ctx.cr0.eq) goto loc_8233FB0C;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_8233FB0C:
	// oris r3,r11,8
	ctx.r3.u64 = ctx.r11.u64 | 524288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233FB14"))) PPC_WEAK_FUNC(sub_8233FB14);
PPC_FUNC_IMPL(__imp__sub_8233FB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233FB18"))) PPC_WEAK_FUNC(sub_8233FB18);
PPC_FUNC_IMPL(__imp__sub_8233FB18) {
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
	// lis r4,-8
	ctx.r4.s64 = -524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1792
	ctx.r4.u64 = ctx.r4.u64 | 1792;
	// bl 0x82347d10
	ctx.lr = 0x8233FB34;
	sub_82347D10(ctx, base);
	// bl 0x8233fa98
	ctx.lr = 0x8233FB38;
	sub_8233FA98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233FB48"))) PPC_WEAK_FUNC(sub_8233FB48);
PPC_FUNC_IMPL(__imp__sub_8233FB48) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233FB4C"))) PPC_WEAK_FUNC(sub_8233FB4C);
PPC_FUNC_IMPL(__imp__sub_8233FB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233FB50"))) PPC_WEAK_FUNC(sub_8233FB50);
PPC_FUNC_IMPL(__imp__sub_8233FB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r0
	ctx.r0.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r0,8(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8, ctx.r0.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r0,312(r3)
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr1,r0,0
	ctx.cr1.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne 0x8233fb7c
	if (!ctx.cr0.eq) goto loc_8233FB7C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8233FB7C:
	// bne cr1,0x8233fe3c
	if (!ctx.cr1.eq) goto loc_8233FE3C;
	// lwz r3,308(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// lwz r4,144(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 144);
	// bl 0x82347dc0
	ctx.lr = 0x8233FB8C;
	sub_82347DC0(ctx, base);
	// lfd f14,0(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f14.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lfd f15,8(r7)
	ctx.f15.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lfd f16,16(r7)
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// lfd f17,24(r7)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// lfd f18,32(r7)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r7.u32 + 32);
	// lfd f19,40(r7)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r7.u32 + 40);
	// lfd f20,48(r7)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r7.u32 + 48);
	// lfd f21,56(r7)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r7.u32 + 56);
	// lfd f22,64(r7)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r7.u32 + 64);
	// lfd f23,72(r7)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r7.u32 + 72);
	// lfd f24,80(r7)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r7.u32 + 80);
	// lfd f25,88(r7)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 88);
	// lfd f26,96(r7)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 96);
	// lfd f27,104(r7)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r7.u32 + 104);
	// lfd f28,112(r7)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 112);
	// lfd f29,120(r7)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 120);
	// lfd f30,128(r7)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 128);
	// lfd f31,136(r7)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 136);
	// ld r13,152(r7)
	ctx.r13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 152);
	// ld r14,160(r7)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r7.u32 + 160);
	// ld r15,168(r7)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r7.u32 + 168);
	// ld r16,176(r7)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r7.u32 + 176);
	// ld r17,184(r7)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r7.u32 + 184);
	// ld r18,192(r7)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r7.u32 + 192);
	// ld r19,200(r7)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r7.u32 + 200);
	// ld r20,208(r7)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r7.u32 + 208);
	// ld r21,216(r7)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r7.u32 + 216);
	// ld r22,224(r7)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r7.u32 + 224);
	// ld r23,232(r7)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r7.u32 + 232);
	// ld r24,240(r7)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r7.u32 + 240);
	// ld r25,248(r7)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 248);
	// ld r26,256(r7)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 256);
	// ld r27,264(r7)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r7.u32 + 264);
	// ld r28,272(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 272);
	// ld r29,280(r7)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 280);
	// ld r30,288(r7)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 288);
	// ld r31,296(r7)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 296);
	// li r3,320
	ctx.r3.s64 = 320;
	// lvx128 v64,r3,r7
	_mm_store_si128((__m128i*)ctx.v64.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,336
	ctx.r3.s64 = 336;
	// lvx128 v65,r3,r7
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,352
	ctx.r3.s64 = 352;
	// lvx128 v66,r3,r7
	_mm_store_si128((__m128i*)ctx.v66.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,368
	ctx.r3.s64 = 368;
	// lvx128 v67,r3,r7
	_mm_store_si128((__m128i*)ctx.v67.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,384
	ctx.r3.s64 = 384;
	// lvx128 v68,r3,r7
	_mm_store_si128((__m128i*)ctx.v68.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,400
	ctx.r3.s64 = 400;
	// lvx128 v69,r3,r7
	_mm_store_si128((__m128i*)ctx.v69.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,416
	ctx.r3.s64 = 416;
	// lvx128 v70,r3,r7
	_mm_store_si128((__m128i*)ctx.v70.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,432
	ctx.r3.s64 = 432;
	// lvx128 v71,r3,r7
	_mm_store_si128((__m128i*)ctx.v71.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,448
	ctx.r3.s64 = 448;
	// lvx128 v72,r3,r7
	_mm_store_si128((__m128i*)ctx.v72.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,464
	ctx.r3.s64 = 464;
	// lvx128 v73,r3,r7
	_mm_store_si128((__m128i*)ctx.v73.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,480
	ctx.r3.s64 = 480;
	// lvx128 v74,r3,r7
	_mm_store_si128((__m128i*)ctx.v74.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,496
	ctx.r3.s64 = 496;
	// lvx128 v75,r3,r7
	_mm_store_si128((__m128i*)ctx.v75.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,512
	ctx.r3.s64 = 512;
	// lvx128 v76,r3,r7
	_mm_store_si128((__m128i*)ctx.v76.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,528
	ctx.r3.s64 = 528;
	// lvx128 v77,r3,r7
	_mm_store_si128((__m128i*)ctx.v77.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,544
	ctx.r3.s64 = 544;
	// lvx128 v78,r3,r7
	_mm_store_si128((__m128i*)ctx.v78.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,560
	ctx.r3.s64 = 560;
	// lvx128 v79,r3,r7
	_mm_store_si128((__m128i*)ctx.v79.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,576
	ctx.r3.s64 = 576;
	// lvx128 v80,r3,r7
	_mm_store_si128((__m128i*)ctx.v80.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,592
	ctx.r3.s64 = 592;
	// lvx128 v81,r3,r7
	_mm_store_si128((__m128i*)ctx.v81.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,608
	ctx.r3.s64 = 608;
	// lvx128 v82,r3,r7
	_mm_store_si128((__m128i*)ctx.v82.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,624
	ctx.r3.s64 = 624;
	// lvx128 v83,r3,r7
	_mm_store_si128((__m128i*)ctx.v83.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,640
	ctx.r3.s64 = 640;
	// lvx128 v84,r3,r7
	_mm_store_si128((__m128i*)ctx.v84.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,656
	ctx.r3.s64 = 656;
	// lvx128 v85,r3,r7
	_mm_store_si128((__m128i*)ctx.v85.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,672
	ctx.r3.s64 = 672;
	// lvx128 v86,r3,r7
	_mm_store_si128((__m128i*)ctx.v86.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,688
	ctx.r3.s64 = 688;
	// lvx128 v87,r3,r7
	_mm_store_si128((__m128i*)ctx.v87.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,704
	ctx.r3.s64 = 704;
	// lvx128 v88,r3,r7
	_mm_store_si128((__m128i*)ctx.v88.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,720
	ctx.r3.s64 = 720;
	// lvx128 v89,r3,r7
	_mm_store_si128((__m128i*)ctx.v89.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,736
	ctx.r3.s64 = 736;
	// lvx128 v90,r3,r7
	_mm_store_si128((__m128i*)ctx.v90.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,752
	ctx.r3.s64 = 752;
	// lvx128 v91,r3,r7
	_mm_store_si128((__m128i*)ctx.v91.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,768
	ctx.r3.s64 = 768;
	// lvx128 v92,r3,r7
	_mm_store_si128((__m128i*)ctx.v92.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,784
	ctx.r3.s64 = 784;
	// lvx128 v93,r3,r7
	_mm_store_si128((__m128i*)ctx.v93.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,800
	ctx.r3.s64 = 800;
	// lvx128 v94,r3,r7
	_mm_store_si128((__m128i*)ctx.v94.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,816
	ctx.r3.s64 = 816;
	// lvx128 v95,r3,r7
	_mm_store_si128((__m128i*)ctx.v95.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,832
	ctx.r3.s64 = 832;
	// lvx128 v96,r3,r7
	_mm_store_si128((__m128i*)ctx.v96.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,848
	ctx.r3.s64 = 848;
	// lvx128 v97,r3,r7
	_mm_store_si128((__m128i*)ctx.v97.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,864
	ctx.r3.s64 = 864;
	// lvx128 v98,r3,r7
	_mm_store_si128((__m128i*)ctx.v98.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,880
	ctx.r3.s64 = 880;
	// lvx128 v99,r3,r7
	_mm_store_si128((__m128i*)ctx.v99.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,896
	ctx.r3.s64 = 896;
	// lvx128 v100,r3,r7
	_mm_store_si128((__m128i*)ctx.v100.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,912
	ctx.r3.s64 = 912;
	// lvx128 v101,r3,r7
	_mm_store_si128((__m128i*)ctx.v101.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,928
	ctx.r3.s64 = 928;
	// lvx128 v102,r3,r7
	_mm_store_si128((__m128i*)ctx.v102.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,944
	ctx.r3.s64 = 944;
	// lvx128 v103,r3,r7
	_mm_store_si128((__m128i*)ctx.v103.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,960
	ctx.r3.s64 = 960;
	// lvx128 v104,r3,r7
	_mm_store_si128((__m128i*)ctx.v104.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,976
	ctx.r3.s64 = 976;
	// lvx128 v105,r3,r7
	_mm_store_si128((__m128i*)ctx.v105.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,992
	ctx.r3.s64 = 992;
	// lvx128 v106,r3,r7
	_mm_store_si128((__m128i*)ctx.v106.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1008
	ctx.r3.s64 = 1008;
	// lvx128 v107,r3,r7
	_mm_store_si128((__m128i*)ctx.v107.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lvx128 v108,r3,r7
	_mm_store_si128((__m128i*)ctx.v108.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1040
	ctx.r3.s64 = 1040;
	// lvx128 v109,r3,r7
	_mm_store_si128((__m128i*)ctx.v109.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1056
	ctx.r3.s64 = 1056;
	// lvx128 v110,r3,r7
	_mm_store_si128((__m128i*)ctx.v110.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1072
	ctx.r3.s64 = 1072;
	// lvx128 v111,r3,r7
	_mm_store_si128((__m128i*)ctx.v111.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1088
	ctx.r3.s64 = 1088;
	// lvx128 v112,r3,r7
	_mm_store_si128((__m128i*)ctx.v112.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1104
	ctx.r3.s64 = 1104;
	// lvx128 v113,r3,r7
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1120
	ctx.r3.s64 = 1120;
	// lvx128 v114,r3,r7
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1136
	ctx.r3.s64 = 1136;
	// lvx128 v115,r3,r7
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1152
	ctx.r3.s64 = 1152;
	// lvx128 v116,r3,r7
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1168
	ctx.r3.s64 = 1168;
	// lvx128 v117,r3,r7
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1184
	ctx.r3.s64 = 1184;
	// lvx128 v118,r3,r7
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1200
	ctx.r3.s64 = 1200;
	// lvx128 v119,r3,r7
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1216
	ctx.r3.s64 = 1216;
	// lvx128 v120,r3,r7
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1232
	ctx.r3.s64 = 1232;
	// lvx128 v121,r3,r7
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1248
	ctx.r3.s64 = 1248;
	// lvx128 v122,r3,r7
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1264
	ctx.r3.s64 = 1264;
	// lvx128 v123,r3,r7
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1280
	ctx.r3.s64 = 1280;
	// lvx128 v124,r3,r7
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1296
	ctx.r3.s64 = 1296;
	// lvx128 v125,r3,r7
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1312
	ctx.r3.s64 = 1312;
	// lvx128 v126,r3,r7
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1328
	ctx.r3.s64 = 1328;
	// lvx128 v127,r3,r7
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,308(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// lwz r4,304(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 304);
	// mtlr r5
	ctx.lr = ctx.r5.u64;
	// ld r1,144(r7)
	ctx.r1.u64 = PPC_LOAD_U64(ctx.r7.u32 + 144);
	// mtcr r4
	ctx.cr0.lt = (ctx.r4.u32 & 0x80000000) != 0;
	ctx.cr0.gt = (ctx.r4.u32 & 0x40000000) != 0;
	ctx.cr0.eq = (ctx.r4.u32 & 0x20000000) != 0;
	ctx.cr0.so = (ctx.r4.u32 & 0x10000000) != 0;
	ctx.cr1.lt = (ctx.r4.u32 & 0x8000000) != 0;
	ctx.cr1.gt = (ctx.r4.u32 & 0x4000000) != 0;
	ctx.cr1.eq = (ctx.r4.u32 & 0x2000000) != 0;
	ctx.cr1.so = (ctx.r4.u32 & 0x1000000) != 0;
	ctx.cr2.lt = (ctx.r4.u32 & 0x800000) != 0;
	ctx.cr2.gt = (ctx.r4.u32 & 0x400000) != 0;
	ctx.cr2.eq = (ctx.r4.u32 & 0x200000) != 0;
	ctx.cr2.so = (ctx.r4.u32 & 0x100000) != 0;
	ctx.cr3.lt = (ctx.r4.u32 & 0x80000) != 0;
	ctx.cr3.gt = (ctx.r4.u32 & 0x40000) != 0;
	ctx.cr3.eq = (ctx.r4.u32 & 0x20000) != 0;
	ctx.cr3.so = (ctx.r4.u32 & 0x10000) != 0;
	ctx.cr4.lt = (ctx.r4.u32 & 0x8000) != 0;
	ctx.cr4.gt = (ctx.r4.u32 & 0x4000) != 0;
	ctx.cr4.eq = (ctx.r4.u32 & 0x2000) != 0;
	ctx.cr4.so = (ctx.r4.u32 & 0x1000) != 0;
	ctx.cr5.lt = (ctx.r4.u32 & 0x800) != 0;
	ctx.cr5.gt = (ctx.r4.u32 & 0x400) != 0;
	ctx.cr5.eq = (ctx.r4.u32 & 0x200) != 0;
	ctx.cr5.so = (ctx.r4.u32 & 0x100) != 0;
	ctx.cr6.lt = (ctx.r4.u32 & 0x80) != 0;
	ctx.cr6.gt = (ctx.r4.u32 & 0x40) != 0;
	ctx.cr6.eq = (ctx.r4.u32 & 0x20) != 0;
	ctx.cr6.so = (ctx.r4.u32 & 0x10) != 0;
	ctx.cr7.lt = (ctx.r4.u32 & 0x8) != 0;
	ctx.cr7.gt = (ctx.r4.u32 & 0x4) != 0;
	ctx.cr7.eq = (ctx.r4.u32 & 0x2) != 0;
	ctx.cr7.so = (ctx.r4.u32 & 0x1) != 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
loc_8233FE3C:
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82347dc0
	ctx.lr = 0x8233FE48;
	sub_82347DC0(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82389264
	ctx.lr = 0x8233FE54;
	__imp__RtlUnwind(ctx, base);
	// lwz r0,8(r1)
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8);
	// mtlr r0
	ctx.lr = ctx.r0.u64;
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233FE64"))) PPC_WEAK_FUNC(sub_8233FE64);
PPC_FUNC_IMPL(__imp__sub_8233FE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233FE68"))) PPC_WEAK_FUNC(sub_8233FE68);
PPC_FUNC_IMPL(__imp__sub_8233FE68) {
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
	// stfd f1,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8233feb0
	if (!ctx.cr6.eq) goto loc_8233FEB0;
	// bl 0x82342a98
	ctx.lr = 0x8233FE98;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x8233FEA4;
	sub_82342BF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9016(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9016);
	// b 0x8233ff60
	goto loc_8233FF60;
loc_8233FEB0:
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// li r3,248
	ctx.r3.s64 = 248;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x82347d10
	ctx.lr = 0x8233FEC0;
	sub_82347D10(ctx, base);
	// lhz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x8233ff40
	if (!ctx.cr6.eq) goto loc_8233FF40;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82343f08
	ctx.lr = 0x8233FEE4;
	sub_82343F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8233ff30
	if (!ctx.cr0.gt) goto loc_8233FF30;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8233ff10
	if (!ctx.cr6.gt) goto loc_8233FF10;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8233ff30
	if (!ctx.cr6.eq) goto loc_8233FF30;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82347a40
	ctx.lr = 0x8233FF0C;
	sub_82347A40(ctx, base);
	// b 0x8233ff60
	goto loc_8233FF60;
loc_8233FF10:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lfd f2,-19368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -19368);
loc_8233FF18:
	// li r3,8
	ctx.r3.s64 = 8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82347b48
	ctx.lr = 0x8233FF2C;
	sub_82347B48(ctx, base);
	// b 0x8233ff60
	goto loc_8233FF60;
loc_8233FF30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,9024(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9024);
	// fadd f2,f31,f0
	ctx.f2.f64 = ctx.f31.f64 + ctx.f0.f64;
	// b 0x8233ff18
	goto loc_8233FF18;
loc_8233FF40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82343f90
	ctx.lr = 0x8233FF48;
	sub_82343F90(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x82347d10
	ctx.lr = 0x8233FF5C;
	sub_82347D10(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8233FF60:
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

__attribute__((alias("__imp__sub_8233FF7C"))) PPC_WEAK_FUNC(sub_8233FF7C);
PPC_FUNC_IMPL(__imp__sub_8233FF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233FF80"))) PPC_WEAK_FUNC(sub_8233FF80);
PPC_FUNC_IMPL(__imp__sub_8233FF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x8233FF88;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x8233FFB8;
	sub_8233EAF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8233ffd8
	if (!ctx.cr6.eq) goto loc_8233FFD8;
loc_8233FFC0:
	// bl 0x82342a98
	ctx.lr = 0x8233FFC4;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x8233FFD0;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8234005c
	goto loc_8234005C;
loc_8233FFD8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233ffe8
	if (ctx.cr6.eq) goto loc_8233FFE8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233ffc0
	if (ctx.cr6.eq) goto loc_8233FFC0;
loc_8233FFE8:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x82340000
	if (ctx.cr6.gt) goto loc_82340000;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82340000:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82343398
	ctx.lr = 0x82340024;
	sub_82343398(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82340058
	if (ctx.cr6.eq) goto loc_82340058;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x8234004c
	if (ctx.cr0.lt) goto loc_8234004C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// b 0x82340058
	goto loc_82340058;
loc_8234004C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823440c0
	ctx.lr = 0x82340058;
	sub_823440C0(ctx, base);
loc_82340058:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8234005C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82340064"))) PPC_WEAK_FUNC(sub_82340064);
PPC_FUNC_IMPL(__imp__sub_82340064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340068"))) PPC_WEAK_FUNC(sub_82340068);
PPC_FUNC_IMPL(__imp__sub_82340068) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8233ff80
	sub_8233FF80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82340074"))) PPC_WEAK_FUNC(sub_82340074);
PPC_FUNC_IMPL(__imp__sub_82340074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340078"))) PPC_WEAK_FUNC(sub_82340078);
PPC_FUNC_IMPL(__imp__sub_82340078) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234007C"))) PPC_WEAK_FUNC(sub_8234007C);
PPC_FUNC_IMPL(__imp__sub_8234007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340080"))) PPC_WEAK_FUNC(sub_82340080);
PPC_FUNC_IMPL(__imp__sub_82340080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r4,-32170
	ctx.r4.s64 = -2108293120;
	// lwz r0,-24376(r4)
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24376);
	// cmpwi r0,0
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bnectr 
	if (!ctx.cr0.eq) {
		PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
		return;
	}
	// mflr r0
	ctx.r0.u64 = ctx.lr;
	// mfcr r4
	ctx.r4.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r4.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r4.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r4.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r4.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r4.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r4.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r4.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r4.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r4.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r4.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r4.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r4.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r4.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r4.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r4.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r4.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r4.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r4.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r4.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r4.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r4.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r4.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r4.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r4.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r4.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r4.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r4.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r4.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r4.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r4.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r4.u64 |= ctx.cr7.so ? 0x1 : 0;
	// stfd f14,0(r3)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.f14.u64);
	// stfd f15,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f15.u64);
	// stfd f16,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.f16.u64);
	// stfd f17,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.f17.u64);
	// stfd f18,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.f18.u64);
	// stfd f19,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.f19.u64);
	// stfd f20,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.f20.u64);
	// stfd f21,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.f21.u64);
	// stfd f22,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.f22.u64);
	// stfd f23,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.f23.u64);
	// stfd f24,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.f24.u64);
	// stfd f25,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.f25.u64);
	// stfd f26,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.f26.u64);
	// stfd f27,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.f27.u64);
	// stfd f28,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.f28.u64);
	// stfd f29,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.f29.u64);
	// stfd f30,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.f30.u64);
	// stfd f31,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.f31.u64);
	// std r13,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r13.u64);
	// std r14,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r14.u64);
	// std r15,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r15.u64);
	// std r16,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r16.u64);
	// std r17,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r17.u64);
	// std r18,192(r3)
	PPC_STORE_U64(ctx.r3.u32 + 192, ctx.r18.u64);
	// std r19,200(r3)
	PPC_STORE_U64(ctx.r3.u32 + 200, ctx.r19.u64);
	// std r20,208(r3)
	PPC_STORE_U64(ctx.r3.u32 + 208, ctx.r20.u64);
	// std r21,216(r3)
	PPC_STORE_U64(ctx.r3.u32 + 216, ctx.r21.u64);
	// std r22,224(r3)
	PPC_STORE_U64(ctx.r3.u32 + 224, ctx.r22.u64);
	// std r23,232(r3)
	PPC_STORE_U64(ctx.r3.u32 + 232, ctx.r23.u64);
	// std r24,240(r3)
	PPC_STORE_U64(ctx.r3.u32 + 240, ctx.r24.u64);
	// std r25,248(r3)
	PPC_STORE_U64(ctx.r3.u32 + 248, ctx.r25.u64);
	// std r26,256(r3)
	PPC_STORE_U64(ctx.r3.u32 + 256, ctx.r26.u64);
	// std r27,264(r3)
	PPC_STORE_U64(ctx.r3.u32 + 264, ctx.r27.u64);
	// std r28,272(r3)
	PPC_STORE_U64(ctx.r3.u32 + 272, ctx.r28.u64);
	// std r29,280(r3)
	PPC_STORE_U64(ctx.r3.u32 + 280, ctx.r29.u64);
	// std r30,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r30.u64);
	// std r31,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, ctx.r31.u64);
	// li r5,320
	ctx.r5.s64 = 320;
	// stvlx128 v64,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v64.u8[15 - i]);
	// li r5,336
	ctx.r5.s64 = 336;
	// stvlx128 v65,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// li r5,352
	ctx.r5.s64 = 352;
	// stvlx128 v66,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v66.u8[15 - i]);
	// li r5,368
	ctx.r5.s64 = 368;
	// stvlx128 v67,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v67.u8[15 - i]);
	// li r5,384
	ctx.r5.s64 = 384;
	// stvlx128 v68,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v68.u8[15 - i]);
	// li r5,400
	ctx.r5.s64 = 400;
	// stvlx128 v69,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v69.u8[15 - i]);
	// li r5,416
	ctx.r5.s64 = 416;
	// stvlx128 v70,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v70.u8[15 - i]);
	// li r5,432
	ctx.r5.s64 = 432;
	// stvlx128 v71,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v71.u8[15 - i]);
	// li r5,448
	ctx.r5.s64 = 448;
	// stvlx128 v72,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v72.u8[15 - i]);
	// li r5,464
	ctx.r5.s64 = 464;
	// stvlx128 v73,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v73.u8[15 - i]);
	// li r5,480
	ctx.r5.s64 = 480;
	// stvlx128 v74,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v74.u8[15 - i]);
	// li r5,496
	ctx.r5.s64 = 496;
	// stvlx128 v75,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v75.u8[15 - i]);
	// li r5,512
	ctx.r5.s64 = 512;
	// stvlx128 v76,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v76.u8[15 - i]);
	// li r5,528
	ctx.r5.s64 = 528;
	// stvlx128 v77,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v77.u8[15 - i]);
	// li r5,544
	ctx.r5.s64 = 544;
	// stvlx128 v78,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v78.u8[15 - i]);
	// li r5,560
	ctx.r5.s64 = 560;
	// stvlx128 v79,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v79.u8[15 - i]);
	// li r5,576
	ctx.r5.s64 = 576;
	// stvlx128 v80,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v80.u8[15 - i]);
	// li r5,592
	ctx.r5.s64 = 592;
	// stvlx128 v81,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v81.u8[15 - i]);
	// li r5,608
	ctx.r5.s64 = 608;
	// stvlx128 v82,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v82.u8[15 - i]);
	// li r5,624
	ctx.r5.s64 = 624;
	// stvlx128 v83,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v83.u8[15 - i]);
	// li r5,640
	ctx.r5.s64 = 640;
	// stvlx128 v84,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v84.u8[15 - i]);
	// li r5,656
	ctx.r5.s64 = 656;
	// stvlx128 v85,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v85.u8[15 - i]);
	// li r5,672
	ctx.r5.s64 = 672;
	// stvlx128 v86,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v86.u8[15 - i]);
	// li r5,688
	ctx.r5.s64 = 688;
	// stvlx128 v87,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v87.u8[15 - i]);
	// li r5,704
	ctx.r5.s64 = 704;
	// stvlx128 v88,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v88.u8[15 - i]);
	// li r5,720
	ctx.r5.s64 = 720;
	// stvlx128 v89,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v89.u8[15 - i]);
	// li r5,736
	ctx.r5.s64 = 736;
	// stvlx128 v90,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v90.u8[15 - i]);
	// li r5,752
	ctx.r5.s64 = 752;
	// stvlx128 v91,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v91.u8[15 - i]);
	// li r5,768
	ctx.r5.s64 = 768;
	// stvlx128 v92,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v92.u8[15 - i]);
	// li r5,784
	ctx.r5.s64 = 784;
	// stvlx128 v93,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v93.u8[15 - i]);
	// li r5,800
	ctx.r5.s64 = 800;
	// stvlx128 v94,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v94.u8[15 - i]);
	// li r5,816
	ctx.r5.s64 = 816;
	// stvlx128 v95,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v95.u8[15 - i]);
	// li r5,832
	ctx.r5.s64 = 832;
	// stvlx128 v96,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v96.u8[15 - i]);
	// li r5,848
	ctx.r5.s64 = 848;
	// stvlx128 v97,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v97.u8[15 - i]);
	// li r5,864
	ctx.r5.s64 = 864;
	// stvlx128 v98,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v98.u8[15 - i]);
	// li r5,880
	ctx.r5.s64 = 880;
	// stvlx128 v99,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v99.u8[15 - i]);
	// li r5,896
	ctx.r5.s64 = 896;
	// stvlx128 v100,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v100.u8[15 - i]);
	// li r5,912
	ctx.r5.s64 = 912;
	// stvlx128 v101,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v101.u8[15 - i]);
	// li r5,928
	ctx.r5.s64 = 928;
	// stvlx128 v102,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v102.u8[15 - i]);
	// li r5,944
	ctx.r5.s64 = 944;
	// stvlx128 v103,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v103.u8[15 - i]);
	// li r5,960
	ctx.r5.s64 = 960;
	// stvlx128 v104,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v104.u8[15 - i]);
	// li r5,976
	ctx.r5.s64 = 976;
	// stvlx128 v105,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v105.u8[15 - i]);
	// li r5,992
	ctx.r5.s64 = 992;
	// stvlx128 v106,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v106.u8[15 - i]);
	// li r5,1008
	ctx.r5.s64 = 1008;
	// stvlx128 v107,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v107.u8[15 - i]);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stvlx128 v108,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v108.u8[15 - i]);
	// li r5,1040
	ctx.r5.s64 = 1040;
	// stvlx128 v109,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v109.u8[15 - i]);
	// li r5,1056
	ctx.r5.s64 = 1056;
	// stvlx128 v110,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v110.u8[15 - i]);
	// li r5,1072
	ctx.r5.s64 = 1072;
	// stvlx128 v111,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v111.u8[15 - i]);
	// li r5,1088
	ctx.r5.s64 = 1088;
	// stvlx128 v112,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v112.u8[15 - i]);
	// li r5,1104
	ctx.r5.s64 = 1104;
	// stvlx128 v113,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v113.u8[15 - i]);
	// li r5,1120
	ctx.r5.s64 = 1120;
	// stvlx128 v114,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v114.u8[15 - i]);
	// li r5,1136
	ctx.r5.s64 = 1136;
	// stvlx128 v115,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v115.u8[15 - i]);
	// li r5,1152
	ctx.r5.s64 = 1152;
	// stvlx128 v116,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v116.u8[15 - i]);
	// li r5,1168
	ctx.r5.s64 = 1168;
	// stvlx128 v117,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v117.u8[15 - i]);
	// li r5,1184
	ctx.r5.s64 = 1184;
	// stvlx128 v118,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v118.u8[15 - i]);
	// li r5,1200
	ctx.r5.s64 = 1200;
	// stvlx128 v119,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v119.u8[15 - i]);
	// li r5,1216
	ctx.r5.s64 = 1216;
	// stvlx128 v120,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v120.u8[15 - i]);
	// li r5,1232
	ctx.r5.s64 = 1232;
	// stvlx128 v121,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v121.u8[15 - i]);
	// li r5,1248
	ctx.r5.s64 = 1248;
	// stvlx128 v122,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v122.u8[15 - i]);
	// li r5,1264
	ctx.r5.s64 = 1264;
	// stvlx128 v123,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v123.u8[15 - i]);
	// li r5,1280
	ctx.r5.s64 = 1280;
	// stvlx128 v124,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v124.u8[15 - i]);
	// li r5,1296
	ctx.r5.s64 = 1296;
	// stvlx128 v125,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v125.u8[15 - i]);
	// li r5,1312
	ctx.r5.s64 = 1312;
	// stvlx128 v126,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v126.u8[15 - i]);
	// li r5,1328
	ctx.r5.s64 = 1328;
	// stvlx128 v127,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v127.u8[15 - i]);
	// stw r0,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r0.u32);
	// stw r4,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r4.u32);
	// std r1,144(r3)
	PPC_STORE_U64(ctx.r3.u32 + 144, ctx.r1.u64);
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r0.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234034C"))) PPC_WEAK_FUNC(sub_8234034C);
PPC_FUNC_IMPL(__imp__sub_8234034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340350"))) PPC_WEAK_FUNC(sub_82340350);
PPC_FUNC_IMPL(__imp__sub_82340350) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82340388
	if (!ctx.cr6.eq) goto loc_82340388;
	// bl 0x82342a98
	ctx.lr = 0x82340374;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82340380;
	sub_82342BF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8234042c
	goto loc_8234042C;
loc_82340388:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x8237b330
	ctx.lr = 0x82340398;
	sub_8237B330(ctx, base);
	// li r10,47
	ctx.r10.s64 = 47;
	// li r9,100
	ctx.r9.s64 = 100;
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// divw r9,r10,r9
	ctx.r9.s32 = ctx.r10.s32 / ctx.r9.s32;
	// mulli r9,r9,100
	ctx.r9.s64 = ctx.r9.s64 * 100;
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r8,r11
	ctx.r10.s32 = ctx.r8.s32 / ctx.r11.s32;
	// divw r9,r6,r11
	ctx.r9.s32 = ctx.r6.s32 / ctx.r11.s32;
	// divw r7,r5,r11
	ctx.r7.s32 = ctx.r5.s32 / ctx.r11.s32;
	// mulli r3,r9,10
	ctx.r3.s64 = ctx.r9.s64 * 10;
	// mulli r4,r10,10
	ctx.r4.s64 = ctx.r10.s64 * 10;
	// mulli r30,r7,10
	ctx.r30.s64 = ctx.r7.s64 * 10;
	// divw r9,r8,r11
	ctx.r9.s32 = ctx.r8.s32 / ctx.r11.s32;
	// divw r7,r6,r11
	ctx.r7.s32 = ctx.r6.s32 / ctx.r11.s32;
	// divw r10,r5,r11
	ctx.r10.s32 = ctx.r5.s32 / ctx.r11.s32;
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subf r11,r30,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r30.s64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r7,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r6,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r6.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
loc_8234042C:
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

__attribute__((alias("__imp__sub_82340444"))) PPC_WEAK_FUNC(sub_82340444);
PPC_FUNC_IMPL(__imp__sub_82340444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340448"))) PPC_WEAK_FUNC(sub_82340448);
PPC_FUNC_IMPL(__imp__sub_82340448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82340450;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82340478
	if (!ctx.cr6.eq) goto loc_82340478;
	// bl 0x82342a98
	ctx.lr = 0x82340464;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82340470;
	sub_82342BF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8234050c
	goto loc_8234050C;
loc_82340478:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x8237b330
	ctx.lr = 0x82340488;
	sub_8237B330(ctx, base);
	// li r10,58
	ctx.r10.s64 = 58;
	// lhz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r11,10
	ctx.r11.s64 = 10;
	// lhz r5,90(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// divw r9,r5,r11
	ctx.r9.s32 = ctx.r5.s32 / ctx.r11.s32;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// divw r10,r6,r11
	ctx.r10.s32 = ctx.r6.s32 / ctx.r11.s32;
	// divw r8,r4,r11
	ctx.r8.s32 = ctx.r4.s32 / ctx.r11.s32;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// mulli r3,r10,10
	ctx.r3.s64 = ctx.r10.s64 * 10;
	// mulli r30,r9,10
	ctx.r30.s64 = ctx.r9.s64 * 10;
	// mulli r29,r8,10
	ctx.r29.s64 = ctx.r8.s64 * 10;
	// divw r9,r6,r11
	ctx.r9.s32 = ctx.r6.s32 / ctx.r11.s32;
	// subf r8,r3,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r3.s64;
	// divw r7,r5,r11
	ctx.r7.s32 = ctx.r5.s32 / ctx.r11.s32;
	// divw r10,r4,r11
	ctx.r10.s32 = ctx.r4.s32 / ctx.r11.s32;
	// subf r6,r30,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r30.s64;
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r7,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r6,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r6.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
loc_8234050C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82340514"))) PPC_WEAK_FUNC(sub_82340514);
PPC_FUNC_IMPL(__imp__sub_82340514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340518"))) PPC_WEAK_FUNC(sub_82340518);
PPC_FUNC_IMPL(__imp__sub_82340518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e448
	ctx.lr = 0x82340520;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82340568
	if (ctx.cr6.eq) goto loc_82340568;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82340568
	if (ctx.cr6.eq) goto loc_82340568;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82340574
	if (!ctx.cr6.eq) goto loc_82340574;
loc_82340558:
	// bl 0x82342a98
	ctx.lr = 0x8234055C;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
loc_82340560:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82340568;
	sub_82342BF0(ctx, base);
loc_82340568:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234056C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8233e498
	__restgprlr_20(ctx, base);
	return;
loc_82340574:
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82340590
	if (ctx.cr6.eq) goto loc_82340590;
	// divwu r11,r31,r25
	ctx.r11.u32 = ctx.r31.u32 / ctx.r25.u32;
	// twllei r25,0
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823405c0
	if (!ctx.cr6.gt) goto loc_823405C0;
loc_82340590:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x823405a8
	if (ctx.cr6.eq) goto loc_823405A8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x823405A8;
	sub_8233EAF0(ctx, base);
loc_823405A8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82340558
	if (ctx.cr6.eq) goto loc_82340558;
	// divwu r11,r31,r25
	ctx.r11.u32 = ctx.r31.u32 / ctx.r25.u32;
	// twllei r25,0
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82340558
	if (ctx.cr6.gt) goto loc_82340558;
loc_823405C0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mullw r23,r25,r22
	ctx.r23.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r22.s32);
	// andi. r11,r11,268
	ctx.r11.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823405e0
	if (ctx.cr0.eq) goto loc_823405E0;
	// lwz r26,24(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// b 0x823405e4
	goto loc_823405E4;
loc_823405E0:
	// li r26,4096
	ctx.r26.s64 = 4096;
loc_823405E4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8234072c
	if (ctx.cr6.eq) goto loc_8234072C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r24,r11,65535
	ctx.r24.u64 = ctx.r11.u64 | 65535;
loc_823405F4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82340664
	if (ctx.cr0.eq) goto loc_82340664;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82340664
	if (ctx.cr6.eq) goto loc_82340664;
	// blt cr6,0x82340758
	if (ctx.cr6.lt) goto loc_82340758;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82340620
	if (!ctx.cr6.lt) goto loc_82340620;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82340620:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82340734
	if (ctx.cr6.gt) goto loc_82340734;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82348790
	ctx.lr = 0x8234063C;
	sub_82348790(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x82340724
	goto loc_82340724;
loc_82340664:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823406f8
	if (ctx.cr6.lt) goto loc_823406F8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823406ac
	if (ctx.cr6.eq) goto loc_823406AC;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// twllei r26,0
	// ble cr6,0x82340698
	if (!ctx.cr6.gt) goto loc_82340698;
	// divwu r10,r24,r26
	ctx.r10.u32 = ctx.r24.u32 / ctx.r26.u32;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r30,r11,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r11.s64;
	// b 0x823406bc
	goto loc_823406BC;
loc_82340698:
	// divwu r11,r31,r26
	ctx.r11.u32 = ctx.r31.u32 / ctx.r26.u32;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subf r30,r11,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x823406bc
	goto loc_823406BC;
loc_823406AC:
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bgt cr6,0x823406bc
	if (ctx.cr6.gt) goto loc_823406BC;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_823406BC:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82340734
	if (ctx.cr6.gt) goto loc_82340734;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82348750
	ctx.lr = 0x823406CC;
	sub_82348750(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823485a8
	ctx.lr = 0x823406D8;
	sub_823485A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82340770
	if (ctx.cr0.eq) goto loc_82340770;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8234078c
	if (ctx.cr6.eq) goto loc_8234078C;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// subf r27,r3,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r3.s64;
	// b 0x82340724
	goto loc_82340724;
loc_823406F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82340700;
	sub_82347DD8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82340798
	if (ctx.cr6.eq) goto loc_82340798;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82340734
	if (ctx.cr6.eq) goto loc_82340734;
	// stb r3,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r3.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r26,24(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
loc_82340724:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823405f4
	if (!ctx.cr6.eq) goto loc_823405F4;
loc_8234072C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// b 0x8234056c
	goto loc_8234056C;
loc_82340734:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x8234074c
	if (ctx.cr6.eq) goto loc_8234074C;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x8234074C;
	sub_8233EAF0(ctx, base);
loc_8234074C:
	// bl 0x82342a98
	ctx.lr = 0x82340750;
	sub_82342A98(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x82340560
	goto loc_82340560;
loc_82340758:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// subf r10,r31,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r31.s64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// divwu r3,r10,r25
	ctx.r3.u32 = ctx.r10.u32 / ctx.r25.u32;
loc_82340768:
	// twllei r25,0
	// b 0x8234056c
	goto loc_8234056C;
loc_82340770:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82340778:
	// subf r10,r31,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r31.s64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// twllei r25,0
	// divwu r3,r10,r25
	ctx.r3.u32 = ctx.r10.u32 / ctx.r25.u32;
	// b 0x8234056c
	goto loc_8234056C;
loc_8234078C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x82340778
	goto loc_82340778;
loc_82340798:
	// subf r11,r31,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r31.s64;
	// divwu r3,r11,r25
	ctx.r3.u32 = ctx.r11.u32 / ctx.r25.u32;
	// b 0x82340768
	goto loc_82340768;
}

__attribute__((alias("__imp__sub_823407A4"))) PPC_WEAK_FUNC(sub_823407A4);
PPC_FUNC_IMPL(__imp__sub_823407A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823407A8"))) PPC_WEAK_FUNC(sub_823407A8);
PPC_FUNC_IMPL(__imp__sub_823407A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,-30396(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30396);
	// lwz r16,-13248(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -13248);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x823407B8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8234081c
	if (ctx.cr6.eq) goto loc_8234081C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234081c
	if (ctx.cr6.eq) goto loc_8234081C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82340828
	if (!ctx.cr6.eq) goto loc_82340828;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8234080c
	if (ctx.cr6.eq) goto loc_8234080C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8234080C;
	sub_8233EAF0(ctx, base);
loc_8234080C:
	// bl 0x82342a98
	ctx.lr = 0x82340810;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x8234081C;
	sub_82342BF0(ctx, base);
loc_8234081C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82340820:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82340828:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342fb0
	ctx.lr = 0x82340830;
	sub_82342FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82340518
	ctx.lr = 0x8234084C;
	sub_82340518(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82340884
	ctx.lr = 0x8234085C;
	sub_82340884(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82340820
	goto loc_82340820;
}

__attribute__((alias("__imp__sub_823407B0"))) PPC_WEAK_FUNC(sub_823407B0);
PPC_FUNC_IMPL(__imp__sub_823407B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x823407B8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8234081c
	if (ctx.cr6.eq) goto loc_8234081C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234081c
	if (ctx.cr6.eq) goto loc_8234081C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82340828
	if (!ctx.cr6.eq) goto loc_82340828;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8234080c
	if (ctx.cr6.eq) goto loc_8234080C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233eaf0
	ctx.lr = 0x8234080C;
	sub_8233EAF0(ctx, base);
loc_8234080C:
	// bl 0x82342a98
	ctx.lr = 0x82340810;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x8234081C;
	sub_82342BF0(ctx, base);
loc_8234081C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82340820:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
loc_82340828:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342fb0
	ctx.lr = 0x82340830;
	sub_82342FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82340518
	ctx.lr = 0x8234084C;
	sub_82340518(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82340884
	ctx.lr = 0x8234085C;
	sub_82340884(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82340820
	goto loc_82340820;
}

__attribute__((alias("__imp__sub_82340864"))) PPC_WEAK_FUNC(sub_82340864);
PPC_FUNC_IMPL(__imp__sub_82340864) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,196(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// b 0x8234089c
	goto loc_8234089C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8234089C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343070
	ctx.lr = 0x823408A4;
	sub_82343070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82340884"))) PPC_WEAK_FUNC(sub_82340884);
PPC_FUNC_IMPL(__imp__sub_82340884) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343070
	ctx.lr = 0x823408A4;
	sub_82343070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823408BC"))) PPC_WEAK_FUNC(sub_823408BC);
PPC_FUNC_IMPL(__imp__sub_823408BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823408C0"))) PPC_WEAK_FUNC(sub_823408C0);
PPC_FUNC_IMPL(__imp__sub_823408C0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x823407b0
	sub_823407B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823408D4"))) PPC_WEAK_FUNC(sub_823408D4);
PPC_FUNC_IMPL(__imp__sub_823408D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823408D8"))) PPC_WEAK_FUNC(sub_823408D8);
PPC_FUNC_IMPL(__imp__sub_823408D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823408E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82340918
	if (!ctx.cr0.eq) goto loc_82340918;
	// bl 0x82342a98
	ctx.lr = 0x82340904;
	sub_82342A98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82340998
	goto loc_82340998;
loc_82340918:
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne cr6,0x82340938
	if (!ctx.cr6.eq) goto loc_82340938;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348d78
	ctx.lr = 0x82340930;
	sub_82348D78(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82340938:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348a80
	ctx.lr = 0x82340940;
	sub_82348A80(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82340958
	if (ctx.cr0.eq) goto loc_82340958;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82340978
	goto loc_82340978;
loc_82340958:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82340978
	if (ctx.cr0.eq) goto loc_82340978;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82340978
	if (ctx.cr0.eq) goto loc_82340978;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82340978
	if (!ctx.cr0.eq) goto loc_82340978;
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82340978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348750
	ctx.lr = 0x82340980;
	sub_82348750(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82348900
	ctx.lr = 0x8234098C;
	sub_82348900(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82340998:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823409A0"))) PPC_WEAK_FUNC(sub_823409A0);
PPC_FUNC_IMPL(__imp__sub_823409A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-30396(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30396);
	// lwz r16,-13224(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -13224);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823409B0;
	__savegprlr_28(ctx, base);
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823409ec
	if (!ctx.cr0.eq) goto loc_823409EC;
loc_823409D4:
	// bl 0x82342a98
	ctx.lr = 0x823409D8;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823409E4;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82340a34
	goto loc_82340A34;
loc_823409EC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82340a04
	if (ctx.cr6.eq) goto loc_82340A04;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82340a04
	if (ctx.cr6.eq) goto loc_82340A04;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x823409d4
	if (!ctx.cr6.eq) goto loc_823409D4;
loc_82340A04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342fb0
	ctx.lr = 0x82340A0C;
	sub_82342FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823408d8
	ctx.lr = 0x82340A20;
	sub_823408D8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82340a5c
	ctx.lr = 0x82340A30;
	sub_82340A5C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82340A34:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823409A8"))) PPC_WEAK_FUNC(sub_823409A8);
PPC_FUNC_IMPL(__imp__sub_823409A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823409B0;
	__savegprlr_28(ctx, base);
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823409ec
	if (!ctx.cr0.eq) goto loc_823409EC;
loc_823409D4:
	// bl 0x82342a98
	ctx.lr = 0x823409D8;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823409E4;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82340a34
	goto loc_82340A34;
loc_823409EC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82340a04
	if (ctx.cr6.eq) goto loc_82340A04;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82340a04
	if (ctx.cr6.eq) goto loc_82340A04;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x823409d4
	if (!ctx.cr6.eq) goto loc_823409D4;
loc_82340A04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342fb0
	ctx.lr = 0x82340A0C;
	sub_82342FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823408d8
	ctx.lr = 0x82340A20;
	sub_823408D8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82340a5c
	ctx.lr = 0x82340A30;
	sub_82340A5C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82340A34:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82340A3C"))) PPC_WEAK_FUNC(sub_82340A3C);
PPC_FUNC_IMPL(__imp__sub_82340A3C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// b 0x82340a74
	goto loc_82340A74;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82340A74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343070
	ctx.lr = 0x82340A7C;
	sub_82343070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82340A5C"))) PPC_WEAK_FUNC(sub_82340A5C);
PPC_FUNC_IMPL(__imp__sub_82340A5C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343070
	ctx.lr = 0x82340A7C;
	sub_82343070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82340A94"))) PPC_WEAK_FUNC(sub_82340A94);
PPC_FUNC_IMPL(__imp__sub_82340A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340A98"))) PPC_WEAK_FUNC(sub_82340A98);
PPC_FUNC_IMPL(__imp__sub_82340A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82340AA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82340adc
	if (ctx.cr6.eq) goto loc_82340ADC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82340adc
	if (ctx.cr6.eq) goto loc_82340ADC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82340ae8
	if (!ctx.cr6.eq) goto loc_82340AE8;
loc_82340ACC:
	// bl 0x82342a98
	ctx.lr = 0x82340AD0;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82340ADC;
	sub_82342BF0(ctx, base);
loc_82340ADC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82340AE0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_82340AE8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82340acc
	if (ctx.cr6.eq) goto loc_82340ACC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r25,0
	// divwu r11,r11,r25
	ctx.r11.u32 = ctx.r11.u32 / ctx.r25.u32;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82340acc
	if (ctx.cr6.gt) goto loc_82340ACC;
	// mullw r27,r25,r24
	ctx.r27.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x82342e38
	ctx.lr = 0x82340B10;
	sub_82342E38(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82340cb0
	if (ctx.cr6.eq) goto loc_82340CB0;
	// bl 0x82342e38
	ctx.lr = 0x82340B20;
	sub_82342E38(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82340cb0
	if (ctx.cr6.eq) goto loc_82340CB0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// andi. r11,r11,268
	ctx.r11.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82340b44
	if (ctx.cr0.eq) goto loc_82340B44;
	// lwz r26,24(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// b 0x82340b48
	goto loc_82340B48;
loc_82340B44:
	// li r26,4096
	ctx.r26.s64 = 4096;
loc_82340B48:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82340cf4
	if (ctx.cr6.eq) goto loc_82340CF4;
loc_82340B50:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// andi. r10,r11,264
	ctx.r10.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82340bb0
	if (ctx.cr0.eq) goto loc_82340BB0;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82340bb0
	if (ctx.cr6.eq) goto loc_82340BB0;
	// blt cr6,0x82340c8c
	if (ctx.cr6.lt) goto loc_82340C8C;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82340b7c
	if (!ctx.cr6.lt) goto loc_82340B7C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82340B7C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8233e4e0
	ctx.lr = 0x82340B8C;
	sub_8233E4E0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r31,r29,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r29.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82340c80
	goto loc_82340C80;
loc_82340BB0:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82340c4c
	if (ctx.cr6.lt) goto loc_82340C4C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82340bd0
	if (ctx.cr6.eq) goto loc_82340BD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82348a80
	ctx.lr = 0x82340BC8;
	sub_82348A80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82340ca4
	if (!ctx.cr0.eq) goto loc_82340CA4;
loc_82340BD0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82340bf0
	if (ctx.cr6.eq) goto loc_82340BF0;
	// divwu r11,r31,r26
	ctx.r11.u32 = ctx.r31.u32 / ctx.r26.u32;
	// twllei r26,0
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subf r29,r11,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x82340bf4
	goto loc_82340BF4;
loc_82340BF0:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82340BF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82348750
	ctx.lr = 0x82340BFC;
	sub_82348750(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x823491e0
	ctx.lr = 0x82340C08;
	sub_823491E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82340c30
	if (ctx.cr6.eq) goto loc_82340C30;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x82340c20
	if (ctx.cr6.gt) goto loc_82340C20;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82340C20:
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82340c80
	if (!ctx.cr6.lt) goto loc_82340C80;
loc_82340C30:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r10,r31,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r31.s64;
	// twllei r25,0
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// divwu r3,r10,r25
	ctx.r3.u32 = ctx.r10.u32 / ctx.r25.u32;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82340ae0
	goto loc_82340AE0;
loc_82340C4C:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823440c0
	ctx.lr = 0x82340C5C;
	sub_823440C0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82340ca4
	if (ctx.cr6.eq) goto loc_82340CA4;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// bgt cr6,0x82340c80
	if (ctx.cr6.gt) goto loc_82340C80;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82340C80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82340b50
	if (!ctx.cr6.eq) goto loc_82340B50;
	// b 0x82340cf4
	goto loc_82340CF4;
loc_82340C8C:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// subf r10,r31,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r31.s64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// divwu r3,r10,r25
	ctx.r3.u32 = ctx.r10.u32 / ctx.r25.u32;
loc_82340C9C:
	// twllei r25,0
	// b 0x82340ae0
	goto loc_82340AE0;
loc_82340CA4:
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// divwu r3,r11,r25
	ctx.r3.u32 = ctx.r11.u32 / ctx.r25.u32;
	// b 0x82340c9c
	goto loc_82340C9C;
loc_82340CB0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82340cf4
	if (ctx.cr6.eq) goto loc_82340CF4;
loc_82340CB8:
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// blt cr6,0x82340cc8
	if (ctx.cr6.lt) goto loc_82340CC8;
	// li r30,255
	ctx.r30.s64 = 255;
loc_82340CC8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e4e0
	ctx.lr = 0x82340CD8;
	sub_8233E4E0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x8237ac00
	ctx.lr = 0x82340CEC;
	sub_8237AC00(ctx, base);
	// subf. r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82340cb8
	if (!ctx.cr0.eq) goto loc_82340CB8;
loc_82340CF4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82340ae0
	goto loc_82340AE0;
}

__attribute__((alias("__imp__sub_82340CFC"))) PPC_WEAK_FUNC(sub_82340CFC);
PPC_FUNC_IMPL(__imp__sub_82340CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340D00"))) PPC_WEAK_FUNC(sub_82340D00);
PPC_FUNC_IMPL(__imp__sub_82340D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-30396(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30396);
	// lwz r16,-13200(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -13200);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82340D10;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82340d58
	if (ctx.cr6.eq) goto loc_82340D58;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82340d58
	if (ctx.cr6.eq) goto loc_82340D58;
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subfe. r11,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82340d64
	if (!ctx.cr0.eq) goto loc_82340D64;
	// bl 0x82342a98
	ctx.lr = 0x82340D4C;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82340D58;
	sub_82342BF0(ctx, base);
loc_82340D58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82340D5C:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82340D64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342fb0
	ctx.lr = 0x82340D6C;
	sub_82342FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82340a98
	ctx.lr = 0x82340D84;
	sub_82340A98(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82340dbc
	ctx.lr = 0x82340D94;
	sub_82340DBC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82340d5c
	goto loc_82340D5C;
}

__attribute__((alias("__imp__sub_82340D08"))) PPC_WEAK_FUNC(sub_82340D08);
PPC_FUNC_IMPL(__imp__sub_82340D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82340D10;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82340d58
	if (ctx.cr6.eq) goto loc_82340D58;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82340d58
	if (ctx.cr6.eq) goto loc_82340D58;
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subfe. r11,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82340d64
	if (!ctx.cr0.eq) goto loc_82340D64;
	// bl 0x82342a98
	ctx.lr = 0x82340D4C;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82340D58;
	sub_82342BF0(ctx, base);
loc_82340D58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82340D5C:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82340D64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342fb0
	ctx.lr = 0x82340D6C;
	sub_82342FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82340a98
	ctx.lr = 0x82340D84;
	sub_82340A98(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82340dbc
	ctx.lr = 0x82340D94;
	sub_82340DBC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82340d5c
	goto loc_82340D5C;
}

__attribute__((alias("__imp__sub_82340D9C"))) PPC_WEAK_FUNC(sub_82340D9C);
PPC_FUNC_IMPL(__imp__sub_82340D9C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,188(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// b 0x82340dd4
	goto loc_82340DD4;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82340DD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343070
	ctx.lr = 0x82340DDC;
	sub_82343070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82340DBC"))) PPC_WEAK_FUNC(sub_82340DBC);
PPC_FUNC_IMPL(__imp__sub_82340DBC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343070
	ctx.lr = 0x82340DDC;
	sub_82343070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82340DF4"))) PPC_WEAK_FUNC(sub_82340DF4);
PPC_FUNC_IMPL(__imp__sub_82340DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340DF8"))) PPC_WEAK_FUNC(sub_82340DF8);
PPC_FUNC_IMPL(__imp__sub_82340DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82340E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82340e2c
	if (!ctx.cr6.eq) goto loc_82340E2C;
	// bl 0x82342a98
	ctx.lr = 0x82340E18;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82340E24;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82340e8c
	goto loc_82340E8C;
loc_82340E2C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82340e84
	if (ctx.cr0.eq) goto loc_82340E84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348a80
	ctx.lr = 0x82340E48;
	sub_82348A80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823495a8
	ctx.lr = 0x82340E54;
	sub_823495A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348750
	ctx.lr = 0x82340E5C;
	sub_82348750(ctx, base);
	// bl 0x82349448
	ctx.lr = 0x82340E60;
	sub_82349448(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82340e70
	if (!ctx.cr0.lt) goto loc_82340E70;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x82340e84
	goto loc_82340E84;
loc_82340E70:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340e84
	if (ctx.cr6.eq) goto loc_82340E84;
	// bl 0x82341940
	ctx.lr = 0x82340E80;
	sub_82341940(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_82340E84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82340E8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82340E94"))) PPC_WEAK_FUNC(sub_82340E94);
PPC_FUNC_IMPL(__imp__sub_82340E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340E98"))) PPC_WEAK_FUNC(sub_82340E98);
PPC_FUNC_IMPL(__imp__sub_82340E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-30396(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30396);
	// lwz r16,-13176(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -13176);
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
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne 0x82340eec
	if (!ctx.cr0.eq) goto loc_82340EEC;
	// bl 0x82342a98
	ctx.lr = 0x82340ED8;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82340EE4;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82340f04
	goto loc_82340F04;
loc_82340EEC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82340f1c
	if (ctx.cr0.eq) goto loc_82340F1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82340F00:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82340F04:
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
loc_82340F1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342fb0
	ctx.lr = 0x82340F24;
	sub_82342FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82340df8
	ctx.lr = 0x82340F30;
	sub_82340DF8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82340f64
	ctx.lr = 0x82340F40;
	sub_82340F64(ctx, base);
	// b 0x82340f00
	goto loc_82340F00;
}

__attribute__((alias("__imp__sub_82340EA0"))) PPC_WEAK_FUNC(sub_82340EA0);
PPC_FUNC_IMPL(__imp__sub_82340EA0) {
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
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne 0x82340eec
	if (!ctx.cr0.eq) goto loc_82340EEC;
	// bl 0x82342a98
	ctx.lr = 0x82340ED8;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82340EE4;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82340f04
	goto loc_82340F04;
loc_82340EEC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82340f1c
	if (ctx.cr0.eq) goto loc_82340F1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82340F00:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82340F04:
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
loc_82340F1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342fb0
	ctx.lr = 0x82340F24;
	sub_82342FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82340df8
	ctx.lr = 0x82340F30;
	sub_82340DF8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82340f64
	ctx.lr = 0x82340F40;
	sub_82340F64(ctx, base);
	// b 0x82340f00
	goto loc_82340F00;
}

__attribute__((alias("__imp__sub_82340F44"))) PPC_WEAK_FUNC(sub_82340F44);
PPC_FUNC_IMPL(__imp__sub_82340F44) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x82340f7c
	goto loc_82340F7C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82340F7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343070
	ctx.lr = 0x82340F84;
	sub_82343070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82340F64"))) PPC_WEAK_FUNC(sub_82340F64);
PPC_FUNC_IMPL(__imp__sub_82340F64) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343070
	ctx.lr = 0x82340F84;
	sub_82343070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82340F9C"))) PPC_WEAK_FUNC(sub_82340F9C);
PPC_FUNC_IMPL(__imp__sub_82340F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340FA0"))) PPC_WEAK_FUNC(sub_82340FA0);
PPC_FUNC_IMPL(__imp__sub_82340FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82340FA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82349768
	ctx.lr = 0x82340FC0;
	sub_82349768(ctx, base);
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82340fd8
	if (ctx.cr6.lt) goto loc_82340FD8;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82340fe8
	if (ctx.cr6.gt) goto loc_82340FE8;
loc_82340FD8:
	// bl 0x82342bf0
	ctx.lr = 0x82340FDC;
	sub_82342BF0(ctx, base);
loc_82340FDC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82340FE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
loc_82340FE8:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82342208
	ctx.lr = 0x82340FF8;
	sub_82342208(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82340fdc
	if (!ctx.cr6.lt) goto loc_82340FDC;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82349760
	ctx.lr = 0x82341014;
	sub_82349760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82341050
	if (!ctx.cr0.eq) goto loc_82341050;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e318
	ctx.lr = 0x82341030;
	sub_8233E318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82340fe0
	if (ctx.cr0.eq) goto loc_82340FE0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82342cc8
	ctx.lr = 0x82341050;
	sub_82342CC8(ctx, base);
loc_82341050:
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
	// bl 0x82342cc8
	ctx.lr = 0x82341068;
	sub_82342CC8(ctx, base);
}

__attribute__((alias("__imp__sub_82341068"))) PPC_WEAK_FUNC(sub_82341068);
PPC_FUNC_IMPL(__imp__sub_82341068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-30396(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30396);
	// lwz r16,-13152(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -13152);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82341078;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// bne 0x823410b8
	if (!ctx.cr0.eq) goto loc_823410B8;
	// bl 0x82342a98
	ctx.lr = 0x823410A4;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823410B0;
	sub_82342BF0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82341304
	goto loc_82341304;
loc_823410B8:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82346f70
	ctx.lr = 0x823410C4;
	sub_82346F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823410d8
	if (!ctx.cr0.eq) goto loc_823410D8;
	// bl 0x82342a98
	ctx.lr = 0x823410D0;
	sub_82342A98(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82341304
	goto loc_82341304;
loc_823410D8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823470b0
	ctx.lr = 0x823410E0;
	sub_823470B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// addi r30,r11,23280
	ctx.r30.s64 = ctx.r11.s64 + 23280;
	// lbz r11,23280(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23280);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bne 0x823411dc
	if (!ctx.cr0.eq) goto loc_823411DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,4556
	ctx.r5.s64 = ctx.r11.s64 + 4556;
	// bl 0x8233e318
	ctx.lr = 0x8234110C;
	sub_8233E318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234112c
	if (ctx.cr0.eq) goto loc_8234112C;
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
	// bl 0x82342cc8
	ctx.lr = 0x8234112C;
	sub_82342CC8(ctx, base);
loc_8234112C:
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x8234115c
	if (ctx.cr6.eq) goto loc_8234115C;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x8234115c
	if (ctx.cr6.eq) goto loc_8234115C;
	// li r10,92
	ctx.r10.s64 = 92;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8234115C:
	// li r10,116
	ctx.r10.s64 = 116;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// subf r28,r29,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r29.s64;
	// bl 0x82247330
	ctx.lr = 0x82341178;
	sub_82247330(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82349760
	ctx.lr = 0x82341188;
	sub_82349760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823411a8
	if (ctx.cr0.eq) goto loc_823411A8;
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
	// bl 0x82342cc8
	ctx.lr = 0x823411A8;
	sub_82342CC8(ctx, base);
loc_823411A8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-16700
	ctx.r5.s64 = ctx.r11.s64 + -16700;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82342358
	ctx.lr = 0x823411BC;
	sub_82342358(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823411f0
	if (ctx.cr0.eq) goto loc_823411F0;
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
	// bl 0x82342cc8
	ctx.lr = 0x823411DC;
	sub_82342CC8(ctx, base);
loc_823411DC:
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// bl 0x82340fa0
	ctx.lr = 0x823411E8;
	sub_82340FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823412dc
	if (!ctx.cr0.eq) goto loc_823412DC;
loc_823411F0:
	// bl 0x8234a070
	ctx.lr = 0x823411F4;
	sub_8234A070(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// bne 0x8234120c
	if (!ctx.cr0.eq) goto loc_8234120C;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x823412e0
	goto loc_823412E0;
loc_8234120C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82342a98
	ctx.lr = 0x82341218;
	sub_82342A98(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82342a98
	ctx.lr = 0x82341220;
	sub_82342A98(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
loc_82341224:
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// ori r5,r5,34114
	ctx.r5.u64 = ctx.r5.u64 | 34114;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8234a048
	ctx.lr = 0x82341240;
	sub_8234A048(ctx, base);
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// bne cr6,0x8234126c
	if (!ctx.cr6.eq) goto loc_8234126C;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82340fa0
	ctx.lr = 0x8234125C;
	sub_82340FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8234126c
	if (!ctx.cr0.eq) goto loc_8234126C;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82341224
	goto loc_82341224;
loc_8234126C:
	// bl 0x82342a98
	ctx.lr = 0x82341270;
	sub_82342A98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82341284
	if (!ctx.cr6.eq) goto loc_82341284;
	// bl 0x82342a98
	ctx.lr = 0x82341280;
	sub_82342A98(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
loc_82341284:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823412e0
	if (ctx.cr6.eq) goto loc_823412E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82349908
	ctx.lr = 0x82341298;
	sub_82349908(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823412b0
	if (!ctx.cr0.eq) goto loc_823412B0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82349448
	ctx.lr = 0x823412AC;
	sub_82349448(ctx, base);
	// b 0x823412e0
	goto loc_823412E0;
loc_823412B0:
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// lwz r11,23748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// b 0x823412e0
	goto loc_823412E0;
loc_823412DC:
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_823412E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x8234132c
	ctx.lr = 0x823412EC;
	sub_8234132C(ctx, base);
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82341300
	if (ctx.cr6.eq) goto loc_82341300;
	// bl 0x82342a98
	ctx.lr = 0x823412FC;
	sub_82342A98(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82341300:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82341304:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82341070"))) PPC_WEAK_FUNC(sub_82341070);
PPC_FUNC_IMPL(__imp__sub_82341070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82341078;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// bne 0x823410b8
	if (!ctx.cr0.eq) goto loc_823410B8;
	// bl 0x82342a98
	ctx.lr = 0x823410A4;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823410B0;
	sub_82342BF0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82341304
	goto loc_82341304;
loc_823410B8:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82346f70
	ctx.lr = 0x823410C4;
	sub_82346F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823410d8
	if (!ctx.cr0.eq) goto loc_823410D8;
	// bl 0x82342a98
	ctx.lr = 0x823410D0;
	sub_82342A98(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82341304
	goto loc_82341304;
loc_823410D8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823470b0
	ctx.lr = 0x823410E0;
	sub_823470B0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// addi r30,r11,23280
	ctx.r30.s64 = ctx.r11.s64 + 23280;
	// lbz r11,23280(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23280);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bne 0x823411dc
	if (!ctx.cr0.eq) goto loc_823411DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,4556
	ctx.r5.s64 = ctx.r11.s64 + 4556;
	// bl 0x8233e318
	ctx.lr = 0x8234110C;
	sub_8233E318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234112c
	if (ctx.cr0.eq) goto loc_8234112C;
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
	// bl 0x82342cc8
	ctx.lr = 0x8234112C;
	sub_82342CC8(ctx, base);
loc_8234112C:
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x8234115c
	if (ctx.cr6.eq) goto loc_8234115C;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x8234115c
	if (ctx.cr6.eq) goto loc_8234115C;
	// li r10,92
	ctx.r10.s64 = 92;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8234115C:
	// li r10,116
	ctx.r10.s64 = 116;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// subf r28,r29,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r29.s64;
	// bl 0x82247330
	ctx.lr = 0x82341178;
	sub_82247330(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82349760
	ctx.lr = 0x82341188;
	sub_82349760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823411a8
	if (ctx.cr0.eq) goto loc_823411A8;
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
	// bl 0x82342cc8
	ctx.lr = 0x823411A8;
	sub_82342CC8(ctx, base);
loc_823411A8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-16700
	ctx.r5.s64 = ctx.r11.s64 + -16700;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82342358
	ctx.lr = 0x823411BC;
	sub_82342358(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823411f0
	if (ctx.cr0.eq) goto loc_823411F0;
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
	// bl 0x82342cc8
	ctx.lr = 0x823411DC;
	sub_82342CC8(ctx, base);
loc_823411DC:
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// bl 0x82340fa0
	ctx.lr = 0x823411E8;
	sub_82340FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823412dc
	if (!ctx.cr0.eq) goto loc_823412DC;
loc_823411F0:
	// bl 0x8234a070
	ctx.lr = 0x823411F4;
	sub_8234A070(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// bne 0x8234120c
	if (!ctx.cr0.eq) goto loc_8234120C;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x823412e0
	goto loc_823412E0;
loc_8234120C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82342a98
	ctx.lr = 0x82341218;
	sub_82342A98(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82342a98
	ctx.lr = 0x82341220;
	sub_82342A98(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
loc_82341224:
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// ori r5,r5,34114
	ctx.r5.u64 = ctx.r5.u64 | 34114;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8234a048
	ctx.lr = 0x82341240;
	sub_8234A048(ctx, base);
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// bne cr6,0x8234126c
	if (!ctx.cr6.eq) goto loc_8234126C;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82340fa0
	ctx.lr = 0x8234125C;
	sub_82340FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8234126c
	if (!ctx.cr0.eq) goto loc_8234126C;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82341224
	goto loc_82341224;
loc_8234126C:
	// bl 0x82342a98
	ctx.lr = 0x82341270;
	sub_82342A98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82341284
	if (!ctx.cr6.eq) goto loc_82341284;
	// bl 0x82342a98
	ctx.lr = 0x82341280;
	sub_82342A98(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
loc_82341284:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823412e0
	if (ctx.cr6.eq) goto loc_823412E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82349908
	ctx.lr = 0x82341298;
	sub_82349908(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823412b0
	if (!ctx.cr0.eq) goto loc_823412B0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82349448
	ctx.lr = 0x823412AC;
	sub_82349448(ctx, base);
	// b 0x823412e0
	goto loc_823412E0;
loc_823412B0:
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// lwz r11,23748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23748);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// b 0x823412e0
	goto loc_823412E0;
loc_823412DC:
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_823412E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x8234132c
	ctx.lr = 0x823412EC;
	sub_8234132C(ctx, base);
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82341300
	if (ctx.cr6.eq) goto loc_82341300;
	// bl 0x82342a98
	ctx.lr = 0x823412FC;
	sub_82342A98(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82341300:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82341304:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234130C"))) PPC_WEAK_FUNC(sub_8234130C);
PPC_FUNC_IMPL(__imp__sub_8234130C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x82341344
	goto loc_82341344;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82341344:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341358
	if (ctx.cr6.eq) goto loc_82341358;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82343070
	ctx.lr = 0x82341358;
	sub_82343070(ctx, base);
loc_82341358:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82346e30
	ctx.lr = 0x82341360;
	sub_82346E30(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234132C"))) PPC_WEAK_FUNC(sub_8234132C);
PPC_FUNC_IMPL(__imp__sub_8234132C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341358
	if (ctx.cr6.eq) goto loc_82341358;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82343070
	ctx.lr = 0x82341358;
	sub_82343070(ctx, base);
loc_82341358:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82346e30
	ctx.lr = 0x82341360;
	sub_82346E30(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82341378"))) PPC_WEAK_FUNC(sub_82341378);
PPC_FUNC_IMPL(__imp__sub_82341378) {
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
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82341070
	ctx.lr = 0x82341398;
	sub_82341070(ctx, base);
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
}

__attribute__((alias("__imp__sub_823413AC"))) PPC_WEAK_FUNC(sub_823413AC);
PPC_FUNC_IMPL(__imp__sub_823413AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823413B0"))) PPC_WEAK_FUNC(sub_823413B0);
PPC_FUNC_IMPL(__imp__sub_823413B0) {
	PPC_FUNC_PROLOGUE();
	// cntlzd r5,r3
	ctx.r5.u64 = ctx.r3.u64 == 0 ? 64 : __builtin_clzll(ctx.r3.u64);
	// sld r3,r3,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r3.u64 << (ctx.r5.u8 & 0x7F));
	// cmpdi r3,0
	ctx.cr0.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// beq 0x823413cc
	if (ctx.cr0.eq) goto loc_823413CC;
	// subfic r5,r5,1086
	ctx.xer.ca = ctx.r5.u32 <= 1086;
	ctx.r5.s64 = 1086 - ctx.r5.s64;
	// rldicl r3,r3,53,12
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 53) & 0xFFFFFFFFFFFFF;
	// rldimi r3,r5,52,1
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u64, 52) & 0x7FF0000000000000) | (ctx.r3.u64 & 0x800FFFFFFFFFFFFF);
loc_823413CC:
	// std r3,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// lfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823413D8"))) PPC_WEAK_FUNC(sub_823413D8);
PPC_FUNC_IMPL(__imp__sub_823413D8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823413DC"))) PPC_WEAK_FUNC(sub_823413DC);
PPC_FUNC_IMPL(__imp__sub_823413DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823413E0"))) PPC_WEAK_FUNC(sub_823413E0);
PPC_FUNC_IMPL(__imp__sub_823413E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// neg r12,r3
	ctx.r12.s64 = -ctx.r3.s64;
	// neg r11,r12
	ctx.r11.s64 = -ctx.r12.s64;
	// addi r0,r11,4095
	ctx.r0.s64 = ctx.r11.s64 + 4095;
	// srawi. r0,r0,12
	ctx.xer.ca = (ctx.r0.s32 < 0) & ((ctx.r0.u32 & 0xFFF) != 0);
	ctx.r0.s64 = ctx.r0.s32 >> 12;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r11,r1
	ctx.r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_823413FC:
	// lwzu r0,-4096(r11)
	ea = -4096 + ctx.r11.u32;
	ctx.r0.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x823413fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823413FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823413E4"))) PPC_WEAK_FUNC(sub_823413E4);
PPC_FUNC_IMPL(__imp__sub_823413E4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// neg r11,r12
	ctx.r11.s64 = -ctx.r12.s64;
	// addi r0,r11,4095
	ctx.r0.s64 = ctx.r11.s64 + 4095;
	// srawi. r0,r0,12
	ctx.xer.ca = (ctx.r0.s32 < 0) & ((ctx.r0.u32 & 0xFFF) != 0);
	ctx.r0.s64 = ctx.r0.s32 >> 12;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r11,r1
	ctx.r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_823413FC:
	// lwzu r0,-4096(r11)
	ea = -4096 + ctx.r11.u32;
	ctx.r0.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x823413fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823413FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82341408"))) PPC_WEAK_FUNC(sub_82341408);
PPC_FUNC_IMPL(__imp__sub_82341408) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234140C"))) PPC_WEAK_FUNC(sub_8234140C);
PPC_FUNC_IMPL(__imp__sub_8234140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82341410"))) PPC_WEAK_FUNC(sub_82341410);
PPC_FUNC_IMPL(__imp__sub_82341410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi r5,8
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt 0x82341468
	if (ctx.cr0.lt) goto loc_82341468;
	// li r0,7
	ctx.r0.s64 = 7;
	// rlwinm r7,r5,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// and r0,r5,r0
	ctx.r0.u64 = ctx.r5.u64 & ctx.r0.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// ld r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x8234143c
	goto loc_8234143C;
loc_82341434:
	// ldu r6,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// ldu r5,8(r3)
	ea = 8 + ctx.r3.u32;
	ctx.r5.u64 = PPC_LOAD_U64(ea);
	ctx.r3.u32 = ea;
loc_8234143C:
	// cmpd r5,r6
	ctx.cr0.compare<int64_t>(ctx.r5.s64, ctx.r6.s64, ctx.xer);
	// bdnzt eq,0x82341434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && ctx.cr0.eq) goto loc_82341434;
	// beq 0x8234145c
	if (ctx.cr0.eq) goto loc_8234145C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpld r5,r6
	ctx.cr0.compare<uint64_t>(ctx.r5.u64, ctx.r6.u64, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8234145C:
	// mr r5,r0
	ctx.r5.u64 = ctx.r0.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
loc_82341468:
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// beq 0x82341498
	if (ctx.cr0.eq) goto loc_82341498;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// b 0x82341488
	goto loc_82341488;
loc_82341480:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzu r5,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
loc_82341488:
	// cmpw r5,r6
	ctx.cr0.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bdnzt eq,0x82341480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && ctx.cr0.eq) goto loc_82341480;
	// subf r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	// blr 
	return;
loc_82341498:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823414A0"))) PPC_WEAK_FUNC(sub_823414A0);
PPC_FUNC_IMPL(__imp__sub_823414A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-30396(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30396);
	// lwz r16,-13128(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -13128);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823414B0;
	__savegprlr_29(ctx, base);
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
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bne 0x82341504
	if (!ctx.cr0.eq) goto loc_82341504;
loc_823414EC:
	// bl 0x82342a98
	ctx.lr = 0x823414F0;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823414FC;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82341630
	goto loc_82341630;
loc_82341504:
	// addic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfe. r11,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823414ec
	if (ctx.cr0.eq) goto loc_823414EC;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82342fb0
	ctx.lr = 0x82341528;
	sub_82342FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823415e8
	if (!ctx.cr0.eq) goto loc_823415E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82348750
	ctx.lr = 0x82341540;
	sub_82348750(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8234157c
	if (ctx.cr6.eq) goto loc_8234157C;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x8234157c
	if (ctx.cr6.eq) goto loc_8234157C;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-24640
	ctx.r11.s64 = ctx.r11.s64 + -24640;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r8,-17888
	ctx.r10.s64 = ctx.r8.s64 + -17888;
	// b 0x82341590
	goto loc_82341590;
loc_8234157C:
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r10,r10,-17888
	ctx.r10.s64 = ctx.r10.s64 + -17888;
	// addi r11,r11,-24640
	ctx.r11.s64 = ctx.r11.s64 + -24640;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82341590:
	// lbz r9,40(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// rlwinm. r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823415d0
	if (!ctx.cr0.eq) goto loc_823415D0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823415c4
	if (ctx.cr6.eq) goto loc_823415C4;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x823415c4
	if (ctx.cr6.eq) goto loc_823415C4;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823415C4:
	// lbz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823415e8
	if (ctx.cr0.eq) goto loc_823415E8;
loc_823415D0:
	// bl 0x82342a98
	ctx.lr = 0x823415D4;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823415E0;
	sub_82342BF0(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_823415E8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82341620
	if (!ctx.cr6.eq) goto loc_82341620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823430d8
	ctx.lr = 0x823415F8;
	sub_823430D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x82343398
	ctx.lr = 0x82341610;
	sub_82343398(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823431c8
	ctx.lr = 0x82341620;
	sub_823431C8(ctx, base);
loc_82341620:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82341638
	ctx.lr = 0x8234162C;
	sub_82341638(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82341630:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823414A8"))) PPC_WEAK_FUNC(sub_823414A8);
PPC_FUNC_IMPL(__imp__sub_823414A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823414B0;
	__savegprlr_29(ctx, base);
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
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bne 0x82341504
	if (!ctx.cr0.eq) goto loc_82341504;
loc_823414EC:
	// bl 0x82342a98
	ctx.lr = 0x823414F0;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823414FC;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82341630
	goto loc_82341630;
loc_82341504:
	// addic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfe. r11,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823414ec
	if (ctx.cr0.eq) goto loc_823414EC;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82342fb0
	ctx.lr = 0x82341528;
	sub_82342FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823415e8
	if (!ctx.cr0.eq) goto loc_823415E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82348750
	ctx.lr = 0x82341540;
	sub_82348750(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8234157c
	if (ctx.cr6.eq) goto loc_8234157C;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x8234157c
	if (ctx.cr6.eq) goto loc_8234157C;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-24640
	ctx.r11.s64 = ctx.r11.s64 + -24640;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r8,-17888
	ctx.r10.s64 = ctx.r8.s64 + -17888;
	// b 0x82341590
	goto loc_82341590;
loc_8234157C:
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r10,r10,-17888
	ctx.r10.s64 = ctx.r10.s64 + -17888;
	// addi r11,r11,-24640
	ctx.r11.s64 = ctx.r11.s64 + -24640;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82341590:
	// lbz r9,40(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// rlwinm. r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823415d0
	if (!ctx.cr0.eq) goto loc_823415D0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823415c4
	if (ctx.cr6.eq) goto loc_823415C4;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x823415c4
	if (ctx.cr6.eq) goto loc_823415C4;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823415C4:
	// lbz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823415e8
	if (ctx.cr0.eq) goto loc_823415E8;
loc_823415D0:
	// bl 0x82342a98
	ctx.lr = 0x823415D4;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823415E0;
	sub_82342BF0(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_823415E8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82341620
	if (!ctx.cr6.eq) goto loc_82341620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823430d8
	ctx.lr = 0x823415F8;
	sub_823430D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x82343398
	ctx.lr = 0x82341610;
	sub_82343398(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823431c8
	ctx.lr = 0x82341620;
	sub_823431C8(ctx, base);
loc_82341620:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82341638
	ctx.lr = 0x8234162C;
	sub_82341638(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82341630:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82341638"))) PPC_WEAK_FUNC(sub_82341638);
PPC_FUNC_IMPL(__imp__sub_82341638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82343070
	ctx.lr = 0x82341654;
	sub_82343070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82341668"))) PPC_WEAK_FUNC(sub_82341668);
PPC_FUNC_IMPL(__imp__sub_82341668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-30396(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30396);
	// lwz r16,-13104(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -13104);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82341678;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// bne 0x823416b8
	if (!ctx.cr0.eq) goto loc_823416B8;
loc_823416A0:
	// bl 0x82342a98
	ctx.lr = 0x823416A4;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823416B0;
	sub_82342BF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8234176c
	goto loc_8234176C;
loc_823416B8:
	// addic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// subfe. r11,r11,r29
	temp.u8 = (~ctx.r11.u32 + ctx.r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823416a0
	if (ctx.cr0.eq) goto loc_823416A0;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823416a0
	if (ctx.cr0.eq) goto loc_823416A0;
	// bl 0x8234a070
	ctx.lr = 0x823416D8;
	sub_8234A070(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bne 0x823416fc
	if (!ctx.cr0.eq) goto loc_823416FC;
	// bl 0x82342a98
	ctx.lr = 0x823416E8;
	sub_82342A98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8234176c
	goto loc_8234176C;
loc_823416FC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234173c
	if (!ctx.cr0.eq) goto loc_8234173C;
	// bl 0x82342a98
	ctx.lr = 0x82341714;
	sub_82342A98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r10,5992
	ctx.r4.s64 = ctx.r10.s64 + 5992;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bl 0x8233ec50
	ctx.lr = 0x82341734;
	sub_8233EC50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82341768
	goto loc_82341768;
loc_8234173C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234a558
	ctx.lr = 0x82341750;
	sub_8234A558(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82341794
	ctx.lr = 0x82341760;
	sub_82341794(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x8234176c
	goto loc_8234176C;
loc_82341768:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_8234176C:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82341670"))) PPC_WEAK_FUNC(sub_82341670);
PPC_FUNC_IMPL(__imp__sub_82341670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e460
	ctx.lr = 0x82341678;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// bne 0x823416b8
	if (!ctx.cr0.eq) goto loc_823416B8;
loc_823416A0:
	// bl 0x82342a98
	ctx.lr = 0x823416A4;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823416B0;
	sub_82342BF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8234176c
	goto loc_8234176C;
loc_823416B8:
	// addic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// subfe. r11,r11,r29
	temp.u8 = (~ctx.r11.u32 + ctx.r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823416a0
	if (ctx.cr0.eq) goto loc_823416A0;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823416a0
	if (ctx.cr0.eq) goto loc_823416A0;
	// bl 0x8234a070
	ctx.lr = 0x823416D8;
	sub_8234A070(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bne 0x823416fc
	if (!ctx.cr0.eq) goto loc_823416FC;
	// bl 0x82342a98
	ctx.lr = 0x823416E8;
	sub_82342A98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8234176c
	goto loc_8234176C;
loc_823416FC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234173c
	if (!ctx.cr0.eq) goto loc_8234173C;
	// bl 0x82342a98
	ctx.lr = 0x82341714;
	sub_82342A98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r10,5992
	ctx.r4.s64 = ctx.r10.s64 + 5992;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bl 0x8233ec50
	ctx.lr = 0x82341734;
	sub_8233EC50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82341768
	goto loc_82341768;
loc_8234173C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234a558
	ctx.lr = 0x82341750;
	sub_8234A558(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82341794
	ctx.lr = 0x82341760;
	sub_82341794(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x8234176c
	goto loc_8234176C;
loc_82341768:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_8234176C:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x8233e4b0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82341774"))) PPC_WEAK_FUNC(sub_82341774);
PPC_FUNC_IMPL(__imp__sub_82341774) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x823417ac
	goto loc_823417AC;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_823417AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82343070
	ctx.lr = 0x823417B4;
	sub_82343070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82341794"))) PPC_WEAK_FUNC(sub_82341794);
PPC_FUNC_IMPL(__imp__sub_82341794) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82343070
	ctx.lr = 0x823417B4;
	sub_82343070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823417CC"))) PPC_WEAK_FUNC(sub_823417CC);
PPC_FUNC_IMPL(__imp__sub_823417CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823417D0"))) PPC_WEAK_FUNC(sub_823417D0);
PPC_FUNC_IMPL(__imp__sub_823417D0) {
	PPC_FUNC_PROLOGUE();
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x82341670
	sub_82341670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823417D8"))) PPC_WEAK_FUNC(sub_823417D8);
PPC_FUNC_IMPL(__imp__sub_823417D8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823417DC"))) PPC_WEAK_FUNC(sub_823417DC);
PPC_FUNC_IMPL(__imp__sub_823417DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823417E0"))) PPC_WEAK_FUNC(sub_823417E0);
PPC_FUNC_IMPL(__imp__sub_823417E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82341804
	if (ctx.cr0.eq) goto loc_82341804;
loc_823417EC:
	// cmpwi cr1,r6,0
	ctx.cr1.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// cmpw r6,r4
	ctx.cr0.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// beq cr1,0x82341814
	if (ctx.cr1.eq) goto loc_82341814;
	// beq 0x82341818
	if (ctx.cr0.eq) goto loc_82341818;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x823417ec
	goto loc_823417EC;
loc_82341804:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82341818
	if (ctx.cr0.eq) goto loc_82341818;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x82341804
	goto loc_82341804;
loc_82341814:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82341818:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234181C"))) PPC_WEAK_FUNC(sub_8234181C);
PPC_FUNC_IMPL(__imp__sub_8234181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82341820"))) PPC_WEAK_FUNC(sub_82341820);
PPC_FUNC_IMPL(__imp__sub_82341820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_82341828:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpwi cr7,r6,0
	ctx.cr7.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// subf. r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr7,0x82341870
	if (ctx.cr7.eq) goto loc_82341870;
	// beq 0x82341828
	if (ctx.cr0.eq) goto loc_82341828;
	// cmpwi cr5,r6,65
	ctx.cr5.compare<int32_t>(ctx.r6.s32, 65, ctx.xer);
	// cmpwi cr6,r6,90
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 90, ctx.xer);
	// blt cr5,0x82341854
	if (ctx.cr5.lt) goto loc_82341854;
	// bgt cr6,0x82341854
	if (ctx.cr6.gt) goto loc_82341854;
	// ori r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 | 32;
loc_82341854:
	// cmpwi r5,65
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 65, ctx.xer);
	// cmpwi cr1,r5,90
	ctx.cr1.compare<int32_t>(ctx.r5.s32, 90, ctx.xer);
	// blt 0x82341868
	if (ctx.cr0.lt) goto loc_82341868;
	// bgt cr1,0x82341868
	if (ctx.cr1.gt) goto loc_82341868;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
loc_82341868:
	// subf. r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82341828
	if (ctx.cr0.eq) goto loc_82341828;
loc_82341870:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82341874"))) PPC_WEAK_FUNC(sub_82341874);
PPC_FUNC_IMPL(__imp__sub_82341874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82341878"))) PPC_WEAK_FUNC(sub_82341878);
PPC_FUNC_IMPL(__imp__sub_82341878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82341880;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234191c
	if (ctx.cr6.gt) goto loc_8234191C;
	// lis r28,-32183
	ctx.r28.s64 = -2109145088;
loc_82341898:
	// bl 0x822573d0
	ctx.lr = 0x8234189C;
	sub_822573D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823418b8
	if (!ctx.cr0.eq) goto loc_823418B8;
	// bl 0x823427e8
	ctx.lr = 0x823418A8;
	sub_823427E8(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x823427b8
	ctx.lr = 0x823418B0;
	sub_823427B8(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x8233ec78
	ctx.lr = 0x823418B8;
	sub_8233EC78(ctx, base);
loc_823418B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x823418c8
	if (!ctx.cr6.eq) goto loc_823418C8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_823418C8:
	// bl 0x822573d0
	ctx.lr = 0x823418CC;
	sub_822573D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82255f00
	ctx.lr = 0x823418D8;
	sub_82255F00(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82341914
	if (!ctx.cr0.eq) goto loc_82341914;
	// lwz r11,23752(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23752);
	// li r31,12
	ctx.r31.s64 = 12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341904
	if (ctx.cr6.eq) goto loc_82341904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823471f0
	ctx.lr = 0x823418F8;
	sub_823471F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82341898
	if (!ctx.cr0.eq) goto loc_82341898;
	// b 0x8234190c
	goto loc_8234190C;
loc_82341904:
	// bl 0x82342a98
	ctx.lr = 0x82341908;
	sub_82342A98(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_8234190C:
	// bl 0x82342a98
	ctx.lr = 0x82341910;
	sub_82342A98(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82341914:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82341938
	goto loc_82341938;
loc_8234191C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823471f0
	ctx.lr = 0x82341924;
	sub_823471F0(ctx, base);
	// bl 0x82342a98
	ctx.lr = 0x82341928;
	sub_82342A98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82341938:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82341940"))) PPC_WEAK_FUNC(sub_82341940);
PPC_FUNC_IMPL(__imp__sub_82341940) {
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
	// beq cr6,0x82341988
	if (ctx.cr6.eq) goto loc_82341988;
	// bl 0x822573d0
	ctx.lr = 0x82341960;
	sub_822573D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822567f8
	ctx.lr = 0x8234196C;
	sub_822567F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82341988
	if (!ctx.cr0.eq) goto loc_82341988;
	// bl 0x82342a98
	ctx.lr = 0x82341978;
	sub_82342A98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822471d0
	ctx.lr = 0x82341980;
	sub_822471D0(ctx, base);
	// bl 0x82342a28
	ctx.lr = 0x82341984;
	sub_82342A28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82341988:
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

__attribute__((alias("__imp__sub_8234199C"))) PPC_WEAK_FUNC(sub_8234199C);
PPC_FUNC_IMPL(__imp__sub_8234199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823419A0"))) PPC_WEAK_FUNC(sub_823419A0);
PPC_FUNC_IMPL(__imp__sub_823419A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x823419A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r24,r11,r4
	ctx.r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823419f4
	if (!ctx.cr6.eq) goto loc_823419F4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823419f4
	if (ctx.cr6.eq) goto loc_823419F4;
loc_823419D8:
	// bl 0x82342a98
	ctx.lr = 0x823419DC;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823419E8;
	sub_82342BF0(ctx, base);
loc_823419E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823419EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_823419F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823419d8
	if (ctx.cr6.eq) goto loc_823419D8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823419d8
	if (ctx.cr6.eq) goto loc_823419D8;
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x823419e8
	if (ctx.cr6.gt) goto loc_823419E8;
loc_82341A0C:
	// rlwinm. r28,r5,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82341a7c
	if (ctx.cr0.eq) goto loc_82341A7C;
	// clrlwi. r27,r5,31
	ctx.r27.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x82341a24
	if (!ctx.cr0.eq) goto loc_82341A24;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
loc_82341A24:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82341A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82341a74
	if (ctx.cr0.eq) goto loc_82341A74;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82341a60
	if (!ctx.cr6.lt) goto loc_82341A60;
	// subf r24,r30,r31
	ctx.r24.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82341a64
	if (!ctx.cr6.eq) goto loc_82341A64;
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// b 0x82341a68
	goto loc_82341A68;
loc_82341A60:
	// add r29,r31,r30
	ctx.r29.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_82341A64:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82341A68:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82341a0c
	if (!ctx.cr6.gt) goto loc_82341A0C;
	// b 0x823419e8
	goto loc_823419E8;
loc_82341A74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823419ec
	goto loc_823419EC;
loc_82341A7C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823419e8
	if (ctx.cr6.eq) goto loc_823419E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82341A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ctx.r29.u64;
	// b 0x823419ec
	goto loc_823419EC;
}

__attribute__((alias("__imp__sub_82341AA4"))) PPC_WEAK_FUNC(sub_82341AA4);
PPC_FUNC_IMPL(__imp__sub_82341AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82341AA8"))) PPC_WEAK_FUNC(sub_82341AA8);
PPC_FUNC_IMPL(__imp__sub_82341AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82341AB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x82341AE4;
	sub_8233EAF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82341b04
	if (!ctx.cr6.eq) goto loc_82341B04;
loc_82341AEC:
	// bl 0x82342a98
	ctx.lr = 0x82341AF0;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82341AFC;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82341bc0
	goto loc_82341BC0;
loc_82341B04:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82341b14
	if (ctx.cr6.eq) goto loc_82341B14;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82341aec
	if (ctx.cr6.eq) goto loc_82341AEC;
loc_82341B14:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x82341b2c
	if (ctx.cr6.gt) goto loc_82341B2C;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
loc_82341B2C:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x82341B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82341b68
	if (!ctx.cr6.eq) goto loc_82341B68;
loc_82341B60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82341bc0
	goto loc_82341BC0;
loc_82341B68:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82341ba0
	if (ctx.cr6.lt) goto loc_82341BA0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82341b8c
	if (ctx.cr0.lt) goto loc_82341B8C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// b 0x82341b60
	goto loc_82341B60;
loc_82341B8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823440c0
	ctx.lr = 0x82341B98;
	sub_823440C0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82341b60
	if (!ctx.cr6.eq) goto loc_82341B60;
loc_82341BA0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r31,r26
	ctx.r10.u64 = ctx.r31.u64 + ctx.r26.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stb r25,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r25.u8);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
loc_82341BC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82341BC8"))) PPC_WEAK_FUNC(sub_82341BC8);
PPC_FUNC_IMPL(__imp__sub_82341BC8) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82341bf4
	if (!ctx.cr6.eq) goto loc_82341BF4;
loc_82341BE8:
	// bl 0x82342a98
	ctx.lr = 0x82341BEC;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82341c40
	goto loc_82341C40;
loc_82341BF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82341be8
	if (ctx.cr6.eq) goto loc_82341BE8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82341be8
	if (ctx.cr6.eq) goto loc_82341BE8;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-22632
	ctx.r3.s64 = ctx.r11.s64 + -22632;
	// bl 0x82341aa8
	ctx.lr = 0x82341C20;
	sub_82341AA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82341c30
	if (!ctx.cr0.lt) goto loc_82341C30;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82341C30:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82341c4c
	if (!ctx.cr6.eq) goto loc_82341C4C;
	// bl 0x82342a98
	ctx.lr = 0x82341C3C;
	sub_82342A98(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
loc_82341C40:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82341C48;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82341C4C:
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

__attribute__((alias("__imp__sub_82341C60"))) PPC_WEAK_FUNC(sub_82341C60);
PPC_FUNC_IMPL(__imp__sub_82341C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e458
	ctx.lr = 0x82341C68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82341ca8
	if (!ctx.cr6.eq) goto loc_82341CA8;
loc_82341C8C:
	// bl 0x82342a98
	ctx.lr = 0x82341C90;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
loc_82341C94:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82341C9C;
	sub_82342BF0(ctx, base);
loc_82341C9C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82341CA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a8
	__restgprlr_24(ctx, base);
	return;
loc_82341CA8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82341cc8
	if (!ctx.cr6.eq) goto loc_82341CC8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82341cd0
	if (!ctx.cr6.eq) goto loc_82341CD0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82341c8c
	if (!ctx.cr6.eq) goto loc_82341C8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82341ca0
	goto loc_82341CA0;
loc_82341CC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82341c8c
	if (ctx.cr6.eq) goto loc_82341C8C;
loc_82341CD0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82341c8c
	if (ctx.cr6.eq) goto loc_82341C8C;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82341d30
	if (!ctx.cr6.gt) goto loc_82341D30;
	// bl 0x82342a98
	ctx.lr = 0x82341CE8;
	sub_82342A98(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r25,1
	ctx.r5.s64 = ctx.r25.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-22632
	ctx.r3.s64 = ctx.r11.s64 + -22632;
	// bl 0x82341aa8
	ctx.lr = 0x82341D0C;
	sub_82341AA8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82341d8c
	if (!ctx.cr6.eq) goto loc_82341D8C;
	// bl 0x82342a98
	ctx.lr = 0x82341D18;
	sub_82342A98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82341c9c
	if (!ctx.cr6.eq) goto loc_82341C9C;
	// bl 0x82342a98
	ctx.lr = 0x82341D28;
	sub_82342A98(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// b 0x82341c9c
	goto loc_82341C9C;
loc_82341D30:
	// bl 0x82342a98
	ctx.lr = 0x82341D34;
	sub_82342A98(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-22632
	ctx.r3.s64 = ctx.r11.s64 + -22632;
	// bl 0x82341aa8
	ctx.lr = 0x82341D58;
	sub_82341AA8(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// stb r24,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r24.u8);
	// bne cr6,0x82341d8c
	if (!ctx.cr6.eq) goto loc_82341D8C;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x82341d94
	if (!ctx.cr6.eq) goto loc_82341D94;
	// bl 0x82342a98
	ctx.lr = 0x82341D74;
	sub_82342A98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82341c9c
	if (!ctx.cr6.eq) goto loc_82341C9C;
	// bl 0x82342a98
	ctx.lr = 0x82341D84;
	sub_82342A98(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// b 0x82341c9c
	goto loc_82341C9C;
loc_82341D8C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82341ca0
	if (!ctx.cr6.lt) goto loc_82341CA0;
loc_82341D94:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// bne cr6,0x82341c9c
	if (!ctx.cr6.eq) goto loc_82341C9C;
	// bl 0x82342a98
	ctx.lr = 0x82341DA4;
	sub_82342A98(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x82341c94
	goto loc_82341C94;
}

__attribute__((alias("__imp__sub_82341DAC"))) PPC_WEAK_FUNC(sub_82341DAC);
PPC_FUNC_IMPL(__imp__sub_82341DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82341DB0"))) PPC_WEAK_FUNC(sub_82341DB0);
PPC_FUNC_IMPL(__imp__sub_82341DB0) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82341c60
	sub_82341C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82341DBC"))) PPC_WEAK_FUNC(sub_82341DBC);
PPC_FUNC_IMPL(__imp__sub_82341DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82341DC0"))) PPC_WEAK_FUNC(sub_82341DC0);
PPC_FUNC_IMPL(__imp__sub_82341DC0) {
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
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82341e00
	if (!ctx.cr6.eq) goto loc_82341E00;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82341e08
	if (!ctx.cr6.eq) goto loc_82341E08;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82341e10
	if (!ctx.cr6.eq) goto loc_82341E10;
loc_82341DE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82341DEC:
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
loc_82341E00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341e10
	if (ctx.cr6.eq) goto loc_82341E10;
loc_82341E08:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82341e28
	if (!ctx.cr6.eq) goto loc_82341E28;
loc_82341E10:
	// bl 0x82342a98
	ctx.lr = 0x82341E14;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82341E20;
	sub_82342BF0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341E28:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82341e44
	if (ctx.cr6.eq) goto loc_82341E44;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82341e44
	if (!ctx.cr6.eq) goto loc_82341E44;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x82341e10
	goto loc_82341E10;
loc_82341E44:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82341E4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82341e64
	if (ctx.cr0.eq) goto loc_82341E64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82341e4c
	if (!ctx.cr0.eq) goto loc_82341E4C;
loc_82341E64:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82341e8c
	if (!ctx.cr6.eq) goto loc_82341E8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x82342a98
	ctx.lr = 0x82341E78;
	sub_82342A98(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82341E7C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82341E84;
	sub_82342BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341E8C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82341ebc
	if (!ctx.cr6.eq) goto loc_82341EBC;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_82341E9C:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x82341ef8
	if (ctx.cr0.eq) goto loc_82341EF8;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82341e9c
	if (!ctx.cr0.eq) goto loc_82341E9C;
	// b 0x82341ef8
	goto loc_82341EF8;
loc_82341EBC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82341ef4
	if (ctx.cr6.eq) goto loc_82341EF4;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82341EC8:
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq 0x82341eec
	if (ctx.cr0.eq) goto loc_82341EEC;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82341eec
	if (ctx.cr0.eq) goto loc_82341EEC;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82341ec8
	if (!ctx.cr0.eq) goto loc_82341EC8;
loc_82341EEC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82341ef8
	if (!ctx.cr6.eq) goto loc_82341EF8;
loc_82341EF4:
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_82341EF8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82341de8
	if (!ctx.cr6.eq) goto loc_82341DE8;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82341f18
	if (!ctx.cr6.eq) goto loc_82341F18;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341F18:
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// bl 0x82342a98
	ctx.lr = 0x82341F20;
	sub_82342A98(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82341e7c
	goto loc_82341E7C;
}

__attribute__((alias("__imp__sub_82341F28"))) PPC_WEAK_FUNC(sub_82341F28);
PPC_FUNC_IMPL(__imp__sub_82341F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e454
	ctx.lr = 0x82341F30;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82341f50
	if (ctx.cr6.eq) goto loc_82341F50;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
loc_82341F50:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82341f6c
	if (!ctx.cr6.eq) goto loc_82341F6C;
loc_82341F58:
	// bl 0x82342a98
	ctx.lr = 0x82341F5C;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82341F68;
	sub_82342BF0(ctx, base);
	// b 0x823421f4
	goto loc_823421F4;
loc_82341F6C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82341f84
	if (ctx.cr6.eq) goto loc_82341F84;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x82341f58
	if (ctx.cr6.lt) goto loc_82341F58;
	// cmpwi cr6,r28,36
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 36, ctx.xer);
	// bgt cr6,0x82341f58
	if (ctx.cr6.gt) goto loc_82341F58;
loc_82341F84:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lbz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r25,1
	ctx.r29.s64 = ctx.r25.s64 + 1;
	// addi r30,r11,-18752
	ctx.r30.s64 = ctx.r11.s64 + -18752;
	// lwz r10,-18752(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18752);
loc_82341F9C:
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82341fc0
	if (!ctx.cr6.gt) goto loc_82341FC0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x82344350
	ctx.lr = 0x82341FB8;
	sub_82344350(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82341fd0
	goto loc_82341FD0;
loc_82341FC0:
	// lwz r11,200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// rlwinm r9,r31,1,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
loc_82341FD0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82341fe4
	if (ctx.cr6.eq) goto loc_82341FE4;
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82341f9c
	goto loc_82341F9C;
loc_82341FE4:
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82341ff8
	if (!ctx.cr6.eq) goto loc_82341FF8;
	// ori r24,r24,2
	ctx.r24.u64 = ctx.r24.u64 | 2;
	// b 0x82342000
	goto loc_82342000;
loc_82341FF8:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x82342008
	if (!ctx.cr6.eq) goto loc_82342008;
loc_82342000:
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82342008:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x823421e8
	if (ctx.cr6.lt) goto loc_823421E8;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x823421e8
	if (ctx.cr6.eq) goto loc_823421E8;
	// cmpwi cr6,r28,36
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 36, ctx.xer);
	// bgt cr6,0x823421e8
	if (ctx.cr6.gt) goto loc_823421E8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82342064
	if (!ctx.cr6.eq) goto loc_82342064;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x8234203c
	if (ctx.cr6.eq) goto loc_8234203C;
	// li r28,10
	ctx.r28.s64 = 10;
	// b 0x82342098
	goto loc_82342098;
loc_8234203C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x8234205c
	if (ctx.cr6.eq) goto loc_8234205C;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x8234205c
	if (ctx.cr6.eq) goto loc_8234205C;
	// li r28,8
	ctx.r28.s64 = 8;
	// b 0x82342098
	goto loc_82342098;
loc_8234205C:
	// li r28,16
	ctx.r28.s64 = 16;
	// b 0x8234206c
	goto loc_8234206C;
loc_82342064:
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// bne cr6,0x82342098
	if (!ctx.cr6.eq) goto loc_82342098;
loc_8234206C:
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x82342098
	if (!ctx.cr6.eq) goto loc_82342098;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82342090
	if (ctx.cr6.eq) goto loc_82342090;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82342098
	if (!ctx.cr6.eq) goto loc_82342098;
loc_82342090:
	// lbzu r31,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82342098:
	// li r27,-1
	ctx.r27.s64 = -1;
	// lwz r8,200(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// twllei r28,0
	// divwu r9,r27,r28
	ctx.r9.u32 = ctx.r27.u32 / ctx.r28.u32;
loc_823420A8:
	// rlwinm r11,r31,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823420c4
	if (ctx.cr0.eq) goto loc_823420C4;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x823420ec
	goto loc_823420EC;
loc_823420C4:
	// andi. r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 & 259;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234212c
	if (ctx.cr0.eq) goto loc_8234212C;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x823420e8
	if (ctx.cr6.lt) goto loc_823420E8;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x823420e8
	if (ctx.cr6.gt) goto loc_823420E8;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_823420E8:
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
loc_823420EC:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8234212c
	if (!ctx.cr6.lt) goto loc_8234212C;
	// ori r24,r24,8
	ctx.r24.u64 = ctx.r24.u64 | 8;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8234214c
	if (ctx.cr6.lt) goto loc_8234214C;
	// bne cr6,0x82342120
	if (!ctx.cr6.eq) goto loc_82342120;
	// divwu r7,r27,r28
	ctx.r7.u32 = ctx.r27.u32 / ctx.r28.u32;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mullw r7,r7,r28
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r28.s32);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// twllei r28,0
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8234214c
	if (!ctx.cr6.gt) goto loc_8234214C;
loc_82342120:
	// ori r24,r24,4
	ctx.r24.u64 = ctx.r24.u64 | 4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82342154
	if (!ctx.cr6.eq) goto loc_82342154;
loc_8234212C:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r29,-1
	ctx.r30.s64 = ctx.r29.s64 + -1;
	// bne 0x82342160
	if (!ctx.cr0.eq) goto loc_82342160;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82342144
	if (ctx.cr6.eq) goto loc_82342144;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82342144:
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x823421c8
	goto loc_823421C8;
loc_8234214C:
	// mullw r10,r26,r28
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82342154:
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x823420a8
	goto loc_823420A8;
loc_82342160:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// bne 0x8234219c
	if (!ctx.cr0.eq) goto loc_8234219C;
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823421c8
	if (!ctx.cr0.eq) goto loc_823421C8;
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234218c
	if (ctx.cr0.eq) goto loc_8234218C;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8234219c
	if (ctx.cr6.gt) goto loc_8234219C;
loc_8234218C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823421c8
	if (!ctx.cr6.eq) goto loc_823421C8;
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x823421c8
	if (!ctx.cr6.gt) goto loc_823421C8;
loc_8234219C:
	// bl 0x82342a98
	ctx.lr = 0x823421A0;
	sub_82342A98(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// clrlwi. r10,r24,31
	ctx.r10.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x823421b8
	if (ctx.cr0.eq) goto loc_823421B8;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x823421c8
	goto loc_823421C8;
loc_823421B8:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// bne 0x823421c8
	if (!ctx.cr0.eq) goto loc_823421C8;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_823421C8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823421d4
	if (ctx.cr6.eq) goto loc_823421D4;
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
loc_823421D4:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823421e0
	if (ctx.cr0.eq) goto loc_823421E0;
	// neg r26,r26
	ctx.r26.s64 = -ctx.r26.s64;
loc_823421E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x823421f8
	goto loc_823421F8;
loc_823421E8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823421f4
	if (ctx.cr6.eq) goto loc_823421F4;
	// stw r25,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r25.u32);
loc_823421F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823421F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4a4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82342200"))) PPC_WEAK_FUNC(sub_82342200);
PPC_FUNC_IMPL(__imp__sub_82342200) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82341f28
	sub_82341F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82342208"))) PPC_WEAK_FUNC(sub_82342208);
PPC_FUNC_IMPL(__imp__sub_82342208) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82341f28
	sub_82341F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82342210"))) PPC_WEAK_FUNC(sub_82342210);
PPC_FUNC_IMPL(__imp__sub_82342210) {
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
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82342254
	if (!ctx.cr6.eq) goto loc_82342254;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234225c
	if (!ctx.cr6.eq) goto loc_8234225C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82342264
	if (!ctx.cr6.eq) goto loc_82342264;
loc_8234223C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82342240:
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
loc_82342254:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342264
	if (ctx.cr6.eq) goto loc_82342264;
loc_8234225C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234227c
	if (!ctx.cr6.eq) goto loc_8234227C;
loc_82342264:
	// bl 0x82342a98
	ctx.lr = 0x82342268;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82342274;
	sub_82342BF0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82342240
	goto loc_82342240;
loc_8234227C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82342290
	if (!ctx.cr6.eq) goto loc_82342290;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x8234223c
	goto loc_8234223C;
loc_82342290:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823422b8
	if (!ctx.cr6.eq) goto loc_823422B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x82342a98
	ctx.lr = 0x823422A4;
	sub_82342A98(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_823422A8:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823422B0;
	sub_82342BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82342240
	goto loc_82342240;
loc_823422B8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x823422f0
	if (!ctx.cr6.eq) goto loc_823422F0;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_823422D0:
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x82342324
	if (ctx.cr0.eq) goto loc_82342324;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823422d0
	if (!ctx.cr0.eq) goto loc_823422D0;
	// b 0x82342324
	goto loc_82342324;
loc_823422F0:
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_823422F4:
	// lbzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq 0x82342318
	if (ctx.cr0.eq) goto loc_82342318;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82342318
	if (ctx.cr0.eq) goto loc_82342318;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x823422f4
	if (!ctx.cr0.eq) goto loc_823422F4;
loc_82342318:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82342324
	if (!ctx.cr6.eq) goto loc_82342324;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
loc_82342324:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8234223c
	if (!ctx.cr6.eq) goto loc_8234223C;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82342344
	if (!ctx.cr6.eq) goto loc_82342344;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// b 0x82342240
	goto loc_82342240;
loc_82342344:
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// bl 0x82342a98
	ctx.lr = 0x8234234C;
	sub_82342A98(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x823422a8
	goto loc_823422A8;
}

__attribute__((alias("__imp__sub_82342354"))) PPC_WEAK_FUNC(sub_82342354);
PPC_FUNC_IMPL(__imp__sub_82342354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342358"))) PPC_WEAK_FUNC(sub_82342358);
PPC_FUNC_IMPL(__imp__sub_82342358) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234237c
	if (ctx.cr6.eq) goto loc_8234237C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82342394
	if (!ctx.cr6.eq) goto loc_82342394;
loc_8234237C:
	// bl 0x82342a98
	ctx.lr = 0x82342380;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x8234238C;
	sub_82342BF0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8234242c
	goto loc_8234242C;
loc_82342394:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823423a8
	if (!ctx.cr6.eq) goto loc_823423A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x8234237c
	goto loc_8234237C;
loc_823423A8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823423AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823423c4
	if (ctx.cr0.eq) goto loc_823423C4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x823423ac
	if (!ctx.cr0.eq) goto loc_823423AC;
loc_823423C4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823423ec
	if (!ctx.cr6.eq) goto loc_823423EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x82342a98
	ctx.lr = 0x823423D8;
	sub_82342A98(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_823423DC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823423E4;
	sub_82342BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8234242c
	goto loc_8234242C;
loc_823423EC:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_823423F0:
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x8234240c
	if (ctx.cr0.eq) goto loc_8234240C;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823423f0
	if (!ctx.cr0.eq) goto loc_823423F0;
loc_8234240C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82342428
	if (!ctx.cr6.eq) goto loc_82342428;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x82342a98
	ctx.lr = 0x82342420;
	sub_82342A98(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x823423dc
	goto loc_823423DC;
loc_82342428:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234242C:
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

__attribute__((alias("__imp__sub_82342440"))) PPC_WEAK_FUNC(sub_82342440);
PPC_FUNC_IMPL(__imp__sub_82342440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8234244C:
	// cmpwi cr7,r6,0
	ctx.cr7.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// subf. r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr7,0x82342468
	if (ctx.cr7.eq) goto loc_82342468;
	// bne 0x82342468
	if (!ctx.cr0.eq) goto loc_82342468;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// b 0x8234244c
	goto loc_8234244C;
loc_82342468:
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bltlr 
	if (ctx.cr0.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234247C"))) PPC_WEAK_FUNC(sub_8234247C);
PPC_FUNC_IMPL(__imp__sub_8234247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342480"))) PPC_WEAK_FUNC(sub_82342480);
PPC_FUNC_IMPL(__imp__sub_82342480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// cmpwi cr1,r4,0
	ctx.cr1.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// andi. r8,r7,3
	ctx.r8.u64 = ctx.r7.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr1
	if (ctx.cr1.eq) return;
	// beq 0x823424b8
	if (ctx.cr0.eq) goto loc_823424B8;
loc_8234249C:
	// lbz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr1,r4,0
	ctx.cr1.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// andi. r8,r7,3
	ctx.r8.u64 = ctx.r7.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// beqlr cr1
	if (ctx.cr1.eq) return;
	// bne 0x8234249c
	if (!ctx.cr0.eq) goto loc_8234249C;
loc_823424B8:
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lis r6,32639
	ctx.r6.s64 = 2139029504;
	// ori r6,r6,32639
	ctx.r6.u64 = ctx.r6.u64 | 32639;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_823424C8:
	// and r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 & ctx.r6.u64;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// not. r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823424ec
	if (!ctx.cr0.eq) goto loc_823424EC;
	// lwzu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x823424c8
	goto loc_823424C8;
loc_823424EC:
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823424FC"))) PPC_WEAK_FUNC(sub_823424FC);
PPC_FUNC_IMPL(__imp__sub_823424FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342500"))) PPC_WEAK_FUNC(sub_82342500);
PPC_FUNC_IMPL(__imp__sub_82342500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82342520
	if (ctx.cr0.eq) goto loc_82342520;
loc_82342510:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// mr. r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82342510
	if (!ctx.cr0.eq) goto loc_82342510;
loc_82342520:
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82342528"))) PPC_WEAK_FUNC(sub_82342528);
PPC_FUNC_IMPL(__imp__sub_82342528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr1,r5,0
	ctx.cr1.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// beqlr cr1
	if (ctx.cr1.eq) return;
	// beq 0x82342550
	if (ctx.cr0.eq) goto loc_82342550;
loc_82342544:
	// lbzu r6,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82342544
	if (!ctx.cr0.eq) goto loc_82342544;
loc_82342550:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82342554:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// mr. r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82342554
	if (!ctx.cr0.eq) goto loc_82342554;
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234256C"))) PPC_WEAK_FUNC(sub_8234256C);
PPC_FUNC_IMPL(__imp__sub_8234256C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342570"))) PPC_WEAK_FUNC(sub_82342570);
PPC_FUNC_IMPL(__imp__sub_82342570) {
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
	// bne cr6,0x823425a0
	if (!ctx.cr6.eq) goto loc_823425A0;
loc_82342584:
	// bl 0x82342a98
	ctx.lr = 0x82342588;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82342594;
	sub_82342BF0(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x8234260c
	goto loc_8234260C;
loc_823425A0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82342584
	if (ctx.cr6.eq) goto loc_82342584;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_823425AC:
	// lhzx r11,r8,r4
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x823425c4
	if (ctx.cr6.lt) goto loc_823425C4;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// ble cr6,0x823425c8
	if (!ctx.cr6.gt) goto loc_823425C8;
loc_823425C4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823425C8:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x823425e4
	if (ctx.cr6.lt) goto loc_823425E4;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// ble cr6,0x823425e8
	if (!ctx.cr6.gt) goto loc_823425E8;
loc_823425E4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823425E8:
	// clrlwi. r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// beq 0x82342604
	if (ctx.cr0.eq) goto loc_82342604;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823425ac
	if (ctx.cr6.eq) goto loc_823425AC;
loc_82342604:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8234260C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234261C"))) PPC_WEAK_FUNC(sub_8234261C);
PPC_FUNC_IMPL(__imp__sub_8234261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342620"))) PPC_WEAK_FUNC(sub_82342620);
PPC_FUNC_IMPL(__imp__sub_82342620) {
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
	// bne cr6,0x82342660
	if (!ctx.cr6.eq) goto loc_82342660;
loc_8234263C:
	// bl 0x82342ad0
	ctx.lr = 0x82342640;
	sub_82342AD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342a98
	ctx.lr = 0x8234264C;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82342658;
	sub_82342BF0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x823426c0
	goto loc_823426C0;
loc_82342660:
	// rlwinm. r11,r31,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234263c
	if (!ctx.cr0.eq) goto loc_8234263C;
	// bl 0x82247430
	ctx.lr = 0x8234266C;
	sub_82247430(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82342688
	if (!ctx.cr6.eq) goto loc_82342688;
	// bl 0x822471d0
	ctx.lr = 0x82342678;
	sub_822471D0(ctx, base);
	// bl 0x82342b08
	ctx.lr = 0x8234267C;
	sub_82342B08(ctx, base);
loc_8234267C:
	// bl 0x82342a98
	ctx.lr = 0x82342680;
	sub_82342A98(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823426c0
	goto loc_823426C0;
loc_82342688:
	// rlwinm. r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823426bc
	if (!ctx.cr0.eq) goto loc_823426BC;
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823426bc
	if (ctx.cr0.eq) goto loc_823426BC;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823426bc
	if (ctx.cr0.eq) goto loc_823426BC;
	// bl 0x82342ad0
	ctx.lr = 0x823426A4;
	sub_82342AD0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342a98
	ctx.lr = 0x823426B0;
	sub_82342A98(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8234267c
	goto loc_8234267C;
loc_823426BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823426C0:
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

__attribute__((alias("__imp__sub_823426D4"))) PPC_WEAK_FUNC(sub_823426D4);
PPC_FUNC_IMPL(__imp__sub_823426D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823426D8"))) PPC_WEAK_FUNC(sub_823426D8);
PPC_FUNC_IMPL(__imp__sub_823426D8) {
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
	// bl 0x82342620
	ctx.lr = 0x823426E8;
	sub_82342620(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82342700"))) PPC_WEAK_FUNC(sub_82342700);
PPC_FUNC_IMPL(__imp__sub_82342700) {
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
	// bl 0x8234b2e0
	ctx.lr = 0x82342710;
	sub_8234B2E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82342720
	if (ctx.cr0.eq) goto loc_82342720;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8234b2f8
	ctx.lr = 0x82342720;
	sub_8234B2F8(ctx, base);
loc_82342720:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lwz r11,-20400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20400);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82342744
	if (ctx.cr0.eq) goto loc_82342744;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82342c28
	ctx.lr = 0x82342744;
	sub_82342C28(ctx, base);
loc_82342744:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8233eef8
	ctx.lr = 0x8234274C;
	sub_8233EEF8(ctx, base);
}

__attribute__((alias("__imp__sub_8234274C"))) PPC_WEAK_FUNC(sub_8234274C);
PPC_FUNC_IMPL(__imp__sub_8234274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342750"))) PPC_WEAK_FUNC(sub_82342750);
PPC_FUNC_IMPL(__imp__sub_82342750) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// lwz r3,-20400(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20400);
	// andc r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,-20400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234276C"))) PPC_WEAK_FUNC(sub_8234276C);
PPC_FUNC_IMPL(__imp__sub_8234276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342770"))) PPC_WEAK_FUNC(sub_82342770);
PPC_FUNC_IMPL(__imp__sub_82342770) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,6640
	ctx.r9.s64 = ctx.r10.s64 + 6640;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82342780:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823427a4
	if (ctx.cr6.eq) goto loc_823427A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// blt cr6,0x82342780
	if (ctx.cr6.lt) goto loc_82342780;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823427A4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823427B4"))) PPC_WEAK_FUNC(sub_823427B4);
PPC_FUNC_IMPL(__imp__sub_823427B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823427B8"))) PPC_WEAK_FUNC(sub_823427B8);
PPC_FUNC_IMPL(__imp__sub_823427B8) {
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
	// bl 0x82342770
	ctx.lr = 0x823427C8;
	sub_82342770(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823427d4
	if (ctx.cr0.eq) goto loc_823427D4;
	// bl 0x8237b3c8
	ctx.lr = 0x823427D4;
	sub_8237B3C8(ctx, base);
loc_823427D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823427E4"))) PPC_WEAK_FUNC(sub_823427E4);
PPC_FUNC_IMPL(__imp__sub_823427E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823427E8"))) PPC_WEAK_FUNC(sub_823427E8);
PPC_FUNC_IMPL(__imp__sub_823427E8) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82342770
	ctx.lr = 0x823427FC;
	sub_82342770(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82342808
	if (ctx.cr0.eq) goto loc_82342808;
	// bl 0x8237b3c8
	ctx.lr = 0x82342808;
	sub_8237B3C8(ctx, base);
loc_82342808:
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82342770
	ctx.lr = 0x82342810;
	sub_82342770(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234281c
	if (ctx.cr0.eq) goto loc_8234281C;
	// bl 0x8237b3c8
	ctx.lr = 0x8234281C;
	sub_8237B3C8(ctx, base);
loc_8234281C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234282C"))) PPC_WEAK_FUNC(sub_8234282C);
PPC_FUNC_IMPL(__imp__sub_8234282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342830"))) PPC_WEAK_FUNC(sub_82342830);
PPC_FUNC_IMPL(__imp__sub_82342830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// stw r3,23320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23320, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234283C"))) PPC_WEAK_FUNC(sub_8234283C);
PPC_FUNC_IMPL(__imp__sub_8234283C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342840"))) PPC_WEAK_FUNC(sub_82342840);
PPC_FUNC_IMPL(__imp__sub_82342840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82342848;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8233efd0
	ctx.lr = 0x82342858;
	sub_8233EFD0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82342868
	if (!ctx.cr0.eq) goto loc_82342868;
loc_82342860:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82342a1c
	goto loc_82342A1C;
loc_82342868:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82342870:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8234288c
	if (ctx.cr6.eq) goto loc_8234288C;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r10,144
	ctx.r9.s64 = ctx.r10.s64 + 144;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82342870
	if (ctx.cr6.lt) goto loc_82342870;
loc_8234288C:
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823428a8
	if (!ctx.cr6.lt) goto loc_823428A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823428ac
	if (ctx.cr6.eq) goto loc_823428AC;
loc_823428A8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_823428AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342860
	if (ctx.cr6.eq) goto loc_82342860;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82342860
	if (ctx.cr6.eq) goto loc_82342860;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bne cr6,0x823428d4
	if (!ctx.cr6.eq) goto loc_823428D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// b 0x82342a1c
	goto loc_82342A1C;
loc_823428D4:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x82342a18
	if (ctx.cr6.eq) goto loc_82342A18;
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x82342a08
	if (!ctx.cr6.eq) goto loc_82342A08;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r10,36
	ctx.r10.s64 = 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823428FC:
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// bdnz 0x823428fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823428FC;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// ori r10,r10,142
	ctx.r10.u64 = ctx.r10.u64 | 142;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82342930
	if (!ctx.cr6.eq) goto loc_82342930;
	// li r11,131
	ctx.r11.s64 = 131;
	// b 0x823429ec
	goto loc_823429EC;
loc_82342930:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,144
	ctx.r10.u64 = ctx.r10.u64 | 144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82342948
	if (!ctx.cr6.eq) goto loc_82342948;
	// li r11,129
	ctx.r11.s64 = 129;
	// b 0x823429ec
	goto loc_823429EC;
loc_82342948:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,145
	ctx.r10.u64 = ctx.r10.u64 | 145;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82342960
	if (!ctx.cr6.eq) goto loc_82342960;
	// li r11,132
	ctx.r11.s64 = 132;
	// b 0x823429ec
	goto loc_823429EC;
loc_82342960:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,147
	ctx.r10.u64 = ctx.r10.u64 | 147;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82342978
	if (!ctx.cr6.eq) goto loc_82342978;
	// li r11,133
	ctx.r11.s64 = 133;
	// b 0x823429ec
	goto loc_823429EC;
loc_82342978:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,141
	ctx.r10.u64 = ctx.r10.u64 | 141;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82342990
	if (!ctx.cr6.eq) goto loc_82342990;
	// li r11,130
	ctx.r11.s64 = 130;
	// b 0x823429ec
	goto loc_823429EC;
loc_82342990:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,143
	ctx.r10.u64 = ctx.r10.u64 | 143;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823429a8
	if (!ctx.cr6.eq) goto loc_823429A8;
	// li r11,134
	ctx.r11.s64 = 134;
	// b 0x823429ec
	goto loc_823429EC;
loc_823429A8:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,146
	ctx.r10.u64 = ctx.r10.u64 | 146;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823429c0
	if (!ctx.cr6.eq) goto loc_823429C0;
	// li r11,138
	ctx.r11.s64 = 138;
	// b 0x823429ec
	goto loc_823429EC;
loc_823429C0:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,693
	ctx.r10.u64 = ctx.r10.u64 | 693;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823429d8
	if (!ctx.cr6.eq) goto loc_823429D8;
	// li r11,141
	ctx.r11.s64 = 141;
	// b 0x823429ec
	goto loc_823429EC;
loc_823429D8:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,692
	ctx.r10.u64 = ctx.r10.u64 | 692;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823429f0
	if (!ctx.cr6.eq) goto loc_823429F0;
	// li r11,142
	ctx.r11.s64 = 142;
loc_823429EC:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_823429F0:
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82342A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// b 0x82342a14
	goto loc_82342A14;
loc_82342A08:
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82342A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82342A14:
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
loc_82342A18:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82342A1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82342A24"))) PPC_WEAK_FUNC(sub_82342A24);
PPC_FUNC_IMPL(__imp__sub_82342A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342A28"))) PPC_WEAK_FUNC(sub_82342A28);
PPC_FUNC_IMPL(__imp__sub_82342A28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-20392
	ctx.r9.s64 = ctx.r10.s64 + -20392;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82342A38:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82342a6c
	if (ctx.cr6.eq) goto loc_82342A6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// blt cr6,0x82342a38
	if (ctx.cr6.lt) goto loc_82342A38;
	// cmplwi cr6,r3,19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 19, ctx.xer);
	// blt cr6,0x82342a7c
	if (ctx.cr6.lt) goto loc_82342A7C;
	// cmplwi cr6,r3,36
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 36, ctx.xer);
	// bgt cr6,0x82342a7c
	if (ctx.cr6.gt) goto loc_82342A7C;
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_82342A6C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82342A7C:
	// cmplwi cr6,r3,188
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 188, ctx.xer);
	// blt cr6,0x82342a90
	if (ctx.cr6.lt) goto loc_82342A90;
	// cmplwi cr6,r3,202
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 202, ctx.xer);
	// li r3,8
	ctx.r3.s64 = 8;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82342A90:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82342A98"))) PPC_WEAK_FUNC(sub_82342A98);
PPC_FUNC_IMPL(__imp__sub_82342A98) {
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
	// bl 0x8233efd0
	ctx.lr = 0x82342AA8;
	sub_8233EFD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82342abc
	if (!ctx.cr0.eq) goto loc_82342ABC;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r3,r11,-20032
	ctx.r3.s64 = ctx.r11.s64 + -20032;
	// b 0x82342ac0
	goto loc_82342AC0;
loc_82342ABC:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
loc_82342AC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82342AD0"))) PPC_WEAK_FUNC(sub_82342AD0);
PPC_FUNC_IMPL(__imp__sub_82342AD0) {
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
	// bl 0x8233efd0
	ctx.lr = 0x82342AE0;
	sub_8233EFD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82342af4
	if (!ctx.cr0.eq) goto loc_82342AF4;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r3,r11,-20028
	ctx.r3.s64 = ctx.r11.s64 + -20028;
	// b 0x82342af8
	goto loc_82342AF8;
loc_82342AF4:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
loc_82342AF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82342B08"))) PPC_WEAK_FUNC(sub_82342B08);
PPC_FUNC_IMPL(__imp__sub_82342B08) {
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
	// bl 0x8233efd0
	ctx.lr = 0x82342B24;
	sub_8233EFD0(ctx, base);
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-20032
	ctx.r31.s64 = ctx.r11.s64 + -20032;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// beq 0x82342b3c
	if (ctx.cr0.eq) goto loc_82342B3C;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_82342B3C:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8233efd0
	ctx.lr = 0x82342B44;
	sub_8233EFD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// beq 0x82342b54
	if (ctx.cr0.eq) goto loc_82342B54;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82342B54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342a28
	ctx.lr = 0x82342B5C;
	sub_82342A28(ctx, base);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82342B78"))) PPC_WEAK_FUNC(sub_82342B78);
PPC_FUNC_IMPL(__imp__sub_82342B78) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8234b5e0
	ctx.lr = 0x82342B98;
	sub_8234B5E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82342bc4
	if (!ctx.cr0.eq) goto loc_82342BC4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82342bc4
	if (ctx.cr6.eq) goto loc_82342BC4;
	// bl 0x82342a98
	ctx.lr = 0x82342BB0;
	sub_82342A98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82342bc4
	if (ctx.cr0.eq) goto loc_82342BC4;
	// bl 0x82342a98
	ctx.lr = 0x82342BBC;
	sub_82342A98(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82342BC4:
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

__attribute__((alias("__imp__sub_82342BDC"))) PPC_WEAK_FUNC(sub_82342BDC);
PPC_FUNC_IMPL(__imp__sub_82342BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342BE0"))) PPC_WEAK_FUNC(sub_82342BE0);
PPC_FUNC_IMPL(__imp__sub_82342BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// stw r3,23324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23324, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82342BEC"))) PPC_WEAK_FUNC(sub_82342BEC);
PPC_FUNC_IMPL(__imp__sub_82342BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342BF0"))) PPC_WEAK_FUNC(sub_82342BF0);
PPC_FUNC_IMPL(__imp__sub_82342BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// lwz r11,23324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23324);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82342c1c
	if (ctx.cr0.eq) goto loc_82342C1C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82342C1C:
	// twi 31,r0,22
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82342C24"))) PPC_WEAK_FUNC(sub_82342C24);
PPC_FUNC_IMPL(__imp__sub_82342C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342C28"))) PPC_WEAK_FUNC(sub_82342C28);
PPC_FUNC_IMPL(__imp__sub_82342C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x82342C30;
	__savegprlr_29(ctx, base);
	// stwu r1,-2832(r1)
	ea = -2832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82342c4c
	if (ctx.cr6.eq) goto loc_82342C4C;
	// bl 0x8234b6a8
	ctx.lr = 0x82342C4C;
	sub_8234B6A8(ctx, base);
loc_82342C4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8233eaf0
	ctx.lr = 0x82342C64;
	sub_8233EAF0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8233eaf0
	ctx.lr = 0x82342C84;
	sub_8233EAF0(ctx, base);
	// lwz r11,2824(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2824);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82247078
	ctx.lr = 0x82342C9C;
	sub_82247078(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82247140
	ctx.lr = 0x82342CA4;
	sub_82247140(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82342cbc
	if (!ctx.cr0.eq) goto loc_82342CBC;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82342cbc
	if (ctx.cr6.eq) goto loc_82342CBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b6a8
	ctx.lr = 0x82342CBC;
	sub_8234B6A8(ctx, base);
loc_82342CBC:
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82342CC4"))) PPC_WEAK_FUNC(sub_82342CC4);
PPC_FUNC_IMPL(__imp__sub_82342CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342CC8"))) PPC_WEAK_FUNC(sub_82342CC8);
PPC_FUNC_IMPL(__imp__sub_82342CC8) {
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
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,1047
	ctx.r4.u64 = ctx.r4.u64 | 1047;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82342c28
	ctx.lr = 0x82342CE8;
	sub_82342C28(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82388e14
	ctx.lr = 0x82342CF0;
	__imp__KeBugCheck(ctx, base);
}

__attribute__((alias("__imp__sub_82342CF0"))) PPC_WEAK_FUNC(sub_82342CF0);
PPC_FUNC_IMPL(__imp__sub_82342CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x82342CF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82342d18
	if (!ctx.cr6.eq) goto loc_82342D18;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82341878
	ctx.lr = 0x82342D14;
	sub_82341878(ctx, base);
	// b 0x82342da4
	goto loc_82342DA4;
loc_82342D18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82342d2c
	if (!ctx.cr6.eq) goto loc_82342D2C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82341940
	ctx.lr = 0x82342D28;
	sub_82341940(ctx, base);
	// b 0x82342da0
	goto loc_82342DA0;
loc_82342D2C:
	// li r29,-4096
	ctx.r29.s64 = -4096;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82342d88
	if (ctx.cr6.gt) goto loc_82342D88;
	// lis r27,-32183
	ctx.r27.s64 = -2109145088;
loc_82342D3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82342d48
	if (!ctx.cr6.eq) goto loc_82342D48;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82342D48:
	// bl 0x822573d0
	ctx.lr = 0x82342D4C;
	sub_822573D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82256af0
	ctx.lr = 0x82342D5C;
	sub_82256AF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82342dd8
	if (!ctx.cr0.eq) goto loc_82342DD8;
	// lwz r11,23752(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23752);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82342dc4
	if (ctx.cr6.eq) goto loc_82342DC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823471f0
	ctx.lr = 0x82342D78;
	sub_823471F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82342dac
	if (ctx.cr0.eq) goto loc_82342DAC;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82342d3c
	if (!ctx.cr6.gt) goto loc_82342D3C;
loc_82342D88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823471f0
	ctx.lr = 0x82342D90;
	sub_823471F0(ctx, base);
	// bl 0x82342a98
	ctx.lr = 0x82342D94;
	sub_82342A98(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82342DA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82342DA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
loc_82342DAC:
	// bl 0x82342a98
	ctx.lr = 0x82342DB0;
	sub_82342A98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822471d0
	ctx.lr = 0x82342DB8;
	sub_822471D0(ctx, base);
	// bl 0x82342a28
	ctx.lr = 0x82342DBC;
	sub_82342A28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82342da0
	goto loc_82342DA0;
loc_82342DC4:
	// bl 0x82342a98
	ctx.lr = 0x82342DC8;
	sub_82342A98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822471d0
	ctx.lr = 0x82342DD0;
	sub_822471D0(ctx, base);
	// bl 0x82342a28
	ctx.lr = 0x82342DD4;
	sub_82342A28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82342DD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82342da4
	goto loc_82342DA4;
}

__attribute__((alias("__imp__sub_82342DE0"))) PPC_WEAK_FUNC(sub_82342DE0);
PPC_FUNC_IMPL(__imp__sub_82342DE0) {
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
	// bne cr6,0x82342e14
	if (!ctx.cr6.eq) goto loc_82342E14;
	// bl 0x82342a98
	ctx.lr = 0x82342E00;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82342E0C;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82342e24
	goto loc_82342E24;
loc_82342E14:
	// bl 0x822573d0
	ctx.lr = 0x82342E18;
	sub_822573D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82255178
	ctx.lr = 0x82342E24;
	sub_82255178(ctx, base);
loc_82342E24:
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

__attribute__((alias("__imp__sub_82342E38"))) PPC_WEAK_FUNC(sub_82342E38);
PPC_FUNC_IMPL(__imp__sub_82342E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r3,r11,-20024
	ctx.r3.s64 = ctx.r11.s64 + -20024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82342E44"))) PPC_WEAK_FUNC(sub_82342E44);
PPC_FUNC_IMPL(__imp__sub_82342E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342E48"))) PPC_WEAK_FUNC(sub_82342E48);
PPC_FUNC_IMPL(__imp__sub_82342E48) {
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
	// lis r31,-32170
	ctx.r31.s64 = -2108293120;
	// lwz r3,-24380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24380);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82342e74
	if (!ctx.cr6.eq) goto loc_82342E74;
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x82342e80
	goto loc_82342E80;
loc_82342E74:
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x82342e84
	if (!ctx.cr6.lt) goto loc_82342E84;
	// li r3,20
	ctx.r3.s64 = 20;
loc_82342E80:
	// stw r3,-24380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24380, ctx.r3.u32);
loc_82342E84:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82342b78
	ctx.lr = 0x82342E8C;
	sub_82342B78(ctx, base);
	// lis r30,-32170
	ctx.r30.s64 = -2108293120;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-24384(r30)
	PPC_STORE_U32(ctx.r30.u32 + -24384, ctx.r3.u32);
	// bne 0x82342ec4
	if (!ctx.cr0.eq) goto loc_82342EC4;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,-24380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24380, ctx.r11.u32);
	// bl 0x82342b78
	ctx.lr = 0x82342EB0;
	sub_82342B78(ctx, base);
	// stw r3,-24384(r30)
	PPC_STORE_U32(ctx.r30.u32 + -24384, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82342ec4
	if (!ctx.cr0.eq) goto loc_82342EC4;
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x82342f54
	goto loc_82342F54;
loc_82342EC4:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r8,r11,-20024
	ctx.r8.s64 = ctx.r11.s64 + -20024;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x82342ee4
	goto loc_82342EE4;
loc_82342EE0:
	// lwz r3,-24384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24384);
loc_82342EE4:
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82342ee0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82342EE0;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r8,16
	ctx.r9.s64 = ctx.r8.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r8,r10,-24640
	ctx.r8.s64 = ctx.r10.s64 + -24640;
loc_82342F0C:
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r7,r7,72
	ctx.r7.s64 = ctx.r7.s64 * 72;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82342f3c
	if (ctx.cr6.eq) goto loc_82342F3C;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beq cr6,0x82342f3c
	if (ctx.cr6.eq) goto loc_82342F3C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82342f44
	if (!ctx.cr6.eq) goto loc_82342F44;
loc_82342F3C:
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82342F44:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bdnz 0x82342f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82342F0C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82342F54:
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

__attribute__((alias("__imp__sub_82342F6C"))) PPC_WEAK_FUNC(sub_82342F6C);
PPC_FUNC_IMPL(__imp__sub_82342F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342F70"))) PPC_WEAK_FUNC(sub_82342F70);
PPC_FUNC_IMPL(__imp__sub_82342F70) {
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
	// bl 0x82348d70
	ctx.lr = 0x82342F80;
	sub_82348D70(ctx, base);
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// lbz r11,23240(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23240);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82342f94
	if (ctx.cr0.eq) goto loc_82342F94;
	// bl 0x8234b6c0
	ctx.lr = 0x82342F94;
	sub_8234B6C0(ctx, base);
loc_82342F94:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r3,-24384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24384);
	// bl 0x82341940
	ctx.lr = 0x82342FA0;
	sub_82341940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82342FB0"))) PPC_WEAK_FUNC(sub_82342FB0);
PPC_FUNC_IMPL(__imp__sub_82342FB0) {
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
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20024
	ctx.r11.s64 = ctx.r11.s64 + -20024;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82343000
	if (ctx.cr6.lt) goto loc_82343000;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82343000
	if (ctx.cr6.gt) goto loc_82343000;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x823470b0
	ctx.lr = 0x82342FF0;
	sub_823470B0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82343008
	goto loc_82343008;
loc_82343000:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82388aa4
	ctx.lr = 0x82343008;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82343008:
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

__attribute__((alias("__imp__sub_8234301C"))) PPC_WEAK_FUNC(sub_8234301C);
PPC_FUNC_IMPL(__imp__sub_8234301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343020"))) PPC_WEAK_FUNC(sub_82343020);
PPC_FUNC_IMPL(__imp__sub_82343020) {
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
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x82343054
	if (!ctx.cr6.lt) goto loc_82343054;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x823470b0
	ctx.lr = 0x82343044;
	sub_823470B0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8234305c
	goto loc_8234305C;
loc_82343054:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82388aa4
	ctx.lr = 0x8234305C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8234305C:
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

__attribute__((alias("__imp__sub_82343070"))) PPC_WEAK_FUNC(sub_82343070);
PPC_FUNC_IMPL(__imp__sub_82343070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r11,r11,-20024
	ctx.r11.s64 = ctx.r11.s64 + -20024;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823430a8
	if (ctx.cr6.lt) goto loc_823430A8;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823430a8
	if (ctx.cr6.gt) goto loc_823430A8;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82346e30
	sub_82346E30(ctx, base);
	return;
loc_823430A8:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x82388a64
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823430B0"))) PPC_WEAK_FUNC(sub_823430B0);
PPC_FUNC_IMPL(__imp__sub_823430B0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x823430cc
	if (!ctx.cr6.lt) goto loc_823430CC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82346e30
	sub_82346E30(ctx, base);
	return;
loc_823430CC:
	// addi r3,r4,32
	ctx.r3.s64 = ctx.r4.s64 + 32;
	// b 0x82388a64
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823430D4"))) PPC_WEAK_FUNC(sub_823430D4);
PPC_FUNC_IMPL(__imp__sub_823430D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823430D8"))) PPC_WEAK_FUNC(sub_823430D8);
PPC_FUNC_IMPL(__imp__sub_823430D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e46c
	ctx.lr = 0x823430E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82348750
	ctx.lr = 0x823430EC;
	sub_82348750(ctx, base);
	// bl 0x82364238
	ctx.lr = 0x823430F0;
	sub_82364238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823431b8
	if (ctx.cr0.eq) goto loc_823431B8;
	// bl 0x82342e38
	ctx.lr = 0x823430FC;
	sub_82342E38(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82343110
	if (!ctx.cr6.eq) goto loc_82343110;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82343124
	goto loc_82343124;
loc_82343110:
	// bl 0x82342e38
	ctx.lr = 0x82343114;
	sub_82342E38(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823431b8
	if (!ctx.cr6.eq) goto loc_823431B8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82343124:
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// lwz r11,23328(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23328);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,23328(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23328, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r11,r11,268
	ctx.r11.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823431b8
	if (!ctx.cr0.eq) goto loc_823431B8;
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,23332
	ctx.r30.s64 = ctx.r11.s64 + 23332;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234318c
	if (!ctx.cr6.eq) goto loc_8234318C;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82341878
	ctx.lr = 0x82343164;
	sub_82341878(ctx, base);
	// stwx r3,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8234318c
	if (!ctx.cr0.eq) goto loc_8234318C;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x823431a4
	goto loc_823431A4;
loc_8234318C:
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_823431A4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,4354
	ctx.r11.u64 = ctx.r11.u64 | 4354;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x823431bc
	goto loc_823431BC;
loc_823431B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823431BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8233e4bc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823431C4"))) PPC_WEAK_FUNC(sub_823431C4);
PPC_FUNC_IMPL(__imp__sub_823431C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823431C8"))) PPC_WEAK_FUNC(sub_823431C8);
PPC_FUNC_IMPL(__imp__sub_823431C8) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82343218
	if (ctx.cr6.eq) goto loc_82343218;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343218
	if (ctx.cr0.eq) goto loc_82343218;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82348a80
	ctx.lr = 0x823431F8;
	sub_82348A80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82343218:
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

__attribute__((alias("__imp__sub_8234322C"))) PPC_WEAK_FUNC(sub_8234322C);
PPC_FUNC_IMPL(__imp__sub_8234322C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343230"))) PPC_WEAK_FUNC(sub_82343230);
PPC_FUNC_IMPL(__imp__sub_82343230) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82343260
	if (ctx.cr0.eq) goto loc_82343260;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823432a4
	if (ctx.cr6.eq) goto loc_823432A4;
loc_82343260:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blt 0x8234328c
	if (ctx.cr0.lt) goto loc_8234328C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82343294
	goto loc_82343294;
loc_8234328C:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823440c0
	ctx.lr = 0x82343294;
	sub_823440C0(ctx, base);
loc_82343294:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823432a4
	if (!ctx.cr6.eq) goto loc_823432A4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x823432ac
	goto loc_823432AC;
loc_823432A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_823432AC:
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

__attribute__((alias("__imp__sub_823432C4"))) PPC_WEAK_FUNC(sub_823432C4);
PPC_FUNC_IMPL(__imp__sub_823432C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823432C8"))) PPC_WEAK_FUNC(sub_823432C8);
PPC_FUNC_IMPL(__imp__sub_823432C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x823432D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82342a98
	ctx.lr = 0x823432E8;
	sub_82342A98(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343314
	if (ctx.cr0.eq) goto loc_82343314;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82343314
	if (!ctx.cr6.eq) goto loc_82343314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8234338c
	goto loc_8234338C;
loc_82343314:
	// bl 0x82342a98
	ctx.lr = 0x82343318;
	sub_82342A98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82343374
	if (!ctx.cr6.gt) goto loc_82343374;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_8234332C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbzu r3,1(r28)
	ea = 1 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x82343230
	ctx.lr = 0x82343340;
	sub_82343230(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8234336c
	if (!ctx.cr6.eq) goto loc_8234336C;
	// bl 0x82342a98
	ctx.lr = 0x82343350;
	sub_82342A98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82343374
	if (!ctx.cr6.eq) goto loc_82343374;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82343230
	ctx.lr = 0x8234336C;
	sub_82343230(ctx, base);
loc_8234336C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x8234332c
	if (ctx.cr6.gt) goto loc_8234332C;
loc_82343374:
	// bl 0x82342a98
	ctx.lr = 0x82343378;
	sub_82342A98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234338c
	if (!ctx.cr6.eq) goto loc_8234338C;
	// bl 0x82342a98
	ctx.lr = 0x82343388;
	sub_82342A98(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
loc_8234338C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343394"))) PPC_WEAK_FUNC(sub_82343394);
PPC_FUNC_IMPL(__imp__sub_82343394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343398"))) PPC_WEAK_FUNC(sub_82343398);
PPC_FUNC_IMPL(__imp__sub_82343398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x823433A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// bne cr6,0x823433f0
	if (!ctx.cr6.eq) goto loc_823433F0;
loc_823433D8:
	// bl 0x82342a98
	ctx.lr = 0x823433DC;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823433E8;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82343ec0
	goto loc_82343EC0;
loc_823433F0:
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234348c
	if (!ctx.cr0.eq) goto loc_8234348C;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82348750
	ctx.lr = 0x82343404;
	sub_82348750(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r11,r11,-24640
	ctx.r11.s64 = ctx.r11.s64 + -24640;
	// addi r8,r10,-17888
	ctx.r8.s64 = ctx.r10.s64 + -17888;
	// beq cr6,0x82343440
	if (ctx.cr6.eq) goto loc_82343440;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82343440
	if (ctx.cr6.eq) goto loc_82343440;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82343444
	goto loc_82343444;
loc_82343440:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82343444:
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823433d8
	if (!ctx.cr0.eq) goto loc_823433D8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8234347c
	if (ctx.cr6.eq) goto loc_8234347C;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x8234347c
	if (ctx.cr6.eq) goto loc_8234347C;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82343480
	goto loc_82343480;
loc_8234347C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82343480:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823433d8
	if (!ctx.cr0.eq) goto loc_823433D8;
loc_8234348C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823433d8
	if (ctx.cr6.eq) goto loc_823433D8;
	// bl 0x82342e38
	ctx.lr = 0x82343498;
	sub_82342E38(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82343e8c
	if (ctx.cr6.eq) goto loc_82343E8C;
	// bl 0x82342e38
	ctx.lr = 0x823434A8;
	sub_82342E38(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82343e8c
	if (ctx.cr6.eq) goto loc_82343E8C;
	// lbz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// extsb. r8,r29
	ctx.r8.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
	// beq 0x82343e84
	if (ctx.cr0.eq) goto loc_82343E84;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r19,r31,-1
	ctx.r19.s64 = ctx.r31.s64 + -1;
	// lis r15,-32251
	ctx.r15.s64 = -2113601536;
	// lis r20,-32251
	ctx.r20.s64 = -2113601536;
	// addi r23,r11,-18752
	ctx.r23.s64 = ctx.r11.s64 + -18752;
	// addi r22,r10,-18736
	ctx.r22.s64 = ctx.r10.s64 + -18736;
	// addi r17,r9,7008
	ctx.r17.s64 = ctx.r9.s64 + 7008;
loc_82343504:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82343e84
	if (ctx.cr6.lt) goto loc_82343E84;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// blt cr6,0x82343530
	if (ctx.cr6.lt) goto loc_82343530;
	// cmpwi cr6,r8,120
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 120, ctx.xer);
	// bgt cr6,0x82343530
	if (ctx.cr6.gt) goto loc_82343530;
	// add r11,r8,r17
	ctx.r11.u64 = ctx.r8.u64 + ctx.r17.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82343534
	goto loc_82343534;
loc_82343530:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82343534:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r11,r11,r17
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82343e68
	if (ctx.cr6.gt) goto loc_82343E68;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234374c
	if (ctx.cr6.eq) goto loc_8234374C;
	// bdz 0x82343580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82343580;
	// bdz 0x823435a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823435A0;
	// bdz 0x823435f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823435F0;
	// bdz 0x8234363c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8234363C;
	// bdz 0x82343644
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82343644;
	// bdz 0x8234367c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8234367C;
	// b 0x82343798
	goto loc_82343798;
loc_82343580:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r16,r27
	ctx.r16.u64 = ctx.r27.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// b 0x82343e68
	goto loc_82343E68;
loc_823435A0:
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x823435e8
	if (ctx.cr6.eq) goto loc_823435E8;
	// cmpwi cr6,r8,35
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 35, ctx.xer);
	// beq cr6,0x823435e0
	if (ctx.cr6.eq) goto loc_823435E0;
	// cmpwi cr6,r8,43
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 43, ctx.xer);
	// beq cr6,0x823435d8
	if (ctx.cr6.eq) goto loc_823435D8;
	// cmpwi cr6,r8,45
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 45, ctx.xer);
	// beq cr6,0x823435d0
	if (ctx.cr6.eq) goto loc_823435D0;
	// cmpwi cr6,r8,48
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 48, ctx.xer);
	// bne cr6,0x82343e68
	if (!ctx.cr6.eq) goto loc_82343E68;
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
	// b 0x82343e68
	goto loc_82343E68;
loc_823435D0:
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// b 0x82343e68
	goto loc_82343E68;
loc_823435D8:
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// b 0x82343e68
	goto loc_82343E68;
loc_823435E0:
	// ori r27,r27,128
	ctx.r27.u64 = ctx.r27.u64 | 128;
	// b 0x82343e68
	goto loc_82343E68;
loc_823435E8:
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// b 0x82343e68
	goto loc_82343E68;
loc_823435F0:
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x82343624
	if (!ctx.cr6.eq) goto loc_82343624;
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bge cr6,0x82343e68
	if (!ctx.cr6.lt) goto loc_82343E68;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// b 0x82343634
	goto loc_82343634;
loc_82343624:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_82343634:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x82343e68
	goto loc_82343E68;
loc_8234363C:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82343e68
	goto loc_82343E68;
loc_82343644:
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x8234366c
	if (!ctx.cr6.eq) goto loc_8234366C;
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x82343e68
	if (!ctx.cr6.lt) goto loc_82343E68;
	// li r25,-1
	ctx.r25.s64 = -1;
	// b 0x82343e68
	goto loc_82343E68;
loc_8234366C:
	// mulli r11,r25,10
	ctx.r11.s64 = ctx.r25.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r25,r11,-48
	ctx.r25.s64 = ctx.r11.s64 + -48;
	// b 0x82343e68
	goto loc_82343E68;
loc_8234367C:
	// cmpwi cr6,r8,73
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 73, ctx.xer);
	// beq cr6,0x823436cc
	if (ctx.cr6.eq) goto loc_823436CC;
	// cmpwi cr6,r8,104
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 104, ctx.xer);
	// beq cr6,0x823436c4
	if (ctx.cr6.eq) goto loc_823436C4;
	// cmpwi cr6,r8,108
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 108, ctx.xer);
	// beq cr6,0x823436a4
	if (ctx.cr6.eq) goto loc_823436A4;
	// cmpwi cr6,r8,119
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 119, ctx.xer);
	// bne cr6,0x82343e68
	if (!ctx.cr6.eq) goto loc_82343E68;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
	// b 0x82343e68
	goto loc_82343E68;
loc_823436A4:
	// lbz r11,1(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x823436bc
	if (!ctx.cr6.eq) goto loc_823436BC;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// ori r27,r27,4096
	ctx.r27.u64 = ctx.r27.u64 | 4096;
	// b 0x82343e68
	goto loc_82343E68;
loc_823436BC:
	// ori r27,r27,16
	ctx.r27.u64 = ctx.r27.u64 | 16;
	// b 0x82343e68
	goto loc_82343E68;
loc_823436C4:
	// ori r27,r27,32
	ctx.r27.u64 = ctx.r27.u64 | 32;
	// b 0x82343e68
	goto loc_82343E68;
loc_823436CC:
	// lbz r11,1(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// bne cr6,0x823436f4
	if (!ctx.cr6.eq) goto loc_823436F4;
	// lbz r10,2(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// cmplwi cr6,r10,52
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 52, ctx.xer);
	// bne cr6,0x823436f4
	if (!ctx.cr6.eq) goto loc_823436F4;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// ori r27,r27,32768
	ctx.r27.u64 = ctx.r27.u64 | 32768;
	// b 0x82343e68
	goto loc_82343E68;
loc_823436F4:
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// bne cr6,0x82343714
	if (!ctx.cr6.eq) goto loc_82343714;
	// lbz r10,2(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bne cr6,0x82343714
	if (!ctx.cr6.eq) goto loc_82343714;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r27,r27,0,17,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x82343e68
	goto loc_82343E68;
loc_82343714:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82343e68
	if (ctx.cr6.eq) goto loc_82343E68;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x82343e68
	if (ctx.cr6.eq) goto loc_82343E68;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x82343e68
	if (ctx.cr6.eq) goto loc_82343E68;
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x82343e68
	if (ctx.cr6.eq) goto loc_82343E68;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82343e68
	if (ctx.cr6.eq) goto loc_82343E68;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x82343e68
	if (ctx.cr6.eq) goto loc_82343E68;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8234374C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// li r16,0
	ctx.r16.s64 = 0;
	// bl 0x8234b8a8
	ctx.lr = 0x8234375C;
	sub_8234B8A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82343780
	if (ctx.cr0.eq) goto loc_82343780;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82343230
	ctx.lr = 0x82343774;
	sub_82343230(ctx, base);
	// lbzu r29,1(r19)
	ea = 1 + ctx.r19.u32;
	ctx.r29.u64 = PPC_LOAD_U8(ea);
	ctx.r19.u32 = ea;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x823433d8
	if (ctx.cr0.eq) goto loc_823433D8;
loc_82343780:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82343230
	ctx.lr = 0x82343790;
	sub_82343230(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82343e68
	goto loc_82343E68;
loc_82343798:
	// addi r11,r8,-65
	ctx.r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x82343c98
	if (ctx.cr6.gt) goto loc_82343C98;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,7104
	ctx.r12.s64 = ctx.r12.s64 + 7104;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// addi r12,r12,14284
	ctx.r12.s64 = ctx.r12.s64 + 14284;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823439A8;
	case 1:
		goto loc_82343C98;
	case 2:
		goto loc_823437CC;
	case 3:
		goto loc_82343C98;
	case 4:
		goto loc_823439A8;
	case 5:
		goto loc_82343C98;
	case 6:
		goto loc_823439A8;
	case 7:
		goto loc_82343C98;
	case 8:
		goto loc_82343C98;
	case 9:
		goto loc_82343C98;
	case 10:
		goto loc_82343C98;
	case 11:
		goto loc_82343C98;
	case 12:
		goto loc_82343C98;
	case 13:
		goto loc_82343C98;
	case 14:
		goto loc_82343C98;
	case 15:
		goto loc_82343C98;
	case 16:
		goto loc_82343C98;
	case 17:
		goto loc_82343C98;
	case 18:
		goto loc_823438B4;
	case 19:
		goto loc_82343C98;
	case 20:
		goto loc_82343C98;
	case 21:
		goto loc_82343C98;
	case 22:
		goto loc_82343C98;
	case 23:
		goto loc_82343AE8;
	case 24:
		goto loc_82343C98;
	case 25:
		goto loc_82343838;
	case 26:
		goto loc_82343C98;
	case 27:
		goto loc_82343C98;
	case 28:
		goto loc_82343C98;
	case 29:
		goto loc_82343C98;
	case 30:
		goto loc_82343C98;
	case 31:
		goto loc_82343C98;
	case 32:
		goto loc_823439B4;
	case 33:
		goto loc_82343C98;
	case 34:
		goto loc_823437DC;
	case 35:
		goto loc_82343AD8;
	case 36:
		goto loc_823439B4;
	case 37:
		goto loc_823439B4;
	case 38:
		goto loc_823439B4;
	case 39:
		goto loc_82343C98;
	case 40:
		goto loc_82343AD8;
	case 41:
		goto loc_82343C98;
	case 42:
		goto loc_82343C98;
	case 43:
		goto loc_82343C98;
	case 44:
		goto loc_82343C98;
	case 45:
		goto loc_8234396C;
	case 46:
		goto loc_82343B20;
	case 47:
		goto loc_82343AE4;
	case 48:
		goto loc_82343C98;
	case 49:
		goto loc_82343C98;
	case 50:
		goto loc_823438C4;
	case 51:
		goto loc_82343C98;
	case 52:
		goto loc_82343ADC;
	case 53:
		goto loc_82343C98;
	case 54:
		goto loc_82343C98;
	case 55:
		goto loc_82343AF0;
	default:
		__builtin_unreachable();
	}
loc_823437CC:
	// andi. r11,r27,2096
	ctx.r11.u64 = ctx.r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823437dc
	if (!ctx.cr0.eq) goto loc_823437DC;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
loc_823437DC:
	// andi. r11,r27,2064
	ctx.r11.u64 = ctx.r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// beq 0x8234381c
	if (ctx.cr0.eq) goto loc_8234381C;
	// li r5,512
	ctx.r5.s64 = 512;
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8234b8a0
	ctx.lr = 0x82343808;
	sub_8234B8A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234382c
	if (ctx.cr0.eq) goto loc_8234382C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x8234382c
	goto loc_8234382C;
loc_8234381C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
loc_8234382C:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// b 0x82343c98
	goto loc_82343C98;
loc_82343838:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343888
	if (ctx.cr6.eq) goto loc_82343888;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82343888
	if (ctx.cr6.eq) goto loc_82343888;
	// rlwinm. r9,r27,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// beq 0x8234387c
	if (ctx.cr0.eq) goto loc_8234387C;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,1
	ctx.r16.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r6,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r6.s64 = temp.s64;
	// b 0x82343c94
	goto loc_82343C94;
loc_8234387C:
	// lha r6,0(r11)
	ctx.r6.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,0
	ctx.r16.s64 = 0;
	// b 0x82343c94
	goto loc_82343C94;
loc_82343888:
	// lwz r28,7000(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7000);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82343894:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82343894
	if (!ctx.cr6.eq) goto loc_82343894;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_823438A8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82343c94
	goto loc_82343C94;
loc_823438B4:
	// andi. r11,r27,2096
	ctx.r11.u64 = ctx.r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823438c4
	if (!ctx.cr0.eq) goto loc_823438C4;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
loc_823438C4:
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x823438d8
	if (!ctx.cr6.eq) goto loc_823438D8;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x823438dc
	goto loc_823438DC;
loc_823438D8:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_823438DC:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// andi. r9,r27,2064
	ctx.r9.u64 = ctx.r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x82343938
	if (ctx.cr0.eq) goto loc_82343938;
	// bne cr6,0x82343904
	if (!ctx.cr6.eq) goto loc_82343904;
	// lwz r28,7004(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 7004);
loc_82343904:
	// li r16,1
	ctx.r16.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82343924
	goto loc_82343924;
loc_82343910:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8234392c
	if (ctx.cr0.eq) goto loc_8234392C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82343924:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82343910
	if (!ctx.cr6.eq) goto loc_82343910;
loc_8234392C:
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// b 0x82343c94
	goto loc_82343C94;
loc_82343938:
	// bne cr6,0x82343940
	if (!ctx.cr6.eq) goto loc_82343940;
	// lwz r28,7000(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7000);
loc_82343940:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8234395c
	goto loc_8234395C;
loc_82343948:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82343964
	if (ctx.cr0.eq) goto loc_82343964;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8234395C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82343948
	if (!ctx.cr6.eq) goto loc_82343948;
loc_82343964:
	// subf r6,r28,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r28.s64;
	// b 0x82343c94
	goto loc_82343C94;
loc_8234396C:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8233c020
	ctx.lr = 0x82343980;
	sub_8233C020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823433d8
	if (ctx.cr0.eq) goto loc_823433D8;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343998
	if (ctx.cr0.eq) goto loc_82343998;
	// sth r24,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// b 0x8234399c
	goto loc_8234399C;
loc_82343998:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_8234399C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x82343e54
	goto loc_82343E54;
loc_823439A8:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// li r21,1
	ctx.r21.s64 = 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_823439B4:
	// ori r27,r27,64
	ctx.r27.u64 = ctx.r27.u64 | 64;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// li r30,512
	ctx.r30.s64 = 512;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x823439d0
	if (!ctx.cr6.lt) goto loc_823439D0;
	// li r25,6
	ctx.r25.s64 = 6;
	// b 0x82343a20
	goto loc_82343A20;
loc_823439D0:
	// bne cr6,0x823439e8
	if (!ctx.cr6.eq) goto loc_823439E8;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// bne cr6,0x82343a20
	if (!ctx.cr6.eq) goto loc_82343A20;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82343a20
	goto loc_82343A20;
loc_823439E8:
	// cmpwi cr6,r25,512
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 512, ctx.xer);
	// ble cr6,0x823439f4
	if (!ctx.cr6.gt) goto loc_823439F4;
	// li r25,512
	ctx.r25.s64 = 512;
loc_823439F4:
	// cmpwi cr6,r25,163
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 163, ctx.xer);
	// ble cr6,0x82343a20
	if (!ctx.cr6.gt) goto loc_82343A20;
	// addi r31,r25,349
	ctx.r31.s64 = ctx.r25.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341878
	ctx.lr = 0x82343A08;
	sub_82341878(ctx, base);
	// mr. r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq 0x82343a1c
	if (ctx.cr0.eq) goto loc_82343A1C;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x82343a20
	goto loc_82343A20;
loc_82343A1C:
	// li r25,163
	ctx.r25.s64 = 163;
loc_82343A20:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// lwz r10,24(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// extsb r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bctrl 
	ctx.lr = 0x82343A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r30,r27,0,24,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82343a84
	if (ctx.cr0.eq) goto loc_82343A84;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82343a84
	if (!ctx.cr6.eq) goto loc_82343A84;
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82343A84:
	// cmpwi cr6,r31,103
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 103, ctx.xer);
	// bne cr6,0x82343aa8
	if (!ctx.cr6.eq) goto loc_82343AA8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82343aa8
	if (!ctx.cr6.eq) goto loc_82343AA8;
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82343AA8:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x82343abc
	if (!ctx.cr6.eq) goto loc_82343ABC;
	// ori r27,r27,256
	ctx.r27.u64 = ctx.r27.u64 | 256;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82343ABC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82343AC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82343ac0
	if (!ctx.cr6.eq) goto loc_82343AC0;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// b 0x823438a8
	goto loc_823438A8;
loc_82343AD8:
	// ori r27,r27,64
	ctx.r27.u64 = ctx.r27.u64 | 64;
loc_82343ADC:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x82343b30
	goto loc_82343B30;
loc_82343AE4:
	// li r25,8
	ctx.r25.s64 = 8;
loc_82343AE8:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82343af4
	goto loc_82343AF4;
loc_82343AF0:
	// li r11,39
	ctx.r11.s64 = 39;
loc_82343AF4:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rlwinm. r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x82343b30
	if (ctx.cr0.eq) goto loc_82343B30;
	// addi r11,r11,81
	ctx.r11.s64 = ctx.r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// b 0x82343b30
	goto loc_82343B30;
loc_82343B20:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x82343b30
	if (ctx.cr0.eq) goto loc_82343B30;
	// ori r27,r27,512
	ctx.r27.u64 = ctx.r27.u64 | 512;
loc_82343B30:
	// rlwinm. r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82343b40
	if (!ctx.cr0.eq) goto loc_82343B40;
	// rlwinm. r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343b54
	if (ctx.cr0.eq) goto loc_82343B54;
loc_82343B40:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x82343ba4
	goto loc_82343BA4;
loc_82343B54:
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343b84
	if (ctx.cr0.eq) goto loc_82343B84;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x82343b7c
	if (ctx.cr0.eq) goto loc_82343B7C;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82343ba4
	goto loc_82343BA4;
loc_82343B7C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82343ba4
	goto loc_82343BA4;
loc_82343B84:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// beq 0x82343ba0
	if (ctx.cr0.eq) goto loc_82343BA0;
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x82343ba4
	goto loc_82343BA4;
loc_82343BA0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82343BA4:
	// rlwinm. r10,r27,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82343bbc
	if (ctx.cr0.eq) goto loc_82343BBC;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82343bbc
	if (!ctx.cr6.lt) goto loc_82343BBC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// ori r27,r27,256
	ctx.r27.u64 = ctx.r27.u64 | 256;
loc_82343BBC:
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82343bd0
	if (!ctx.cr0.eq) goto loc_82343BD0;
	// rlwinm. r10,r27,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82343bd0
	if (!ctx.cr0.eq) goto loc_82343BD0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_82343BD0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x82343be0
	if (!ctx.cr6.lt) goto loc_82343BE0;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82343bf0
	goto loc_82343BF0;
loc_82343BE0:
	// rlwinm r27,r27,0,29,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r25,512
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 512, ctx.xer);
	// ble cr6,0x82343bf0
	if (!ctx.cr6.gt) goto loc_82343BF0;
	// li r25,512
	ctx.r25.s64 = 512;
loc_82343BF0:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82343c00
	if (!ctx.cr6.eq) goto loc_82343C00;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82343C00:
	// addi r9,r1,655
	ctx.r9.s64 = ctx.r1.s64 + 655;
loc_82343C04:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// bgt cr6,0x82343c18
	if (ctx.cr6.gt) goto loc_82343C18;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82343c5c
	if (ctx.cr6.eq) goto loc_82343C5C;
loc_82343C18:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x82343c4c
	if (!ctx.cr6.gt) goto loc_82343C4C;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82343C4C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82343c04
	goto loc_82343C04;
loc_82343C5C:
	// addi r11,r1,655
	ctx.r11.s64 = ctx.r1.s64 + 655;
	// rlwinm. r10,r27,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r28,r9,1
	ctx.r28.s64 = ctx.r9.s64 + 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// beq 0x82343c98
	if (ctx.cr0.eq) goto loc_82343C98;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82343c88
	if (ctx.cr6.eq) goto loc_82343C88;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82343c98
	if (ctx.cr6.eq) goto loc_82343C98;
loc_82343C88:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbu r11,-1(r28)
	ea = -1 + ctx.r28.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r28.u32 = ea;
loc_82343C94:
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
loc_82343C98:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82343e54
	if (!ctx.cr6.eq) goto loc_82343E54;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343ce8
	if (ctx.cr0.eq) goto loc_82343CE8;
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343cbc
	if (ctx.cr0.eq) goto loc_82343CBC;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x82343cc8
	goto loc_82343CC8;
loc_82343CBC:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343cd8
	if (ctx.cr0.eq) goto loc_82343CD8;
	// li r11,43
	ctx.r11.s64 = 43;
loc_82343CC8:
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// b 0x82343cec
	goto loc_82343CEC;
loc_82343CD8:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343ce8
	if (ctx.cr0.eq) goto loc_82343CE8;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82343cc8
	goto loc_82343CC8;
loc_82343CE8:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82343CEC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r10,r27,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// subf r29,r30,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bne 0x82343d34
	if (!ctx.cr0.eq) goto loc_82343D34;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82343d34
	if (!ctx.cr6.gt) goto loc_82343D34;
loc_82343D0C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82343230
	ctx.lr = 0x82343D20;
	sub_82343230(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82343d34
	if (ctx.cr6.eq) goto loc_82343D34;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82343d0c
	if (ctx.cr6.gt) goto loc_82343D0C;
loc_82343D34:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823432c8
	ctx.lr = 0x82343D48;
	sub_823432C8(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343d8c
	if (ctx.cr0.eq) goto loc_82343D8C;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82343d8c
	if (!ctx.cr0.eq) goto loc_82343D8C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82343d8c
	if (!ctx.cr6.gt) goto loc_82343D8C;
loc_82343D64:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82343230
	ctx.lr = 0x82343D78;
	sub_82343230(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82343d8c
	if (ctx.cr6.eq) goto loc_82343D8C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82343d64
	if (ctx.cr6.gt) goto loc_82343D64;
loc_82343D8C:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82343dfc
	if (ctx.cr6.eq) goto loc_82343DFC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82343dfc
	if (!ctx.cr6.gt) goto loc_82343DFC;
	// addi r30,r28,-2
	ctx.r30.s64 = ctx.r28.s64 + -2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82343DA8:
	// li r5,6
	ctx.r5.s64 = 6;
	// lhzu r6,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x8234b8a0
	ctx.lr = 0x82343DC0;
	sub_8234B8A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82343df0
	if (!ctx.cr0.eq) goto loc_82343DF0;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82343df0
	if (ctx.cr6.eq) goto loc_82343DF0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x823432c8
	ctx.lr = 0x82343DE4;
	sub_823432C8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82343da8
	if (!ctx.cr6.eq) goto loc_82343DA8;
	// b 0x82343e0c
	goto loc_82343E0C;
loc_82343DF0:
	// li r24,-1
	ctx.r24.s64 = -1;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// b 0x82343e10
	goto loc_82343E10;
loc_82343DFC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823432c8
	ctx.lr = 0x82343E0C;
	sub_823432C8(ctx, base);
loc_82343E0C:
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82343E10:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82343e54
	if (ctx.cr6.lt) goto loc_82343E54;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343e54
	if (ctx.cr0.eq) goto loc_82343E54;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82343e54
	if (!ctx.cr6.gt) goto loc_82343E54;
loc_82343E2C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82343230
	ctx.lr = 0x82343E40;
	sub_82343230(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// beq cr6,0x82343e54
	if (ctx.cr6.eq) goto loc_82343E54;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82343e2c
	if (ctx.cr6.gt) goto loc_82343E2C;
loc_82343E54:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82343e68
	if (ctx.cr6.eq) goto loc_82343E68;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82341940
	ctx.lr = 0x82343E64;
	sub_82341940(ctx, base);
	// li r14,0
	ctx.r14.s64 = 0;
loc_82343E68:
	// lbz r29,1(r19)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// extsb. r8,r29
	ctx.r8.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82343e84
	if (ctx.cr0.eq) goto loc_82343E84;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82343504
	goto loc_82343504;
loc_82343E84:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82343ec0
	goto loc_82343EC0;
loc_82343E8C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82340068
	ctx.lr = 0x82343EA0;
	sub_82340068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82343eb4
	if (!ctx.cr6.eq) goto loc_82343EB4;
	// li r31,511
	ctx.r31.s64 = 511;
	// stb r30,1167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1167, ctx.r30.u8);
loc_82343EB4:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8237ac00
	ctx.lr = 0x82343EBC;
	sub_8237AC00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82343EC0:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343EC8"))) PPC_WEAK_FUNC(sub_82343EC8);
PPC_FUNC_IMPL(__imp__sub_82343EC8) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// addi r10,r4,1022
	ctx.r10.s64 = ctx.r4.s64 + 1022;
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82343EF0"))) PPC_WEAK_FUNC(sub_82343EF0);
PPC_FUNC_IMPL(__imp__sub_82343EF0) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// addi r11,r11,-1022
	ctx.r11.s64 = ctx.r11.s64 + -1022;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82343F08"))) PPC_WEAK_FUNC(sub_82343F08);
PPC_FUNC_IMPL(__imp__sub_82343F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32752
	ctx.r11.s64 = 2146435072;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82343f30
	if (!ctx.cr6.eq) goto loc_82343F30;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82343f4c
	if (!ctx.cr6.eq) goto loc_82343F4C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82343F30:
	// lis r11,-16
	ctx.r11.s64 = -1048576;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82343f4c
	if (!ctx.cr6.eq) goto loc_82343F4C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82343f4c
	if (!ctx.cr6.eq) goto loc_82343F4C;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82343F4C:
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// bne cr6,0x82343f64
	if (!ctx.cr6.eq) goto loc_82343F64;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82343F64:
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82343f84
	if (!ctx.cr6.eq) goto loc_82343F84;
	// clrlwi. r11,r10,13
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82343f7c
	if (!ctx.cr0.eq) goto loc_82343F7C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82343f84
	if (ctx.cr6.eq) goto loc_82343F84;
loc_82343F7C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82343F84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82343F8C"))) PPC_WEAK_FUNC(sub_82343F8C);
PPC_FUNC_IMPL(__imp__sub_82343F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343F90"))) PPC_WEAK_FUNC(sub_82343F90);
PPC_FUNC_IMPL(__imp__sub_82343F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lfd f0,9016(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9016);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82343fac
	if (!ctx.cr6.eq) goto loc_82343FAC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8234407c
	goto loc_8234407C;
loc_82343FAC:
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm. r9,r11,0,17,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82344054
	if (!ctx.cr0.eq) goto loc_82344054;
	// lwz r8,16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// clrlwi. r7,r8,12
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82343fd0
	if (!ctx.cr0.eq) goto loc_82343FD0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82344054
	if (ctx.cr6.eq) goto loc_82344054;
loc_82343FD0:
	// li r9,-1021
	ctx.r9.s64 = -1021;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82343fe4
	if (ctx.cr6.lt) goto loc_82343FE4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82343FE4:
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8234401c
	if (!ctx.cr0.eq) goto loc_8234401C;
loc_82343FEC:
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,16(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16, ctx.r8.u32);
	// beq 0x82344004
	if (ctx.cr0.eq) goto loc_82344004;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// stw r8,16(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16, ctx.r8.u32);
loc_82344004:
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82343fec
	if (ctx.cr0.eq) goto loc_82343FEC;
	// stw r10,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r10.u32);
loc_8234401C:
	// andi. r11,r11,65519
	ctx.r11.u64 = ctx.r11.u64 & 65519;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sth r11,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
	// beq cr6,0x82344034
	if (ctx.cr6.eq) goto loc_82344034;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
loc_82344034:
	// lfd f0,16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// ori r11,r11,16352
	ctx.r11.u64 = ctx.r11.u64 | 16352;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// b 0x82344078
	goto loc_82344078;
loc_82344054:
	// stfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// ori r11,r11,16352
	ctx.r11.u64 = ctx.r11.u64 | 16352;
	// rlwinm r10,r9,28,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r9,r10,-1022
	ctx.r9.s64 = ctx.r10.s64 + -1022;
loc_82344078:
	// lfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_8234407C:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82344084"))) PPC_WEAK_FUNC(sub_82344084);
PPC_FUNC_IMPL(__imp__sub_82344084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344088"))) PPC_WEAK_FUNC(sub_82344088);
PPC_FUNC_IMPL(__imp__sub_82344088) {
	PPC_FUNC_PROLOGUE();
	// stfd f2,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// lwz r11,24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f1,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r9,16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,9016(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9016);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// rlwimi r11,r9,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823440BC"))) PPC_WEAK_FUNC(sub_823440BC);
PPC_FUNC_IMPL(__imp__sub_823440BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823440C0"))) PPC_WEAK_FUNC(sub_823440C0);
PPC_FUNC_IMPL(__imp__sub_823440C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x823440C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82348750
	ctx.lr = 0x823440DC;
	sub_82348750(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// andi. r10,r11,130
	ctx.r10.u64 = ctx.r11.u64 & 130;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82344114
	if (!ctx.cr0.eq) goto loc_82344114;
	// bl 0x82342a98
	ctx.lr = 0x823440F4;
	sub_82342A98(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_823440F8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82344100:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82344104:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8234428c
	goto loc_8234428C;
loc_82344114:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82344128
	if (ctx.cr0.eq) goto loc_82344128;
	// bl 0x82342a98
	ctx.lr = 0x82344120;
	sub_82342A98(ctx, base);
	// li r10,34
	ctx.r10.s64 = 34;
	// b 0x823440f8
	goto loc_823440F8;
loc_82344128:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82344150
	if (ctx.cr0.eq) goto loc_82344150;
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq 0x82344104
	if (ctx.cr0.eq) goto loc_82344104;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82344150:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823441ac
	if (!ctx.cr0.eq) goto loc_823441AC;
	// bl 0x82342e38
	ctx.lr = 0x82344178;
	sub_82342E38(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82344194
	if (ctx.cr6.eq) goto loc_82344194;
	// bl 0x82342e38
	ctx.lr = 0x82344188;
	sub_82342E38(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823441a4
	if (!ctx.cr6.eq) goto loc_823441A4;
loc_82344194:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82364238
	ctx.lr = 0x8234419C;
	sub_82364238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823441ac
	if (!ctx.cr0.eq) goto loc_823441AC;
loc_823441A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234bb18
	ctx.lr = 0x823441AC;
	sub_8234BB18(ctx, base);
loc_823441AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344264
	if (ctx.cr0.eq) goto loc_82344264;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf. r30,r4,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// ble 0x823441f4
	if (!ctx.cr0.gt) goto loc_823441F4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823491e0
	ctx.lr = 0x823441EC;
	sub_823491E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82344254
	goto loc_82344254;
loc_823441F4:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82344228
	if (ctx.cr6.eq) goto loc_82344228;
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -2, ctx.xer);
	// beq cr6,0x82344228
	if (ctx.cr6.eq) goto loc_82344228;
	// srawi r11,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 5;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-24640
	ctx.r10.s64 = ctx.r10.s64 + -24640;
	// clrlwi r11,r29,27
	ctx.r11.u64 = ctx.r29.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82344230
	goto loc_82344230;
loc_82344228:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r11,r11,-17888
	ctx.r11.s64 = ctx.r11.s64 + -17888;
loc_82344230:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344254
	if (ctx.cr0.eq) goto loc_82344254;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234b998
	ctx.lr = 0x8234424C;
	sub_8234B998(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x82344100
	if (ctx.cr6.eq) goto loc_82344100;
loc_82344254:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// b 0x8234427c
	goto loc_8234427C;
loc_82344264:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x823491e0
	ctx.lr = 0x82344278;
	sub_823491E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8234427C:
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82344100
	if (!ctx.cr6.eq) goto loc_82344100;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_8234428C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344294"))) PPC_WEAK_FUNC(sub_82344294);
PPC_FUNC_IMPL(__imp__sub_82344294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344298"))) PPC_WEAK_FUNC(sub_82344298);
PPC_FUNC_IMPL(__imp__sub_82344298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e464
	ctx.lr = 0x823442A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x82344388
	ctx.lr = 0x823442D8;
	sub_82344388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823442f4
	if (ctx.cr0.eq) goto loc_823442F4;
	// li r30,512
	ctx.r30.s64 = 512;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// b 0x82344328
	goto loc_82344328;
loc_823442F4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8234bbd0
	ctx.lr = 0x82344300;
	sub_8234BBD0(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82344310
	if (!ctx.cr0.eq) goto loc_82344310;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82344314
	if (!ctx.cr6.eq) goto loc_82344314;
loc_82344310:
	// li r30,128
	ctx.r30.s64 = 128;
loc_82344314:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82344324
	if (!ctx.cr0.eq) goto loc_82344324;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82344328
	if (!ctx.cr6.eq) goto loc_82344328;
loc_82344324:
	// ori r30,r30,256
	ctx.r30.u64 = ctx.r30.u64 | 256;
loc_82344328:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// std r10,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8233e4b4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234434C"))) PPC_WEAK_FUNC(sub_8234434C);
PPC_FUNC_IMPL(__imp__sub_8234434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344350"))) PPC_WEAK_FUNC(sub_82344350);
PPC_FUNC_IMPL(__imp__sub_82344350) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// blt cr6,0x8234437c
	if (ctx.cr6.lt) goto loc_8234437C;
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// bgt cr6,0x8234437c
	if (ctx.cr6.gt) goto loc_8234437C;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,-18752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18752);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
loc_8234437C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82344384"))) PPC_WEAK_FUNC(sub_82344384);
PPC_FUNC_IMPL(__imp__sub_82344384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344388"))) PPC_WEAK_FUNC(sub_82344388);
PPC_FUNC_IMPL(__imp__sub_82344388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e444
	ctx.lr = 0x82344390;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823443f0
	if (!ctx.cr6.eq) goto loc_823443F0;
	// bl 0x82342a98
	ctx.lr = 0x823443DC;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x823443E8;
	sub_82342BF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82344ce0
	goto loc_82344CE0;
loc_823443F0:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_823443F4:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x8234441c
	if (ctx.cr6.eq) goto loc_8234441C;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x8234441c
	if (ctx.cr6.eq) goto loc_8234441C;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// beq cr6,0x8234441c
	if (ctx.cr6.eq) goto loc_8234441C;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// bne cr6,0x82344424
	if (!ctx.cr6.eq) goto loc_82344424;
loc_8234441C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x823443f4
	goto loc_823443F4;
loc_82344424:
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r21,r8,32768
	ctx.r21.u64 = ctx.r8.u64 | 32768;
loc_8234442C:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823447c0
	if (ctx.cr6.gt) goto loc_823447C0;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,8176
	ctx.r12.s64 = ctx.r12.s64 + 8176;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// nop 
	// addi r12,r12,17508
	ctx.r12.s64 = ctx.r12.s64 + 17508;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82344464;
	case 1:
		goto loc_823444E0;
	case 2:
		goto loc_82344568;
	case 3:
		goto loc_823445EC;
	case 4:
		goto loc_82344664;
	case 5:
		goto loc_823446D4;
	case 6:
		goto loc_823446F4;
	case 7:
		goto loc_82344774;
	case 8:
		goto loc_8234473C;
	case 9:
		goto loc_823447CC;
	case 10:
		goto loc_823447C0;
	case 11:
		goto loc_8234478C;
	default:
		__builtin_unreachable();
	}
loc_82344464:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x82344484
	if (ctx.cr6.lt) goto loc_82344484;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82344484
	if (ctx.cr6.gt) goto loc_82344484;
loc_82344478:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8234447C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x8234442c
	goto loc_8234442C;
loc_82344484:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823444a8
	if (!ctx.cr6.eq) goto loc_823444A8;
loc_823444A0:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8234442c
	goto loc_8234442C;
loc_823444A8:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x823444d4
	if (ctx.cr6.eq) goto loc_823444D4;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x823444c8
	if (ctx.cr6.eq) goto loc_823444C8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8234476c
	if (!ctx.cr6.eq) goto loc_8234476C;
loc_823444C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8234442c
	goto loc_8234442C;
loc_823444C8:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// b 0x8234442c
	goto loc_8234442C;
loc_823444D4:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// b 0x8234442c
	goto loc_8234442C;
loc_823444E0:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x823444f8
	if (ctx.cr6.lt) goto loc_823444F8;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82344478
	if (!ctx.cr6.gt) goto loc_82344478;
loc_823444F8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8234451c
	if (!ctx.cr6.eq) goto loc_8234451C;
loc_82344514:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8234442c
	goto loc_8234442C;
loc_8234451C:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x8234455c
	if (ctx.cr6.eq) goto loc_8234455C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8234455c
	if (ctx.cr6.eq) goto loc_8234455C;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x823444c0
	if (ctx.cr6.eq) goto loc_823444C0;
loc_82344534:
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// ble cr6,0x8234476c
	if (!ctx.cr6.gt) goto loc_8234476C;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// ble cr6,0x82344554
	if (!ctx.cr6.gt) goto loc_82344554;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// ble cr6,0x8234476c
	if (!ctx.cr6.gt) goto loc_8234476C;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bgt cr6,0x8234476c
	if (ctx.cr6.gt) goto loc_8234476C;
loc_82344554:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8234442c
	goto loc_8234442C;
loc_8234455C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8234442c
	goto loc_8234442C;
loc_82344568:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8234457c
	if (ctx.cr6.lt) goto loc_8234457C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82344478
	if (!ctx.cr6.gt) goto loc_82344478;
loc_8234457C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823444a0
	if (ctx.cr6.eq) goto loc_823444A0;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x823444c0
	if (ctx.cr6.eq) goto loc_823444C0;
loc_823445A0:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_823445A4:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82344c7c
	if (ctx.cr6.eq) goto loc_82344C7C;
	// cmplwi cr6,r6,24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 24, ctx.xer);
	// ble cr6,0x823445dc
	if (!ctx.cr6.gt) goto loc_823445DC;
	// lbz r11,151(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x823445d0
	if (ctx.cr6.lt) goto loc_823445D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
loc_823445D0:
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_823445DC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82344c68
	if (ctx.cr6.eq) goto loc_82344C68;
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x82344848
	goto loc_82344848;
loc_823445EC:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8234462c
	goto loc_8234462C;
loc_823445F8:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82344634
	if (ctx.cr6.gt) goto loc_82344634;
	// cmplwi cr6,r6,25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 25, ctx.xer);
	// bge cr6,0x8234461c
	if (!ctx.cr6.lt) goto loc_8234461C;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x82344620
	goto loc_82344620;
loc_8234461C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82344620:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_8234462C:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x823445f8
	if (!ctx.cr6.lt) goto loc_823445F8;
loc_82344634:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82344514
	if (ctx.cr6.eq) goto loc_82344514;
loc_82344650:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x8234455c
	if (ctx.cr6.eq) goto loc_8234455C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8234455c
	if (ctx.cr6.eq) goto loc_8234455C;
	// b 0x82344534
	goto loc_82344534;
loc_82344664:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82344690
	if (!ctx.cr6.eq) goto loc_82344690;
	// b 0x82344684
	goto loc_82344684;
loc_82344678:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82344684:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x82344678
	if (ctx.cr6.eq) goto loc_82344678;
loc_82344690:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// b 0x823446c8
	goto loc_823446C8;
loc_82344698:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82344650
	if (ctx.cr6.gt) goto loc_82344650;
	// cmplwi cr6,r6,25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 25, ctx.xer);
	// bge cr6,0x823446bc
	if (!ctx.cr6.lt) goto loc_823446BC;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_823446BC:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_823446C8:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x82344698
	if (!ctx.cr6.lt) goto loc_82344698;
	// b 0x82344650
	goto loc_82344650;
loc_823446D4:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x823445a0
	if (ctx.cr6.lt) goto loc_823445A0;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x823445a0
	if (ctx.cr6.gt) goto loc_823445A0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8234447c
	goto loc_8234447C;
loc_823446F4:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// addi r5,r7,-2
	ctx.r5.s64 = ctx.r7.s64 + -2;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x82344714
	if (ctx.cr6.lt) goto loc_82344714;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82344714
	if (ctx.cr6.gt) goto loc_82344714;
loc_8234470C:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8234447c
	goto loc_8234447C;
loc_82344714:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82344734
	if (ctx.cr6.eq) goto loc_82344734;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x823447ac
	if (ctx.cr6.eq) goto loc_823447AC;
loc_82344724:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x823445a0
	if (!ctx.cr6.eq) goto loc_823445A0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8234442c
	goto loc_8234442C;
loc_82344734:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8234442c
	goto loc_8234442C;
loc_8234473C:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82344754
	goto loc_82344754;
loc_82344748:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_82344754:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x82344748
	if (ctx.cr6.eq) goto loc_82344748;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8234476c
	if (ctx.cr6.lt) goto loc_8234476C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x8234470c
	if (!ctx.cr6.gt) goto loc_8234470C;
loc_8234476C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x823445a4
	goto loc_823445A4;
loc_82344774:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x82344724
	if (ctx.cr6.lt) goto loc_82344724;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x8234470c
	if (!ctx.cr6.gt) goto loc_8234470C;
	// b 0x82344724
	goto loc_82344724;
loc_8234478C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823447b8
	if (ctx.cr6.eq) goto loc_823447B8;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82344734
	if (ctx.cr6.eq) goto loc_82344734;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x823445a0
	if (!ctx.cr6.eq) goto loc_823445A0;
loc_823447AC:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r27,-1
	ctx.r27.s64 = -1;
	// b 0x8234442c
	goto loc_8234442C;
loc_823447B8:
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_823447C0:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8234442c
	if (!ctx.cr6.eq) goto loc_8234442C;
	// b 0x823445a4
	goto loc_823445A4;
loc_823447CC:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// b 0x82344804
	goto loc_82344804;
loc_823447DC:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82344814
	if (ctx.cr6.gt) goto loc_82344814;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// cmpwi cr6,r10,5200
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5200, ctx.xer);
	// bgt cr6,0x82344810
	if (ctx.cr6.gt) goto loc_82344810;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_82344804:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x823447dc
	if (!ctx.cr6.lt) goto loc_823447DC;
	// b 0x82344814
	goto loc_82344814;
loc_82344810:
	// li r10,5201
	ctx.r10.s64 = 5201;
loc_82344814:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x82344830
	goto loc_82344830;
loc_8234481C:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8234476c
	if (ctx.cr6.gt) goto loc_8234476C;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_82344830:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x8234481c
	if (!ctx.cr6.lt) goto loc_8234481C;
	// b 0x8234476c
	goto loc_8234476C;
loc_8234483C:
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82344848:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8234483c
	if (ctx.cr0.eq) goto loc_8234483C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8234ca00
	ctx.lr = 0x82344860;
	sub_8234CA00(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x8234486c
	if (!ctx.cr6.lt) goto loc_8234486C;
	// neg r29,r29
	ctx.r29.s64 = -ctx.r29.s64;
loc_8234486C:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8234487c
	if (!ctx.cr6.eq) goto loc_8234487C;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_8234487C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82344888
	if (!ctx.cr6.eq) goto loc_82344888;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_82344888:
	// cmpwi cr6,r11,5200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5200, ctx.xer);
	// bgt cr6,0x82344c94
	if (ctx.cr6.gt) goto loc_82344C94;
	// cmpwi cr6,r11,-5200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5200, ctx.xer);
	// blt cr6,0x82344cac
	if (ctx.cr6.lt) goto loc_82344CAC;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// addi r10,r10,-17136
	ctx.r10.s64 = ctx.r10.s64 + -17136;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r25,r10,-96
	ctx.r25.s64 = ctx.r10.s64 + -96;
	// beq cr6,0x82344c54
	if (ctx.cr6.eq) goto loc_82344C54;
	// bge cr6,0x823448c4
	if (!ctx.cr6.lt) goto loc_823448C4;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// neg r26,r11
	ctx.r26.s64 = -ctx.r11.s64;
	// addi r11,r10,-16784
	ctx.r11.s64 = ctx.r10.s64 + -16784;
	// addi r25,r11,-96
	ctx.r25.s64 = ctx.r11.s64 + -96;
loc_823448C4:
	// subfic r11,r23,0
	ctx.xer.ca = ctx.r23.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r23.s64;
	// lhz r10,106(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// sth r11,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r11.u16);
	// beq cr6,0x82344c54
	if (ctx.cr6.eq) goto loc_82344C54;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// li r24,-32768
	ctx.r24.s64 = -32768;
	// ori r23,r10,32768
	ctx.r23.u64 = ctx.r10.u64 | 32768;
loc_823448F4:
	// clrlwi. r11,r26,29
	ctx.r11.u64 = ctx.r26.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r25,r25,84
	ctx.r25.s64 = ctx.r25.s64 + 84;
	// srawi r26,r26,3
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 3;
	// beq 0x82344c4c
	if (ctx.cr0.eq) goto loc_82344C4C;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x82344934
	if (ctx.cr6.lt) goto loc_82344934;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x8233e4e0
	ctx.lr = 0x82344924;
	sub_8233E4E0(ctx, base);
	// lwz r11,118(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 118);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,118(r1)
	PPC_STORE_U32(ctx.r1.u32 + 118, ctx.r11.u32);
loc_82344934:
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// clrlwi r11,r10,17
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFF;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// xor r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// rlwinm r28,r8,0,16,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// clrlwi r30,r7,16
	ctx.r30.u64 = ctx.r7.u32 & 0xFFFF;
	// bge cr6,0x82344c34
	if (!ctx.cr6.lt) goto loc_82344C34;
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x82344c34
	if (!ctx.cr6.lt) goto loc_82344C34;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,49149
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49149, ctx.xer);
	// bgt cr6,0x82344c34
	if (ctx.cr6.gt) goto loc_82344C34;
	// cmplwi cr6,r11,16319
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16319, ctx.xer);
	// bgt cr6,0x82344998
	if (ctx.cr6.gt) goto loc_82344998;
loc_82344990:
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// b 0x82344c44
	goto loc_82344C44;
loc_82344998:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823449d4
	if (!ctx.cr6.eq) goto loc_823449D4;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x823449d4
	if (!ctx.cr0.eq) goto loc_823449D4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823449d4
	if (!ctx.cr6.eq) goto loc_823449D4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823449d4
	if (!ctx.cr6.eq) goto loc_823449D4;
	// sth r22,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r22.u16);
	// b 0x82344c4c
	goto loc_82344C4C;
loc_823449D4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82344a0c
	if (!ctx.cr6.eq) goto loc_82344A0C;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82344a0c
	if (!ctx.cr0.eq) goto loc_82344A0C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82344a0c
	if (!ctx.cr6.eq) goto loc_82344A0C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344990
	if (ctx.cr6.eq) goto loc_82344990;
loc_82344A0C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r8,r1,86
	ctx.r8.s64 = ctx.r1.s64 + 86;
	// li r3,5
	ctx.r3.s64 = 5;
loc_82344A18:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82344a84
	if (!ctx.cr6.gt) goto loc_82344A84;
	// addi r10,r1,106
	ctx.r10.s64 = ctx.r1.s64 + 106;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82344A34:
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82344a5c
	if (ctx.cr6.lt) goto loc_82344A5C;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82344a60
	if (!ctx.cr6.lt) goto loc_82344A60;
loc_82344A5C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82344A60:
	// stw r10,2(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82344a78
	if (ctx.cr6.eq) goto loc_82344A78;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_82344A78:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x82344a34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82344A34;
loc_82344A84:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bgt 0x82344a18
	if (ctx.cr0.gt) goto loc_82344A18;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-16382
	ctx.r11.s64 = ctx.r11.s64 + -16382;
loc_82344AA4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82344af4
	if (!ctx.cr0.gt) goto loc_82344AF4;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82344af4
	if (!ctx.cr0.eq) goto loc_82344AF4;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x82344aa4
	goto loc_82344AA4;
loc_82344AF4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82344b7c
	if (ctx.cr6.gt) goto loc_82344B7C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x82344b7c
	if (!ctx.cr0.lt) goto loc_82344B7C;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82344B18:
	// lhz r7,90(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82344b28
	if (ctx.cr0.eq) goto loc_82344B28;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82344B28:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x82344b18
	if (ctx.cr0.lt) goto loc_82344B18;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// beq cr6,0x82344b7c
	if (ctx.cr6.eq) goto loc_82344B7C;
	// lhz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82344B7C:
	// lhz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bgt cr6,0x82344b9c
	if (ctx.cr6.gt) goto loc_82344B9C;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82344bfc
	if (!ctx.cr6.eq) goto loc_82344BFC;
loc_82344B9C:
	// lwz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 86);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82344bf4
	if (!ctx.cr6.eq) goto loc_82344BF4;
	// lwz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 82);
	// stw r22,86(r1)
	PPC_STORE_U32(ctx.r1.u32 + 86, ctx.r22.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82344be8
	if (!ctx.cr6.eq) goto loc_82344BE8;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r22,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, ctx.r22.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82344bdc
	if (!ctx.cr6.eq) goto loc_82344BDC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r21,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r21.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82344bfc
	goto loc_82344BFC;
loc_82344BDC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82344bfc
	goto loc_82344BFC;
loc_82344BE8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, ctx.r10.u32);
	// b 0x82344bfc
	goto loc_82344BFC;
loc_82344BF4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,86(r1)
	PPC_STORE_U32(ctx.r1.u32 + 86, ctx.r10.u32);
loc_82344BFC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x82344c34
	if (!ctx.cr6.lt) goto loc_82344C34;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// stw r8,102(r1)
	PPC_STORE_U32(ctx.r1.u32 + 102, ctx.r8.u32);
	// stw r7,98(r1)
	PPC_STORE_U32(ctx.r1.u32 + 98, ctx.r7.u32);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// b 0x82344c4c
	goto loc_82344C4C;
loc_82344C34:
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// clrlwi. r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82344c44
	if (!ctx.cr0.eq) goto loc_82344C44;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
loc_82344C44:
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
loc_82344C4C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x823448f4
	if (!ctx.cr6.eq) goto loc_823448F4;
loc_82344C54:
	// lhz r11,106(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lwz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 102);
	// lwz r9,98(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 98);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// b 0x82344cc0
	goto loc_82344CC0;
loc_82344C68:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// b 0x82344cc0
	goto loc_82344CC0;
loc_82344C7C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r22,4
	ctx.r22.s64 = 4;
	// b 0x82344cc0
	goto loc_82344CC0;
loc_82344C94:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r22,2
	ctx.r22.s64 = 2;
	// b 0x82344cc0
	goto loc_82344CC0;
loc_82344CAC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r22,1
	ctx.r22.s64 = 1;
loc_82344CC0:
	// sth r11,10(r20)
	PPC_STORE_U16(ctx.r20.u32 + 10, ctx.r11.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r19,16
	ctx.r11.u64 = ctx.r19.u32 & 0xFFFF;
	// stw r8,6(r20)
	PPC_STORE_U32(ctx.r20.u32 + 6, ctx.r8.u32);
	// stw r9,2(r20)
	PPC_STORE_U32(ctx.r20.u32 + 2, ctx.r9.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r11.u16);
loc_82344CE0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8233e494
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344CE8"))) PPC_WEAK_FUNC(sub_82344CE8);
PPC_FUNC_IMPL(__imp__sub_82344CE8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344CEC"))) PPC_WEAK_FUNC(sub_82344CEC);
PPC_FUNC_IMPL(__imp__sub_82344CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344CF0"))) PPC_WEAK_FUNC(sub_82344CF0);
PPC_FUNC_IMPL(__imp__sub_82344CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// lfd f4,8192(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r12.u32 + 8192);
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// lfd f5,8200(r12)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r12.u32 + 8200);
	// fcmpu cr0,f1,f4
	ctx.cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// beq- 0x82344d30
	if (ctx.cr0.eq) goto loc_82344D30;
	// fabs f6,f1
	ctx.f6.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr0,f6,f5
	ctx.cr0.compare(ctx.f6.f64, ctx.f5.f64);
	// bge- 0x82344d30
	if (!ctx.cr0.lt) goto loc_82344D30;
	// fcmpu cr0,f1,f4
	ctx.cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// blt 0x82344d28
	if (ctx.cr0.lt) goto loc_82344D28;
	// fadd f4,f1,f5
	ctx.f4.f64 = ctx.f1.f64 + ctx.f5.f64;
	// fsub f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 - ctx.f5.f64;
	// b 0x82344d30
	goto loc_82344D30;
loc_82344D28:
	// fsub f4,f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64 - ctx.f5.f64;
	// fadd f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 + ctx.f5.f64;
loc_82344D30:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82344D34"))) PPC_WEAK_FUNC(sub_82344D34);
PPC_FUNC_IMPL(__imp__sub_82344D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344D38"))) PPC_WEAK_FUNC(sub_82344D38);
PPC_FUNC_IMPL(__imp__sub_82344D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e468
	ctx.lr = 0x82344D40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82344dcc
	if (!ctx.cr6.eq) goto loc_82344DCC;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82344da8
	if (!ctx.cr6.eq) goto loc_82344DA8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82342b78
	ctx.lr = 0x82344D78;
	sub_82342B78(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82344d8c
	if (!ctx.cr0.eq) goto loc_82344D8C;
loc_82344D84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82344dd0
	goto loc_82344DD0;
loc_82344D8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8233e4e0
	ctx.lr = 0x82344DA4;
	sub_8233E4E0(ctx, base);
	// b 0x82344dc0
	goto loc_82344DC0;
loc_82344DA8:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8234cc98
	ctx.lr = 0x82344DB4;
	sub_8234CC98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82344d84
	if (ctx.cr0.eq) goto loc_82344D84;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82344DC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82344DCC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82344DD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8233e4b8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344DD8"))) PPC_WEAK_FUNC(sub_82344DD8);
PPC_FUNC_IMPL(__imp__sub_82344DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e430
	ctx.lr = 0x82344DE0;
	__savegprlr_14(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r4,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r4.u32);
	// li r11,350
	ctx.r11.s64 = 350;
	// stw r6,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// sth r22,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r22.u16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x82344e30
	if (!ctx.cr6.eq) goto loc_82344E30;
loc_82344E18:
	// bl 0x82342a98
	ctx.lr = 0x82344E1C;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82344E28;
	sub_82342BF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8234601c
	goto loc_8234601C;
loc_82344E30:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82344e18
	if (ctx.cr6.eq) goto loc_82344E18;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82344ed4
	if (!ctx.cr0.eq) goto loc_82344ED4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82348750
	ctx.lr = 0x82344E4C;
	sub_82348750(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r11,r11,-24640
	ctx.r11.s64 = ctx.r11.s64 + -24640;
	// addi r8,r10,-17888
	ctx.r8.s64 = ctx.r10.s64 + -17888;
	// beq cr6,0x82344e88
	if (ctx.cr6.eq) goto loc_82344E88;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82344e88
	if (ctx.cr6.eq) goto loc_82344E88;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82344e8c
	goto loc_82344E8C;
loc_82344E88:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82344E8C:
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82344e18
	if (!ctx.cr0.eq) goto loc_82344E18;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82344ec4
	if (ctx.cr6.eq) goto loc_82344EC4;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82344ec4
	if (ctx.cr6.eq) goto loc_82344EC4;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82344ec8
	goto loc_82344EC8;
loc_82344EC4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82344EC8:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82344e18
	if (!ctx.cr0.eq) goto loc_82344E18;
loc_82344ED4:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82346018
	if (ctx.cr0.eq) goto loc_82346018;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// addi r11,r11,-18752
	ctx.r11.s64 = ctx.r11.s64 + -18752;
	// addi r10,r10,-18736
	ctx.r10.s64 = ctx.r10.s64 + -18736;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82344F08:
	// bl 0x8233e410
	ctx.lr = 0x82344F0C;
	sub_8233E410(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82344f84
	if (ctx.cr0.eq) goto loc_82344F84;
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
loc_82344F18:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82344f40
	if (ctx.cr0.lt) goto loc_82344F40;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82344f4c
	goto loc_82344F4C;
loc_82344F40:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82344F48;
	sub_82347DD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82344F4C:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82344f70
	if (ctx.cr6.eq) goto loc_82344F70;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8233e410
	ctx.lr = 0x82344F5C;
	sub_8233E410(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82344f18
	if (!ctx.cr0.eq) goto loc_82344F18;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234cd30
	ctx.lr = 0x82344F70;
	sub_8234CD30(ctx, base);
loc_82344F70:
	// lbzu r3,1(r19)
	ea = 1 + ctx.r19.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r19.u32 = ea;
	// bl 0x8233e410
	ctx.lr = 0x82344F78;
	sub_8233E410(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82344f70
	if (!ctx.cr0.eq) goto loc_82344F70;
	// b 0x82345fa8
	goto loc_82345FA8;
loc_82344F84:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x82345ee0
	if (!ctx.cr6.eq) goto loc_82345EE0;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// beq cr6,0x82345ec4
	if (ctx.cr6.eq) goto loc_82345EC4;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r16,1
	ctx.r16.s64 = 1;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// mr r15,r27
	ctx.r15.u64 = ctx.r27.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
loc_82344FD0:
	// lbzu r31,1(r19)
	ea = 1 + ctx.r19.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r19.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// bl 0x8233e3d0
	ctx.lr = 0x82344FE0;
	sub_8233E3D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82344ffc
	if (ctx.cr0.eq) goto loc_82344FFC;
	// mulli r11,r15,10
	ctx.r11.s64 = ctx.r15.s64 * 10;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r15,r11,-48
	ctx.r15.s64 = ctx.r11.s64 + -48;
	// b 0x82345138
	goto loc_82345138;
loc_82344FFC:
	// cmpwi cr6,r31,78
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 78, ctx.xer);
	// bgt cr6,0x823450bc
	if (ctx.cr6.gt) goto loc_823450BC;
	// beq cr6,0x82345138
	if (ctx.cr6.eq) goto loc_82345138;
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// beq cr6,0x823450ac
	if (ctx.cr6.eq) goto loc_823450AC;
	// cmpwi cr6,r31,70
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 70, ctx.xer);
	// beq cr6,0x82345138
	if (ctx.cr6.eq) goto loc_82345138;
	// cmpwi cr6,r31,73
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 73, ctx.xer);
	// beq cr6,0x82345034
	if (ctx.cr6.eq) goto loc_82345034;
	// cmpwi cr6,r31,76
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 76, ctx.xer);
	// bne cr6,0x823450d4
	if (!ctx.cr6.eq) goto loc_823450D4;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82345134
	goto loc_82345134;
loc_82345034:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r10,54
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 54, ctx.xer);
	// bne cr6,0x82345068
	if (!ctx.cr6.eq) goto loc_82345068;
	// lbz r9,2(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// addi r11,r19,2
	ctx.r11.s64 = ctx.r19.s64 + 2;
	// cmplwi cr6,r9,52
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 52, ctx.xer);
	// bne cr6,0x82345068
	if (!ctx.cr6.eq) goto loc_82345068;
loc_82345054:
	// std r27,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r27.u64);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_8234505C:
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r11,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r11.u32);
	// b 0x8234513c
	goto loc_8234513C;
loc_82345068:
	// cmplwi cr6,r10,51
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51, ctx.xer);
	// bne cr6,0x82345080
	if (!ctx.cr6.eq) goto loc_82345080;
	// lbz r9,2(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// addi r11,r19,2
	ctx.r11.s64 = ctx.r19.s64 + 2;
	// cmplwi cr6,r9,50
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 50, ctx.xer);
	// beq cr6,0x8234505c
	if (ctx.cr6.eq) goto loc_8234505C;
loc_82345080:
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// beq cr6,0x8234513c
	if (ctx.cr6.eq) goto loc_8234513C;
	// cmplwi cr6,r10,105
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// beq cr6,0x8234513c
	if (ctx.cr6.eq) goto loc_8234513C;
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// beq cr6,0x8234513c
	if (ctx.cr6.eq) goto loc_8234513C;
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x8234513c
	if (ctx.cr6.eq) goto loc_8234513C;
	// cmplwi cr6,r10,88
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 88, ctx.xer);
	// bne cr6,0x823450d8
	if (!ctx.cr6.eq) goto loc_823450D8;
	// b 0x8234513c
	goto loc_8234513C;
loc_823450AC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// b 0x82345138
	goto loc_82345138;
loc_823450BC:
	// cmpwi cr6,r31,104
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 104, ctx.xer);
	// beq cr6,0x82345120
	if (ctx.cr6.eq) goto loc_82345120;
	// cmpwi cr6,r31,108
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 108, ctx.xer);
	// beq cr6,0x823450e8
	if (ctx.cr6.eq) goto loc_823450E8;
	// cmpwi cr6,r31,119
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 119, ctx.xer);
	// beq cr6,0x8234510c
	if (ctx.cr6.eq) goto loc_8234510C;
loc_823450D4:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_823450D8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// b 0x8234513c
	goto loc_8234513C;
loc_823450E8:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r10,108
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 108, ctx.xer);
	// beq cr6,0x82345054
	if (ctx.cr6.eq) goto loc_82345054;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r16,r11
	ctx.r16.s64 = ctx.r11.s8;
	// b 0x82345110
	goto loc_82345110;
loc_8234510C:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_82345110:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// b 0x8234513c
	goto loc_8234513C;
loc_82345120:
	// extsb r10,r28
	ctx.r10.s64 = ctx.r28.s8;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
loc_82345134:
	// extsb r16,r11
	ctx.r16.s64 = ctx.r11.s8;
loc_82345138:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_8234513C:
	// extsb. r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344fd0
	if (ctx.cr0.eq) goto loc_82344FD0;
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bne 0x82345174
	if (!ctx.cr0.eq) goto loc_82345174;
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82345178
	goto loc_82345178;
loc_82345174:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_82345178:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bne 0x823451a0
	if (!ctx.cr0.eq) goto loc_823451A0;
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// beq cr6,0x8234519c
	if (ctx.cr6.eq) goto loc_8234519C;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// li r28,-1
	ctx.r28.s64 = -1;
	// bne cr6,0x823451a0
	if (!ctx.cr6.eq) goto loc_823451A0;
loc_8234519C:
	// li r28,1
	ctx.r28.s64 = 1;
loc_823451A0:
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// ori r19,r11,32
	ctx.r19.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r19,110
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 110, ctx.xer);
	// beq cr6,0x82345258
	if (ctx.cr6.eq) goto loc_82345258;
	// cmpwi cr6,r19,99
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 99, ctx.xer);
	// beq cr6,0x82345218
	if (ctx.cr6.eq) goto loc_82345218;
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 123, ctx.xer);
	// beq cr6,0x82345218
	if (ctx.cr6.eq) goto loc_82345218;
loc_823451C4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x823451ec
	if (ctx.cr0.lt) goto loc_823451EC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x823451f8
	goto loc_823451F8;
loc_823451EC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x823451F4;
	sub_82347DD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823451F8:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82345210
	if (ctx.cr6.eq) goto loc_82345210;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8233e410
	ctx.lr = 0x82345208;
	sub_8233E410(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823451c4
	if (!ctx.cr0.eq) goto loc_823451C4;
loc_82345210:
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// b 0x8234524c
	goto loc_8234524C;
loc_82345218:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82345240
	if (ctx.cr0.lt) goto loc_82345240;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8234524c
	goto loc_8234524C;
loc_82345240:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345248;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8234524C:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x82345fdc
	if (ctx.cr6.eq) goto loc_82345FDC;
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_82345258:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82345268
	if (ctx.cr6.eq) goto loc_82345268;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x82345fc8
	if (ctx.cr6.eq) goto loc_82345FC8;
loc_82345268:
	// addi r11,r19,-99
	ctx.r11.s64 = ctx.r19.s64 + -99;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82345e78
	if (ctx.cr6.gt) goto loc_82345E78;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,8208
	ctx.r12.s64 = ctx.r12.s64 + 8208;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// addi r12,r12,21148
	ctx.r12.s64 = ctx.r12.s64 + 21148;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8234529C;
	case 1:
		goto loc_82345760;
	case 2:
		goto loc_82345AA0;
	case 3:
		goto loc_82345AA0;
	case 4:
		goto loc_82345AA0;
	case 5:
		goto loc_82345E78;
	case 6:
		goto loc_823455F8;
	case 7:
		goto loc_82345E78;
	case 8:
		goto loc_82345E78;
	case 9:
		goto loc_82345E78;
	case 10:
		goto loc_82345E78;
	case 11:
		goto loc_82345A50;
	case 12:
		goto loc_82345760;
	case 13:
		goto loc_8234575C;
	case 14:
		goto loc_82345E78;
	case 15:
		goto loc_82345E78;
	case 16:
		goto loc_823452AC;
	case 17:
		goto loc_82345E78;
	case 18:
		goto loc_82345760;
	case 19:
		goto loc_82345E78;
	case 20:
		goto loc_82345E78;
	case 21:
		goto loc_823455FC;
	case 22:
		goto loc_82345E78;
	case 23:
		goto loc_82345E78;
	case 24:
		goto loc_823452BC;
	default:
		__builtin_unreachable();
	}
loc_8234529C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x823452ac
	if (!ctx.cr6.eq) goto loc_823452AC;
	// li r17,1
	ctx.r17.s64 = 1;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_823452AC:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8234541c
	if (!ctx.cr0.gt) goto loc_8234541C;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8234541c
	goto loc_8234541C;
loc_823452BC:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// ble 0x823452cc
	if (!ctx.cr0.gt) goto loc_823452CC;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
loc_823452CC:
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x823452e8
	if (!ctx.cr6.eq) goto loc_823452E8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_823452E8:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 123, ctx.xer);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// std r5,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r5.u64);
	// std r5,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r5.u64);
	// bne cr6,0x823453f8
	if (!ctx.cr6.eq) goto loc_823453F8;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x823453f8
	if (!ctx.cr6.eq) goto loc_823453F8;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r27,93
	ctx.r27.s64 = 93;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r11,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
	// b 0x823453f8
	goto loc_823453F8;
loc_82345328:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r8,45
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 45, ctx.xer);
	// bne cr6,0x823453d8
	if (!ctx.cr6.eq) goto loc_823453D8;
	// clrlwi. r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823453d8
	if (ctx.cr0.eq) goto loc_823453D8;
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,93
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 93, ctx.xer);
	// beq cr6,0x823453d8
	if (ctx.cr6.eq) goto loc_823453D8;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82345364
	if (!ctx.cr6.lt) goto loc_82345364;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8234536c
	goto loc_8234536C;
loc_82345364:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_8234536C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823453b0
	if (!ctx.cr6.lt) goto loc_823453B0;
loc_8234537C:
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r4,r6,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// stbx r4,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u8);
	// blt cr6,0x8234537c
	if (ctx.cr6.lt) goto loc_8234537C;
loc_823453B0:
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x823453f8
	goto loc_823453F8;
loc_823453D8:
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// slw r11,r6,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_823453F8:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x82345328
	if (!ctx.cr6.eq) goto loc_82345328;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345fdc
	if (ctx.cr6.eq) goto loc_82345FDC;
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 123, ctx.xer);
	// bne cr6,0x8234541c
	if (!ctx.cr6.eq) goto loc_8234541C;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
loc_8234541C:
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// beq cr6,0x8234543c
	if (ctx.cr6.eq) goto loc_8234543C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8234cd30
	ctx.lr = 0x8234543C;
	sub_8234CD30(ctx, base);
loc_8234543C:
	// lwz r29,124(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82345440:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82345454
	if (ctx.cr6.eq) goto loc_82345454;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x823455ac
	if (ctx.cr6.eq) goto loc_823455AC;
loc_82345454:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8234547c
	if (ctx.cr0.lt) goto loc_8234547C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345488
	goto loc_82345488;
loc_8234547C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345484;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82345488:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x82345594
	if (ctx.cr6.eq) goto loc_82345594;
	// cmpwi cr6,r19,99
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 99, ctx.xer);
	// beq cr6,0x823454ec
	if (ctx.cr6.eq) goto loc_823454EC;
	// cmpwi cr6,r19,115
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 115, ctx.xer);
	// bne cr6,0x823454b8
	if (!ctx.cr6.eq) goto loc_823454B8;
	// cmpwi cr6,r22,9
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 9, ctx.xer);
	// blt cr6,0x823454b0
	if (ctx.cr6.lt) goto loc_823454B0;
	// cmpwi cr6,r22,13
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 13, ctx.xer);
	// ble cr6,0x82345594
	if (!ctx.cr6.gt) goto loc_82345594;
loc_823454B0:
	// cmpwi cr6,r22,32
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 32, ctx.xer);
	// bne cr6,0x823454ec
	if (!ctx.cr6.eq) goto loc_823454EC;
loc_823454B8:
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 123, ctx.xer);
	// bne cr6,0x82345594
	if (!ctx.cr6.eq) goto loc_82345594;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// srawi r11,r22,3
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 3;
	// clrlwi r9,r22,29
	ctx.r9.u64 = ctx.r22.u32 & 0x7;
	// extsb r8,r25
	ctx.r8.s64 = ctx.r25.s8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// slw r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82345594
	if (ctx.cr0.eq) goto loc_82345594;
loc_823454EC:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234558c
	if (!ctx.cr6.eq) goto loc_8234558C;
	// extsb. r11,r24
	ctx.r11.s64 = ctx.r24.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82345578
	if (ctx.cr0.eq) goto loc_82345578;
	// stb r22,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r22.u8);
	// clrlwi r3,r22,24
	ctx.r3.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x8234b8a8
	ctx.lr = 0x8234550C;
	sub_8234B8A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82345548
	if (ctx.cr0.eq) goto loc_82345548;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8234553c
	if (ctx.cr0.lt) goto loc_8234553C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345544
	goto loc_82345544;
loc_8234553C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345544;
	sub_82347DD8(ctx, base);
loc_82345544:
	// stb r3,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r3.u8);
loc_82345548:
	// li r10,63
	ctx.r10.s64 = 63;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x8233d800
	ctx.lr = 0x82345568;
	sub_8233D800(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x82345584
	goto loc_82345584;
loc_82345578:
	// extsb r11,r22
	ctx.r11.s64 = ctx.r22.s8;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82345584:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// b 0x82345440
	goto loc_82345440;
loc_8234558C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82345440
	goto loc_82345440;
loc_82345594:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x823455ac
	if (ctx.cr6.eq) goto loc_823455AC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8234cd30
	ctx.lr = 0x823455AC;
	sub_8234CD30(ctx, base);
loc_823455AC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82345fdc
	if (ctx.cr6.eq) goto loc_82345FDC;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82345ea4
	if (!ctx.cr6.eq) goto loc_82345EA4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,99
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 99, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82345ea4
	if (ctx.cr6.eq) goto loc_82345EA4;
	// extsb. r11,r24
	ctx.r11.s64 = ctx.r24.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// beq 0x823455ec
	if (ctx.cr0.eq) goto loc_823455EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x82345ea4
	goto loc_82345EA4;
loc_823455EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82345ea4
	goto loc_82345EA4;
loc_823455F8:
	// li r19,100
	ctx.r19.s64 = 100;
loc_823455FC:
	// cmpwi cr6,r22,45
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 45, ctx.xer);
	// bne cr6,0x8234560c
	if (!ctx.cr6.eq) goto loc_8234560C;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x82345614
	goto loc_82345614;
loc_8234560C:
	// cmpwi cr6,r22,43
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 43, ctx.xer);
	// bne cr6,0x82345660
	if (!ctx.cr6.eq) goto loc_82345660;
loc_82345614:
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x8234562c
	if (!ctx.cr0.eq) goto loc_8234562C;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8234562c
	if (ctx.cr6.eq) goto loc_8234562C;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82345660
	goto loc_82345660;
loc_8234562C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82345654
	if (ctx.cr0.lt) goto loc_82345654;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345660
	goto loc_82345660;
loc_82345654:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x8234565C;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82345660:
	// cmpwi cr6,r22,48
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 48, ctx.xer);
	// bne cr6,0x823457c4
	if (!ctx.cr6.eq) goto loc_823457C4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82345690
	if (ctx.cr0.lt) goto loc_82345690;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8234569c
	goto loc_8234569C;
loc_82345690:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345698;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8234569C:
	// extsb r11,r22
	ctx.r11.s64 = ctx.r22.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82345700
	if (ctx.cr6.eq) goto loc_82345700;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x82345700
	if (ctx.cr6.eq) goto loc_82345700;
	// li r18,1
	ctx.r18.s64 = 1;
	// cmpwi cr6,r19,120
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 120, ctx.xer);
	// beq cr6,0x823456e0
	if (ctx.cr6.eq) goto loc_823456E0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x823456d8
	if (ctx.cr6.eq) goto loc_823456D8;
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x823456d8
	if (!ctx.cr0.eq) goto loc_823456D8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_823456D8:
	// li r19,111
	ctx.r19.s64 = 111;
	// b 0x823457c4
	goto loc_823457C4;
loc_823456E0:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x823456f8
	if (ctx.cr6.eq) goto loc_823456F8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8234cd30
	ctx.lr = 0x823456F8;
	sub_8234CD30(ctx, base);
loc_823456F8:
	// li r22,48
	ctx.r22.s64 = 48;
	// b 0x823457c4
	goto loc_823457C4;
loc_82345700:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82345728
	if (ctx.cr0.lt) goto loc_82345728;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345734
	goto loc_82345734;
loc_82345728:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345730;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82345734:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82345754
	if (ctx.cr6.eq) goto loc_82345754;
	// addi r15,r15,-2
	ctx.r15.s64 = ctx.r15.s64 + -2;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bge cr6,0x82345754
	if (!ctx.cr6.lt) goto loc_82345754;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82345754:
	// li r19,120
	ctx.r19.s64 = 120;
	// b 0x823457c4
	goto loc_823457C4;
loc_8234575C:
	// li r16,1
	ctx.r16.s64 = 1;
loc_82345760:
	// cmpwi cr6,r22,45
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 45, ctx.xer);
	// bne cr6,0x82345770
	if (!ctx.cr6.eq) goto loc_82345770;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x82345778
	goto loc_82345778;
loc_82345770:
	// cmpwi cr6,r22,43
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 43, ctx.xer);
	// bne cr6,0x823457c4
	if (!ctx.cr6.eq) goto loc_823457C4;
loc_82345778:
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x82345790
	if (!ctx.cr0.eq) goto loc_82345790;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82345790
	if (ctx.cr6.eq) goto loc_82345790;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x823457c4
	goto loc_823457C4;
loc_82345790:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x823457b8
	if (ctx.cr0.lt) goto loc_823457B8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x823457c4
	goto loc_823457C4;
loc_823457B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x823457C0;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_823457C4:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8234590c
	if (ctx.cr6.eq) goto loc_8234590C;
	// bne 0x823458f4
	if (!ctx.cr0.eq) goto loc_823458F4;
loc_823457D4:
	// cmpwi cr6,r19,120
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 120, ctx.xer);
	// beq cr6,0x82345820
	if (ctx.cr6.eq) goto loc_82345820;
	// cmpwi cr6,r19,112
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 112, ctx.xer);
	// beq cr6,0x82345820
	if (ctx.cr6.eq) goto loc_82345820;
	// clrlwi r3,r22,24
	ctx.r3.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x8233e3d0
	ctx.lr = 0x823457EC;
	sub_8233E3D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234585c
	if (ctx.cr0.eq) goto loc_8234585C;
	// cmpwi cr6,r19,111
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 111, ctx.xer);
	// bne cr6,0x82345814
	if (!ctx.cr6.eq) goto loc_82345814;
	// cmpwi cr6,r22,56
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 56, ctx.xer);
	// bge cr6,0x8234585c
	if (!ctx.cr6.lt) goto loc_8234585C;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r11,r11,3,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
loc_8234580C:
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x82345864
	goto loc_82345864;
loc_82345814:
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// b 0x8234580c
	goto loc_8234580C;
loc_82345820:
	// clrlwi r30,r22,24
	ctx.r30.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e3f0
	ctx.lr = 0x8234582C;
	sub_8233E3F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234585c
	if (ctx.cr0.eq) goto loc_8234585C;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r11,r11,4,59
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x8233e3d0
	ctx.lr = 0x82345848;
	sub_8233E3D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82345864
	if (!ctx.cr0.eq) goto loc_82345864;
	// rlwinm r11,r22,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r22,r11,-7
	ctx.r22.s64 = ctx.r11.s64 + -7;
	// b 0x82345864
	goto loc_82345864;
loc_8234585C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82345864:
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823458d4
	if (!ctx.cr0.eq) goto loc_823458D4;
	// addi r11,r22,-48
	ctx.r11.s64 = ctx.r22.s64 + -48;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// beq cr6,0x8234589c
	if (ctx.cr6.eq) goto loc_8234589C;
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x8234589c
	if (!ctx.cr0.eq) goto loc_8234589C;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x823458ec
	goto loc_823458EC;
loc_8234589C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x823458c4
	if (ctx.cr0.lt) goto loc_823458C4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x823458ec
	goto loc_823458EC;
loc_823458C4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x823458CC;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x823458ec
	goto loc_823458EC;
loc_823458D4:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x823458ec
	if (ctx.cr6.eq) goto loc_823458EC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8234cd30
	ctx.lr = 0x823458EC;
	sub_8234CD30(ctx, base);
loc_823458EC:
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823457d4
	if (ctx.cr0.eq) goto loc_823457D4;
loc_823458F4:
	// extsb. r11,r20
	ctx.r11.s64 = ctx.r20.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82345a1c
	if (ctx.cr0.eq) goto loc_82345A1C;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x82345a1c
	goto loc_82345A1C;
loc_8234590C:
	// bne 0x82345a10
	if (!ctx.cr0.eq) goto loc_82345A10;
loc_82345910:
	// cmpwi cr6,r19,120
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 120, ctx.xer);
	// beq cr6,0x82345950
	if (ctx.cr6.eq) goto loc_82345950;
	// cmpwi cr6,r19,112
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 112, ctx.xer);
	// beq cr6,0x82345950
	if (ctx.cr6.eq) goto loc_82345950;
	// clrlwi r3,r22,24
	ctx.r3.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x8233e3d0
	ctx.lr = 0x82345928;
	sub_8233E3D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82345984
	if (ctx.cr0.eq) goto loc_82345984;
	// cmpwi cr6,r19,111
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 111, ctx.xer);
	// bne cr6,0x82345948
	if (!ctx.cr6.eq) goto loc_82345948;
	// cmpwi cr6,r22,56
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 56, ctx.xer);
	// bge cr6,0x82345984
	if (!ctx.cr6.lt) goto loc_82345984;
	// rlwinm r23,r23,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8234598c
	goto loc_8234598C;
loc_82345948:
	// mulli r23,r23,10
	ctx.r23.s64 = ctx.r23.s64 * 10;
	// b 0x8234598c
	goto loc_8234598C;
loc_82345950:
	// clrlwi r30,r22,24
	ctx.r30.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e3f0
	ctx.lr = 0x8234595C;
	sub_8233E3F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82345984
	if (ctx.cr0.eq) goto loc_82345984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r23,r23,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8233e3d0
	ctx.lr = 0x82345970;
	sub_8233E3D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8234598c
	if (!ctx.cr0.eq) goto loc_8234598C;
	// rlwinm r11,r22,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r22,r11,-7
	ctx.r22.s64 = ctx.r11.s64 + -7;
	// b 0x8234598c
	goto loc_8234598C;
loc_82345984:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_8234598C:
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823459f0
	if (!ctx.cr0.eq) goto loc_823459F0;
	// add r11,r23,r22
	ctx.r11.u64 = ctx.r23.u64 + ctx.r22.u64;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r23,r11,-48
	ctx.r23.s64 = ctx.r11.s64 + -48;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x823459b8
	if (ctx.cr6.eq) goto loc_823459B8;
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x823459b8
	if (!ctx.cr0.eq) goto loc_823459B8;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82345a08
	goto loc_82345A08;
loc_823459B8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x823459e0
	if (ctx.cr0.lt) goto loc_823459E0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345a08
	goto loc_82345A08;
loc_823459E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x823459E8;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x82345a08
	goto loc_82345A08;
loc_823459F0:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x82345a08
	if (ctx.cr6.eq) goto loc_82345A08;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8234cd30
	ctx.lr = 0x82345A08;
	sub_8234CD30(ctx, base);
loc_82345A08:
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82345910
	if (ctx.cr0.eq) goto loc_82345910;
loc_82345A10:
	// extsb. r11,r20
	ctx.r11.s64 = ctx.r20.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82345a1c
	if (ctx.cr0.eq) goto loc_82345A1C;
	// neg r23,r23
	ctx.r23.s64 = -ctx.r23.s64;
loc_82345A1C:
	// addi r11,r19,-70
	ctx.r11.s64 = ctx.r19.s64 + -70;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 & ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82345fdc
	if (ctx.cr6.eq) goto loc_82345FDC;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82345ea4
	if (!ctx.cr6.eq) goto loc_82345EA4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x82345a6c
	goto loc_82345A6C;
loc_82345A50:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82345ea4
	if (!ctx.cr6.eq) goto loc_82345EA4;
	// bl 0x8233c020
	ctx.lr = 0x82345A64;
	sub_8233C020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82345ea4
	if (ctx.cr0.eq) goto loc_82345EA4;
loc_82345A6C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82345a84
	if (ctx.cr6.eq) goto loc_82345A84;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// b 0x82345ea4
	goto loc_82345EA4;
loc_82345A84:
	// extsb. r11,r16
	ctx.r11.s64 = ctx.r16.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// beq 0x82345a98
	if (ctx.cr0.eq) goto loc_82345A98;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// b 0x82345ea4
	goto loc_82345EA4;
loc_82345A98:
	// sth r23,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r23.u16);
	// b 0x82345ea4
	goto loc_82345EA4;
loc_82345AA0:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r22,45
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 45, ctx.xer);
	// bne cr6,0x82345ac0
	if (!ctx.cr6.eq) goto loc_82345AC0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,45
	ctx.r10.s64 = 45;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82345ac8
	goto loc_82345AC8;
loc_82345AC0:
	// cmpwi cr6,r22,43
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 43, ctx.xer);
	// bne cr6,0x82345b00
	if (!ctx.cr6.eq) goto loc_82345B00;
loc_82345AC8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82345af4
	if (ctx.cr0.lt) goto loc_82345AF4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345b00
	goto loc_82345B00;
loc_82345AF4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345AFC;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82345B00:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x82345b80
	if (!ctx.cr6.eq) goto loc_82345B80;
	// li r15,-1
	ctx.r15.s64 = -1;
	// b 0x82345b80
	goto loc_82345B80;
loc_82345B10:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x82345b94
	if (ctx.cr6.eq) goto loc_82345B94;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82344d38
	ctx.lr = 0x82345B44;
	sub_82344D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82345fdc
	if (ctx.cr0.eq) goto loc_82345FDC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82345b74
	if (ctx.cr0.lt) goto loc_82345B74;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345b80
	goto loc_82345B80;
loc_82345B74:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345B7C;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82345B80:
	// clrlwi r31,r22,24
	ctx.r31.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e3d0
	ctx.lr = 0x82345B8C;
	sub_8233E3D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82345b10
	if (!ctx.cr0.eq) goto loc_82345B10;
loc_82345B94:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// extsb r10,r31
	ctx.r10.s64 = ctx.r31.s8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82345cac
	if (!ctx.cr6.eq) goto loc_82345CAC;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x82345cac
	if (ctx.cr6.eq) goto loc_82345CAC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82345bec
	if (ctx.cr0.lt) goto loc_82345BEC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345bf8
	goto loc_82345BF8;
loc_82345BEC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345BF4;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82345BF8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82344d38
	ctx.lr = 0x82345C1C;
	sub_82344D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82345fdc
	if (ctx.cr0.eq) goto loc_82345FDC;
	// b 0x82345c98
	goto loc_82345C98;
loc_82345C28:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x82345cac
	if (ctx.cr6.eq) goto loc_82345CAC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82344d38
	ctx.lr = 0x82345C5C;
	sub_82344D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82345fdc
	if (ctx.cr0.eq) goto loc_82345FDC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82345c8c
	if (ctx.cr0.lt) goto loc_82345C8C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345c98
	goto loc_82345C98;
loc_82345C8C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345C94;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82345C98:
	// clrlwi r31,r22,24
	ctx.r31.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e3d0
	ctx.lr = 0x82345CA4;
	sub_8233E3D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82345c28
	if (!ctx.cr0.eq) goto loc_82345C28;
loc_82345CAC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82345e10
	if (ctx.cr6.eq) goto loc_82345E10;
	// cmpwi cr6,r22,101
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 101, ctx.xer);
	// beq cr6,0x82345cc4
	if (ctx.cr6.eq) goto loc_82345CC4;
	// cmpwi cr6,r22,69
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 69, ctx.xer);
	// bne cr6,0x82345e10
	if (!ctx.cr6.eq) goto loc_82345E10;
loc_82345CC4:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r29,r15,-1
	ctx.r29.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x82345e10
	if (ctx.cr6.eq) goto loc_82345E10;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,101
	ctx.r10.s64 = 101;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82344d38
	ctx.lr = 0x82345CF8;
	sub_82344D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82345fdc
	if (ctx.cr0.eq) goto loc_82345FDC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82345d28
	if (ctx.cr0.lt) goto loc_82345D28;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345d34
	goto loc_82345D34;
loc_82345D28:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345D30;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82345D34:
	// cmpwi cr6,r22,45
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 45, ctx.xer);
	// bne cr6,0x82345d70
	if (!ctx.cr6.eq) goto loc_82345D70;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82344d38
	ctx.lr = 0x82345D64;
	sub_82344D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82345fdc
	if (ctx.cr0.eq) goto loc_82345FDC;
	// b 0x82345d78
	goto loc_82345D78;
loc_82345D70:
	// cmpwi cr6,r22,43
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 43, ctx.xer);
	// bne cr6,0x82345dfc
	if (!ctx.cr6.eq) goto loc_82345DFC;
loc_82345D78:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// bne cr6,0x82345dc8
	if (!ctx.cr6.eq) goto loc_82345DC8;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82345dfc
	goto loc_82345DFC;
loc_82345D8C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// beq cr6,0x82345e10
	if (ctx.cr6.eq) goto loc_82345E10;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82344d38
	ctx.lr = 0x82345DC0;
	sub_82344D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82345fdc
	if (ctx.cr0.eq) goto loc_82345FDC;
loc_82345DC8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82345df0
	if (ctx.cr0.lt) goto loc_82345DF0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345dfc
	goto loc_82345DFC;
loc_82345DF0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345DF8;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82345DFC:
	// clrlwi r31,r22,24
	ctx.r31.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e3d0
	ctx.lr = 0x82345E08;
	sub_8233E3D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82345d8c
	if (!ctx.cr0.eq) goto loc_82345D8C;
loc_82345E10:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x82345e28
	if (ctx.cr6.eq) goto loc_82345E28;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8234cd30
	ctx.lr = 0x82345E28;
	sub_8234CD30(ctx, base);
loc_82345E28:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82345fdc
	if (ctx.cr6.eq) goto loc_82345FDC;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82345ea4
	if (!ctx.cr6.eq) goto loc_82345EA4;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// extsb r11,r16
	ctx.r11.s64 = ctx.r16.s8;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stbx r10,r30,r5
	PPC_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x82345E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82345ea4
	goto loc_82345EA4;
loc_82345E78:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x82345fc8
	if (!ctx.cr6.eq) goto loc_82345FC8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bne cr6,0x82345ea4
	if (!ctx.cr6.eq) goto loc_82345EA4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
loc_82345EA4:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r10,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r10.u32);
	// rotlwi r19,r10,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82345f80
	goto loc_82345F80;
loc_82345EC4:
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x82345ee0
	if (!ctx.cr6.eq) goto loc_82345EE0;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// bne cr6,0x82345ee0
	if (!ctx.cr6.eq) goto loc_82345EE0;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
loc_82345EE0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82345f08
	if (ctx.cr0.lt) goto loc_82345F08;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345f14
	goto loc_82345F14;
loc_82345F08:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345F10;
	sub_82347DD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82345F14:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x82345fc8
	if (!ctx.cr6.eq) goto loc_82345FC8;
	// clrlwi r3,r22,24
	ctx.r3.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x8234b8a8
	ctx.lr = 0x82345F30;
	sub_8234B8A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82345f80
	if (ctx.cr0.eq) goto loc_82345F80;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r31,r14,1
	ctx.r31.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x82345f60
	if (ctx.cr0.lt) goto loc_82345F60;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82345f68
	goto loc_82345F68;
loc_82345F60:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347dd8
	ctx.lr = 0x82345F68;
	sub_82347DD8(ctx, base);
loc_82345F68:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82345fb8
	if (!ctx.cr6.eq) goto loc_82345FB8;
	// addi r14,r31,-1
	ctx.r14.s64 = ctx.r31.s64 + -1;
loc_82345F80:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// bne cr6,0x82345fa8
	if (!ctx.cr6.eq) goto loc_82345FA8;
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x82345fdc
	if (!ctx.cr6.eq) goto loc_82345FDC;
	// lwz r11,716(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x82345fdc
	if (!ctx.cr6.eq) goto loc_82345FDC;
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_82345FA8:
	// lbz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82344f08
	if (!ctx.cr0.eq) goto loc_82344F08;
	// b 0x82345fdc
	goto loc_82345FDC;
loc_82345FB8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82345fc8
	if (ctx.cr6.eq) goto loc_82345FC8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8234cd30
	ctx.lr = 0x82345FC8;
	sub_8234CD30(ctx, base);
loc_82345FC8:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x82345fdc
	if (ctx.cr6.eq) goto loc_82345FDC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8234cd30
	ctx.lr = 0x82345FDC;
	sub_8234CD30(ctx, base);
loc_82345FDC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82345ff0
	if (!ctx.cr6.eq) goto loc_82345FF0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82341940
	ctx.lr = 0x82345FF0;
	sub_82341940(ctx, base);
loc_82345FF0:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// bne cr6,0x82346018
	if (!ctx.cr6.eq) goto loc_82346018;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234601c
	if (!ctx.cr6.eq) goto loc_8234601C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234601c
	if (!ctx.cr0.eq) goto loc_8234601C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8234601c
	goto loc_8234601C;
loc_82346018:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8234601C:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x8233e480
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82346024"))) PPC_WEAK_FUNC(sub_82346024);
PPC_FUNC_IMPL(__imp__sub_82346024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82346028"))) PPC_WEAK_FUNC(sub_82346028);
PPC_FUNC_IMPL(__imp__sub_82346028) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8234ced8
	ctx.lr = 0x82346048;
	sub_8234CED8(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// beq cr6,0x82346060
	if (ctx.cr6.eq) goto loc_82346060;
loc_82346050:
	// lbzu r3,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// bl 0x8233e3d0
	ctx.lr = 0x82346058;
	sub_8233E3D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82346050
	if (!ctx.cr0.eq) goto loc_82346050;
loc_82346060:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8234ced8
	ctx.lr = 0x8234606C;
	sub_8234CED8(ctx, base);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// bne cr6,0x82346078
	if (!ctx.cr6.eq) goto loc_82346078;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82346078:
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r11,-18752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18752);
	// lwz r9,188(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
loc_82346098:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x82346098
	if (!ctx.cr0.eq) goto loc_82346098;
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

__attribute__((alias("__imp__sub_823460C4"))) PPC_WEAK_FUNC(sub_823460C4);
PPC_FUNC_IMPL(__imp__sub_823460C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823460C8"))) PPC_WEAK_FUNC(sub_823460C8);
PPC_FUNC_IMPL(__imp__sub_823460C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,-18752(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18752);
	// beq 0x82346100
	if (ctx.cr0.eq) goto loc_82346100;
	// lwz r10,188(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_823460EC:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82346100
	if (ctx.cr6.eq) goto loc_82346100;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823460ec
	if (!ctx.cr0.eq) goto loc_823460EC;
loc_82346100:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82346128
	goto loc_82346128;
loc_82346114:
	// cmpwi cr6,r10,101
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 101, ctx.xer);
	// beq cr6,0x82346130
	if (ctx.cr6.eq) goto loc_82346130;
	// cmpwi cr6,r10,69
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 69, ctx.xer);
	// beq cr6,0x82346130
	if (ctx.cr6.eq) goto loc_82346130;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_82346128:
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82346114
	if (!ctx.cr0.eq) goto loc_82346114;
loc_82346130:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82346134:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// beq cr6,0x82346134
	if (ctx.cr6.eq) goto loc_82346134;
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82346160
	if (!ctx.cr6.eq) goto loc_82346160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82346160:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82346164:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bne 0x82346164
	if (!ctx.cr0.eq) goto loc_82346164;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82346178"))) PPC_WEAK_FUNC(sub_82346178);
PPC_FUNC_IMPL(__imp__sub_82346178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,9016(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9016);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82346198"))) PPC_WEAK_FUNC(sub_82346198);
PPC_FUNC_IMPL(__imp__sub_82346198) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823461d0
	if (ctx.cr6.eq) goto loc_823461D0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8234cef0
	ctx.lr = 0x823461C4;
	sub_8234CEF0(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x823461e0
	goto loc_823461E0;
loc_823461D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8234cf98
	ctx.lr = 0x823461D8;
	sub_8234CF98(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823461E0:
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

__attribute__((alias("__imp__sub_823461F4"))) PPC_WEAK_FUNC(sub_823461F4);
PPC_FUNC_IMPL(__imp__sub_823461F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823461F8"))) PPC_WEAK_FUNC(sub_823461F8);
PPC_FUNC_IMPL(__imp__sub_823461F8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82346198
	sub_82346198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82346200"))) PPC_WEAK_FUNC(sub_82346200);
PPC_FUNC_IMPL(__imp__sub_82346200) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82346028
	sub_82346028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82346208"))) PPC_WEAK_FUNC(sub_82346208);
PPC_FUNC_IMPL(__imp__sub_82346208) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823460c8
	sub_823460C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82346210"))) PPC_WEAK_FUNC(sub_82346210);
PPC_FUNC_IMPL(__imp__sub_82346210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8233e45c
	ctx.lr = 0x82346218;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82346254
	if (!ctx.cr6.eq) goto loc_82346254;
	// bl 0x82342a98
	ctx.lr = 0x8234623C;
	sub_82342A98(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82342bf0
	ctx.lr = 0x82346248;
	sub_82342BF0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
loc_8234624C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8233e4ac
	__restgprlr_25(ctx, base);
	return;
loc_82346254:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82346274
	if (!ctx.cr6.eq) goto loc_82346274;
	// bl 0x82342a98
	ctx.lr = 0x82346260;
	sub_82342A98(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82346264:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x82342bf0
	ctx.lr = 0x8234626C;
	sub_82342BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8234624c
	goto loc_8234624C;
loc_82346274:
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// addme r11,r11
	temp.u64 = ctx.r11.u64 + ctx.xer.ca - 1;
	ctx.xer.ca = (ctx.r11.u64 > temp.u64) || (ctx.r11.u64 == temp.u64 && ctx.xer.ca);
	ctx.r11.u64 = temp.u64;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234629c
	if (ctx.cr6.gt) goto loc_8234629C;
	// bl 0x82342a98
	ctx.lr = 0x82346294;
	sub_82342A98(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82346264
	goto loc_82346264;
loc_8234629C:
	// extsb. r28,r8
	ctx.r28.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x823462ec
	if (ctx.cr0.eq) goto loc_823462EC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ble cr6,0x823462ec
	if (!ctx.cr6.gt) goto loc_823462EC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_823462C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823462c4
	if (!ctx.cr6.eq) goto loc_823462C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8233eb90
	ctx.lr = 0x823462EC;
	sub_8233EB90(ctx, base);
loc_823462EC:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r26,45
	ctx.r26.s64 = 45;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// bne cr6,0x82346308
	if (!ctx.cr6.eq) goto loc_82346308;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
loc_82346308:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82346338
	if (!ctx.cr6.gt) goto loc_82346338;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,-18752(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18752);
	// lwz r9,188(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 188);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_82346338:
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x82346358
	if (!ctx.cr6.eq) goto loc_82346358;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82346360
	goto loc_82346360;
loc_82346358:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82346360:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,8316
	ctx.r5.s64 = ctx.r11.s64 + 8316;
	// bl 0x8233e318
	ctx.lr = 0x82346370;
	sub_8233E318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82346448
	if (!ctx.cr0.eq) goto loc_82346448;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8234638c
	if (ctx.cr6.eq) goto loc_8234638C;
	// li r11,69
	ctx.r11.s64 = 69;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_8234638C:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82346418
	if (ctx.cr6.eq) goto loc_82346418;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823463b4
	if (!ctx.cr0.lt) goto loc_823463B4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r26.u8);
loc_823463B4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// blt cr6,0x823463e0
	if (ctx.cr6.lt) goto loc_823463E0;
	// li r7,100
	ctx.r7.s64 = 100;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = ctx.r11.s32 / ctx.r7.s32;
	// divw r7,r11,r7
	ctx.r7.s32 = ctx.r11.s32 / ctx.r7.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,100
	ctx.r8.s64 = ctx.r7.s64 * 100;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_823463E0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8234640c
	if (ctx.cr6.lt) goto loc_8234640C;
	// li r7,10
	ctx.r7.s64 = 10;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = ctx.r11.s32 / ctx.r7.s32;
	// divw r7,r11,r7
	ctx.r7.s32 = ctx.r11.s32 / ctx.r7.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 * 10;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_8234640C:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_82346418:
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// lwz r11,23808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23808);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82346440
	if (ctx.cr0.eq) goto loc_82346440;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82346440
	if (!ctx.cr6.eq) goto loc_82346440;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x8233eb90
	ctx.lr = 0x82346440;
	sub_8233EB90(ctx, base);
loc_82346440:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8234624c
	goto loc_8234624C;
loc_82346448:
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
	// bl 0x82342cc8
	ctx.lr = 0x82346460;
	sub_82342CC8(ctx, base);
}

