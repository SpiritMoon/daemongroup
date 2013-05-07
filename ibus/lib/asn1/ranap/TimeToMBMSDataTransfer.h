/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_TimeToMBMSDataTransfer_H_
#define	_TimeToMBMSDataTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TimeToMBMSDataTransfer */
typedef OCTET_STRING_t	 TimeToMBMSDataTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeToMBMSDataTransfer;
asn_struct_free_f TimeToMBMSDataTransfer_free;
asn_struct_print_f TimeToMBMSDataTransfer_print;
asn_constr_check_f TimeToMBMSDataTransfer_constraint;
ber_type_decoder_f TimeToMBMSDataTransfer_decode_ber;
der_type_encoder_f TimeToMBMSDataTransfer_encode_der;
xer_type_decoder_f TimeToMBMSDataTransfer_decode_xer;
xer_type_encoder_f TimeToMBMSDataTransfer_encode_xer;
per_type_decoder_f TimeToMBMSDataTransfer_decode_uper;
per_type_encoder_f TimeToMBMSDataTransfer_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeToMBMSDataTransfer_H_ */
#include <asn_internal.h>