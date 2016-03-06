/*
 * Code for class EV_PICK_AND_DROPABLE_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1332_13223(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13224(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13225(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13226(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13227(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13228(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13229(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13230(EIF_REFERENCE);
extern void F1332_13231(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1332_13232(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1332_13233(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1332_13234(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1332_13235(EIF_REFERENCE);
extern void F1332_13236(EIF_REFERENCE);
extern void F1332_13239(EIF_REFERENCE);
extern void F1332_13240(EIF_REFERENCE);
extern void F1332_13241(EIF_REFERENCE);
extern void F1332_13242(EIF_REFERENCE);
extern void F1332_13243(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1332_13244(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1332_13245(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1332_13246(EIF_REFERENCE);
extern void F1332_13247(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13248(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13249(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13250(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13251(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13252(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13253(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13254(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13255(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13256(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13257(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13258(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13259(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13260(EIF_REFERENCE);
extern void F1332_13263(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1332_13264(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1332_13265(EIF_REFERENCE);
extern void F1332_13269(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1332_13270(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1332_13275(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13276(EIF_REFERENCE);
static EIF_TYPED_VALUE F1332_13277_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1332_13277(EIF_REFERENCE);
extern void F1332_16370(EIF_REFERENCE, int);
extern void EIF_Minit1332(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PICK_AND_DROPABLE_I}.pebble */
EIF_TYPED_VALUE F1332_13223 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10154,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_I}.pebble_function */
EIF_TYPED_VALUE F1332_13224 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10155,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_I}.pebble_positioning_enabled */
EIF_TYPED_VALUE F1332_13225 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pebble_positioning_enabled";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19065);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1331, Current, 19065);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = *(EIF_BOOLEAN *)(Current + RTWA(10186, Dtype(Current)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_PICK_AND_DROPABLE_I}.configurable_target_menu_handler */
EIF_TYPED_VALUE F1332_13226 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10157,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_I}.accept_cursor */
EIF_TYPED_VALUE F1332_13227 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10158,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_I}.deny_cursor */
EIF_TYPED_VALUE F1332_13228 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10159,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_I}.pebble_x_position */
EIF_TYPED_VALUE F1332_13229 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pebble_x_position";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19069);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1331, Current, 19069);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10184, Dtype(Current)));
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_PICK_AND_DROPABLE_I}.pebble_y_position */
EIF_TYPED_VALUE F1332_13230 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pebble_y_position";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19070);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1331, Current, 19070);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10185, Dtype(Current)));
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_PICK_AND_DROPABLE_I}.show_configurable_target_menu */
void F1332_13231 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "show_configurable_target_menu";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE ub2x = {{0}, SK_BOOL};
#define ub2 ub2x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 2, 19071);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19071);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10206, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9625, "pick_and_drop_source", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	if ((EIF_BOOLEAN)(tr2 == NULL)) {
		RTHOOK(2);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = ((EIF_INTEGER_32) 3L);
		ub1 = (EIF_BOOLEAN) 0;
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		ur8_1 = tr8_1;
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		ur8_2 = tr8_2;
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		ur8_3 = tr8_3;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9951, dtype))(Current)).it_i4);
		ui4_4 = (EIF_INTEGER_32) (ti4_1 + arg1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9952, dtype))(Current)).it_i4);
		ui4_5 = (EIF_INTEGER_32) (ti4_2 + arg2);
		ub2 = (EIF_BOOLEAN) 1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10192, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ub1x, ur8_1x, ur8_2x, ur8_3x, ui4_4x, ui4_5x, ub2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ub1
#undef ub2
#undef arg2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_I}.set_pebble_position */
void F1332_13232 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_pebble_position";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 2, 19072);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19072);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10184, 0x14000000, 1); /* pick_x */
	ti2_1 = (EIF_INTEGER_16) arg1;
	*(EIF_INTEGER_16 *)(Current + RTWA(10184, dtype)) = (EIF_INTEGER_16) ti2_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10185, 0x14000000, 1); /* pick_y */
	ti2_1 = (EIF_INTEGER_16) arg2;
	*(EIF_INTEGER_16 *)(Current + RTWA(10185, dtype)) = (EIF_INTEGER_16) ti2_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("pick_x_assigned", EX_POST);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10184, dtype));
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("pick_y_assigned", EX_POST);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10185, dtype));
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_I}.set_pebble */
void F1332_13233 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_pebble";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 1, 19073);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19073);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_pebble_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10155, 0xF8000173, 0); /* pebble_function */
	*(EIF_REFERENCE *)(Current + RTWA(10155, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 10154, 0xF8000000, 0); /* pebble */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(10154, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10168, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("pebble_assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10154, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_transport_enabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10179, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_I}.set_pebble_function */
void F1332_13234 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_pebble_function";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 1, 19074);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19074);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,371,0xFF01,0xFFF9,0,174,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1331, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_function_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10154, 0xF8000000, 0); /* pebble */
	*(EIF_REFERENCE *)(Current + RTWA(10154, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 10155, 0xF8000173, 0); /* pebble_function */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(10155, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10168, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("pebble_function_assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10155, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_transport_enabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10179, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_I}.remove_pebble */
void F1332_13235 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove_pebble";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19075);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19075);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10154, 0xF8000000, 0); /* pebble */
	*(EIF_REFERENCE *)(Current + RTWA(10154, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10155, 0xF8000173, 0); /* pebble_function */
	*(EIF_REFERENCE *)(Current + RTWA(10155, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10169, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("pebble_removed", EX_POST);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10154, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10155, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 == NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_transport_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10179, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {EV_PICK_AND_DROPABLE_I}.reset_pebble_function */
void F1332_13236 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset_pebble_function";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19076);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19076);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10155, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10154, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10155, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr5 != NULL)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 10154, 0xF8000000, 0); /* pebble */
		*(EIF_REFERENCE *)(Current + RTWA(10154, dtype)) = (EIF_REFERENCE) NULL;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("pebble_function_preserved", EX_POST);
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10155, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTCO(tr2);
		if (RTCEQ(tr5, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("pebble_without_function", EX_POST);
		tb1 = '\01';
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10155, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr5 == NULL)) {
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10154, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTCO(tr4);
			tb1 = RTCEQ(tr5, tr3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("pebble_with_function", EX_POST);
		tb1 = '\01';
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10155, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr5 != NULL)) {
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10154, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr5 == NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {EV_PICK_AND_DROPABLE_I}.set_pick_and_drop_mode */
void F1332_13239 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_pick_and_drop_mode";
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19077);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19077);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10187, 0x0C000000, 1); /* user_interface_mode */
	ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10188, dtype))(Current)).it_i1);
	*(EIF_INTEGER_8 *)(Current + RTWA(10187, dtype)) = (EIF_INTEGER_8) ti1_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("mode_is_pick_and_drop", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10180, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PICK_AND_DROPABLE_I}.set_drag_and_drop_mode */
void F1332_13240 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_drag_and_drop_mode";
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19078);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19078);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10187, 0x0C000000, 1); /* user_interface_mode */
	ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)).it_i1);
	*(EIF_INTEGER_8 *)(Current + RTWA(10187, dtype)) = (EIF_INTEGER_8) ti1_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("mode_is_drag_and_drop", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10181, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PICK_AND_DROPABLE_I}.set_target_menu_mode */
void F1332_13241 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_target_menu_mode";
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19079);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19079);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10187, 0x0C000000, 1); /* user_interface_mode */
	ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10190, dtype))(Current)).it_i1);
	*(EIF_INTEGER_8 *)(Current + RTWA(10187, dtype)) = (EIF_INTEGER_8) ti1_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("mode_is_target_menu", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10182, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PICK_AND_DROPABLE_I}.set_configurable_target_menu_mode */
void F1332_13242 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_configurable_target_menu_mode";
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19080);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19080);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10187, 0x0C000000, 1); /* user_interface_mode */
	ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10191, dtype))(Current)).it_i1);
	*(EIF_INTEGER_8 *)(Current + RTWA(10187, dtype)) = (EIF_INTEGER_8) ti1_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("mode_is_target_menu", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10183, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PICK_AND_DROPABLE_I}.set_configurable_target_menu_handler */
void F1332_13243 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_configurable_target_menu_handler";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 1, 19081);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1331, Current, 19081);
	RTCC(arg1, 1331, l_feature_name, 1, RTWCT(10157, Dtype(Current), Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 10157, 0xF80000FC, 0); /* configurable_target_menu_handler */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(10157, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_I}.set_accept_cursor */
void F1332_13244 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_accept_cursor";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 1, 19082);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1331, Current, 19082);
	RTCC(arg1, 1331, l_feature_name, 1, RTWCT(10158, Dtype(Current), Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 10158, 0xF800048E, 0); /* accept_cursor */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(10158, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_I}.set_deny_cursor */
void F1332_13245 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_deny_cursor";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 1, 19083);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1331, Current, 19083);
	RTCC(arg1, 1331, l_feature_name, 1, RTWCT(10159, Dtype(Current), Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 10159, 0xF800048E, 0); /* deny_cursor */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(10159, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_I}.enable_pebble_positioning */
void F1332_13246 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_pebble_positioning";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19084);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1331, Current, 19084);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 10186, 0x04000000, 1); /* internal_pebble_positioning_enabled */
	*(EIF_BOOLEAN *)(Current + RTWA(10186, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PICK_AND_DROPABLE_I}.disable_pebble_positioning */
void F1332_13247 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_pebble_positioning";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19085);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1331, Current, 19085);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 10186, 0x04000000, 1); /* internal_pebble_positioning_enabled */
	*(EIF_BOOLEAN *)(Current + RTWA(10186, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PICK_AND_DROPABLE_I}.is_transport_enabled */
EIF_TYPED_VALUE F1332_13248 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10179,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_I}.mode_is_pick_and_drop */
EIF_TYPED_VALUE F1332_13249 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "mode_is_pick_and_drop";
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_INTEGER_8 ti1_3;
	EIF_INTEGER_8 ti1_4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19087);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19087);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti1_1 = *(EIF_INTEGER_8 *)(Current + RTWA(10187, dtype));
	ti1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10188, dtype))(Current)).it_i1);
	ti1_3 = *(EIF_INTEGER_8 *)(Current + RTWA(10187, dtype));
	ti1_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10191, dtype))(Current)).it_i1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(ti1_1 == ti1_2) || (EIF_BOOLEAN)(ti1_3 == ti1_4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_PICK_AND_DROPABLE_I}.mode_is_drag_and_drop */
EIF_TYPED_VALUE F1332_13250 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "mode_is_drag_and_drop";
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19088);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19088);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti1_1 = *(EIF_INTEGER_8 *)(Current + RTWA(10187, dtype));
	ti1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)).it_i1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti1_1 == ti1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_PICK_AND_DROPABLE_I}.mode_is_target_menu */
EIF_TYPED_VALUE F1332_13251 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "mode_is_target_menu";
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19089);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19089);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti1_1 = *(EIF_INTEGER_8 *)(Current + RTWA(10187, dtype));
	ti1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10190, dtype))(Current)).it_i1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti1_1 == ti1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_PICK_AND_DROPABLE_I}.mode_is_configurable_target_menu */
EIF_TYPED_VALUE F1332_13252 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "mode_is_configurable_target_menu";
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19090);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19090);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti1_1 = *(EIF_INTEGER_8 *)(Current + RTWA(10187, dtype));
	ti1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10191, dtype))(Current)).it_i1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti1_1 == ti1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_PICK_AND_DROPABLE_I}.pick_x */
EIF_TYPED_VALUE F1332_13253 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT16;
	r.it_i2 = *(EIF_INTEGER_16 *)(Current + RTWA(10184,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_I}.pick_y */
EIF_TYPED_VALUE F1332_13254 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT16;
	r.it_i2 = *(EIF_INTEGER_16 *)(Current + RTWA(10185,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_I}.internal_pebble_positioning_enabled */
EIF_TYPED_VALUE F1332_13255 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10186,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_I}.user_interface_mode */
EIF_TYPED_VALUE F1332_13256 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT8;
	r.it_i1 = *(EIF_INTEGER_8 *)(Current + RTWA(10187,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_I}.pick_and_drop_mode */
EIF_TYPED_VALUE F1332_13257 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT8;
	r.it_i1 = (EIF_INTEGER_8) ((EIF_INTEGER_8) 0L);
	return r;
}

/* {EV_PICK_AND_DROPABLE_I}.drag_and_drop_mode */
EIF_TYPED_VALUE F1332_13258 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT8;
	r.it_i1 = (EIF_INTEGER_8) ((EIF_INTEGER_8) 1L);
	return r;
}

/* {EV_PICK_AND_DROPABLE_I}.target_menu_mode */
EIF_TYPED_VALUE F1332_13259 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT8;
	r.it_i1 = (EIF_INTEGER_8) ((EIF_INTEGER_8) 2L);
	return r;
}

/* {EV_PICK_AND_DROPABLE_I}.configurable_target_menu_mode */
EIF_TYPED_VALUE F1332_13260 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT8;
	r.it_i1 = (EIF_INTEGER_8) ((EIF_INTEGER_8) 3L);
	return r;
}

/* {EV_PICK_AND_DROPABLE_I}.execute */
void F1332_13263 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "execute";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
#define arg5 arg5x.it_r8
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1331, Current, 3, 7, 19099);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19099);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10199, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6924, 0x14000000, 1); /* pointer_x */
	ti2_1 = (EIF_INTEGER_16) arg6;
	*(EIF_INTEGER_16 *)(Current + RTWA(6924, dtype)) = (EIF_INTEGER_16) ti2_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6925, 0x14000000, 1); /* pointer_y */
	ti2_1 = (EIF_INTEGER_16) arg7;
	*(EIF_INTEGER_16 *)(Current + RTWA(6925, dtype)) = (EIF_INTEGER_16) ti2_1;
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10206, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ui4_1 = arg6;
	ui4_2 = arg7;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9677, "set_pnd_pointer_coords", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10198, dtype))(Current);
	RTHOOK(6);
	RTDBGAL(Current, 1, 0xF8000483, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10196, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(7);
	RTDBGAL(Current, 2, 0xF80004AA, 0, 0); /* loc2 */
	loc2 = RTCCL(loc1);
	loc2 = RTRV(eif_new_type(1194, 0x00), loc2);
	RTHOOK(8);
	RTDBGAL(Current, 3, 0xF8000505, 0, 0); /* loc3 */
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10207, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,1);
	tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8375, "implementation", loc3))(loc3)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(8,2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9596, "application_i", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = RTRV(eif_new_type(1285, 0x00), tr2);
	RTHOOK(9);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7099, "pnd_motion_actions_internal", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7095, "pnd_motion_actions", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,3,174,206,206,1194,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 4, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
		((EIF_TYPED_VALUE *)tr2+3)->it_r = loc2;
		RTAR(tr2,loc2);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3453, "call", tr1))(tr1, ur1x);
	}
	RTHOOK(12);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10195, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_I}.update_pointer_style */
void F1332_13264 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_pointer_style";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1331, Current, 3, 1, 19100);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19100);
	if (arg1) {
		RTCC(arg1, 1331, l_feature_name, 1, eif_new_type(1155, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10154, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		tb2 = EIF_TEST(loc1);
	}
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8329, "drop_actions", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ur1 = RTCCL(loc1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7841, "accepts_pebble", tr1))(tr1, ur1x)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10158, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(3);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10203, dtype))(Current, ur1x);
		} else {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6906, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10203, dtype))(Current, ur1x);
		}
	} else {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10159, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(6);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10203, dtype))(Current, ur1x);
		} else {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6907, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10203, dtype))(Current, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_I}.pointed_target */
EIF_TYPED_VALUE F1332_13265 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pointed_target";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_16 ti2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,ur1);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 1331, Current, 5, 0, 19101);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19101);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004AA, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10197, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF8000483, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF80004AD, 0, 0); /* loc2 */
	loc2 = RTCCL(loc1);
	loc2 = RTRV(eif_new_type(1197, 0x00), loc2);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(5);
		RTDBGAL(Current, 3, 0xF8000173, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8375, "implementation", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10228, "actual_drop_target_agent", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(7);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(6924, dtype));
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8639, "screen_x", loc2))(loc2)).it_i4);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
			RTHOOK(8);
			RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
			ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(6925, dtype));
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8640, "screen_y", loc2))(loc2)).it_i4);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF8000483, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNTS(typres0.id, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc4;
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc5;
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4336, "item", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {EV_PICK_AND_DROPABLE_I}.call_pebble_function */
void F1332_13269 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "call_pebble_function";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1331, Current, 1, 4, 19102);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19102);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10155, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 10154, 0xF8000000, 0); /* pebble */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4336, "item", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10154, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_I}.modify_widget_appearance */
void F1332_13270 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "modify_widget_appearance";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1331, Current, 2, 1, 19103);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1331, Current, 19103);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF800010F, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10206, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9622, "windows", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1780, "start", loc2))(loc2);
	for (;;) {
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1779, "off", loc2))(loc2)).it_b);
		if (tb1) break;
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF8000551, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1778, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8375, "implementation", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr2);
		loc1 = RTRV(eif_new_type(1361, 0x00), loc1);
		RTHOOK(5);
		RTCT0("window_implementation_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		ub1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10249, "update_for_pick_and_drop", loc1))(loc1, ub1x);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1796, "forth", loc2))(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ub1
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_I}.application_implementation */
EIF_TYPED_VALUE F1332_13275 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "application_implementation";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19104);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1331, Current, 19104);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000504, 0,0); /* Result */
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10207, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8375, "implementation", Result))(Result)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(1,2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9596, "application_i", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {EV_PICK_AND_DROPABLE_I}.environment */
RTOID (F1332_13276)
EIF_TYPED_VALUE F1332_13276 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "environment";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1332_13276);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19105);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1331, Current, 19105);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000493, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1171, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {EV_PICK_AND_DROPABLE_I}.interface */
static EIF_TYPED_VALUE F1332_13277_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1331, Current, 0, 0, 19061);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1331, Current, 19061);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1332_13277 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9306,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(9306, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1332_13277_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9306,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


/* {EV_PICK_AND_DROPABLE_I}._invariant */
void F1332_16370 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAINV(l_feature_name, 1331, Current, 1, 16369);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("user_interface_modes_mutually_exclusive", Current);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10180, dtype))(Current)).it_b);
	ti4_1 = (EIF_INTEGER_32) tb1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10181, dtype))(Current)).it_b);
	ti4_2 = (EIF_INTEGER_32) tb1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10182, dtype))(Current)).it_b);
	ti4_3 = (EIF_INTEGER_32) tb1;
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ti4_3) == ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("pebble_function_takes_two_integer_open_operands", Current);
	tb1 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10155, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,206,206,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 1L);
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
		ur1 = tr1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4304, "valid_operands", loc1))(loc1, ur1x)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(3);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef ur1
}

void EIF_Minit1332 (void)
{
	GTCX
	RTOTS (13276,F1332_13276)
}


#ifdef __cplusplus
}
#endif
