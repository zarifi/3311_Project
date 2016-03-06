/*
 * Code for class ETF_PARAM_DECL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F877_8214(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F877_8215(EIF_REFERENCE);
extern EIF_TYPED_VALUE F877_8216(EIF_REFERENCE);
extern void EIF_Minit877(void);

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

/* {ETF_PARAM_DECL}.make */
void F877_8214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 876, Current, 0, 2, 13897);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(876, Current, 13897);
	RTCC(arg1, 876, l_feature_name, 1, eif_new_type(220, 0x01), 0x01);
	RTCC(arg2, 876, l_feature_name, 2, eif_new_type(1017, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6143, 0xF80000DC, 0); /* name */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(6143, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6144, 0xF80003F9, 0); /* type */
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(6144, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {ETF_PARAM_DECL}.name */
EIF_TYPED_VALUE F877_8215 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6143,Dtype(Current)));
	return r;
}


/* {ETF_PARAM_DECL}.type */
EIF_TYPED_VALUE F877_8216 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6144,Dtype(Current)));
	return r;
}


void EIF_Minit877 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
