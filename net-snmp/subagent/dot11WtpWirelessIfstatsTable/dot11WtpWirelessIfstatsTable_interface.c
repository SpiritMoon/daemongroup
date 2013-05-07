/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.43.2.3 $ of : mfd-interface.m2c,v $ 
 *
 * $Id:$
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */

/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11WtpWirelessIfstatsTable.h"


#include <net-snmp/library/container.h>

#include "dot11WtpWirelessIfstatsTable_interface.h"

/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11WtpWirelessIfstatsTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpWirelessIfstatsTable is subid 5 of wtpInterface.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.33050.6.1.1.3.5, length: 12
*/
typedef struct dot11WtpWirelessIfstatsTable_interface_ctx_s {

   netsnmp_container              *container;
   netsnmp_cache                  *cache; /* optional cache */

   dot11WtpWirelessIfstatsTable_registration_ptr      user_ctx;
   
   netsnmp_table_registration_info  tbl_info;

   netsnmp_baby_steps_access_methods access_multiplexer;

} dot11WtpWirelessIfstatsTable_interface_ctx;

static dot11WtpWirelessIfstatsTable_interface_ctx dot11WtpWirelessIfstatsTable_if_ctx;

static void _dot11WtpWirelessIfstatsTable_container_init(
    dot11WtpWirelessIfstatsTable_interface_ctx *if_ctx);


static Netsnmp_Node_Handler _mfd_dot11WtpWirelessIfstatsTable_pre_request;
static Netsnmp_Node_Handler _mfd_dot11WtpWirelessIfstatsTable_post_request;
static Netsnmp_Node_Handler _mfd_dot11WtpWirelessIfstatsTable_object_lookup;
static Netsnmp_Node_Handler _mfd_dot11WtpWirelessIfstatsTable_get_values;
/**
 * @internal
 * Initialize the table dot11WtpWirelessIfstatsTable 
 *    (Define its contents and how it's structured)
 */
void
_dot11WtpWirelessIfstatsTable_initialize_interface(dot11WtpWirelessIfstatsTable_registration_ptr reg_ptr,  u_long flags)
{
    netsnmp_baby_steps_access_methods *access_multiplexer =
        &dot11WtpWirelessIfstatsTable_if_ctx.access_multiplexer;
    netsnmp_table_registration_info *tbl_info = &dot11WtpWirelessIfstatsTable_if_ctx.tbl_info;
    netsnmp_handler_registration *reginfo;
    netsnmp_mib_handler *handler;
    int    mfd_modes = 0;

    DEBUGMSGTL(("internal:dot11WtpWirelessIfstatsTable:_dot11WtpWirelessIfstatsTable_initialize_interface","called\n"));


    /*************************************************
     *
     * save interface context for dot11WtpWirelessIfstatsTable
     */
    /*
     * Setting up the table's definition
     */
    netsnmp_table_helper_add_indexes(tbl_info,
                                  ASN_OCTET_STR, /** index: wtpMacAddr */
                                  ASN_INTEGER, /** index: wtpWirelessIfIndex */
                             0);

    /*  Define the minimum and maximum accessible columns.  This
        optimizes retrival. */
    tbl_info->min_column = DOT11WTPWIRELESSIFSTATSTABLE_MIN_COL;
    tbl_info->max_column = DOT11WTPWIRELESSIFSTATSTABLE_MAX_COL;

    /*
     * save users context
     */
    dot11WtpWirelessIfstatsTable_if_ctx.user_ctx = reg_ptr;

    /*
     * call data access initialization code
     */
    dot11WtpWirelessIfstatsTable_init_data(reg_ptr);

    /*
     * set up the container
     */
    _dot11WtpWirelessIfstatsTable_container_init(&dot11WtpWirelessIfstatsTable_if_ctx);
    if (NULL == dot11WtpWirelessIfstatsTable_if_ctx.container) {
        snmp_log(LOG_ERR,"could not initialize container for dot11WtpWirelessIfstatsTable\n");
        return;
    }
    
    /*
     * access_multiplexer: REQUIRED wrapper for get request handling
     */
    access_multiplexer->object_lookup = _mfd_dot11WtpWirelessIfstatsTable_object_lookup;
    access_multiplexer->get_values = _mfd_dot11WtpWirelessIfstatsTable_get_values;

    /*
     * no wrappers yet
     */
    access_multiplexer->pre_request = _mfd_dot11WtpWirelessIfstatsTable_pre_request;
    access_multiplexer->post_request = _mfd_dot11WtpWirelessIfstatsTable_post_request;


    /*************************************************
     *
     * Create a registration, save our reg data, register table.
     */
    DEBUGMSGTL(("dot11WtpWirelessIfstatsTable:init_dot11WtpWirelessIfstatsTable",
                "Registering dot11WtpWirelessIfstatsTable as a mibs-for-dummies table.\n"));		 
    handler = netsnmp_baby_steps_access_multiplexer_get(access_multiplexer);
    reginfo = netsnmp_handler_registration_create("dot11WtpWirelessIfstatsTable", handler,
                                                  dot11WtpWirelessIfstatsTable_oid,
                                                  dot11WtpWirelessIfstatsTable_oid_size,
                                                  HANDLER_CAN_BABY_STEP |
                                                  HANDLER_CAN_RONLY
                                                  );
    if(NULL == reginfo) {
        snmp_log(LOG_ERR,"error registering table dot11WtpWirelessIfstatsTable\n");
        return;
    }
    reginfo->my_reg_void = &dot11WtpWirelessIfstatsTable_if_ctx;

    /*************************************************
     *
     * set up baby steps handler, create it and inject it
     */
    if( access_multiplexer->object_lookup )
        mfd_modes |= BABY_STEP_OBJECT_LOOKUP;
    if( access_multiplexer->set_values )
        mfd_modes |= BABY_STEP_SET_VALUES;
    if( access_multiplexer->irreversible_commit )
        mfd_modes |= BABY_STEP_IRREVERSIBLE_COMMIT;
    if( access_multiplexer->object_syntax_checks )
        mfd_modes |= BABY_STEP_CHECK_OBJECT;

    if( access_multiplexer->pre_request )
        mfd_modes |= BABY_STEP_PRE_REQUEST;
    if( access_multiplexer->post_request )
        mfd_modes |= BABY_STEP_POST_REQUEST;
    
    if( access_multiplexer->undo_setup )
        mfd_modes |= BABY_STEP_UNDO_SETUP;
    if( access_multiplexer->undo_cleanup )
        mfd_modes |= BABY_STEP_UNDO_CLEANUP;
    if( access_multiplexer->undo_sets )
        mfd_modes |= BABY_STEP_UNDO_SETS;
    
    if( access_multiplexer->row_creation )
        mfd_modes |= BABY_STEP_ROW_CREATE;
    if( access_multiplexer->consistency_checks )
        mfd_modes |= BABY_STEP_CHECK_CONSISTENCY;
    if( access_multiplexer->commit )
        mfd_modes |= BABY_STEP_COMMIT;
    if( access_multiplexer->undo_commit )
        mfd_modes |= BABY_STEP_UNDO_COMMIT;
    
    handler = netsnmp_baby_steps_handler_get(mfd_modes);
    netsnmp_inject_handler(reginfo, handler);

    /*************************************************
     *
     * inject row_merge helper with prefix rootoid_len + 2 (entry.col)
     */
    handler = netsnmp_get_row_merge_handler(reginfo->rootoid_len + 2);
    netsnmp_inject_handler(reginfo, handler);

    /*************************************************
     *
     * inject container_table helper
     */
    handler =
        netsnmp_container_table_handler_get(tbl_info,
                                            dot11WtpWirelessIfstatsTable_if_ctx.container,
                                            TABLE_CONTAINER_KEY_NETSNMP_INDEX);
    netsnmp_inject_handler( reginfo, handler );

    /*************************************************
     *
     * inject cache helper
     */
    if(NULL != dot11WtpWirelessIfstatsTable_if_ctx.cache) {
        handler = netsnmp_cache_handler_get(dot11WtpWirelessIfstatsTable_if_ctx.cache);
        netsnmp_inject_handler( reginfo, handler );
    }

    /*
     * register table
     */
    netsnmp_register_table(reginfo, tbl_info);
} /* _dot11WtpWirelessIfstatsTable_initialize_interface */

void
dot11WtpWirelessIfstatsTable_valid_columns_set(netsnmp_column_info *vc)
{
    dot11WtpWirelessIfstatsTable_if_ctx.tbl_info.valid_columns = vc;
} /* dot11WtpWirelessIfstatsTable_valid_columns_set */

/**
 * @internal
 * convert the index component stored in the context to an oid
 */
int
dot11WtpWirelessIfstatsTable_index_to_oid(netsnmp_index *oid_idx,
                         dot11WtpWirelessIfstatsTable_mib_index *mib_idx)
{
    int err = SNMP_ERR_NOERROR;
    
    /*
     * temp storage for parsing indexes
     */
    /*
     * wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
     */
    netsnmp_variable_list var_wtpMacAddr;
    /*
     * wtpWirelessIfIndex(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    netsnmp_variable_list var_wtpWirelessIfIndex;

    /*
     * set up varbinds
     */
    memset( &var_wtpMacAddr, 0x00, sizeof(var_wtpMacAddr) );
    var_wtpMacAddr.type = ASN_OCTET_STR;
    memset( &var_wtpWirelessIfIndex, 0x00, sizeof(var_wtpWirelessIfIndex) );
    var_wtpWirelessIfIndex.type = ASN_INTEGER;

    /*
     * chain temp index varbinds together
     */
    var_wtpMacAddr.next_variable =  &var_wtpWirelessIfIndex; var_wtpWirelessIfIndex.next_variable =  NULL;


    DEBUGMSGTL(("verbose:dot11WtpWirelessIfstatsTable:dot11WtpWirelessIfstatsTable_index_to_oid","called\n"));

        /* wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h */
    snmp_set_var_value(&var_wtpMacAddr, (u_char*)&mib_idx->wtpMacAddr,
                       mib_idx->wtpMacAddr_len * sizeof(mib_idx->wtpMacAddr[0]));

        /* wtpWirelessIfIndex(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    snmp_set_var_value(&var_wtpWirelessIfIndex, (u_char*)&mib_idx->wtpWirelessIfIndex,
                       sizeof(mib_idx->wtpWirelessIfIndex));


    err = build_oid_noalloc(oid_idx->oids, oid_idx->len, &oid_idx->len,
                           NULL, 0, &var_wtpMacAddr);
    if(err)
        snmp_log(LOG_ERR,"error %d converting index to oid\n", err);

    /*
     * parsing may have allocated memory. free it.
     */
    snmp_reset_var_buffers( &var_wtpMacAddr );

    return err;
} /* dot11WtpWirelessIfstatsTable_index_to_oid */

/**
 * extract dot11WtpWirelessIfstatsTable indexes from a netsnmp_index
 *
 * @retval SNMP_ERR_NOERROR  : no error
 * @retval SNMP_ERR_GENERR   : error
 */
int
dot11WtpWirelessIfstatsTable_index_from_oid(netsnmp_index *oid_idx,
                         dot11WtpWirelessIfstatsTable_mib_index *mib_idx)
{
    int err = SNMP_ERR_NOERROR;
    
    /*
     * temp storage for parsing indexes
     */
    /*
     * wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
     */
    netsnmp_variable_list var_wtpMacAddr;
    /*
     * wtpWirelessIfIndex(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
     */
    netsnmp_variable_list var_wtpWirelessIfIndex;

    /*
     * set up varbinds
     */
    memset( &var_wtpMacAddr, 0x00, sizeof(var_wtpMacAddr) );
    var_wtpMacAddr.type = ASN_OCTET_STR;
    memset( &var_wtpWirelessIfIndex, 0x00, sizeof(var_wtpWirelessIfIndex) );
    var_wtpWirelessIfIndex.type = ASN_INTEGER;

    /*
     * chain temp index varbinds together
     */
    var_wtpMacAddr.next_variable =  &var_wtpWirelessIfIndex; var_wtpWirelessIfIndex.next_variable =  NULL;


    DEBUGMSGTL(("verbose:dot11WtpWirelessIfstatsTable:dot11WtpWirelessIfstatsTable_index_from_oid","called\n"));

    /*
     * parse the oid into the individual index components
     */
    err = parse_oid_indexes( oid_idx->oids, oid_idx->len,
                             &var_wtpMacAddr );
    if (err == SNMP_ERR_NOERROR) {
        /*
         * copy out values
         */
    /*
     * NOTE: val_len is in bytes, wtpMacAddr_len might not be
     */
         if(var_wtpMacAddr.val_len > sizeof(mib_idx->wtpMacAddr))
             err = SNMP_ERR_GENERR;
         else {
             memcpy(mib_idx->wtpMacAddr, var_wtpMacAddr.val.string, var_wtpMacAddr.val_len);
             mib_idx->wtpMacAddr_len = var_wtpMacAddr.val_len / sizeof(mib_idx->wtpMacAddr[0]);
         }
    mib_idx->wtpWirelessIfIndex = *((long *)var_wtpWirelessIfIndex.val.string);


    }

    /*
     * parsing may have allocated memory. free it.
     */
    snmp_reset_var_buffers( &var_wtpMacAddr );

    return err;
} /* dot11WtpWirelessIfstatsTable_index_from_oid */


/* *********************************************************************
 * @internal
 * allocate resources for a dot11WtpWirelessIfstatsTable_rowreq_ctx
 */
dot11WtpWirelessIfstatsTable_rowreq_ctx *
dot11WtpWirelessIfstatsTable_allocate_rowreq_ctx(void)
{
    dot11WtpWirelessIfstatsTable_rowreq_ctx *rowreq_ctx =
                  SNMP_MALLOC_TYPEDEF(dot11WtpWirelessIfstatsTable_rowreq_ctx);

    DEBUGMSGTL(("internal:dot11WtpWirelessIfstatsTable:dot11WtpWirelessIfstatsTable_allocate_rowreq_ctx","called\n"));

    if(NULL == rowreq_ctx) {
        snmp_log(LOG_ERR,"Couldn't allocate memory for a "
                 "dot11WtpWirelessIfstatsTable_rowreq_ctx.\n");
    }

    rowreq_ctx->oid_idx.oids = rowreq_ctx->oid_tmp;

    rowreq_ctx->dot11WtpWirelessIfstatsTable_data_list = NULL;
    rowreq_ctx->dot11WtpWirelessIfstatsTable_reg = dot11WtpWirelessIfstatsTable_if_ctx.user_ctx;


    return rowreq_ctx;
} /* dot11WtpWirelessIfstatsTable_allocate_rowreq_ctx */

/*
 * @internal
 * release resources for a dot11WtpWirelessIfstatsTable_rowreq_ctx
 */
void
dot11WtpWirelessIfstatsTable_release_rowreq_ctx(dot11WtpWirelessIfstatsTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("internal:dot11WtpWirelessIfstatsTable:dot11WtpWirelessIfstatsTable_release_rowreq_ctx","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    

    /*
     * free index oid pointer
     */
    if(rowreq_ctx->oid_idx.oids != rowreq_ctx->oid_tmp)
        free(rowreq_ctx->oid_idx.oids);

    SNMP_FREE(rowreq_ctx);
} /* dot11WtpWirelessIfstatsTable_release_rowreq_ctx */

/**
 * @internal
 * wrapper
 */
static int
_mfd_dot11WtpWirelessIfstatsTable_pre_request(netsnmp_mib_handler *handler,
                            netsnmp_handler_registration *reginfo,
                            netsnmp_agent_request_info *agtreq_info,
                            netsnmp_request_info *requests)
{
    int rc = dot11WtpWirelessIfstatsTable_pre_request(dot11WtpWirelessIfstatsTable_if_ctx.user_ctx);
    if (MFD_SUCCESS != rc) {
        /*
         * nothing we can do about it but log it
         */
        DEBUGMSGTL(("internal:dot11WtpWirelessIfstatsTable","error %d from "
                    "dot11WtpWirelessIfstatsTable_pre_request\n", rc));
        netsnmp_request_set_error_all(requests, SNMP_VALIDATE_ERR(rc));
    }
    
    return SNMP_ERR_NOERROR;
} /* _mfd_dot11WtpWirelessIfstatsTable_pre_request */

/**
 * @internal
 * wrapper
 */
static int
_mfd_dot11WtpWirelessIfstatsTable_post_request(netsnmp_mib_handler *handler,
                             netsnmp_handler_registration *reginfo,
                             netsnmp_agent_request_info *agtreq_info,
                             netsnmp_request_info *requests)
{
    dot11WtpWirelessIfstatsTable_rowreq_ctx *rowreq_ctx;
    int rc = dot11WtpWirelessIfstatsTable_post_request(dot11WtpWirelessIfstatsTable_if_ctx.user_ctx);
    if (MFD_SUCCESS != rc) {
        /*
         * nothing we can do about it but log it
         */
        DEBUGMSGTL(("internal:dot11WtpWirelessIfstatsTable","error %d from "
                    "dot11WtpWirelessIfstatsTable_post_request\n", rc));
    }
    
    /*
     * if there are no errors, check for and handle row creation/deletion
     */
    rc = netsnmp_check_requests_error(requests);
    if ((SNMP_ERR_NOERROR == rc) &&
        (NULL !=
         (rowreq_ctx = netsnmp_container_table_row_extract(requests)))) {
        if (rowreq_ctx->rowreq_flags & MFD_ROW_CREATED) {
            rowreq_ctx->rowreq_flags &= ~MFD_ROW_CREATED;
            CONTAINER_INSERT(dot11WtpWirelessIfstatsTable_if_ctx.container, rowreq_ctx);
        }
        else if (rowreq_ctx->rowreq_flags & MFD_ROW_DELETED) {
            CONTAINER_REMOVE(dot11WtpWirelessIfstatsTable_if_ctx.container, rowreq_ctx);
            dot11WtpWirelessIfstatsTable_release_rowreq_ctx(rowreq_ctx);
        }
    }

    return SNMP_ERR_NOERROR;
} /* _mfd_dot11WtpWirelessIfstatsTable_post_request */

/**
 * @internal
 * wrapper
 */
static int
_mfd_dot11WtpWirelessIfstatsTable_object_lookup(netsnmp_mib_handler *handler,
                         netsnmp_handler_registration *reginfo,
                         netsnmp_agent_request_info *agtreq_info,
                         netsnmp_request_info *requests)
{
    dot11WtpWirelessIfstatsTable_rowreq_ctx *rowreq_ctx =
                  netsnmp_container_table_row_extract(requests);
    
    DEBUGMSGTL(("internal:dot11WtpWirelessIfstatsTable:_mfd_dot11WtpWirelessIfstatsTable_object_lookup","called\n"));

    /*
     * get our context from mfd
     * dot11WtpWirelessIfstatsTable_interface_ctx *if_ctx =
     *             (dot11WtpWirelessIfstatsTable_interface_ctx *)reginfo->my_reg_void;
     */

    if(NULL == rowreq_ctx) {
        netsnmp_request_set_error_all(requests, SNMP_ERR_NOCREATION);
    }
    else {
        dot11WtpWirelessIfstatsTable_row_prep(rowreq_ctx);
    }

    return SNMP_ERR_NOERROR;
} /* _mfd_dot11WtpWirelessIfstatsTable_object_lookup */

/***********************************************************************
 *
 * GET processing
 *
 ***********************************************************************/
/*
 * @internal
 * Retrieve the value for a particular column
 */
NETSNMP_STATIC_INLINE int
_dot11WtpWirelessIfstatsTable_get_column( dot11WtpWirelessIfstatsTable_rowreq_ctx *rowreq_ctx,
                       netsnmp_variable_list *var, int column )
{
    int rc = SNMPERR_SUCCESS;
    
    DEBUGMSGTL(("internal:dot11WtpWirelessIfstatsTable:_mfd_dot11WtpWirelessIfstatsTable_get_column","called\n"));


    netsnmp_assert(NULL != rowreq_ctx);

    switch(column) {

    /* wirelessIfAvgRxSignalStrength(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFAVGRXSIGNALSTRENGTH:
    var->val_len = sizeof(long);
    var->type = ASN_INTEGER;
rc = wirelessIfAvgRxSignalStrength_get(rowreq_ctx, (long *)var->val.string );
        break;

    /* wirelessIfHighestRxSignalStrength(2)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFHIGHESTRXSIGNALSTRENGTH:
    var->val_len = sizeof(long);
    var->type = ASN_INTEGER;
rc = wirelessIfHighestRxSignalStrength_get(rowreq_ctx, (long *)var->val.string );
        break;

    /* wirelessIfLowestRxSignalStrength(3)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFLOWESTRXSIGNALSTRENGTH:
    var->val_len = sizeof(long);
    var->type = ASN_INTEGER;
rc = wirelessIfLowestRxSignalStrength_get(rowreq_ctx, (long *)var->val.string );
        break;

    /* wirelessIfUpdownTimes(4)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFUPDOWNTIMES:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfUpdownTimes_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfChStatsNumStations(5)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFCHSTATSNUMSTATIONS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfChStatsNumStations_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfTxSignalPkts(6)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXSIGNALPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfTxSignalPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfRxSignalPkts(7)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXSIGNALPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfRxSignalPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfTxDataPkts(8)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXDATAPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfTxDataPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfRxDataPkts(9)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXDATAPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfRxDataPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfRxDataOctets(10)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXDATAOCTETS:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wirelessIfRxDataOctets_get(rowreq_ctx, (U64 *)var->val.string );
        break;

    /* wirelessIfTxDataOctets(11)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXDATAOCTETS:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wirelessIfTxDataOctets_get(rowreq_ctx, (U64 *)var->val.string );
        break;

    /* wirelessIfChStatsDwlinkTotRetryPkts(12)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFCHSTATSDWLINKTOTRETRYPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfChStatsDwlinkTotRetryPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfChStatsUplinkUniFrameCnt(13)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFCHSTATSUPLINKUNIFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfChStatsUplinkUniFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfChStatsDwlinkUniFrameCnt(14)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFCHSTATSDWLINKUNIFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfChStatsDwlinkUniFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfUpChStatsFrameNonUniFrameCnt(15)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFUPCHSTATSFRAMENONUNIFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfUpChStatsFrameNonUniFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfDownChStatsFrameNonUniFrameCnt(16)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFDOWNCHSTATSFRAMENONUNIFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfDownChStatsFrameNonUniFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfChStatsPhyErrPkts(17)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFCHSTATSPHYERRPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfChStatsPhyErrPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfChStatsMacFcsErrPkts(18)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFCHSTATSMACFCSERRPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfChStatsMacFcsErrPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfChStatsMacMicErrPkts(19)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFCHSTATSMACMICERRPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfChStatsMacMicErrPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfChStatsMacDecryptErrPkts(20)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFCHSTATSMACDECRYPTERRPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfChStatsMacDecryptErrPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfChStatsFrameErrorCnt(21)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFCHSTATSFRAMEERRORCNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfChStatsFrameErrorCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfChStatsFrameRetryCnt(22)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFCHSTATSFRAMERETRYCNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfChStatsFrameRetryCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfApChStatsFrameFragRate(23)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFAPCHSTATSFRAMEFRAGRATE:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfApChStatsFrameFragRate_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfRxMgmtFrameCnt(24)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXMGMTFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfRxMgmtFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfRxCtrlFrameCnt(25)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXCTRLFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfRxCtrlFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfRxDataFrameCnt(26)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXDATAFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfRxDataFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfRxAuthenFrameCnt(27)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXAUTHENFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfRxAuthenFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfRxAssociateFrameCnt(28)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXASSOCIATEFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfRxAssociateFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfTxMgmtFrameCnt(29)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXMGMTFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfTxMgmtFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfTxCtrlFrameCnt(30)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXCTRLFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfTxCtrlFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfTxDataFrameCnt(31)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXDATAFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfTxDataFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfTxAuthenFrameCnt(32)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXAUTHENFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfTxAuthenFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfTxAssociateFrameCnt(33)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXASSOCIATEFRAMECNT:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfTxAssociateFrameCnt_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfTxManagePkts(34)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXMANAGEPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfTxManagePkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfRxManagePkts(35)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXMANAGEPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfRxManagePkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfTxManageOctets(36)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXMANAGEOCTETS:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wirelessIfTxManageOctets_get(rowreq_ctx, (U64 *)var->val.string );
        break;

    /* wirelessIfRxManageOctets(37)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXMANAGEOCTETS:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wirelessIfRxManageOctets_get(rowreq_ctx, (U64 *)var->val.string );
        break;

    /* wirelessIfTxTotalPkts(38)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXTOTALPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfTxTotalPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfRxTotalPkts(39)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXTOTALPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfRxTotalPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfTxTotalOctets(40)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXTOTALOCTETS:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wirelessIfTxTotalOctets_get(rowreq_ctx, (U64 *)var->val.string );
        break;

    /* wirelessIfRxTotalOctets(41)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXTOTALOCTETS:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wirelessIfRxTotalOctets_get(rowreq_ctx, (U64 *)var->val.string );
        break;

    /* wirelessIfRxDropPkts(42)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXDROPPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfRxDropPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfTxDropPkts(43)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXDROPPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfTxDropPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfRxErrPkts(44)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFRXERRPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfRxErrPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wirelessIfTxErrPkts(45)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WIRELESSIFTXERRPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wirelessIfTxErrPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpNeighborSSIDList(46)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H */
    case COLUMN_WTPNEIGHBORSSIDLIST:
    var->type = ASN_OCTET_STR;
rc = wtpNeighborSSIDList_get(rowreq_ctx, (char **)&var->val.string, &var->val_len );
        break;

     default:
         snmp_log(LOG_ERR,"unknown column %d in _dot11WtpWirelessIfstatsTable_get_column\n", column);
         break;
    }

    return rc;
} /* _dot11WtpWirelessIfstatsTable_get_column */

int
_mfd_dot11WtpWirelessIfstatsTable_get_values(netsnmp_mib_handler *handler,
                         netsnmp_handler_registration *reginfo,
                         netsnmp_agent_request_info *agtreq_info,
                         netsnmp_request_info *requests)
{
    dot11WtpWirelessIfstatsTable_rowreq_ctx *rowreq_ctx =
                  netsnmp_container_table_row_extract(requests);
    netsnmp_table_request_info * tri;
    u_char                     * old_string;
    void                      (*dataFreeHook)(void *);
    int                        rc;

    DEBUGMSGTL(("internal:dot11WtpWirelessIfstatsTable:_mfd_dot11WtpWirelessIfstatsTable_get_values","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    for(;requests; requests = requests->next) {
        /*
         * save old pointer, so we can free it if replaced
         */
        old_string = requests->requestvb->val.string;
        dataFreeHook = requests->requestvb->dataFreeHook;
        if(NULL == requests->requestvb->val.string) {
            requests->requestvb->val.string = requests->requestvb->buf;
            requests->requestvb->val_len = sizeof(requests->requestvb->buf);
        }
        else if(requests->requestvb->buf == requests->requestvb->val.string) {
            if(requests->requestvb->val_len != sizeof(requests->requestvb->buf))
                requests->requestvb->val_len = sizeof(requests->requestvb->buf);
        }

        /*
         * get column data
         */
        tri = netsnmp_extract_table_info(requests);
        if(NULL == tri)
            continue;
        
        rc = _dot11WtpWirelessIfstatsTable_get_column(rowreq_ctx, requests->requestvb, tri->colnum);
        if(rc) {
            if(MFD_SKIP == rc) {
                requests->requestvb->type = ASN_PRIV_RETRY;
                rc = SNMP_ERR_NOERROR;
            }
        }
        else if (NULL == requests->requestvb->val.string) {
            snmp_log(LOG_ERR,"NULL varbind data pointer!\n");
            rc = SNMP_ERR_GENERR;
        }
        if(rc)
            netsnmp_request_set_error(requests, SNMP_VALIDATE_ERR(rc));

        /*
         * if the buffer wasn't used previously for the old data (i.e. it
         * was allcoated memory)  and the get routine replaced the pointer,
         * we need to free the previous pointer.
         */
        if(old_string && (old_string != requests->requestvb->buf) &&
           (requests->requestvb->val.string != old_string)) {
            if(dataFreeHook)
                (*dataFreeHook)(old_string);
            else
                free(old_string);
        }
    } /* for results */

    return SNMP_ERR_NOERROR;
} /* _mfd_dot11WtpWirelessIfstatsTable_get_values */

/***********************************************************************
 *
 * SET processing
 *
 ***********************************************************************/

/*
 * NOT APPLICABLE (per MIB or user setting)
 */
/***********************************************************************
 *
 * DATA ACCESS
 *
 ***********************************************************************/
/**
 * @internal
 */
static int
_cache_load(netsnmp_cache *cache, void *vmagic)
{
    DEBUGMSGTL(("internal:dot11WtpWirelessIfstatsTable:_cache_load","called\n"));

    if((NULL == cache) || (NULL == cache->magic)) {
        snmp_log(LOG_ERR, "invalid cache for dot11WtpWirelessIfstatsTable_cache_load\n");
        return -1;
    }

    /** should only be called for an invalid or expired cache */
    netsnmp_assert((0 == cache->valid) || (1 == cache->expired));
    
    /*
     * call user code
     */
    return dot11WtpWirelessIfstatsTable_cache_load((netsnmp_container*)cache->magic);
} /* _cache_load */

/**
 * @internal
 */
static void
_cache_item_free(dot11WtpWirelessIfstatsTable_rowreq_ctx *rowreq_ctx, void *context)
{
    DEBUGMSGTL(("internal:dot11WtpWirelessIfstatsTable:_cache_item_free","called\n"));

    if(NULL == rowreq_ctx)
        return;

    dot11WtpWirelessIfstatsTable_release_rowreq_ctx(rowreq_ctx);
} /* _cache_item_free */

/**
 * @internal
 */
static void
_cache_free(netsnmp_cache *cache, void *magic)
{
    netsnmp_container *container;

    DEBUGMSGTL(("internal:dot11WtpWirelessIfstatsTable:_cache_free","called\n"));

    if((NULL == cache) || (NULL == cache->magic)) {
        snmp_log(LOG_ERR, "invalid cache in dot11WtpWirelessIfstatsTable_cache_free\n");
        return;
    }

    container = (netsnmp_container*)cache->magic;

    /*
     * call user code
     */
    dot11WtpWirelessIfstatsTable_cache_free(container);
    
    /*
     * free all items. inefficient, but easy.
     */
    CONTAINER_CLEAR(container,
                    (netsnmp_container_obj_func *)_cache_item_free,
                    NULL);
} /* _cache_free */

/**
 * @internal
 * initialize the iterator container with functions or wrappers
 */
void
_dot11WtpWirelessIfstatsTable_container_init(dot11WtpWirelessIfstatsTable_interface_ctx *if_ctx)
{
    DEBUGMSGTL(("internal:dot11WtpWirelessIfstatsTable:_dot11WtpWirelessIfstatsTable_container_init","called\n"));
    
    /*
     * set up the cache
     */
    if_ctx->cache = netsnmp_cache_create(30, /* timeout in seconds */
                                         _cache_load, _cache_free,
                                         dot11WtpWirelessIfstatsTable_oid,
                                         dot11WtpWirelessIfstatsTable_oid_size);

    if(NULL == if_ctx->cache) {
        snmp_log(LOG_ERR, "error creating cache for dot11WtpWirelessIfstatsTable\n");
        return;
    }

    if_ctx->cache->flags = NETSNMP_CACHE_DONT_INVALIDATE_ON_SET;

    dot11WtpWirelessIfstatsTable_container_init(&if_ctx->container, if_ctx->cache);
    if(NULL == if_ctx->container)
        if_ctx->container = netsnmp_container_find("dot11WtpWirelessIfstatsTable:table_container");
    if(NULL == if_ctx->container) {
        snmp_log(LOG_ERR,"error creating container in "
                 "dot11WtpWirelessIfstatsTable_container_init\n");
        return;
    }
    if_ctx->cache->magic = (void*)if_ctx->container;
} /* _dot11WtpWirelessIfstatsTable_container_init */
