/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_PermittedIntegrityProtectionAlgorithms_H_
#define	_PermittedIntegrityProtectionAlgorithms_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntegrityProtectionAlgorithm.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PermittedIntegrityProtectionAlgorithms */
typedef struct PermittedIntegrityProtectionAlgorithms {
	A_SEQUENCE_OF(IntegrityProtectionAlgorithm_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PermittedIntegrityProtectionAlgorithms_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PermittedIntegrityProtectionAlgorithms;

#ifdef __cplusplus
}
#endif

#endif	/* _PermittedIntegrityProtectionAlgorithms_H_ */
#include <asn_internal.h>