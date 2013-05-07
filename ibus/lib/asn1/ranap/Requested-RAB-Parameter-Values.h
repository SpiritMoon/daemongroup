/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_Requested_RAB_Parameter_Values_H_
#define	_Requested_RAB_Parameter_Values_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Requested_RAB_Parameter_MaxBitrateList;
struct Requested_RAB_Parameter_GuaranteedBitrateList;
/* auto changed by perl script */
/*struct ;*/

/* Requested-RAB-Parameter-Values */
typedef struct Requested_RAB_Parameter_Values {
/* auto changed by perl script */
	struct Requested_RAB_Parameter_MaxBitrateList	*requestedMaxBitrates;	/* OPTIONAL */
/* auto changed by perl script */
	struct Requested_RAB_Parameter_GuaranteedBitrateList	*requestedGuaranteedBitrates;	/* OPTIONAL */
/* auto changed by perl script */
	struct 	 ProtocolExtensionContainer_209P0 *iE_Extensions ;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Requested_RAB_Parameter_Values_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Requested_RAB_Parameter_Values;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Requested-RAB-Parameter-MaxBitrateList.h"
#include "Requested-RAB-Parameter-GuaranteedBitrateList.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _Requested_RAB_Parameter_Values_H_ */
#include <asn_internal.h>