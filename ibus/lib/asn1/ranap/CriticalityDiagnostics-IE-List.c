/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#include "CriticalityDiagnostics-IE-List.h"

static asn_per_constraints_t asn_PER_type_CriticalityDiagnostics_IE_List_constr_1 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Member_CriticalityDiagnostics_IE_List, iECriticality),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Criticality,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iECriticality"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Member_CriticalityDiagnostics_IE_List, iE_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-ID"
		},
	{ ATF_POINTER, 2, offsetof(struct Member_CriticalityDiagnostics_IE_List, repetitionNumber),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RepetitionNumber0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionNumber"
		},
	{ ATF_POINTER, 1, offsetof(struct Member_CriticalityDiagnostics_IE_List, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_209P0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_Member_oms_2[] = { 2, 3 };
static ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iECriticality at 533 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* iE-ID at 534 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* repetitionNumber at 535 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions at 536 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct Member_CriticalityDiagnostics_IE_List),
	offsetof(struct Member_CriticalityDiagnostics_IE_List, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_Member_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	SEQUENCE_free_for_RANAP,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper_for_RANAP,
	SEQUENCE_encode_uper_for_RANAP,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Member_2,
	4,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CriticalityDiagnostics_IE_List_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_CriticalityDiagnostics_IE_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_CriticalityDiagnostics_IE_List_specs_1 = {
	sizeof(struct CriticalityDiagnostics_IE_List),
	offsetof(struct CriticalityDiagnostics_IE_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_CriticalityDiagnostics_IE_List = {
	"CriticalityDiagnostics-IE-List",
	"CriticalityDiagnostics-IE-List",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CriticalityDiagnostics_IE_List_tags_1,
	sizeof(asn_DEF_CriticalityDiagnostics_IE_List_tags_1)
		/sizeof(asn_DEF_CriticalityDiagnostics_IE_List_tags_1[0]), /* 1 */
	asn_DEF_CriticalityDiagnostics_IE_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_CriticalityDiagnostics_IE_List_tags_1)
		/sizeof(asn_DEF_CriticalityDiagnostics_IE_List_tags_1[0]), /* 1 */
	&asn_PER_type_CriticalityDiagnostics_IE_List_constr_1,
	asn_MBR_CriticalityDiagnostics_IE_List_1,
	1,	/* Single element */
	&asn_SPC_CriticalityDiagnostics_IE_List_specs_1	/* Additional specs */
};
