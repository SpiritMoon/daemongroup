/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_Alt_RAB_Parameter_SupportedMaxBitrateInf_H_
#define	_Alt_RAB_Parameter_SupportedMaxBitrateInf_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Alt-RAB-Parameter-MaxBitrateType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Alt_RAB_Parameter_SupportedMaxBitrates;
/* auto changed by perl script */
/*struct ;*/

/* Alt-RAB-Parameter-SupportedMaxBitrateInf */
typedef struct Alt_RAB_Parameter_SupportedMaxBitrateInf {
	Alt_RAB_Parameter_MaxBitrateType_t	 altSupportedMaxBitrateType;
/* auto changed by perl script */
	struct Alt_RAB_Parameter_SupportedMaxBitrates	*altSupportedMaxBitrates;	/* OPTIONAL */
/* auto changed by perl script */
	struct 	 ProtocolExtensionContainer_209P0 *iE_Extensions ;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Alt_RAB_Parameter_SupportedMaxBitrateInf_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Alt_RAB_Parameter_SupportedMaxBitrateInf;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Alt-RAB-Parameter-SupportedMaxBitrates.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _Alt_RAB_Parameter_SupportedMaxBitrateInf_H_ */
#include <asn_internal.h>