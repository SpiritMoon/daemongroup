/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_MBMS_PTP_RAB_ID_H_
#define	_MBMS_PTP_RAB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBMS-PTP-RAB-ID */
typedef BIT_STRING_t	 MBMS_PTP_RAB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_PTP_RAB_ID;
asn_struct_free_f MBMS_PTP_RAB_ID_free;
asn_struct_print_f MBMS_PTP_RAB_ID_print;
asn_constr_check_f MBMS_PTP_RAB_ID_constraint;
ber_type_decoder_f MBMS_PTP_RAB_ID_decode_ber;
der_type_encoder_f MBMS_PTP_RAB_ID_encode_der;
xer_type_decoder_f MBMS_PTP_RAB_ID_decode_xer;
xer_type_encoder_f MBMS_PTP_RAB_ID_encode_xer;
per_type_decoder_f MBMS_PTP_RAB_ID_decode_uper;
per_type_encoder_f MBMS_PTP_RAB_ID_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_PTP_RAB_ID_H_ */
#include <asn_internal.h>