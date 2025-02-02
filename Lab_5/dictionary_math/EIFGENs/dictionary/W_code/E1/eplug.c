/*
 * Generated by ISE 17.05.10.0416 GPL Edition - linux-x86-64
 */

#include "eif_eiffel.h"
#include "eif_project.h"
#include "egc_include.h"

#ifdef __cplusplus
extern "C" {
#endif
extern void F1_23();
extern EIF_REFERENCE F1_14();
extern void F230_6475();
extern void F232_6649();
extern void F237_6718();
extern void F238_6857();
extern void F248_3777();
extern void F256_6355();
extern void F53_1191();
extern EIF_REFERENCE F53_1178();
extern EIF_BOOLEAN F53_1190();
extern EIF_BOOLEAN F53_1198();
extern void F53_1200();
extern void F53_1201();
extern void F53_1202();
extern void F46_1104();
extern EIF_TYPED_VALUE F46_1105();

long *eif_area_table = (long *)0;
long *eif_lower_table = (long *)0;


extern void egc_init_plug (void); 
void egc_init_plug (void)
{
	egc_prof_enabled = (EIF_INTEGER) 0;
	egc_correct_mismatch = (void (*)(EIF_REFERENCE)) F1_23;
	egc_twin = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F1_14;
	egc_strmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F230_6475;
	egc_str32make = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F237_6718;
	egc_arrmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F248_3777;
	egc_strset = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F232_6649;
	egc_str32set = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F238_6857;
	egc_routdisp_wb = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F256_6355;
	egc_is_scoop_capable = 1;
	egc_set_exception_data = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F53_1191;
	egc_set_last_exception = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1190;
	egc_last_exception = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F53_1178;
	egc_is_code_ignored = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1198;
	egc_once_raise = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1200;
	egc_init_exception_manager = (void (*)(EIF_REFERENCE)) F53_1201;
	egc_free_preallocated_trace = (void (*)(EIF_REFERENCE)) F53_1202;

	egc_str_dtype = 231;

	egc_str32_dtype = 237;
	egc_arr_dtype = 247;
	egc_tup_dtype = 185;
	egc_disp_rout_id = 3182;
	egc_copy_rout_id = 18;
	egc_is_equal_rout_id = 11;

	egc_sp_char = 0x01AF;
	egc_sp_wchar = 0x0228;
	egc_sp_bool = 0x0240;
	egc_sp_uint8 = 0x0205;
	egc_sp_uint16 = 0x028B;
	egc_sp_uint32 = 0x01E5;
	egc_sp_uint64 = 0x017A;
	egc_sp_int8 = 0x02F5;
	egc_sp_int16 = 0x0318;
	egc_sp_int32 = 0x013F;
	egc_sp_int64 = 0x033B;
	egc_sp_real32 = 0x02D2;
	egc_sp_real64 = 0x02AF;
	egc_sp_pointer = 0x0267;
	egc_sp_ref = 0xFA;

	egc_uint8_dtype = 208;
	egc_uint16_dtype = 214;
	egc_uint32_dtype = 211;
	egc_uint64_dtype = 223;
	egc_int8_dtype = 187;
	egc_int16_dtype = 220;
	egc_int32_dtype = 217;
	egc_int64_dtype = 199;
	egc_bool_dtype = 202;
	egc_real32_dtype = 190;
	egc_char_dtype = 196;
	egc_wchar_dtype = 193;
	egc_real64_dtype = 205;
	egc_point_dtype = 226;

	egc_exception_dtype = 64;
	egc_except_emnger_dtype = 52;

	egc_ce_type = egc_ce_type_init;

	egc_ce_exp_type = egc_ce_exp_type_init;
	egc_fsystem = egc_fsystem_init;
	egc_system_mod_init = egc_system_mod_init_init;
	egc_partab = egc_partab_init;
	egc_partab_size = egc_partab_size_init;
	egc_foption = egc_foption_init;
	egc_frozen = egc_frozen_init;
	egc_fpatidtab = egc_fpatidtab_init;
	egc_address_table = egc_address_table_init;
	egc_fpattern = egc_fpattern_init;

	egc_einit = egc_einit_init;
	egc_tabinit = egc_tabinit_init;
	egc_forg_table = egc_forg_table_init;

	egc_system_name = "dictionary";
	egc_system_location = "/cs/home/saeeds28/EECS3311 labs/Lab_5/dictionary_math/EIFGENs/dictionary/W_code";
	egc_compiler_tag = 38;
	egc_project_version = 1496688415;
	egc_has_old_special_semantic = 0;
	egc_has_ieee_semantic = 1;
	scount = 1003;

	egc_rcount = 1;
	egc_ridx = 0;
	egc_rlist = (char**) eif_malloc (sizeof(char*)*egc_rcount);
	egc_rcdt = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcrid = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcarg = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rlist[0] = "TEST_DICTIONARY.make";
	egc_rcdt[0] = 0;
	egc_rcrid[0] = 5042;
	egc_rcarg[0] = 0;
	
	
	egc_platform_level = 0x00000D00;
	egc_rt_extension_dt = 45;
	egc_rt_extension_notify = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F46_1104;
	egc_rt_extension_notify_argument = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F46_1105;
}

void egc_rcdt_init (void)
{
	if (egc_rcdt[0] == 0) {
		egc_rcdt[0] = 967; /* TEST_DICTIONARY */
	}
}

#ifdef __cplusplus
}
#endif
