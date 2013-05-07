/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_TMGI_H_
#define	_TMGI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNidentity.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
/* auto changed by perl script */
/*struct ;*/

/* TMGI */
typedef struct TMGI {
	PLMNidentity_t	 pLMNidentity;
	OCTET_STRING_t	 serviceID;
/* auto changed by perl script */
	struct 	 ProtocolExtensionContainer_209P0 *iE_Extensions ;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TMGI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TMGI;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _TMGI_H_ */
#include <asn_internal.h>