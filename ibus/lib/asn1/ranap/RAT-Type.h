/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_RAT_Type_H_
#define	_RAT_Type_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RAT_Type {
	RAT_Type_utran	= 0,
	RAT_Type_geran	= 1
	/*
	 * Enumeration is extensible
	 */
} e_RAT_Type;

/* RAT-Type */
typedef ENUMERATED_t	 RAT_Type_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAT_Type;
asn_struct_free_f RAT_Type_free;
asn_struct_print_f RAT_Type_print;
asn_constr_check_f RAT_Type_constraint;
ber_type_decoder_f RAT_Type_decode_ber;
der_type_encoder_f RAT_Type_encode_der;
xer_type_decoder_f RAT_Type_decode_xer;
xer_type_encoder_f RAT_Type_encode_xer;
per_type_decoder_f RAT_Type_decode_uper;
per_type_encoder_f RAT_Type_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RAT_Type_H_ */
#include <asn_internal.h>