/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_RANAP_CauseProtocol_H_
#define	_RANAP_CauseProtocol_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RanapCauseProtocol {
	Ranap_CauseProtocol_transfer_syntax_error	= 97,
	Ranap_CauseProtocol_semantic_error	= 98,
	Ranap_CauseProtocol_message_not_compatible_with_receiver_state	= 99,
	Ranap_CauseProtocol_abstract_syntax_error_reject	= 100,
	Ranap_CauseProtocol_abstract_syntax_error_ignore_and_notify	= 101,
	Ranap_CauseProtocol_abstract_syntax_error_falsely_constructed_message	= 102
} Ranap_e_CauseProtocol;

/* CauseProtocol */
typedef long	 Ranap_CauseProtocol_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_CauseProtocol;
asn_struct_free_f Ranap_CauseProtocol_free;
asn_struct_print_f Ranap_CauseProtocol_print;
asn_constr_check_f Ranap_CauseProtocol_constraint;
ber_type_decoder_f Ranap_CauseProtocol_decode_ber;
der_type_encoder_f Ranap_CauseProtocol_encode_der;
xer_type_decoder_f Ranap_CauseProtocol_decode_xer;
xer_type_encoder_f Ranap_CauseProtocol_encode_xer;
per_type_decoder_f Ranap_CauseProtocol_decode_uper;
per_type_encoder_f Ranap_CauseProtocol_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseProtocol_H_ */
#include <asn_internal.h>
