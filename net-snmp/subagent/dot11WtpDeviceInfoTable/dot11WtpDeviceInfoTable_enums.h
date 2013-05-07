/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-enums.m2c,v 1.3 2004/05/18 17:44:32 rstory Exp $
 *
 * $Id:$
 */
#ifndef DOT11WTPDEVICEINFOTABLE_ENUMS_H
#define DOT11WTPDEVICEINFOTABLE_ENUMS_H

#ifdef __cplusplus
extern "C" {
#endif

 /*
 * NOTES on enums
 * ==============
 *
 * Value Mapping
 * -------------
 * If the values for your data type don't exactly match the
 * possible values defined by the mib, you should map them
 * below. For example, a boolean flag (1/0) is usually represented
 * as a TruthValue in a MIB, which maps to the values (1/2).
 *
 */
/*************************************************************************
 *************************************************************************
 *
 * enum definitions for table dot11WtpDeviceInfoTable
 *
 *************************************************************************
 *************************************************************************/

/*************************************************************
 * constants for enums for the MIB node
 * wtpWayGetIP (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef WTPWAYGETIP_ENUMS
#define WTPWAYGETIP_ENUMS

#define WTPWAYGETIP_STATICALLOCATION  0 
#define WTPWAYGETIP_DHCP  1 
#define WTPWAYGETIP_PPPOE  2 
#define WTPWAYGETIP_DHCPV6  3 
#define WTPWAYGETIP_SLACC  4 


#endif /* WTPWAYGETIP_ENUMS */

    /*
     * TODO:140:o: Define interal representation of wtpWayGetIP enums.
     * (used for value mapping; see notes at top of file)
     */
#define INTERNAL_WTPWAYGETIP_STATICALLOCATION  0 
#define INTERNAL_WTPWAYGETIP_DHCP  1 
#define INTERNAL_WTPWAYGETIP_PPPOE  2 
#define INTERNAL_WTPWAYGETIP_DHCPV6  3 
#define INTERNAL_WTPWAYGETIP_SLACC  4 



#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPDEVICEINFOTABLE_ENUMS_H */