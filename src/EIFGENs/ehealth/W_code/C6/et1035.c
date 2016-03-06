/*
 * Code for class ETF_EVT_ARG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1035_9391(EIF_REFERENCE);
extern void F1035_9392(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1035(void);

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

/* {ETF_EVT_ARG}.src_out */
EIF_TYPED_VALUE F1035_9391 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7185,Dtype(Current)));
	return r;
}


/* {ETF_EVT_ARG}.set_src_out */
void F1035_9392 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_src_out";
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 1, 14938);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1034, Current, 14938);
	RTCC(arg1, 1034, l_feature_name, 1, eif_new_type(220, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7185, 0xF80000DC, 0); /* src_out */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(7185, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

void EIF_Minit1035 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
