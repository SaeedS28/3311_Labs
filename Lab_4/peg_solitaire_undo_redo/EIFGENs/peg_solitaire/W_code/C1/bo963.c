/*
 * Code for class BOARD_TEMPLATES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F963_7139(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7140(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7141(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7142(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7143(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7144(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7145(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7146(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7147(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7148(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7149(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7150(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7151(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7152(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7153(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7154(EIF_REFERENCE);
extern EIF_TYPED_VALUE F963_7155(EIF_REFERENCE);
extern void F963_7840(EIF_REFERENCE, int);
extern void EIF_Minit963(void);

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

/* {BOARD_TEMPLATES}.make */
void F963_7139 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 962, Current, 0, 0, 13415);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(962, Current, 13415);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4973, 0xF80003C8, 0); /* default_board */
	tr1 = RTLNSMART(RTWCT(4973, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5015, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4973, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4974, 0xF80003C8, 0); /* easy_board */
	tr1 = RTLNSMART(RTWCT(4974, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5016, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4974, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 4975, 0xF80003C8, 0); /* cross_board */
	tr1 = RTLNSMART(RTWCT(4975, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5017, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4975, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 4976, 0xF80003C8, 0); /* plus_board */
	tr1 = RTLNSMART(RTWCT(4976, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5018, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4976, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 4977, 0xF80003C8, 0); /* pyramid_board */
	tr1 = RTLNSMART(RTWCT(4977, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5019, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4977, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 4978, 0xF80003C8, 0); /* arrow_board */
	tr1 = RTLNSMART(RTWCT(4978, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5020, Dtype(tr1)))(tr1);
	RTNHOOK(6,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4978, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 4979, 0xF80003C8, 0); /* diamond_board */
	tr1 = RTLNSMART(RTWCT(4979, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5021, Dtype(tr1)))(tr1);
	RTNHOOK(7,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4979, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 4980, 0xF80003C8, 0); /* skull_board */
	tr1 = RTLNSMART(RTWCT(4980, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5022, Dtype(tr1)))(tr1);
	RTNHOOK(8,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4980, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 4981, 0xF80000E7, 0); /* default_board_out */
	tr1 = RTMS_EX_H("*******\012*******\012*******\012*******\012*******\012*******\012*******",55,778293802);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4981, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 4982, 0xF80000E7, 0); /* easy_board_out */
	tr1 = RTMS_EX_H("***.***\012***O***\012***O***\012***.***\012***O***\012***.***\012*******",55,2056662058);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4982, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 4983, 0xF80000E7, 0); /* cross_board_out */
	tr1 = RTMS_EX_H("**...**\012**.O.**\012..OOO..\012...O...\012...O...\012**...**\012**...**",55,338884138);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4983, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 4984, 0xF80000E7, 0); /* plus_board_out */
	tr1 = RTMS_EX_H("**...**\012**.O.**\012...O...\012.OOOOO.\012...O...\012**.O.**\012**...**",55,1617426474);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4984, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(13);
	RTDBGAA(Current, dtype, 4985, 0xF80000E7, 0); /* pyramid_board_out */
	tr1 = RTMS_EX_H("**...**\012**.O.**\012..OOO..\012.OOOOO.\012OOOOOOO\012**...**\012**...**",55,720226346);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4985, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(14);
	RTDBGAA(Current, dtype, 4986, 0xF80000E7, 0); /* arrow_board_out */
	tr1 = RTMS_EX_H("**.O.**\012**OOO**\012.OOOOO.\012...O...\012...O...\012**OOO**\012**OOO**",55,1324979754);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4986, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(15);
	RTDBGAA(Current, dtype, 4987, 0xF80000E7, 0); /* diamond_board_out */
	tr1 = RTMS_EX_H("**.O.**\012**OOO**\012.OOOOO.\012OOO.OOO\012.OOOOO.\012**OOO**\012**.O.**",55,481193770);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4987, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(16);
	RTDBGAA(Current, dtype, 4988, 0xF80000E7, 0); /* skull_board_out */
	tr1 = RTMS_EX_H("**OOO**\012**OOO**\012.OOOOO.\012.O.O.O.\012.OOOOO.\012**OOO**\012**OOO**",55,1784625706);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4988, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {BOARD_TEMPLATES}.default_board */
EIF_TYPED_VALUE F963_7140 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4973,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.easy_board */
EIF_TYPED_VALUE F963_7141 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4974,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.cross_board */
EIF_TYPED_VALUE F963_7142 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4975,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.plus_board */
EIF_TYPED_VALUE F963_7143 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4976,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.pyramid_board */
EIF_TYPED_VALUE F963_7144 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4977,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.arrow_board */
EIF_TYPED_VALUE F963_7145 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4978,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.diamond_board */
EIF_TYPED_VALUE F963_7146 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4979,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.skull_board */
EIF_TYPED_VALUE F963_7147 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4980,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.default_board_out */
EIF_TYPED_VALUE F963_7148 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4981,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.easy_board_out */
EIF_TYPED_VALUE F963_7149 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4982,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.cross_board_out */
EIF_TYPED_VALUE F963_7150 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4983,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.plus_board_out */
EIF_TYPED_VALUE F963_7151 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4984,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.pyramid_board_out */
EIF_TYPED_VALUE F963_7152 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4985,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.arrow_board_out */
EIF_TYPED_VALUE F963_7153 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4986,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.diamond_board_out */
EIF_TYPED_VALUE F963_7154 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4987,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}.skull_board_out */
EIF_TYPED_VALUE F963_7155 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4988,Dtype(Current)));
	return r;
}


/* {BOARD_TEMPLATES}._invariant */
void F963_7840 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 962, Current, 0, 7839);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("correct_default_board_output", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4981, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr1, RTMS_EX_H("*******\012*******\012*******\012*******\012*******\012*******\012*******",55,778293802))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("correct_easy_board_output", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4982, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr1, RTMS_EX_H("***.***\012***O***\012***O***\012***.***\012***O***\012***.***\012*******",55,2056662058))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("correct_cross_board_output", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4983, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr1, RTMS_EX_H("**...**\012**.O.**\012..OOO..\012...O...\012...O...\012**...**\012**...**",55,338884138))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("correct_plus_board_output", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4984, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr1, RTMS_EX_H("**...**\012**.O.**\012...O...\012.OOOOO.\012...O...\012**.O.**\012**...**",55,1617426474))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("correct_pyramid_board_output", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4985, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr1, RTMS_EX_H("**...**\012**.O.**\012..OOO..\012.OOOOO.\012OOOOOOO\012**...**\012**...**",55,720226346))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("correct_arrow_board_output", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4986, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr1, RTMS_EX_H("**.O.**\012**OOO**\012.OOOOO.\012...O...\012...O...\012**OOO**\012**OOO**",55,1324979754))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("correct_diamond_board_output", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4987, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr1, RTMS_EX_H("**.O.**\012**OOO**\012.OOOOO.\012OOO.OOO\012.OOOOO.\012**OOO**\012**.O.**",55,481193770))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("correct_skull_board_output", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4988, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr1, RTMS_EX_H("**OOO**\012**OOO**\012.OOOOO.\012.O.O.O.\012.OOOOO.\012**OOO**\012**OOO**",55,1784625706))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("consistent_default_board_outputs", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4973, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4981, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr2, tr1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("consistent_easy_board_outputs", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4974, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4982, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr2, tr1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("consistent_cross_board_outputs", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4975, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4983, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr2, tr1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("consistent_plus_board_outputs", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4976, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4984, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr2, tr1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("consistent_pyramid_board_outputs", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4977, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4985, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr2, tr1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("consistent_arrow_board_outputs", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4978, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4986, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr2, tr1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("consistent_diamond_board_outputs", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4987, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr2, tr1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("consistent_skull_board_outputs", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(28, "out", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4988, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr2, tr1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef up2
}

void EIF_Minit963 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
