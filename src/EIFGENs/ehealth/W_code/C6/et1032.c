/*
 * Code for class ETF_TYPE_CONSTRAINTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1032_9367(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1032_9368(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1032_9369(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1032_9370(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1032_9371(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1032_9372(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1032_9373(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1032_9374(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1032_9375(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1032_9376(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1032_9377(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1032_9378(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1032(void);

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

/* {ETF_TYPE_CONSTRAINTS}.is_kind */
EIF_TYPED_VALUE F1032_9367 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_kind";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1031, Current, 0, 1, 14913);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1031, Current, 14913);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = RTMS_EX_H("v: KIND = {pill, liquid}",24,2035335805);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7172, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7164, dtype))(Current)).it_i4);
	ti8_1 = (EIF_INTEGER_64) ti4_1;
	if (!((arg1 == ti8_1))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7165, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb1 = (arg1 == ti8_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		tb1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7164, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		if (!((arg1 == ti8_1))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7165, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb1 = (arg1 == ti8_1);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_medication */
EIF_TYPED_VALUE F1032_9368 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_medication";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1031, Current, 0, 1, 14914);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1031, Current, 14914);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,174,0xFF01,220,188,1134,1134,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1031, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = RTMS_EX_H("v: MEDICATION = TUPLE[name: NAME = STRING; kind: KIND = {pill, liquid}; low: VALUE; hi: VALUE]",94,810899293);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7172, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti8_1 = eif_integer_64_item(RTCV(arg1),2);
	ui8_1 = ti8_1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7161, dtype))(Current, ui8_1x)).it_b);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		ti8_1 = eif_integer_64_item(RTCV(arg1),2);
		ui8_1 = ti8_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7161, dtype))(Current, ui8_1x)).it_b);
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui8_1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_physician_type */
EIF_TYPED_VALUE F1032_9369 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_physician_type";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1031, Current, 0, 1, 14915);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1031, Current, 14915);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		tr1 = RTMS_EX_H("v: PHYSICIAN_TYPE = {generalist, specialist}",44,1067660413);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7172, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7166, dtype))(Current)).it_i4);
	ti8_1 = (EIF_INTEGER_64) ti4_1;
	if (!((arg1 == ti8_1))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7167, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb1 = (arg1 == ti8_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		tb1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7166, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		if (!((arg1 == ti8_1))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7167, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb1 = (arg1 == ti8_1);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.pill */
EIF_TYPED_VALUE F1032_9370 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.liquid */
EIF_TYPED_VALUE F1032_9371 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.generalist */
EIF_TYPED_VALUE F1032_9372 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.specialist */
EIF_TYPED_VALUE F1032_9373 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items */
EIF_TYPED_VALUE F1032_9374 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1031, Current, 0, 0, 14920);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1031, Current, 14920);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000355, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,853,206,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = RTMS_EX_H("pill",4,1885957228);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = RTMS_EX_H("liquid",6,2116663140);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tr1 = RTMS_EX_H("generalist",10,1351846516);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	tr1 = RTMS_EX_H("specialist",10,1779880564);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items_inverse */
EIF_TYPED_VALUE F1032_9375 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items_inverse";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1031, Current, 0, 0, 14921);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1031, Current, 14921);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80005F8, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1528,0xFF01,220,188,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("pill",4,1885957228);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("liquid",6,2116663140);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("generalist",10,1351846516);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("specialist",10,1779880564);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ui8_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui8_1
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_table */
EIF_TYPED_VALUE F1032_9376 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_table";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_REFERENCE tr11 = NULL;
	EIF_REFERENCE tr12 = NULL;
	EIF_REFERENCE tr13 = NULL;
	EIF_REFERENCE tr14 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(29);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,tr4);
	RTLR(9,tr5);
	RTLR(10,tr6);
	RTLR(11,loc2);
	RTLR(12,loc3);
	RTLR(13,tr7);
	RTLR(14,tr8);
	RTLR(15,tr9);
	RTLR(16,tr10);
	RTLR(17,ur3);
	RTLR(18,tr11);
	RTLR(19,ur4);
	RTLR(20,tr12);
	RTLR(21,tr13);
	RTLR(22,tr14);
	RTLR(23,loc4);
	RTLR(24,loc5);
	RTLR(25,loc6);
	RTLR(26,loc7);
	RTLR(27,loc8);
	RTLR(28,loc9);
	RTLIU(29);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 1031, Current, 9, 0, 14922);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1031, Current, 14922);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000129, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,297,0xFF01,297,0xFF01,1017,0xFF01,220,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000129, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,297,0xFF01,1017,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MD",5,1147657028);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(5,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id",2,26980);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("NAME",4,1312902469);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1030, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(6,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(6,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("name",4,1851878757);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(7);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("PHYSICIAN_TYPE",14,2036447045);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1026, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {293,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("generalist",10,1351846516);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("specialist",10,1779880564);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr5)))(tr5).it_r;
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7157, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(7,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(7,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("kind",4,1802071652);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(8);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("add_physician",13,2131551342);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(9);
	RTDBGAL(Current, 2, 0xF8000129, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,297,0xFF01,1017,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(9,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc2))(loc2);
	RTHOOK(11);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_PT",5,1147657812);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(11,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(11,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id",2,26980);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc2))(loc2, ur1x, ur2x);
	RTHOOK(12);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("NAME",4,1312902469);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1030, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(12,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(12,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("name",4,1851878757);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc2))(loc2, ur1x, ur2x);
	RTHOOK(13);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("add_patient",11,768634228);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(14);
	RTDBGAL(Current, 3, 0xF8000129, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,297,0xFF01,1017,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(14,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(15);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc3))(loc3);
	RTHOOK(16);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MN",5,1147657038);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(16,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(16,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id",2,26980);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc3))(loc3, ur1x, ur2x);
	RTHOOK(17);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("MEDICATION",10,298769486);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1027, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {293,0xFF01,876,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 4L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(876, 0x01).id);
	tr8 = RTMS_EX_H("name",4,1851878757);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1025, 0x01).id);
	tr10 = RTMS_EX_H("NAME",4,1312902469);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1030, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr11)))(tr11);
	RTNHOOK(17,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(17,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6142, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(876, 0x01).id);
	tr8 = RTMS_EX_H("kind",4,1802071652);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1025, 0x01).id);
	tr10 = RTMS_EX_H("KIND",4,1263095364);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1026, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {293,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 2L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("pill",4,1885957228);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("liquid",6,2116663140);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7157, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(17,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(17,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6142, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(876, 0x01).id);
	tr8 = RTMS_EX_H("low",3,7106423);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1029, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr9)))(tr9);
	RTNHOOK(17,7);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6142, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,8);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(876, 0x01).id);
	tr8 = RTMS_EX_H("hi",2,26729);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1029, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr9)))(tr9);
	RTNHOOK(17,9);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6142, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,10);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7159, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(17,11);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(17,12);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("medicine",8,1185831013);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc3))(loc3, ur1x, ur2x);
	RTHOOK(18);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("add_medication",14,1416616302);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(19);
	RTDBGAL(Current, 4, 0xF8000129, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,297,0xFF01,1017,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(19,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(20);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc4))(loc4);
	RTHOOK(21);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MN",5,1147657038);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(21,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(21,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id1",3,6906929);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc4))(loc4, ur1x, ur2x);
	RTHOOK(22);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MN",5,1147657038);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(22,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(22,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id2",3,6906930);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc4))(loc4, ur1x, ur2x);
	RTHOOK(23);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("add_interaction",15,392910190);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(24);
	RTDBGAL(Current, 5, 0xF8000129, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,297,0xFF01,1017,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(24,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(25);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc5))(loc5);
	RTHOOK(26);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_RX",5,1147658328);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(26,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(26,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id",2,26980);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc5))(loc5, ur1x, ur2x);
	RTHOOK(27);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MD",5,1147657028);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(27,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(27,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("doctor",6,1866035570);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc5))(loc5, ur1x, ur2x);
	RTHOOK(28);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_PT",5,1147657812);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(28,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(28,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("patient",7,349346676);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc5))(loc5, ur1x, ur2x);
	RTHOOK(29);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("new_prescription",16,2007775342);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(30);
	RTDBGAL(Current, 6, 0xF8000129, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,297,0xFF01,1017,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(30,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(31);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc6))(loc6);
	RTHOOK(32);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_RX",5,1147658328);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(32,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(32,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id",2,26980);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc6))(loc6, ur1x, ur2x);
	RTHOOK(33);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MN",5,1147657038);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(33,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(33,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("medicine",8,1185831013);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc6))(loc6, ur1x, ur2x);
	RTHOOK(34);
	tr1 = RTLN(eif_new_type(1029, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(34,1);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("dose",4,1685025637);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc6))(loc6, ur1x, ur2x);
	RTHOOK(35);
	ur1 = RTCCL(loc6);
	tr1 = RTMS_EX_H("add_medicine",12,1149453925);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(36);
	RTDBGAL(Current, 7, 0xF8000129, 0, 0); /* loc7 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,297,0xFF01,1017,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(36,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(37);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc7))(loc7);
	RTHOOK(38);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_RX",5,1147658328);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(38,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(38,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("id",2,26980);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc7))(loc7, ur1x, ur2x);
	RTHOOK(39);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MN",5,1147657038);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(39,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(39,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("medicine",8,1185831013);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc7))(loc7, ur1x, ur2x);
	RTHOOK(40);
	ur1 = RTCCL(loc7);
	tr1 = RTMS_EX_H("remove_medicine",15,299501413);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(41);
	RTDBGAL(Current, 8, 0xF8000129, 0, 0); /* loc8 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,297,0xFF01,1017,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(41,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(42);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc8))(loc8);
	RTHOOK(43);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MN",5,1147657038);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(43,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(43,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("medication_id",13,1998285668);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", loc8))(loc8, ur1x, ur2x);
	RTHOOK(44);
	ur1 = RTCCL(loc8);
	tr1 = RTMS_EX_H("prescriptions_q",15,2095457905);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(45);
	RTDBGAL(Current, 9, 0xF8000129, 0, 0); /* loc9 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,297,0xFF01,1017,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(45,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(46);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc9))(loc9);
	RTHOOK(47);
	ur1 = RTCCL(loc9);
	tr1 = RTMS_EX_H("dpr_q",5,1887311729);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(48);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_list */
EIF_TYPED_VALUE F1032_9377 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_list";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_REFERENCE tr11 = NULL;
	EIF_REFERENCE tr12 = NULL;
	EIF_REFERENCE tr13 = NULL;
	EIF_REFERENCE tr14 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(29);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,tr4);
	RTLR(9,tr5);
	RTLR(10,tr6);
	RTLR(11,loc2);
	RTLR(12,loc3);
	RTLR(13,tr7);
	RTLR(14,tr8);
	RTLR(15,tr9);
	RTLR(16,tr10);
	RTLR(17,ur3);
	RTLR(18,tr11);
	RTLR(19,ur4);
	RTLR(20,tr12);
	RTLR(21,tr13);
	RTLR(22,tr14);
	RTLR(23,loc4);
	RTLR(24,loc5);
	RTLR(25,loc6);
	RTLR(26,loc7);
	RTLR(27,loc8);
	RTLR(28,loc9);
	RTLIU(29);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 1031, Current, 9, 0, 14923);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1031, Current, 14923);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000129, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,297,0xFF01,380,0xFF01,1017,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3313, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800017C, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,380,0xFF01,1017,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MD",5,1147657028);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(5,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc1))(loc1, ur1x);
	RTHOOK(6);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("NAME",4,1312902469);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1030, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(6,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(6,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc1))(loc1, ur1x);
	RTHOOK(7);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("PHYSICIAN_TYPE",14,2036447045);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1026, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {293,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("generalist",10,1351846516);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("specialist",10,1779880564);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr5)))(tr5).it_r;
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7157, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(7,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(7,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc1))(loc1, ur1x);
	RTHOOK(8);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("add_physician",13,2131551342);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(9);
	RTDBGAL(Current, 2, 0xF800017C, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,380,0xFF01,1017,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
	RTNHOOK(9,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc2))(loc2);
	RTHOOK(11);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_PT",5,1147657812);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(11,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(11,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc2))(loc2, ur1x);
	RTHOOK(12);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("NAME",4,1312902469);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1030, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(12,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(12,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc2))(loc2, ur1x);
	RTHOOK(13);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("add_patient",11,768634228);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(14);
	RTDBGAL(Current, 3, 0xF800017C, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,380,0xFF01,1017,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
	RTNHOOK(14,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(15);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc3))(loc3);
	RTHOOK(16);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MN",5,1147657038);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(16,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(16,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc3))(loc3, ur1x);
	RTHOOK(17);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("MEDICATION",10,298769486);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1027, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {293,0xFF01,876,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 4L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(876, 0x01).id);
	tr8 = RTMS_EX_H("name",4,1851878757);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1025, 0x01).id);
	tr10 = RTMS_EX_H("NAME",4,1312902469);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1030, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr11)))(tr11);
	RTNHOOK(17,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(17,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6142, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(876, 0x01).id);
	tr8 = RTMS_EX_H("kind",4,1802071652);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1025, 0x01).id);
	tr10 = RTMS_EX_H("KIND",4,1263095364);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1026, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {293,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 2L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("pill",4,1885957228);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("liquid",6,2116663140);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7157, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(17,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(17,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6142, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(876, 0x01).id);
	tr8 = RTMS_EX_H("low",3,7106423);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1029, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr9)))(tr9);
	RTNHOOK(17,7);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6142, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,8);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(876, 0x01).id);
	tr8 = RTMS_EX_H("hi",2,26729);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1029, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr9)))(tr9);
	RTNHOOK(17,9);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6142, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,10);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7159, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(17,11);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(17,12);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc3))(loc3, ur1x);
	RTHOOK(18);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("add_medication",14,1416616302);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(19);
	RTDBGAL(Current, 4, 0xF800017C, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,380,0xFF01,1017,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
	RTNHOOK(19,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(20);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc4))(loc4);
	RTHOOK(21);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MN",5,1147657038);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(21,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(21,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc4))(loc4, ur1x);
	RTHOOK(22);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MN",5,1147657038);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(22,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(22,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc4))(loc4, ur1x);
	RTHOOK(23);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("add_interaction",15,392910190);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(24);
	RTDBGAL(Current, 5, 0xF800017C, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,380,0xFF01,1017,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
	RTNHOOK(24,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(25);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc5))(loc5);
	RTHOOK(26);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_RX",5,1147658328);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(26,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(26,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc5))(loc5, ur1x);
	RTHOOK(27);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MD",5,1147657028);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(27,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(27,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc5))(loc5, ur1x);
	RTHOOK(28);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_PT",5,1147657812);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(28,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(28,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc5))(loc5, ur1x);
	RTHOOK(29);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("new_prescription",16,2007775342);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(30);
	RTDBGAL(Current, 6, 0xF800017C, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,380,0xFF01,1017,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
	RTNHOOK(30,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(31);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc6))(loc6);
	RTHOOK(32);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_RX",5,1147658328);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(32,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(32,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc6))(loc6, ur1x);
	RTHOOK(33);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MN",5,1147657038);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(33,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(33,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc6))(loc6, ur1x);
	RTHOOK(34);
	tr1 = RTLN(eif_new_type(1029, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(34,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc6))(loc6, ur1x);
	RTHOOK(35);
	ur1 = RTCCL(loc6);
	tr1 = RTMS_EX_H("add_medicine",12,1149453925);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(36);
	RTDBGAL(Current, 7, 0xF800017C, 0, 0); /* loc7 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,380,0xFF01,1017,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
	RTNHOOK(36,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(37);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc7))(loc7);
	RTHOOK(38);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_RX",5,1147658328);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(38,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(38,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc7))(loc7, ur1x);
	RTHOOK(39);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MN",5,1147657038);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(39,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(39,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc7))(loc7, ur1x);
	RTHOOK(40);
	ur1 = RTCCL(loc7);
	tr1 = RTMS_EX_H("remove_medicine",15,299501413);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(41);
	RTDBGAL(Current, 8, 0xF800017C, 0, 0); /* loc8 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,380,0xFF01,1017,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
	RTNHOOK(41,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(42);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc8))(loc8);
	RTHOOK(43);
	tr1 = RTLN(eif_new_type(1025, 0x01).id);
	tr2 = RTMS_EX_H("ID_MN",5,1147657038);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1024, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(43,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7154, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(43,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1711, "extend", loc8))(loc8, ur1x);
	RTHOOK(44);
	ur1 = RTCCL(loc8);
	tr1 = RTMS_EX_H("prescriptions_q",15,2095457905);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(45);
	RTDBGAL(Current, 9, 0xF800017C, 0, 0); /* loc9 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,380,0xFF01,1017,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2550, Dtype(tr1)))(tr1);
	RTNHOOK(45,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(46);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1703, "compare_objects", loc9))(loc9);
	RTHOOK(47);
	ur1 = RTCCL(loc9);
	tr1 = RTMS_EX_H("dpr_q",5,1887311729);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3343, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(48);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.comment */
EIF_TYPED_VALUE F1032_9378 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "comment";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1031, Current, 0, 1, 14924);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1031, Current, 14924);
	RTCC(arg1, 1031, l_feature_name, 1, eif_new_type(220, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit1032 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
