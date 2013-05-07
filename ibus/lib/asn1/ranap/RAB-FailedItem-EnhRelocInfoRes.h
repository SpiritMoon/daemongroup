/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU-Contents"
 * 	found in "RANAP-PDU-Contents.asn"
 */

#ifndef	_RAB_FailedItem_EnhRelocInfoRes_H_
#define	_RAB_FailedItem_EnhRelocInfoRes_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANAP-CN-DomainIndicator.h"
#include "RAB-ID.h"
#include "RANAP-Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
/* auto changed by perl script */
/*struct ;*/

/* RAB-FailedItem-EnhRelocInfoRes */
typedef struct RAB_FailedItem_EnhRelocInfoRes {
	RANAP_CN_DomainIndicator_t	 cN_DomainIndicator;
	RAB_ID_t	 rAB_ID;
	Ranap_Cause_t	 cause;
/* auto changed by perl script */
	struct 	 ProtocolExtensionContainer_209P0 *iE_Extensions ;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_FailedItem_EnhRelocInfoRes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_FailedItem_EnhRelocInfoRes;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _RAB_FailedItem_EnhRelocInfoRes_H_ */
#include <asn_internal.h>