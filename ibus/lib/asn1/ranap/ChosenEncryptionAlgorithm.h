/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_ChosenEncryptionAlgorithm_H_
#define	_ChosenEncryptionAlgorithm_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EncryptionAlgorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ChosenEncryptionAlgorithm */
typedef EncryptionAlgorithm_t	 ChosenEncryptionAlgorithm_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ChosenEncryptionAlgorithm;
asn_struct_free_f ChosenEncryptionAlgorithm_free;
asn_struct_print_f ChosenEncryptionAlgorithm_print;
asn_constr_check_f ChosenEncryptionAlgorithm_constraint;
ber_type_decoder_f ChosenEncryptionAlgorithm_decode_ber;
der_type_encoder_f ChosenEncryptionAlgorithm_encode_der;
xer_type_decoder_f ChosenEncryptionAlgorithm_decode_xer;
xer_type_encoder_f ChosenEncryptionAlgorithm_encode_xer;
per_type_decoder_f ChosenEncryptionAlgorithm_decode_uper;
per_type_encoder_f ChosenEncryptionAlgorithm_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ChosenEncryptionAlgorithm_H_ */
#include <asn_internal.h>