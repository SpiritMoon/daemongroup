/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_TraceType_H_
#define	_TraceType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TraceType */
typedef OCTET_STRING_t	 TraceType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TraceType;
asn_struct_free_f TraceType_free;
asn_struct_print_f TraceType_print;
asn_constr_check_f TraceType_constraint;
ber_type_decoder_f TraceType_decode_ber;
der_type_encoder_f TraceType_encode_der;
xer_type_decoder_f TraceType_decode_xer;
xer_type_encoder_f TraceType_encode_xer;
per_type_decoder_f TraceType_decode_uper;
per_type_encoder_f TraceType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TraceType_H_ */
#include <asn_internal.h>