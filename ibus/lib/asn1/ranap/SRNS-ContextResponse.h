/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU-Contents"
 * 	found in "RANAP-PDU-Contents.asn"
 */

#ifndef	_SRNS_ContextResponse_H_
#define	_SRNS_ContextResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANAP-ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
/* auto changed by perl script */
/*struct ;*/

/* SRNS-ContextResponse */
typedef struct SRNS_ContextResponse {
	ProtocolIE_Container_139P0_t	 protocolIEs;
/* auto changed by perl script */
	struct 	 ProtocolExtensionContainer_209P0 *protocolExtensions ;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRNS_ContextResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRNS_ContextResponse;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _SRNS_ContextResponse_H_ */
#include <asn_internal.h>