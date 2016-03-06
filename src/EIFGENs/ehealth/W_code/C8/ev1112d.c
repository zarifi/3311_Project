/*
 * Class EV_COORDINATE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1112 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1112 [] = {0xFF01,237,1111,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1112 [] = {0xFF01,1111,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1112 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1112 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1112 [] = {0xFF01,1111,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1112 [] = {0xFF01,1111,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1112 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1112 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1112 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1112 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1112 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1112 [] = {0xFF01,1111,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1112 [] = {0xFF01,220,0xFFFF};


static const struct desc_info desc_1112[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1112), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1112), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1112), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1112), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1112), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1112), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1112), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1112), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1112), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1112), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1112), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1112), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x08AF /*1111*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1112), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16241, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16242, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16243, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16244, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16245, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16246, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16247, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16248, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16249, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 16233, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0185 /*194*/), 16234, 0},
	{EIF_NON_GENERIC(0x0185 /*194*/), 16235, 8},
	{EIF_GENERIC(NULL), 16236, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16237, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16238, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 16239, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1112), 16240, 0xFFFFFFFF},
};
void Init1112(void)
{
	IDSC(desc_1112, 0, 1111);
	IDSC(desc_1112 + 1, 1, 1111);
	IDSC(desc_1112 + 32, 496, 1111);
	IDSC(desc_1112 + 48, 336, 1111);
}


#ifdef __cplusplus
}
#endif
