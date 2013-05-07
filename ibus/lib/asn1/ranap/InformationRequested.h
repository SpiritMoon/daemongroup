/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_InformationRequested_H_
#define	_InformationRequested_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RequestedMBMSIPMulticastAddressandAPNRequest.h"
#include "RequestedMulticastServiceList.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InformationRequested_PR {
	InformationRequested_PR_NOTHING,	/* No components present */
	InformationRequested_PR_requestedMBMSIPMulticastAddressandAPNRequest,
	InformationRequested_PR_requestedMulticastServiceList,
	/* Extensions may appear below */
	
} InformationRequested_PR;

/* InformationRequested */
typedef struct InformationRequested {
	InformationRequested_PR present;
	union InformationRequested_u {
		RequestedMBMSIPMulticastAddressandAPNRequest_t	 requestedMBMSIPMulticastAddressandAPNRequest;
		RequestedMulticastServiceList_t	 requestedMulticastServiceList;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InformationRequested_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InformationRequested;

#ifdef __cplusplus
}
#endif

#endif	/* _InformationRequested_H_ */
#include <asn_internal.h>