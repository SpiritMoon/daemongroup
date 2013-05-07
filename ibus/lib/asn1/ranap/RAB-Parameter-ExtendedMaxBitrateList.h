/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_RAB_Parameter_ExtendedMaxBitrateList_H_
#define	_RAB_Parameter_ExtendedMaxBitrateList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ExtendedMaxBitrate.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RAB-Parameter-ExtendedMaxBitrateList */
typedef struct RAB_Parameter_ExtendedMaxBitrateList {
	A_SEQUENCE_OF(ExtendedMaxBitrate_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_Parameter_ExtendedMaxBitrateList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_Parameter_ExtendedMaxBitrateList;

#ifdef __cplusplus
}
#endif

#endif	/* _RAB_Parameter_ExtendedMaxBitrateList_H_ */
#include <asn_internal.h>