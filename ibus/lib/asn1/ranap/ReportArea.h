/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_ReportArea_H_
#define	_ReportArea_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportArea {
	ReportArea_service_area	= 0,
	ReportArea_geographical_area	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ReportArea;

/* ReportArea */
typedef ENUMERATED_t	 ReportArea_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportArea;
asn_struct_free_f ReportArea_free;
asn_struct_print_f ReportArea_print;
asn_constr_check_f ReportArea_constraint;
ber_type_decoder_f ReportArea_decode_ber;
der_type_encoder_f ReportArea_encode_der;
xer_type_decoder_f ReportArea_decode_xer;
xer_type_encoder_f ReportArea_encode_xer;
per_type_decoder_f ReportArea_decode_uper;
per_type_encoder_f ReportArea_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportArea_H_ */
#include <asn_internal.h>
