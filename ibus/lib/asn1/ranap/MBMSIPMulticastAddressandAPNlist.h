/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_MBMSIPMulticastAddressandAPNlist_H_
#define	_MBMSIPMulticastAddressandAPNlist_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TMGI.h"
#include "IPMulticastAddress.h"
#include "APN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
/* auto changed by perl script */
/*struct ;*/

/* MBMSIPMulticastAddressandAPNlist */
typedef struct MBMSIPMulticastAddressandAPNlist {
	TMGI_t	 tMGI;
	IPMulticastAddress_t	 iPMulticastAddress;
	APN_t	 aPN;
/* auto changed by perl script */
	struct 	 ProtocolExtensionContainer_209P0 *iE_Extensions ;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMSIPMulticastAddressandAPNlist_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMSIPMulticastAddressandAPNlist;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _MBMSIPMulticastAddressandAPNlist_H_ */
#include <asn_internal.h>