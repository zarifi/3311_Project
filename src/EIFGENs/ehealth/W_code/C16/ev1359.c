/*
 * Code for class EV_POPUP_WINDOW_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPED_VALUE F1359_13657_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1359_13657(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1359_13658(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1359_13659(EIF_REFERENCE);
extern void F1359_13660(EIF_REFERENCE);
extern void F1359_13661(EIF_REFERENCE);
extern void EIF_Minit1359(void);

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

/* {EV_POPUP_WINDOW_I}.interface */
static EIF_TYPED_VALUE F1359_13657_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1358, Current, 0, 0, 19401);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1358, Current, 19401);
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

EIF_TYPED_VALUE F1359_13657 (EIF_REFERENCE Current)
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
			r.it_r = (F1359_13657_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9306,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


/* {EV_POPUP_WINDOW_I}.is_disconnected_from_window_manager */
EIF_TYPED_VALUE F1359_13658 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10424,Dtype(Current)));
	return r;
}


/* {EV_POPUP_WINDOW_I}.has_shadow */
EIF_TYPED_VALUE F1359_13659 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10425,Dtype(Current)));
	return r;
}


/* {EV_POPUP_WINDOW_I}.disconnect_from_window_manager */
void F1359_13660 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disconnect_from_window_manager";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1358, Current, 0, 0, 19404);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1358, Current, 19404);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 10424, 0x04000000, 1); /* is_disconnected_from_window_manager */
	*(EIF_BOOLEAN *)(Current + RTWA(10424, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_POPUP_WINDOW_I}.initialize_with_shadow */
void F1359_13661 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_with_shadow";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1358, Current, 0, 0, 19405);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1358, Current, 19405);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10425, 0x04000000, 1); /* has_shadow */
	*(EIF_BOOLEAN *)(Current + RTWA(10425, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9301, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1359 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
