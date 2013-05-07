/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#include "GA-UncertaintyEllipse.h"

static int
memb_uncertaintySemi_major_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_uncertaintySemi_minor_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_orientationOfMajorAxis_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 179)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_uncertaintySemi_major_constr_2 = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_uncertaintySemi_minor_constr_3 = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_orientationOfMajorAxis_constr_4 = {
	{ APC_CONSTRAINED,	 8,  8,  0,  179 }	/* (0..179) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GA_UncertaintyEllipse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GA_UncertaintyEllipse, uncertaintySemi_major),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_uncertaintySemi_major_constraint_1,
		&asn_PER_memb_uncertaintySemi_major_constr_2,
		0,
		"uncertaintySemi-major"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GA_UncertaintyEllipse, uncertaintySemi_minor),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_uncertaintySemi_minor_constraint_1,
		&asn_PER_memb_uncertaintySemi_minor_constr_3,
		0,
		"uncertaintySemi-minor"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GA_UncertaintyEllipse, orientationOfMajorAxis),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_orientationOfMajorAxis_constraint_1,
		&asn_PER_memb_orientationOfMajorAxis_constr_4,
		0,
		"orientationOfMajorAxis"
		},
};
static ber_tlv_tag_t asn_DEF_GA_UncertaintyEllipse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GA_UncertaintyEllipse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uncertaintySemi-major at 865 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uncertaintySemi-minor at 866 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* orientationOfMajorAxis at 867 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GA_UncertaintyEllipse_specs_1 = {
	sizeof(struct GA_UncertaintyEllipse),
	offsetof(struct GA_UncertaintyEllipse, _asn_ctx),
	asn_MAP_GA_UncertaintyEllipse_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GA_UncertaintyEllipse = {
	"GA-UncertaintyEllipse",
	"GA-UncertaintyEllipse",
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
	asn_DEF_GA_UncertaintyEllipse_tags_1,
	sizeof(asn_DEF_GA_UncertaintyEllipse_tags_1)
		/sizeof(asn_DEF_GA_UncertaintyEllipse_tags_1[0]), /* 1 */
	asn_DEF_GA_UncertaintyEllipse_tags_1,	/* Same as above */
	sizeof(asn_DEF_GA_UncertaintyEllipse_tags_1)
		/sizeof(asn_DEF_GA_UncertaintyEllipse_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GA_UncertaintyEllipse_1,
	3,	/* Elements count */
	&asn_SPC_GA_UncertaintyEllipse_specs_1	/* Additional specs */
};
