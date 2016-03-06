/*
 * Code for class ETF_ADD_MEDICINE_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1121_10362(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1121_10363(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1121(void);
extern EIF_REFERENCE _A1121_58_2_3_4();

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

/* {ETF_ADD_MEDICINE_INTERFACE}.make */
void F1121_10362 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_INTEGER_64 loc1 = (EIF_INTEGER_64) 0;
	EIF_INTEGER_64 loc2 = (EIF_INTEGER_64) 0;
	struct eif_ex_1134 sloc3;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) sloc3.data;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	memset (&sloc3.overhead, 0, OVERHEAD + 16);
	sloc3.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc3.overhead, eif_new_type(1134, 0x00).id);
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,ur3);
	RTLR(6,Current);
	RTLR(7,tr1);
	RTLR(8,tr2);
	RTLR(9,tr3);
	RTLR(10,tr4);
	RTLR(11,loc3);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT64, &loc1);
	RTLU(SK_INT64, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1120, Current, 3, 3, 16310);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1120, Current, 16310);
	RTCC(arg1, 1120, l_feature_name, 1, eif_new_type(220, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,174,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg2, 1120, l_feature_name, 2, typres0, 0x01);
	}
	RTCC(arg3, 1120, l_feature_name, 3, eif_new_type(939, 0x01), 0x01);
	RTIV(Current, RTAL);
	wstdinit(loc3,loc3);
	RTLXI(loc3);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7975, 1114))(Current, ur1x, ur2x, ur3x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7978, 0xF80000FB, 0); /* etf_cmd_routine */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,174,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	{
		static EIF_TYPE_INDEX typarr0[] = {346,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 3L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr3+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr3+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr3)))(tr3).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,252,0xFF01,0xFFF9,3,174,188,188,1134,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A1121_58_2_3_4, (EIF_POINTER)(0),7994, tr2, 0, 1, -1, tr1, 3);
	}
	RTAR(Current, tr4);
	*(EIF_REFERENCE *)(Current + RTWA(7978, dtype)) = (EIF_REFERENCE) RTCCL(tr4);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7978, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4308, "set_operands", tr1))(tr1, ur1x);
	RTHOOK(4);
	tb1 = '\0';
	tb2 = '\0';
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2392, "item", arg2))(arg2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr2);
	RTOB(*(EIF_INTEGER_64 *), eif_new_type(188, 0x00), tr1, loc1, tb3);
	if (tb3) {
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2392, "item", arg2))(arg2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_64 *), eif_new_type(188, 0x00), tr1, loc2, tb3);
		tb2 = tb3;
	}
	if (tb2) {
		ui4_1 = ((EIF_INTEGER_32) 3L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2392, "item", arg2))(arg2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr2);
		RTOE(eif_new_type(1134, 0x00), tr1, loc3, tb2);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 7986, 0xF80000DC, 0); /* out */
		tr1 = RTMS_EX_H("add_medicine(",13,55471144);
		tr2 = RTMS_EX_H("add_medicine",12,1149453925);
		ur1 = tr2;
		tr3 = RTMS_EX_H("id",2,26980);
		ur2 = tr3;
		ur3 = RTLN(eif_new_type(188, 0x00).id);
		*(EIF_INTEGER_64 *)ur3 = loc1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7981, dtype))(Current, ur1x, ur2x, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4421, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(",",1,44);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4421, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = RTMS_EX_H("add_medicine",12,1149453925);
		ur1 = tr2;
		tr3 = RTMS_EX_H("medicine",8,1185831013);
		ur2 = tr3;
		ur3 = RTLN(eif_new_type(188, 0x00).id);
		*(EIF_INTEGER_64 *)ur3 = loc2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7981, dtype))(Current, ur1x, ur2x, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4421, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(",",1,44);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4421, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = RTMS_EX_H("add_medicine",12,1149453925);
		ur1 = tr2;
		tr3 = RTMS_EX_H("dose",4,1685025637);
		ur2 = tr3;
		ur3 = RTRCL(loc3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7981, dtype))(Current, ur1x, ur2x, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4421, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H(")",1,41);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4421, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7986, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 7980, 0x04000000, 1); /* etf_cmd_error */
		*(EIF_BOOLEAN *)(Current + RTWA(7980, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {ETF_ADD_MEDICINE_INTERFACE}.add_medicine_precond */
EIF_TYPED_VALUE F1121_10363 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "add_medicine_precond";
	RTEX;
#define arg1 arg1x.it_i8
#define arg2 arg2x.it_i8
#define arg3 arg3x.it_r
	struct eif_ex_1134 sarg3;
	EIF_REFERENCE earg3 = (EIF_REFERENCE) sarg3.data;
	
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i8 = * (EIF_INTEGER_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	memcpy (&sarg3.overhead, HEADER(arg3), 16 + OVERHEAD);
	sarg3.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg3.overhead.ov_size = 0;
	
	RTLI(4);
	RTLR(0,earg3);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU(SK_INT64,&arg2);
	RTLU(SK_REF,&earg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1120, Current, 0, 3, 16311);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1120, Current, 16311);
	RTCC(earg3, 1120, l_feature_name, 3, eif_new_type(1134, 0x00), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tr1 = RTMS_EX_H("ID_RX = INTEGER_64",18,710017844);
	ur1 = tr1;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7172, dtype))(Current, ur1x)).it_b);
	if (tb2) {
		tr1 = RTMS_EX_H("ID_MN = INTEGER_64",18,1650593844);
		ur1 = tr1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7172, dtype))(Current, ur1x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT(NULL, EX_POST);
		tb1 = '\0';
		tr1 = RTMS_EX_H("ID_RX = INTEGER_64",18,710017844);
		ur1 = tr1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7172, dtype))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN)(Result == tb2)) {
			tr1 = RTMS_EX_H("ID_MN = INTEGER_64",18,1650593844);
			ur1 = tr1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7172, dtype))(Current, ur1x)).it_b);
			tb1 = tb2;
		}
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
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1121 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
