/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_PLMNidentity_H_
#define	_PLMNidentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TBCD-STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PLMNidentity */
typedef TBCD_STRING_t	 PLMNidentity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMNidentity;
asn_struct_free_f PLMNidentity_free;
asn_struct_print_f PLMNidentity_print;
asn_constr_check_f PLMNidentity_constraint;
ber_type_decoder_f PLMNidentity_decode_ber;
der_type_encoder_f PLMNidentity_encode_der;
xer_type_decoder_f PLMNidentity_decode_xer;
xer_type_encoder_f PLMNidentity_encode_xer;
per_type_decoder_f PLMNidentity_decode_uper;
per_type_encoder_f PLMNidentity_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PLMNidentity_H_ */
#include <asn_internal.h>