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
#include "dot11WtpDataPktsTable.h"


#include <net-snmp/library/container.h>

#include "dot11WtpDataPktsTable_interface.h"

/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11WtpDataPktsTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpDataPktsTable is subid 3 of wtpStats.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.2.3, length: 12
*/
typedef struct dot11WtpDataPktsTable_interface_ctx_s {

   netsnmp_container              *container;
   netsnmp_cache                  *cache; /* optional cache */

   dot11WtpDataPktsTable_registration_ptr      user_ctx;
   
   netsnmp_table_registration_info  tbl_info;

   netsnmp_baby_steps_access_methods access_multiplexer;

} dot11WtpDataPktsTable_interface_ctx;

static dot11WtpDataPktsTable_interface_ctx dot11WtpDataPktsTable_if_ctx;

static void _dot11WtpDataPktsTable_container_init(
    dot11WtpDataPktsTable_interface_ctx *if_ctx);


static Netsnmp_Node_Handler _mfd_dot11WtpDataPktsTable_pre_request;
static Netsnmp_Node_Handler _mfd_dot11WtpDataPktsTable_post_request;
static Netsnmp_Node_Handler _mfd_dot11WtpDataPktsTable_object_lookup;
static Netsnmp_Node_Handler _mfd_dot11WtpDataPktsTable_get_values;
/**
 * @internal
 * Initialize the table dot11WtpDataPktsTable 
 *    (Define its contents and how it's structured)
 */
void
_dot11WtpDataPktsTable_initialize_interface(dot11WtpDataPktsTable_registration_ptr reg_ptr,  u_long flags)
{
    netsnmp_baby_steps_access_methods *access_multiplexer =
        &dot11WtpDataPktsTable_if_ctx.access_multiplexer;
    netsnmp_table_registration_info *tbl_info = &dot11WtpDataPktsTable_if_ctx.tbl_info;
    netsnmp_handler_registration *reginfo;
    netsnmp_mib_handler *handler;
    int    mfd_modes = 0;

    DEBUGMSGTL(("internal:dot11WtpDataPktsTable:_dot11WtpDataPktsTable_initialize_interface","called\n"));


    /*************************************************
     *
     * save interface context for dot11WtpDataPktsTable
     */
    /*
     * Setting up the table's definition
     */
    netsnmp_table_helper_add_indexes(tbl_info,
                                  ASN_OCTET_STR, /** index: wtpMacAddr */
                             0);

    /*  Define the minimum and maximum accessible columns.  This
        optimizes retrival. */
    tbl_info->min_column = DOT11WTPDATAPKTSTABLE_MIN_COL;
    tbl_info->max_column = DOT11WTPDATAPKTSTABLE_MAX_COL;

    /*
     * save users context
     */
    dot11WtpDataPktsTable_if_ctx.user_ctx = reg_ptr;

    /*
     * call data access initialization code
     */
    dot11WtpDataPktsTable_init_data(reg_ptr);

    /*
     * set up the container
     */
    _dot11WtpDataPktsTable_container_init(&dot11WtpDataPktsTable_if_ctx);
    if (NULL == dot11WtpDataPktsTable_if_ctx.container) {
        snmp_log(LOG_ERR,"could not initialize container for dot11WtpDataPktsTable\n");
        return;
    }
    
    /*
     * access_multiplexer: REQUIRED wrapper for get request handling
     */
    access_multiplexer->object_lookup = _mfd_dot11WtpDataPktsTable_object_lookup;
    access_multiplexer->get_values = _mfd_dot11WtpDataPktsTable_get_values;

    /*
     * no wrappers yet
     */
    access_multiplexer->pre_request = _mfd_dot11WtpDataPktsTable_pre_request;
    access_multiplexer->post_request = _mfd_dot11WtpDataPktsTable_post_request;


    /*************************************************
     *
     * Create a registration, save our reg data, register table.
     */
    DEBUGMSGTL(("dot11WtpDataPktsTable:init_dot11WtpDataPktsTable",
                "Registering dot11WtpDataPktsTable as a mibs-for-dummies table.\n"));		 
    handler = netsnmp_baby_steps_access_multiplexer_get(access_multiplexer);
    reginfo = netsnmp_handler_registration_create("dot11WtpDataPktsTable", handler,
                                                  dot11WtpDataPktsTable_oid,
                                                  dot11WtpDataPktsTable_oid_size,
                                                  HANDLER_CAN_BABY_STEP |
                                                  HANDLER_CAN_RONLY
                                                  );
    if(NULL == reginfo) {
        snmp_log(LOG_ERR,"error registering table dot11WtpDataPktsTable\n");
        return;
    }
    reginfo->my_reg_void = &dot11WtpDataPktsTable_if_ctx;

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
                                            dot11WtpDataPktsTable_if_ctx.container,
                                            TABLE_CONTAINER_KEY_NETSNMP_INDEX);
    netsnmp_inject_handler( reginfo, handler );

    /*************************************************
     *
     * inject cache helper
     */
    if(NULL != dot11WtpDataPktsTable_if_ctx.cache) {
        handler = netsnmp_cache_handler_get(dot11WtpDataPktsTable_if_ctx.cache);
        netsnmp_inject_handler( reginfo, handler );
    }

    /*
     * register table
     */
    netsnmp_register_table(reginfo, tbl_info);
} /* _dot11WtpDataPktsTable_initialize_interface */

void
dot11WtpDataPktsTable_valid_columns_set(netsnmp_column_info *vc)
{
    dot11WtpDataPktsTable_if_ctx.tbl_info.valid_columns = vc;
} /* dot11WtpDataPktsTable_valid_columns_set */

/**
 * @internal
 * convert the index component stored in the context to an oid
 */
int
dot11WtpDataPktsTable_index_to_oid(netsnmp_index *oid_idx,
                         dot11WtpDataPktsTable_mib_index *mib_idx)
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
     * set up varbinds
     */
    memset( &var_wtpMacAddr, 0x00, sizeof(var_wtpMacAddr) );
    var_wtpMacAddr.type = ASN_OCTET_STR;

    /*
     * chain temp index varbinds together
     */
    var_wtpMacAddr.next_variable =  NULL;


    DEBUGMSGTL(("verbose:dot11WtpDataPktsTable:dot11WtpDataPktsTable_index_to_oid","called\n"));

        /* wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h */
    snmp_set_var_value(&var_wtpMacAddr, (u_char*)&mib_idx->wtpMacAddr,
                       mib_idx->wtpMacAddr_len * sizeof(mib_idx->wtpMacAddr[0]));


    err = build_oid_noalloc(oid_idx->oids, oid_idx->len, &oid_idx->len,
                           NULL, 0, &var_wtpMacAddr);
    if(err)
        snmp_log(LOG_ERR,"error %d converting index to oid\n", err);

    /*
     * parsing may have allocated memory. free it.
     */
    snmp_reset_var_buffers( &var_wtpMacAddr );

    return err;
} /* dot11WtpDataPktsTable_index_to_oid */

/**
 * extract dot11WtpDataPktsTable indexes from a netsnmp_index
 *
 * @retval SNMP_ERR_NOERROR  : no error
 * @retval SNMP_ERR_GENERR   : error
 */
int
dot11WtpDataPktsTable_index_from_oid(netsnmp_index *oid_idx,
                         dot11WtpDataPktsTable_mib_index *mib_idx)
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
     * set up varbinds
     */
    memset( &var_wtpMacAddr, 0x00, sizeof(var_wtpMacAddr) );
    var_wtpMacAddr.type = ASN_OCTET_STR;

    /*
     * chain temp index varbinds together
     */
    var_wtpMacAddr.next_variable =  NULL;


    DEBUGMSGTL(("verbose:dot11WtpDataPktsTable:dot11WtpDataPktsTable_index_from_oid","called\n"));

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


    }

    /*
     * parsing may have allocated memory. free it.
     */
    snmp_reset_var_buffers( &var_wtpMacAddr );

    return err;
} /* dot11WtpDataPktsTable_index_from_oid */


/* *********************************************************************
 * @internal
 * allocate resources for a dot11WtpDataPktsTable_rowreq_ctx
 */
dot11WtpDataPktsTable_rowreq_ctx *
dot11WtpDataPktsTable_allocate_rowreq_ctx(void)
{
    dot11WtpDataPktsTable_rowreq_ctx *rowreq_ctx =
                  SNMP_MALLOC_TYPEDEF(dot11WtpDataPktsTable_rowreq_ctx);

    DEBUGMSGTL(("internal:dot11WtpDataPktsTable:dot11WtpDataPktsTable_allocate_rowreq_ctx","called\n"));

    if(NULL == rowreq_ctx) {
        snmp_log(LOG_ERR,"Couldn't allocate memory for a "
                 "dot11WtpDataPktsTable_rowreq_ctx.\n");
    }

    rowreq_ctx->oid_idx.oids = rowreq_ctx->oid_tmp;

    rowreq_ctx->dot11WtpDataPktsTable_data_list = NULL;
    rowreq_ctx->dot11WtpDataPktsTable_reg = dot11WtpDataPktsTable_if_ctx.user_ctx;


    return rowreq_ctx;
} /* dot11WtpDataPktsTable_allocate_rowreq_ctx */

/*
 * @internal
 * release resources for a dot11WtpDataPktsTable_rowreq_ctx
 */
void
dot11WtpDataPktsTable_release_rowreq_ctx(dot11WtpDataPktsTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("internal:dot11WtpDataPktsTable:dot11WtpDataPktsTable_release_rowreq_ctx","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    

    /*
     * free index oid pointer
     */
    if(rowreq_ctx->oid_idx.oids != rowreq_ctx->oid_tmp)
        free(rowreq_ctx->oid_idx.oids);

    SNMP_FREE(rowreq_ctx);
} /* dot11WtpDataPktsTable_release_rowreq_ctx */

/**
 * @internal
 * wrapper
 */
static int
_mfd_dot11WtpDataPktsTable_pre_request(netsnmp_mib_handler *handler,
                            netsnmp_handler_registration *reginfo,
                            netsnmp_agent_request_info *agtreq_info,
                            netsnmp_request_info *requests)
{
    int rc = dot11WtpDataPktsTable_pre_request(dot11WtpDataPktsTable_if_ctx.user_ctx);
    if (MFD_SUCCESS != rc) {
        /*
         * nothing we can do about it but log it
         */
        DEBUGMSGTL(("internal:dot11WtpDataPktsTable","error %d from "
                    "dot11WtpDataPktsTable_pre_request\n", rc));
        netsnmp_request_set_error_all(requests, SNMP_VALIDATE_ERR(rc));
    }
    
    return SNMP_ERR_NOERROR;
} /* _mfd_dot11WtpDataPktsTable_pre_request */

/**
 * @internal
 * wrapper
 */
static int
_mfd_dot11WtpDataPktsTable_post_request(netsnmp_mib_handler *handler,
                             netsnmp_handler_registration *reginfo,
                             netsnmp_agent_request_info *agtreq_info,
                             netsnmp_request_info *requests)
{
    dot11WtpDataPktsTable_rowreq_ctx *rowreq_ctx;
    int rc = dot11WtpDataPktsTable_post_request(dot11WtpDataPktsTable_if_ctx.user_ctx);
    if (MFD_SUCCESS != rc) {
        /*
         * nothing we can do about it but log it
         */
        DEBUGMSGTL(("internal:dot11WtpDataPktsTable","error %d from "
                    "dot11WtpDataPktsTable_post_request\n", rc));
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
            CONTAINER_INSERT(dot11WtpDataPktsTable_if_ctx.container, rowreq_ctx);
        }
        else if (rowreq_ctx->rowreq_flags & MFD_ROW_DELETED) {
            CONTAINER_REMOVE(dot11WtpDataPktsTable_if_ctx.container, rowreq_ctx);
            dot11WtpDataPktsTable_release_rowreq_ctx(rowreq_ctx);
        }
    }

    return SNMP_ERR_NOERROR;
} /* _mfd_dot11WtpDataPktsTable_post_request */

/**
 * @internal
 * wrapper
 */
static int
_mfd_dot11WtpDataPktsTable_object_lookup(netsnmp_mib_handler *handler,
                         netsnmp_handler_registration *reginfo,
                         netsnmp_agent_request_info *agtreq_info,
                         netsnmp_request_info *requests)
{
    dot11WtpDataPktsTable_rowreq_ctx *rowreq_ctx =
                  netsnmp_container_table_row_extract(requests);
    
    DEBUGMSGTL(("internal:dot11WtpDataPktsTable:_mfd_dot11WtpDataPktsTable_object_lookup","called\n"));

    /*
     * get our context from mfd
     * dot11WtpDataPktsTable_interface_ctx *if_ctx =
     *             (dot11WtpDataPktsTable_interface_ctx *)reginfo->my_reg_void;
     */

    if(NULL == rowreq_ctx) {
        netsnmp_request_set_error_all(requests, SNMP_ERR_NOCREATION);
    }
    else {
        dot11WtpDataPktsTable_row_prep(rowreq_ctx);
    }

    return SNMP_ERR_NOERROR;
} /* _mfd_dot11WtpDataPktsTable_object_lookup */

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
_dot11WtpDataPktsTable_get_column( dot11WtpDataPktsTable_rowreq_ctx *rowreq_ctx,
                       netsnmp_variable_list *var, int column )
{
    int rc = SNMPERR_SUCCESS;
    
    DEBUGMSGTL(("internal:dot11WtpDataPktsTable:_mfd_dot11WtpDataPktsTable_get_column","called\n"));


    netsnmp_assert(NULL != rowreq_ctx);

    switch(column) {

    /* wtpWirelessMacRxAllByte(1)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSMACRXALLBYTE:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wtpWirelessMacRxAllByte_get(rowreq_ctx, (U64 *)var->val.string );
        break;

    /* wtpWirelessMacTxAllByte(2)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSMACTXALLBYTE:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wtpWirelessMacTxAllByte_get(rowreq_ctx, (U64 *)var->val.string );
        break;

    /* wtpWirelessMacRxPack(3)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSMACRXPACK:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWirelessMacRxPack_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWirelessMacRxErrPack(4)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSMACRXERRPACK:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWirelessMacRxErrPack_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWiredMacRxAllByte(5)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIREDMACRXALLBYTE:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wtpWiredMacRxAllByte_get(rowreq_ctx, (U64 *)var->val.string );
        break;

    /* wtpWiredMacTxAllByte(6)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIREDMACTXALLBYTE:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wtpWiredMacTxAllByte_get(rowreq_ctx, (U64 *)var->val.string );
        break;

    /* wtpWiredMacRxErrPack(7)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIREDMACRXERRPACK:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWiredMacRxErrPack_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWirelessMacTxDropPkts(8)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSMACTXDROPPKTS:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWirelessMacTxDropPkts_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWirelessMacTxPack(9)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSMACTXPACK:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWirelessMacTxPack_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWirelessMacTxErrPack(10)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSMACTXERRPACK:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWirelessMacTxErrPack_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWirelessMacRxRightPack(11)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSMACRXRIGHTPACK:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWirelessMacRxRightPack_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWirelessMacTxRightPack(12)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSMACTXRIGHTPACK:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWirelessMacTxRightPack_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWiredMacRxPack(13)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIREDMACRXPACK:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWiredMacRxPack_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWiredMacRxRightPack(14)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIREDMACRXRIGHTPACK:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWiredMacRxRightPack_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWiredMacTxPack(15)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIREDMACTXPACK:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWiredMacTxPack_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWiredMacTxErrPack(16)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIREDMACTXERRPACK:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWiredMacTxErrPack_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWiredMacTxRightPack(17)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIREDMACTXRIGHTPACK:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWiredMacTxRightPack_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWirelessradioRecvBytes(18)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSRADIORECVBYTES:
    var->val_len = sizeof(u_long);
    var->type = ASN_COUNTER;
rc = wtpWirelessradioRecvBytes_get(rowreq_ctx, (u_long *)var->val.string );
        break;

    /* wtpWirelesscoreRecvBytes(19)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSCORERECVBYTES:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wtpWirelesscoreRecvBytes_get(rowreq_ctx, (U64 *)var->val.string );
        break;

    /* wtpWirelessRxFlowByte(20)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSRXFLOWBYTE:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wtpWirelessRxFlowByte_get(rowreq_ctx, (U64 *)var->val.string );
        break;

    /* wtpWirelessTxFlowByte(21)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h */
    case COLUMN_WTPWIRELESSTXFLOWBYTE:
    var->val_len = sizeof(U64);
    var->type = ASN_COUNTER64;
rc = wtpWirelessTxFlowByte_get(rowreq_ctx, (U64 *)var->val.string );
        break;

     default:
         snmp_log(LOG_ERR,"unknown column %d in _dot11WtpDataPktsTable_get_column\n", column);
         break;
    }

    return rc;
} /* _dot11WtpDataPktsTable_get_column */

int
_mfd_dot11WtpDataPktsTable_get_values(netsnmp_mib_handler *handler,
                         netsnmp_handler_registration *reginfo,
                         netsnmp_agent_request_info *agtreq_info,
                         netsnmp_request_info *requests)
{
    dot11WtpDataPktsTable_rowreq_ctx *rowreq_ctx =
                  netsnmp_container_table_row_extract(requests);
    netsnmp_table_request_info * tri;
    u_char                     * old_string;
    void                      (*dataFreeHook)(void *);
    int                        rc;

    DEBUGMSGTL(("internal:dot11WtpDataPktsTable:_mfd_dot11WtpDataPktsTable_get_values","called\n"));

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
        
        rc = _dot11WtpDataPktsTable_get_column(rowreq_ctx, requests->requestvb, tri->colnum);
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
} /* _mfd_dot11WtpDataPktsTable_get_values */

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
    DEBUGMSGTL(("internal:dot11WtpDataPktsTable:_cache_load","called\n"));

    if((NULL == cache) || (NULL == cache->magic)) {
        snmp_log(LOG_ERR, "invalid cache for dot11WtpDataPktsTable_cache_load\n");
        return -1;
    }

    /** should only be called for an invalid or expired cache */
    netsnmp_assert((0 == cache->valid) || (1 == cache->expired));
    
    /*
     * call user code
     */
    return dot11WtpDataPktsTable_cache_load((netsnmp_container*)cache->magic);
} /* _cache_load */

/**
 * @internal
 */
static void
_cache_item_free(dot11WtpDataPktsTable_rowreq_ctx *rowreq_ctx, void *context)
{
    DEBUGMSGTL(("internal:dot11WtpDataPktsTable:_cache_item_free","called\n"));

    if(NULL == rowreq_ctx)
        return;

    dot11WtpDataPktsTable_release_rowreq_ctx(rowreq_ctx);
} /* _cache_item_free */

/**
 * @internal
 */
static void
_cache_free(netsnmp_cache *cache, void *magic)
{
    netsnmp_container *container;

    DEBUGMSGTL(("internal:dot11WtpDataPktsTable:_cache_free","called\n"));

    if((NULL == cache) || (NULL == cache->magic)) {
        snmp_log(LOG_ERR, "invalid cache in dot11WtpDataPktsTable_cache_free\n");
        return;
    }

    container = (netsnmp_container*)cache->magic;

    /*
     * call user code
     */
    dot11WtpDataPktsTable_cache_free(container);
    
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
_dot11WtpDataPktsTable_container_init(dot11WtpDataPktsTable_interface_ctx *if_ctx)
{
    DEBUGMSGTL(("internal:dot11WtpDataPktsTable:_dot11WtpDataPktsTable_container_init","called\n"));
    
    /*
     * set up the cache
     */
    if_ctx->cache = netsnmp_cache_create(30, /* timeout in seconds */
                                         _cache_load, _cache_free,
                                         dot11WtpDataPktsTable_oid,
                                         dot11WtpDataPktsTable_oid_size);

    if(NULL == if_ctx->cache) {
        snmp_log(LOG_ERR, "error creating cache for dot11WtpDataPktsTable\n");
        return;
    }

    if_ctx->cache->flags = NETSNMP_CACHE_DONT_INVALIDATE_ON_SET;

    dot11WtpDataPktsTable_container_init(&if_ctx->container, if_ctx->cache);
    if(NULL == if_ctx->container)
        if_ctx->container = netsnmp_container_find("dot11WtpDataPktsTable:table_container");
    if(NULL == if_ctx->container) {
        snmp_log(LOG_ERR,"error creating container in "
                 "dot11WtpDataPktsTable_container_init\n");
        return;
    }
    if_ctx->cache->magic = (void*)if_ctx->container;
} /* _dot11WtpDataPktsTable_container_init */
