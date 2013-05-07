/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#include "AllocationOrRetentionPriority.h"

static asn_TYPE_member_t asn_MBR_AllocationOrRetentionPriority_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AllocationOrRetentionPriority, priorityLevel),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PriorityLevel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"priorityLevel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AllocationOrRetentionPriority, pre_emptionCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Pre_emptionCapability,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pre-emptionCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AllocationOrRetentionPriority, pre_emptionVulnerability),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Pre_emptionVulnerability,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pre-emptionVulnerability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AllocationOrRetentionPriority, queuingAllowed),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QueuingAllowed,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"queuingAllowed"
		},
	{ ATF_POINTER, 1, offsetof(struct AllocationOrRetentionPriority, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_209P0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_AllocationOrRetentionPriority_oms_1[] = { 4 };
static ber_tlv_tag_t asn_DEF_AllocationOrRetentionPriority_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_AllocationOrRetentionPriority_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* priorityLevel at 115 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pre-emptionCapability at 116 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pre-emptionVulnerability at 117 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* queuingAllowed at 118 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions at 119 */
};
static asn_SEQUENCE_specifics_t asn_SPC_AllocationOrRetentionPriority_specs_1 = {
	sizeof(struct AllocationOrRetentionPriority),
	offsetof(struct AllocationOrRetentionPriority, _asn_ctx),
	asn_MAP_AllocationOrRetentionPriority_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_AllocationOrRetentionPriority_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AllocationOrRetentionPriority = {
	"AllocationOrRetentionPriority",
	"AllocationOrRetentionPriority",
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
	asn_DEF_AllocationOrRetentionPriority_tags_1,
	sizeof(asn_DEF_AllocationOrRetentionPriority_tags_1)
		/sizeof(asn_DEF_AllocationOrRetentionPriority_tags_1[0]), /* 1 */
	asn_DEF_AllocationOrRetentionPriority_tags_1,	/* Same as above */
	sizeof(asn_DEF_AllocationOrRetentionPriority_tags_1)
		/sizeof(asn_DEF_AllocationOrRetentionPriority_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AllocationOrRetentionPriority_1,
	5,	/* Elements count */
	&asn_SPC_AllocationOrRetentionPriority_specs_1	/* Additional specs */
};
