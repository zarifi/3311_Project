/*
 * Code for class EV_DOCKABLE_DIALOG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1216_11643(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1216_11644(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1216_11645(EIF_REFERENCE);
extern void F1216_11646(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1216_11647(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1216_11648(EIF_REFERENCE);
extern void EIF_Minit1216(void);

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

/* {EV_DOCKABLE_DIALOG}.original_parent */
EIF_TYPED_VALUE F1216_11643 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9011,Dtype(Current)));
	return r;
}


/* {EV_DOCKABLE_DIALOG}.original_parent_index */
EIF_TYPED_VALUE F1216_11644 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9012,Dtype(Current)));
	return r;
}


/* {EV_DOCKABLE_DIALOG}.expansion_was_disabled */
EIF_TYPED_VALUE F1216_11645 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(9013,Dtype(Current)));
	return r;
}


/* {EV_DOCKABLE_DIALOG}.set_original_parent */
void F1216_11646 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_original_parent";
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
	
	RTEAA(l_feature_name, 1215, Current, 0, 1, 17726);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1215, Current, 17726);
	RTCC(arg1, 1215, l_feature_name, 1, RTWCT(9011, Dtype(Current), Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 9011, 0xF800049E, 0); /* original_parent */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(9011, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
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

/* {EV_DOCKABLE_DIALOG}.set_original_parent_index */
void F1216_11647 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_original_parent_index";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1215, Current, 0, 1, 17727);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1215, Current, 17727);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 9012, 0x10000000, 1); /* original_parent_index */
	*(EIF_INTEGER_32 *)(Current + RTWA(9012, Dtype(Current))) = (EIF_INTEGER_32) arg1;
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

/* {EV_DOCKABLE_DIALOG}.set_expansion_was_disabled */
void F1216_11648 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_expansion_was_disabled";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1215, Current, 0, 0, 17728);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1215, Current, 17728);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 9013, 0x04000000, 1); /* expansion_was_disabled */
	*(EIF_BOOLEAN *)(Current + RTWA(9013, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1216 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
