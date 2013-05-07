/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_DataVolumeReportingIndication_H_
#define	_DataVolumeReportingIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DataVolumeReportingIndication {
	DataVolumeReportingIndication_do_report	= 0,
	DataVolumeReportingIndication_do_not_report	= 1
} e_DataVolumeReportingIndication;

/* DataVolumeReportingIndication */
typedef ENUMERATED_t	 DataVolumeReportingIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DataVolumeReportingIndication;
asn_struct_free_f DataVolumeReportingIndication_free;
asn_struct_print_f DataVolumeReportingIndication_print;
asn_constr_check_f DataVolumeReportingIndication_constraint;
ber_type_decoder_f DataVolumeReportingIndication_decode_ber;
der_type_encoder_f DataVolumeReportingIndication_encode_der;
xer_type_decoder_f DataVolumeReportingIndication_decode_xer;
xer_type_encoder_f DataVolumeReportingIndication_encode_xer;
per_type_decoder_f DataVolumeReportingIndication_decode_uper;
per_type_encoder_f DataVolumeReportingIndication_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DataVolumeReportingIndication_H_ */
#include <asn_internal.h>