/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_ListOF_SNAs_H_
#define	_ListOF_SNAs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SNAC.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ListOF-SNAs */
typedef struct ListOF_SNAs {
	A_SEQUENCE_OF(SNAC_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ListOF_SNAs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ListOF_SNAs;

#ifdef __cplusplus
}
#endif

#endif	/* _ListOF_SNAs_H_ */
#include <asn_internal.h>