#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* TRACING_HANDLER per_thread_trace */
void A32_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(822, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A143_159_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F143_7027)(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_TYPED_VALUE _A307_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_TYPED_VALUE _A360_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_TYPED_VALUE _A367_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] has */
EIF_TYPED_VALUE _A612_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_TYPED_VALUE _A955_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3015, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A166_95 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1715, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A166_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3109, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A166_160 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3110, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* INSTRUCTOR_DICTIONARY_TESTS test_setup */
EIF_TYPED_VALUE _A966_78 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5550, "test_setup", closed [1].it_r))(closed [1].it_r);
}

	/* INSTRUCTOR_DICTIONARY_TESTS test_model */
EIF_TYPED_VALUE _A966_79 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5551, "test_model", closed [1].it_r))(closed [1].it_r);
}

	/* INSTRUCTOR_DICTIONARY_TESTS test_get_keys */
EIF_TYPED_VALUE _A966_81 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5553, "test_get_keys", closed [1].it_r))(closed [1].it_r);
}

	/* INSTRUCTOR_DICTIONARY_TESTS test_remove */
EIF_TYPED_VALUE _A966_80 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5552, "test_remove", closed [1].it_r))(closed [1].it_r);
}

	/* INSTRUCTOR_DICTIONARY_TESTS test_iterable_dictionary */
EIF_TYPED_VALUE _A966_82 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5554, "test_iterable_dictionary", closed [1].it_r))(closed [1].it_r);
}

	/* INSTRUCTOR_DICTIONARY_TESTS test_iteration_cursor */
EIF_TYPED_VALUE _A966_83 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5555, "test_iteration_cursor", closed [1].it_r))(closed [1].it_r);
}

	/* SET [INTEGER_32] eq */
EIF_TYPED_VALUE _A1001_61_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5321, "eq", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* SET [G#1] eq */
EIF_TYPED_VALUE _A1003_61_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5321, "eq", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* SET [INTEGER_32] g_to_true */
EIF_TYPED_VALUE _A1001_60_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5320, "g_to_true", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* SET [G#1] g_to_true */
EIF_TYPED_VALUE _A1003_60_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5320, "g_to_true", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* SET [INTEGER_32] in_both_set */
EIF_TYPED_VALUE _A1001_63_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5323, "in_both_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [G#1] in_both_set */
EIF_TYPED_VALUE _A1003_63_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5323, "in_both_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [INTEGER_32] in_either_set */
EIF_TYPED_VALUE _A1001_62_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5322, "in_either_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* SET [G#1] in_either_set */
EIF_TYPED_VALUE _A1003_62_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5322, "in_either_set", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, G#2] in_range */
EIF_TYPED_VALUE _A1000_86_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5378, "in_range", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, G#2] in_domain */
EIF_TYPED_VALUE _A1000_85_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5377, "in_domain", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* FUN [INTEGER_32, G#2] in_both_fun */
EIF_TYPED_VALUE _A1000_88_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5380, "in_both_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* FUN [INTEGER_32, G#2] in_either_fun */
EIF_TYPED_VALUE _A1000_87_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5379, "in_either_fun", closed [1].it_r))(closed [1].it_r, open [1], closed [2], closed [3]);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A32_36,
(fnptr)A166_95,
(fnptr)A166_159,
(fnptr)A166_160,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
