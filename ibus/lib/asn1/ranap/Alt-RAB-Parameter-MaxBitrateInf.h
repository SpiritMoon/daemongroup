/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_Alt_RAB_Parameter_MaxBitrateInf_H_
#define	_Alt_RAB_Parameter_MaxBitrateInf_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Alt-RAB-Parameter-MaxBitrateType.h"
#include <constr_SEQUENCE.h>
#include "PDU_ARRAY.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Alt_RAB_Parameter_MaxBitrates;

/* Alt-RAB-Parameter-MaxBitrateInf */
typedef struct Alt_RAB_Parameter_MaxBitrateInf {
	Alt_RAB_Parameter_MaxBitrateType_t	 altMaxBitrateType;
/* auto changed by perl script */
	struct Alt_RAB_Parameter_MaxBitrates	*altMaxBitrates;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Alt_RAB_Parameter_MaxBitrateInf_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Alt_RAB_Parameter_MaxBitrateInf;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Alt-RAB-Parameter-MaxBitrates.h"

#endif	/* _Alt_RAB_Parameter_MaxBitrateInf_H_ */
#include <asn_internal.h>