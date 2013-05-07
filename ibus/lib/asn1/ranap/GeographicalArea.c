/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#include "GeographicalArea.h"

static asn_per_constraints_t asn_PER_type_GeographicalArea_constr_1 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GeographicalArea_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GeographicalArea, choice.point),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GA_Point,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"point"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeographicalArea, choice.pointWithUnCertainty),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GA_PointWithUnCertainty,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pointWithUnCertainty"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeographicalArea, choice.polygon),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GA_Polygon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"polygon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeographicalArea, choice.pointWithUncertaintyEllipse),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GA_PointWithUnCertaintyEllipse,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pointWithUncertaintyEllipse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeographicalArea, choice.pointWithAltitude),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GA_PointWithAltitude,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pointWithAltitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeographicalArea, choice.pointWithAltitudeAndUncertaintyEllipsoid),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GA_PointWithAltitudeAndUncertaintyEllipsoid,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pointWithAltitudeAndUncertaintyEllipsoid"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeographicalArea, choice.ellipsoidArc),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GA_EllipsoidArc,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ellipsoidArc"
		},
};
static asn_TYPE_tag2member_t asn_MAP_GeographicalArea_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* point at 753 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pointWithUnCertainty at 754 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* polygon at 755 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pointWithUncertaintyEllipse at 757 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pointWithAltitude at 758 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pointWithAltitudeAndUncertaintyEllipsoid at 759 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ellipsoidArc at 761 */
};
static asn_CHOICE_specifics_t asn_SPC_GeographicalArea_specs_1 = {
	sizeof(struct GeographicalArea),
	offsetof(struct GeographicalArea, _asn_ctx),
	offsetof(struct GeographicalArea, present),
	sizeof(((struct GeographicalArea *)0)->present),
	asn_MAP_GeographicalArea_tag2el_1,
	7,	/* Count of tags in the map */
	0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GeographicalArea = {
	"GeographicalArea",
	"GeographicalArea",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_GeographicalArea_constr_1,
	asn_MBR_GeographicalArea_1,
	7,	/* Elements count */
	&asn_SPC_GeographicalArea_specs_1	/* Additional specs */
};
