/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_RAB_AsymmetryIndicator_H_
#define	_RAB_AsymmetryIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RAB_AsymmetryIndicator {
	RAB_AsymmetryIndicator_symmetric_bidirectional	= 0,
	RAB_AsymmetryIndicator_asymmetric_unidirectional_downlink	= 1,
	RAB_AsymmetryIndicator_asymmetric_unidirectional_uplink	= 2,
	RAB_AsymmetryIndicator_asymmetric_bidirectional	= 3
	/*
	 * Enumeration is extensible
	 */
} e_RAB_AsymmetryIndicator;

/* RAB-AsymmetryIndicator */
typedef ENUMERATED_t	 RAB_AsymmetryIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_AsymmetryIndicator;
asn_struct_free_f RAB_AsymmetryIndicator_free;
asn_struct_print_f RAB_AsymmetryIndicator_print;
asn_constr_check_f RAB_AsymmetryIndicator_constraint;
ber_type_decoder_f RAB_AsymmetryIndicator_decode_ber;
der_type_encoder_f RAB_AsymmetryIndicator_encode_der;
xer_type_decoder_f RAB_AsymmetryIndicator_decode_xer;
xer_type_encoder_f RAB_AsymmetryIndicator_encode_xer;
per_type_decoder_f RAB_AsymmetryIndicator_decode_uper;
per_type_encoder_f RAB_AsymmetryIndicator_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RAB_AsymmetryIndicator_H_ */
#include <asn_internal.h>
