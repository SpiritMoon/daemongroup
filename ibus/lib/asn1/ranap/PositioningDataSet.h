/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_PositioningDataSet_H_
#define	_PositioningDataSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PositioningMethodAndUsage.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PositioningDataSet */
typedef struct PositioningDataSet {
	A_SEQUENCE_OF(PositioningMethodAndUsage_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PositioningDataSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositioningDataSet;

#ifdef __cplusplus
}
#endif

#endif	/* _PositioningDataSet_H_ */
#include <asn_internal.h>