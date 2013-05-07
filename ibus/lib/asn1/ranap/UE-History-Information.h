/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_UE_History_Information_H_
#define	_UE_History_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-History-Information */
typedef OCTET_STRING_t	 UE_History_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_History_Information;
asn_struct_free_f UE_History_Information_free;
asn_struct_print_f UE_History_Information_print;
asn_constr_check_f UE_History_Information_constraint;
ber_type_decoder_f UE_History_Information_decode_ber;
der_type_encoder_f UE_History_Information_encode_der;
xer_type_decoder_f UE_History_Information_decode_xer;
xer_type_encoder_f UE_History_Information_encode_xer;
per_type_decoder_f UE_History_Information_decode_uper;
per_type_encoder_f UE_History_Information_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_History_Information_H_ */
#include <asn_internal.h>