/*
 * Code for class EV_STOCK_PIXMAPS_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1075_9978(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9979(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9980(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9981(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9982(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9983(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9984(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9985(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9986(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9987(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9988(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9989(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9990(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9991(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1075_9992(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9993(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9994(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9995(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9996(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9997(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9998(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_9999(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10000(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10001(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10002(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10003(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10004(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10005(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10006(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10007(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10008(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10009(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10010(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10011(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1075_10012(EIF_REFERENCE);
extern void EIF_Minit1075(void);

#ifdef __cplusplus
}
#endif

#include "ev_c_util.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_STOCK_PIXMAPS_IMP}.information_pixel_buffer */
EIF_TYPED_VALUE F1075_9978 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "information_pixel_buffer";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15658);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1074, Current, 15658);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800048D, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1150, 0x00).id);
	tr2 = RTMS_EX_H("gtk-dialog-info",15,2003234927);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8226, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr1);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7702, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
#undef ur1
}

/* {EV_STOCK_PIXMAPS_IMP}.error_pixel_buffer */
EIF_TYPED_VALUE F1075_9979 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error_pixel_buffer";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15659);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1074, Current, 15659);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800048D, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1150, 0x00).id);
	tr2 = RTMS_EX_H("gtk-dialog-error",16,1795811698);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8226, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr1);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7702, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
#undef ur1
}

/* {EV_STOCK_PIXMAPS_IMP}.warning_pixel_buffer */
EIF_TYPED_VALUE F1075_9980 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "warning_pixel_buffer";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15660);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1074, Current, 15660);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800048D, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1150, 0x00).id);
	tr2 = RTMS_EX_H("gtk-dialog-warning",18,251057767);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8226, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr1);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7702, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
#undef ur1
}

/* {EV_STOCK_PIXMAPS_IMP}.question_pixel_buffer */
EIF_TYPED_VALUE F1075_9981 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "question_pixel_buffer";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15661);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1074, Current, 15661);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800048D, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1150, 0x00).id);
	tr2 = RTMS_EX_H("gtk-dialog-question",19,1480125294);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8226, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr1);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7702, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
#undef ur1
}

/* {EV_STOCK_PIXMAPS_IMP}.information_pixmap */
EIF_TYPED_VALUE F1075_9982 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "information_pixmap";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,tr3);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15662);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1074, Current, 15662);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004CA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1226, 0x00).id);
	tr2 = RTLN(eif_new_type(1150, 0x00).id);
	tr3 = RTMS_EX_H("gtk-dialog-info",15,2003234927);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8226, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7702, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(9076, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,2);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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
#undef ur1
}

/* {EV_STOCK_PIXMAPS_IMP}.error_pixmap */
EIF_TYPED_VALUE F1075_9983 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error_pixmap";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,tr3);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15663);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1074, Current, 15663);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004CA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1226, 0x00).id);
	tr2 = RTLN(eif_new_type(1150, 0x00).id);
	tr3 = RTMS_EX_H("gtk-dialog-error",16,1795811698);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8226, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7702, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(9076, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,2);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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
#undef ur1
}

/* {EV_STOCK_PIXMAPS_IMP}.warning_pixmap */
EIF_TYPED_VALUE F1075_9984 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "warning_pixmap";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,tr3);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15664);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1074, Current, 15664);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004CA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1226, 0x00).id);
	tr2 = RTLN(eif_new_type(1150, 0x00).id);
	tr3 = RTMS_EX_H("gtk-dialog-warning",18,251057767);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8226, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7702, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(9076, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,2);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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
#undef ur1
}

/* {EV_STOCK_PIXMAPS_IMP}.question_pixmap */
EIF_TYPED_VALUE F1075_9985 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "question_pixmap";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,tr3);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15665);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1074, Current, 15665);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004CA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1226, 0x00).id);
	tr2 = RTLN(eif_new_type(1150, 0x00).id);
	tr3 = RTMS_EX_H("gtk-dialog-question",19,1480125294);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8226, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7702, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(9076, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,2);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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
#undef ur1
}

/* {EV_STOCK_PIXMAPS_IMP}.collate_pixmap */
EIF_TYPED_VALUE F1075_9986 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "collate_pixmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1074, Current, 1, 0, 15666);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1074, Current, 15666);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004CA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1226, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800059A, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8375, "implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1434, 0x00), loc1);
	RTHOOK(3);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7707, dtype))(Current)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11071, "set_from_xpm_data", loc1))(loc1, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {EV_STOCK_PIXMAPS_IMP}.no_collate_pixmap */
EIF_TYPED_VALUE F1075_9987 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_collate_pixmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1074, Current, 1, 0, 15667);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1074, Current, 15667);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004CA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1226, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800059A, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8375, "implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1434, 0x00), loc1);
	RTHOOK(3);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7708, dtype))(Current)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11071, "set_from_xpm_data", loc1))(loc1, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {EV_STOCK_PIXMAPS_IMP}.landscape_pixmap */
EIF_TYPED_VALUE F1075_9988 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "landscape_pixmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1074, Current, 1, 0, 15668);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1074, Current, 15668);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004CA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1226, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800059A, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8375, "implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1434, 0x00), loc1);
	RTHOOK(3);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7709, dtype))(Current)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11071, "set_from_xpm_data", loc1))(loc1, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {EV_STOCK_PIXMAPS_IMP}.portrait_pixmap */
EIF_TYPED_VALUE F1075_9989 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "portrait_pixmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1074, Current, 1, 0, 15669);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1074, Current, 15669);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004CA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1226, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800059A, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8375, "implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1434, 0x00), loc1);
	RTHOOK(3);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7710, dtype))(Current)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11071, "set_from_xpm_data", loc1))(loc1, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {EV_STOCK_PIXMAPS_IMP}.default_window_icon */
EIF_TYPED_VALUE F1075_9990 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_window_icon";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1074, Current, 1, 0, 15670);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1074, Current, 15670);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004CA, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1226, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000595, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8375, "implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10983, "set_with_default", loc1))(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {EV_STOCK_PIXMAPS_IMP}.pixmap_from_stock_id */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_TYPED_VALUE F1075_9991 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "pixmap_from_stock_id";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLXL;
	
	RTEAA(l_feature_name, 1074, Current, 3, 1, 15671);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1074, Current, 15671);
	RTCC(arg1, 1074, l_feature_name, 1, eif_new_type(1150, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc3) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF800047E, 0, 0); /* loc1 */
		loc1 = (EIF_REFERENCE) RTCCL(arg1);
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF800048D, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1165, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(Current, 2, 0xF80004F7, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8375, "implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		loc2 = RTRV(eif_new_type(1271, 0x00), loc2);
		RTHOOK(5);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		tp1 = *(EIF_POINTER *)(loc1 + RTVA(8223, "item", loc1));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9446, "set_from_stock_id", loc2))(loc2, up1x);
	} else {
		RTHOOK(7);
		RTDBGAL(Current, 0, 0xF800048D, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1165, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(7,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTHOOK(8);
	RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(9);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(6);
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EV_STOCK_PIXMAPS_IMP}.information_pixmap_xpm */
EIF_TYPED_VALUE F1075_9992 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "information_pixmap_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15672);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15672);
	RTIV(Current, RTAL);Result = (EIF_POINTER) information_pixmap_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.error_pixmap_xpm */
EIF_TYPED_VALUE F1075_9993 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error_pixmap_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15673);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15673);
	RTIV(Current, RTAL);Result = (EIF_POINTER) error_pixmap_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.warning_pixmap_xpm */
EIF_TYPED_VALUE F1075_9994 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "warning_pixmap_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15674);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15674);
	RTIV(Current, RTAL);Result = (EIF_POINTER) warning_pixmap_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.question_pixmap_xpm */
EIF_TYPED_VALUE F1075_9995 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "question_pixmap_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15675);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15675);
	RTIV(Current, RTAL);Result = (EIF_POINTER) question_pixmap_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.collate_pixmap_xpm */
EIF_TYPED_VALUE F1075_9996 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "collate_pixmap_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15676);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15676);
	RTIV(Current, RTAL);Result = (EIF_POINTER) collate_pixmap_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.no_collate_pixmap_xpm */
EIF_TYPED_VALUE F1075_9997 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_collate_pixmap_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15677);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15677);
	RTIV(Current, RTAL);Result = (EIF_POINTER) no_collate_pixmap_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.landscape_pixmap_xpm */
EIF_TYPED_VALUE F1075_9998 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "landscape_pixmap_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15678);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15678);
	RTIV(Current, RTAL);Result = (EIF_POINTER) landscape_pixmap_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.portrait_pixmap_xpm */
EIF_TYPED_VALUE F1075_9999 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "portrait_pixmap_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15679);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15679);
	RTIV(Current, RTAL);Result = (EIF_POINTER) portrait_pixmap_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.busy_cursor_xpm */
EIF_TYPED_VALUE F1075_10000 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "busy_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15680);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15680);
	RTIV(Current, RTAL);Result = (EIF_POINTER) busy_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.crosshair_cursor_xpm */
EIF_TYPED_VALUE F1075_10001 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "crosshair_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15681);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15681);
	RTIV(Current, RTAL);Result = (EIF_POINTER) crosshair_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.help_cursor_xpm */
EIF_TYPED_VALUE F1075_10002 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "help_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15682);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15682);
	RTIV(Current, RTAL);Result = (EIF_POINTER) help_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.ibeam_cursor_xpm */
EIF_TYPED_VALUE F1075_10003 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ibeam_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15683);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15683);
	RTIV(Current, RTAL);Result = (EIF_POINTER) ibeam_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.no_cursor_xpm */
EIF_TYPED_VALUE F1075_10004 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15684);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15684);
	RTIV(Current, RTAL);Result = (EIF_POINTER) no_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.sizeall_cursor_xpm */
EIF_TYPED_VALUE F1075_10005 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sizeall_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15685);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15685);
	RTIV(Current, RTAL);Result = (EIF_POINTER) sizeall_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.sizenesw_cursor_xpm */
EIF_TYPED_VALUE F1075_10006 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sizenesw_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15686);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15686);
	RTIV(Current, RTAL);Result = (EIF_POINTER) sizenesw_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.sizens_cursor_xpm */
EIF_TYPED_VALUE F1075_10007 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sizens_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15687);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15687);
	RTIV(Current, RTAL);Result = (EIF_POINTER) sizens_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.sizenwse_cursor_xpm */
EIF_TYPED_VALUE F1075_10008 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sizenwse_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15688);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15688);
	RTIV(Current, RTAL);Result = (EIF_POINTER) sizenwse_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.sizewe_cursor_xpm */
EIF_TYPED_VALUE F1075_10009 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sizewe_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15689);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15689);
	RTIV(Current, RTAL);Result = (EIF_POINTER) sizewe_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.standard_cursor_xpm */
EIF_TYPED_VALUE F1075_10010 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "standard_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15690);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15690);
	RTIV(Current, RTAL);Result = (EIF_POINTER) standard_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.uparrow_cursor_xpm */
EIF_TYPED_VALUE F1075_10011 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "uparrow_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15656);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15656);
	RTIV(Current, RTAL);Result = (EIF_POINTER) uparrow_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_STOCK_PIXMAPS_IMP}.wait_cursor_xpm */
EIF_TYPED_VALUE F1075_10012 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wait_cursor_xpm";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1074, Current, 0, 0, 15657);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1074, Current, 15657);
	RTIV(Current, RTAL);Result = (EIF_POINTER) wait_cursor_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

void EIF_Minit1075 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
