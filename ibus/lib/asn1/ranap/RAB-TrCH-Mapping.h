/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_RAB_TrCH_Mapping_H_
#define	_RAB_TrCH_Mapping_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RAB_TrCH_MappingItem;

/* RAB-TrCH-Mapping */
typedef struct RAB_TrCH_Mapping {
	A_SEQUENCE_OF(struct RAB_TrCH_MappingItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_TrCH_Mapping_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_TrCH_Mapping;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RAB-TrCH-MappingItem.h"

#endif	/* _RAB_TrCH_Mapping_H_ */
#include <asn_internal.h>