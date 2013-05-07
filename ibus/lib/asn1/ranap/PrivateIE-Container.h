/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-Containers"
 * 	found in "RANAP-Containers.asn"
 */

#ifndef	_PrivateIE_Container_H_
#define	_PrivateIE_Container_H_


#include <asn_application.h>
#include "PDU_ARRAY.h"

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "PrivateIE-ID.h"
#include "Criticality.h"
#include <ANY.h>
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PrivateIE-Container */
typedef struct PrivateIE_Container_231P0 {
	A_SEQUENCE_OF(struct  Member_PrivateIE_Container {
		PrivateIE_ID_t	 id;
		Criticality_t	 criticality;
		ANY_t	 value;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PrivateIE_Container_231P0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrivateIE_Container_231P0;

#ifdef __cplusplus
}
#endif

#endif	/* _PrivateIE_Container_H_ */
#include <asn_internal.h>