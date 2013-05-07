/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12077 $ of $
 *
 * $Id:$
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11ConfigSysLogServerTable.h"
#include "autelanWtpGroup.h"
#include "ws_log_conf.h"
#include <netinet/in.h>
#include "mibs_public.h"


/** @defgroup data_set data_set: Routines to set data
 *
 * These routines are used to set the value for individual objects. The
 * row context is passed, along with the new value.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11ConfigSysLogServerTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11ConfigSysLogServerTable is subid 1 of dot11ConfigSysLogServerGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.25.1, length: 12
*/
    /*
     * NOTE: if you update this chart, please update the versions in
     *       local/mib2c-conf.d/parent-set.m2i
     *       agent/mibgroup/helpers/baby_steps.c
     * while you're at it.
     */
    /*
     ***********************************************************************
     * Baby Steps Flow Chart (2004.06.05)                                  *
     *                                                                     *
     * +--------------+    +================+    U = unconditional path    *
     * |optional state|    ||required state||    S = path for success      *
     * +--------------+    +================+    E = path for error        *
     ***********************************************************************
     *
     *                        +--------------+
     *                        |     pre      |
     *                        |   request    |
     *                        +--------------+
     *                               | U
     * +-------------+        +==============+
     * |    row    |f|<-------||  object    ||
     * |  create   |1|      E ||  lookup    ||
     * +-------------+        +==============+
     *     E |   | S                 | S
     *       |   +------------------>|
     *       |                +==============+
     *       |              E ||   check    ||
     *       |<---------------||   values   ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |       +<-------||   undo     ||
     *       |       |      E ||   setup    ||
     *       |       |        +==============+
     *       |       |               | S
     *       |       |        +==============+
     *       |       |        ||    set     ||-------------------------->+
     *       |       |        ||   value    || E                         |
     *       |       |        +==============+                           |
     *       |       |               | S                                 |
     *       |       |        +--------------+                           |
     *       |       |        |    check     |-------------------------->|
     *       |       |        |  consistency | E                         |
     *       |       |        +--------------+                           |
     *       |       |               | S                                 |
     *       |       |        +==============+         +==============+  |
     *       |       |        ||   commit   ||-------->||     undo   ||  |
     *       |       |        ||            || E       ||    commit  ||  |
     *       |       |        +==============+         +==============+  |
     *       |       |               | S                     U |<--------+
     *       |       |        +--------------+         +==============+
     *       |       |        | irreversible |         ||    undo    ||
     *       |       |        |    commit    |         ||     set    ||
     *       |       |        +--------------+         +==============+
     *       |       |               | U                     U |
     *       |       +-------------->|<------------------------+
     *       |                +==============+
     *       |                ||   undo     ||
     *       |                ||  cleanup   ||
     *       |                +==============+
     *       +---------------------->| U
     *                               |
     *                          (err && f1)------------------->+
     *                               |                         |
     *                        +--------------+         +--------------+
     *                        |    post      |<--------|      row     |
     *                        |   request    |       U |    release   |
     *                        +--------------+         +--------------+
     *
     */

/**
 * Setup up context with information needed to undo a set request.
 *
 * This function will be called before the individual node undo setup
 * functions are called. If you need to do any undo setup that is not
 * related to a specific column, you can do it here.
 *
 * Note that the undo context has been allocated with
 * dot11ConfigSysLogServerTable_allocate_data(), but may need extra
 * initialization similar to what you may have done in
 * dot11ConfigSysLogServerTable_rowreq_ctx_init().
 * Note that an individual node's undo_setup function will only be called
 * if that node is being set to a new value.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in the node's undo_setup
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11ConfigSysLogServerTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
dot11ConfigSysLogServerTable_undo_setup( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:dot11ConfigSysLogServerTable_undo_setup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:451:M: |-> Setup dot11ConfigSysLogServerTable undo.
     * set up dot11ConfigSysLogServerTable undo information, in preparation for a set.
     * Undo storage is in (* SyslogRowStatus_val_ptr )*
     */

    return rc;
} /* dot11ConfigSysLogServerTable_undo_setup */

/**
 * Undo a set request.
 *
 * This function will be called before the individual node undo
 * functions are called. If you need to do any undo that is not
 * related to a specific column, you can do it here.
 *
 * Note that an individual node's undo function will only be called
 * if that node is being set to a new value.
 *
 * If there is anything  specific to a particular column (e.g. releasing
 * memory for a string), you should do that setup in the node's undo
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11ConfigSysLogServerTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
dot11ConfigSysLogServerTable_undo( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:dot11ConfigSysLogServerTable_undo","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:451:M: |-> dot11ConfigSysLogServerTable undo.
     * dot11ConfigSysLogServerTable undo information, in response to a failed set.
     * Undo storage is in (* SyslogRowStatus_val_ptr )*
     */

    return rc;
} /* dot11ConfigSysLogServerTable_undo_setup */

/**
 * Cleanup up context undo information.
 *
 * This function will be called after set/commit processing. If you
 * allocated any resources in undo_setup, this is the place to release
 * those resources.
 *
 * This function is called regardless of the success or failure of the set
 * request. If you need to perform different steps for cleanup depending
 * on success or failure, you can add a flag to the rowreq_ctx.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11ConfigSysLogServerTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot11ConfigSysLogServerTable_undo_cleanup( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:dot11ConfigSysLogServerTable_undo_cleanup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:452:M: |-> Cleanup dot11ConfigSysLogServerTable undo.
     * Undo storage is in (* SyslogRowStatus_val_ptr )*
     */

    return rc;
} /* dot11ConfigSysLogServerTable_undo_cleanup */

static int
check_create_ready(dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx) {
    if(strlen(rowreq_ctx->data.SyslogServerIPPort)) {
        return MFD_SUCCESS;
    }

    return MFD_ERROR;
}

/**
 * commit new values.
 *
 * At this point, you should have done everything you can to ensure that
 * this commit will not fail.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * dot11ConfigSysLogServerTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param dot11ConfigSysLogServerTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot11ConfigSysLogServerTable_commit( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;
    int             save_flags;

    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:dot11ConfigSysLogServerTable_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * save flags, then clear until we actually do something
     */
    save_flags = rowreq_ctx->column_set_flags;
    rowreq_ctx->column_set_flags = 0;
	
    if(RS_NOTREADY == rowreq_ctx->data.SyslogRowStatus && MFD_SUCCESS == check_create_ready(rowreq_ctx)) {
        rowreq_ctx->data.SyslogRowStatus = RS_NOTINSERVICE;
    }
    /*
     * commit dot11ConfigSysLogServerTable data
     * 1) check the column's flag in save_flags to see if it was set.
     * 2) clear the flag when you handle that column
     * 3) set the column's flag in column_set_flags if it needs undo
     *    processing in case of a failure.
     */
    if (save_flags & COLUMN_SYSLOGSERVERIPPORT_FLAG) {
       save_flags &= ~COLUMN_SYSLOGSERVERIPPORT_FLAG; /* clear SyslogServerIPPort */
       /*
        * TODO:482:o: |-> commit column SyslogServerIPPort.
        */
       rc = MFD_SUCCESS;
       if(-1 == rc) {
           snmp_log(LOG_ERR,"dot11ConfigSysLogServerTable column SyslogServerIPPort commit failed\n");
       }
       else {
            /*
             * set flag, in case we need to undo SyslogServerIPPort
             */
            rowreq_ctx->column_set_flags |= COLUMN_SYSLOGSERVERIPPORT_FLAG;
       }
    }

    if (save_flags & COLUMN_SYSLOGROWSTATUS_FLAG) {
        save_flags &= ~COLUMN_SYSLOGROWSTATUS_FLAG; /* clear SyslogRowStatus */
		switch(rowreq_ctx->data.SyslogRowStatus) {
			case RS_ACTIVE:
				{
					if(0 == rowreq_ctx->data.is_modify)
					{
                        if_syslog_exist();

                        int level = 0;
                        char str_level[30] = { 0 };
                        get_first_xmlnode(XML_FPATH, NODE_FLEVEL, str_level);
                        if(0 == strcmp(str_level, "")) {
                            level = 1;
                        }
                        else {
                            level = strtoul(str_level, 0, 10);
                        }

                        char getz[50] = { 0 };
                        struct filter_st fst,*fq = NULL;
                        memset(&fst, 0, sizeof(fst));
                        
                        int fnum = 0, fi = 0, fsz = 0;;

                        read_filter_xml(&fst,&fnum);
                        fq = fst.next;
                        while(fq) {
                            fsz++;
                            if(strcmp(fq->viewz, "0")) {
                                fi++;
                                if(fi == level) {
                                    break;
                                }    
                            }       
                            fq = fq->next;
                        }

                        if(fnum > 0) {
                            Free_read_filter_xml(&fst);
                        }

                        if(level > fi) {
                            snmp_log(LOG_INFO, "filter level not in the list\n");
                            rc = -1;
                            break;
                        }

                        get_second_xmlnode(XML_FPATH, NODE_FILTER, NODE_VALUE, getz, fsz);
                        if(strcmp(getz, "")) {

                            int ftime = -1, fid = 0;
                            
                            char timeflag[50]   = { 0 };                                
                            char indexz[20]     = { 0 };
                            snprintf(indexz, sizeof(indexz) - 1, "%d", rowreq_ctx->tbl_idx.SyslogIndex);

                            
                            struct TAddress taddr;                              
                            memset(&taddr, 0, sizeof(taddr));
                            memcpy(&taddr, rowreq_ctx->data.SyslogServerIPPort, sizeof(taddr));
                            
                            taddr.ip = ntohl(taddr.ip);
                            taddr.port = ntohs(taddr.port);
                            
                            char sip[32] = { 0 };
                            char sport[32] = { 0 };
                            INET_NTOA(taddr.ip, sip);
                            snprintf(sport, sizeof(sport) - 1, "%d", taddr.port);

                            ftime = if_dup_info("udp", sip, sport, getz, timeflag);
                            find_second_xmlnode(XML_FPATH, NODE_LOG, NODE_INDEXZ, indexz, &fid); 
                            if(0 == ftime && 0 == fid) {
                                add_syslog_serve_web(XML_FPATH, "1", sip, sport, getz, "udp", str_level[0] ? str_level : "1", indexz);
                                save_syslog_file(); 
                                rc = MFD_SUCCESS;
                                break ;
                            }
                            else if(fid) {
                                snmp_log(LOG_INFO, "The same id is exist\n");
                            }
                            else if(ftime) {
                                snmp_log(LOG_INFO, "The same filter level and the same ip ,protocol and port are exist\n");
                            }
                        }
                        else {
                            snmp_log(LOG_INFO, "filter level not in the list\n");  
                        }    
					}
					else
					{
						rc = MFD_SUCCESS;
						break;
					}
				}
				rc = -1;
				break;
		
			case RS_CREATEANDWAIT:
				rowreq_ctx->data.SyslogRowStatus = RS_NOTREADY;
				rc = MFD_SUCCESS;
				break;
				
			case RS_DESTROY:  
				{
                    int flagz = 0, fid = 0;
                    char indexz[20] = { 0 };
                    snprintf(indexz, sizeof(indexz) - 1, "%d", rowreq_ctx->tbl_idx.SyslogIndex);                       
                    if_syslog_exist();
                    find_second_xmlnode(XML_FPATH, NODE_LOG, NODE_INDEXZ, indexz, &fid);   
                    if(fid) {
                        del_second_xmlnode(XML_FPATH, NODE_LOG, fid);                        
                        find_second_xmlnode(XML_FPATH, NODE_DES, NODE_INDEXZ, indexz, &flagz); 
                        if(flagz) {
                            del_second_xmlnode(XML_FPATH, NODE_DES, flagz);
                        }
                        save_syslog_file();

                        rc = MFD_SUCCESS;
                        break;
                        
                    }
                    
                    snmp_log(LOG_INFO, "dot11ConfigSysLogServerTable_commit:RS_DESTROY: can`t find the id %s\n", indexz);
                }
                rowreq_ctx->rowreq_flags &= ~MFD_ROW_DELETED;
                rc = -1;
                break;
				
			default:
				break;
		}
       /*
        * TODO:482:o: |-> commit column SyslogRowStatus.
        */
       if(-1 == rc) {
           snmp_log(LOG_ERR,"dot11ConfigSysLogServerTable column SyslogRowStatus commit failed\n");
       }
       else {
            /*
             * set flag, in case we need to undo SyslogRowStatus
             */
            rowreq_ctx->column_set_flags |= COLUMN_SYSLOGROWSTATUS_FLAG;
       }
    }

    /*
     * if we successfully commited this row, set the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags |= MFD_ROW_DIRTY;
    }

    if (save_flags) {
       snmp_log(LOG_ERR, "unhandled columns (0x%x) in commit\n", save_flags);
       return MFD_ERROR;
    }

    return rc;
} /* dot11ConfigSysLogServerTable_commit */

/**
 * undo commit new values.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * dot11ConfigSysLogServerTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param dot11ConfigSysLogServerTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot11ConfigSysLogServerTable_undo_commit( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:dot11ConfigSysLogServerTable_undo_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:485:M: |-> Undo dot11ConfigSysLogServerTable commit.
     * check the column's flag in rowreq_ctx->column_set_flags to see
     * if it was set during commit, then undo it.
     *
     * eg: if (rowreq_ctx->column_set_flags & COLUMN__FLAG) {}
     */

    
    /*
     * if we successfully un-commited this row, clear the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags &= ~MFD_ROW_DIRTY;
    }

    return rc;
} /* dot11ConfigSysLogServerTable_undo_commit */

/*
 * TODO:440:M: Implement dot11ConfigSysLogServerTable node value checks.
 * TODO:450:M: Implement dot11ConfigSysLogServerTable undo functions.
 * TODO:460:M: Implement dot11ConfigSysLogServerTable set functions.
 * TODO:480:M: Implement dot11ConfigSysLogServerTable commit functions.
 */
/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigSysLogServerEntry.SyslogServerIPPort
 * SyslogServerIPPort is subid 2 of dot11ConfigSysLogServerEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.25.1.1.2
 * Description:
SyslogServerIPAddr,config for IP:Port . Use MG-SOFT MIB browser and select Bits when set value . example,# 0xC0 0xA8 0xA8 0xA8 0xA8 0xA8.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   0
 *   settable   1
 *
 * Ranges:  1 - 255;
 *
 * Its syntax is TAddress (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 255)
 */
/**
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param SyslogServerIPPort_val_ptr
 *        A char containing the new value.
 * @param SyslogServerIPPort_val_ptr_len
 *        The size (in bytes) of the data pointed to by SyslogServerIPPort_val_ptr
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * dot11ConfigSysLogServerTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_OCTET_STR
 *    The length is < sizeof(rowreq_ctx->data.SyslogServerIPPort).
 *    The length is in (one of) the range set(s):  1 - 255
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
SyslogServerIPPort_check_value( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx, char *SyslogServerIPPort_val_ptr,  size_t SyslogServerIPPort_val_ptr_len)
{
    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:SyslogServerIPPort_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);
    netsnmp_assert(NULL != SyslogServerIPPort_val_ptr);

    /*
     * TODO:441:o: |-> Check for valid SyslogServerIPPort value.
     */

    if(RS_NOTINSERVICE == rowreq_ctx->data.SyslogRowStatus || RS_NOTREADY == rowreq_ctx->data.SyslogRowStatus)
	    return MFD_SUCCESS;
	else     
        return MFD_ERROR; /* SyslogServerIPPort value not illegal */
} /* SyslogServerIPPort_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11ConfigSysLogServerTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * dot11ConfigSysLogServerTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
SyslogServerIPPort_undo_setup( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:SyslogServerIPPort_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup SyslogServerIPPort undo.
     */
    /*
     * copy SyslogServerIPPort and SyslogServerIPPort_len data
     * set rowreq_ctx->undo->SyslogServerIPPort from rowreq_ctx->data.SyslogServerIPPort
     */
    memcpy( rowreq_ctx->undo->SyslogServerIPPort, rowreq_ctx->data.SyslogServerIPPort,
            (rowreq_ctx->data.SyslogServerIPPort_len * sizeof(rowreq_ctx->undo->SyslogServerIPPort[0])));
    rowreq_ctx->undo->SyslogServerIPPort_len = rowreq_ctx->data.SyslogServerIPPort_len;


    return MFD_SUCCESS;
} /* SyslogServerIPPort_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param SyslogServerIPPort_val_ptr
 *        A char containing the new value.
 * @param SyslogServerIPPort_val_ptr_len
 *        The size (in bytes) of the data pointed to by SyslogServerIPPort_val_ptr
 */
int
SyslogServerIPPort_set( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx, char *SyslogServerIPPort_val_ptr,  size_t SyslogServerIPPort_val_ptr_len )
{

    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:SyslogServerIPPort_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);
    netsnmp_assert(NULL != SyslogServerIPPort_val_ptr);

    /*
     * TODO:461:M: |-> Set SyslogServerIPPort value.
     * set SyslogServerIPPort value in rowreq_ctx->data
     */	
	int rc = MFD_ERROR;
	if(RS_NOTINSERVICE == rowreq_ctx->data.SyslogRowStatus && rowreq_ctx->data.is_modify) /*modify*/
	{
		char sip[32] = {0};				
		int portz  = 0;
		int levelz  = 1;
		char newc[20] = {0};
		struct TAddress taddr;
		memset( &taddr, 0, sizeof(taddr) );
		memcpy( &taddr, SyslogServerIPPort_val_ptr, sizeof(taddr));

		taddr.ip = ntohl( taddr.ip );
		taddr.port = ntohs( taddr.port );
		
		portz = taddr.port;	
		
		if ((portz > 0) && (portz < 65535) )
		{
			INET_NTOA(taddr.ip, sip);
			memset(newc,0,20);
			get_first_xmlnode(XML_FPATH, NODE_FLEVEL, newc);
			levelz = strtoul(newc,0,10);
			if( levelz == 0 )
			{
				levelz  = 1;
			}
			mod_syslog_server(XML_FPATH, rowreq_ctx->data.timeflag, 1, sip, portz, levelz);
			save_syslog_file();
			memset(rowreq_ctx->data.SyslogServerIPPort, 0, sizeof(rowreq_ctx->data.SyslogServerIPPort));	
			memcpy( rowreq_ctx->data.SyslogServerIPPort, SyslogServerIPPort_val_ptr, SyslogServerIPPort_val_ptr_len );
		    rowreq_ctx->data.SyslogServerIPPort_len = SyslogServerIPPort_val_ptr_len / sizeof(SyslogServerIPPort_val_ptr[0]);
			rc = MFD_SUCCESS;
		}
		else
		{
			rc = MFD_ERROR;
		}
	}
	else if(RS_NOTREADY == rowreq_ctx->data.SyslogRowStatus)/*creat and wait*/
	{
		memcpy( rowreq_ctx->data.SyslogServerIPPort, SyslogServerIPPort_val_ptr, SyslogServerIPPort_val_ptr_len );
	    rowreq_ctx->data.SyslogServerIPPort_len = SyslogServerIPPort_val_ptr_len / sizeof(SyslogServerIPPort_val_ptr[0]);
		rc = MFD_SUCCESS;
	}
    return rc;
} /* SyslogServerIPPort_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
SyslogServerIPPort_undo( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:SyslogServerIPPort_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up SyslogServerIPPort undo.
     */
    /*
     * copy SyslogServerIPPort and SyslogServerIPPort_len data
     * set rowreq_ctx->data.SyslogServerIPPort from rowreq_ctx->undo->SyslogServerIPPort
     */
    memcpy( rowreq_ctx->data.SyslogServerIPPort, rowreq_ctx->undo->SyslogServerIPPort,
            (rowreq_ctx->undo->SyslogServerIPPort_len * sizeof(rowreq_ctx->data.SyslogServerIPPort[0])));
    rowreq_ctx->data.SyslogServerIPPort_len = rowreq_ctx->undo->SyslogServerIPPort_len;

    
    return MFD_SUCCESS;
} /* SyslogServerIPPort_undo */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigSysLogServerEntry.SyslogRowStatus
 * SyslogRowStatus is subid 3 of dot11ConfigSysLogServerEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.25.1.1.3
 * Description:
This variable is used to create, modify, and/or delete a row
			        	 in this table.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 3/8. Values:  active(1), notInService(2), notReady(3), createAndGo(4), createAndWait(5), destroy(6)
 *
 * Its syntax is RowStatus (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param SyslogRowStatus_val
 *        A long containing the new value.
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * dot11ConfigSysLogServerTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *    The value is one of  active(1), notInService(2), notReady(3), createAndGo(4), createAndWait(5), destroy(6)
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
SyslogRowStatus_check_value( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx, u_long SyslogRowStatus_val)
{
    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:SyslogRowStatus_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid SyslogRowStatus value.
     */

    return MFD_SUCCESS; /* SyslogRowStatus value not illegal */
} /* SyslogRowStatus_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11ConfigSysLogServerTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * dot11ConfigSysLogServerTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
SyslogRowStatus_undo_setup( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:SyslogRowStatus_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup SyslogRowStatus undo.
     */
    /*
     * copy SyslogRowStatus data
     * set rowreq_ctx->undo->SyslogRowStatus from rowreq_ctx->data.SyslogRowStatus
     */
    rowreq_ctx->undo->SyslogRowStatus = rowreq_ctx->data.SyslogRowStatus;


    return MFD_SUCCESS;
} /* SyslogRowStatus_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param SyslogRowStatus_val
 *        A long containing the new value.
 */
int
SyslogRowStatus_set( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx, u_long SyslogRowStatus_val )
{

    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:SyslogRowStatus_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:461:M: |-> Set SyslogRowStatus value.
     * set SyslogRowStatus value in rowreq_ctx->data
     */
    int ret = MFD_SUCCESS;
    
    switch(SyslogRowStatus_val) {
    
		case RS_NOTINSERVICE:
        case RS_ACTIVE:         
        case RS_DESTROY:
            rowreq_ctx->data.SyslogRowStatus = SyslogRowStatus_val;
            ret = MFD_SUCCESS;
            break;
    
        case RS_NOTREADY:
        case RS_CREATEANDGO:
            ret = MFD_ERROR;
            break;
    
        case RS_CREATEANDWAIT:
            if(RS_NONEXISTENT == rowreq_ctx->data.SyslogRowStatus) {
                rowreq_ctx->data.SyslogRowStatus = SyslogRowStatus_val;
                ret = MFD_SUCCESS;
            }
            else {
                ret = MFD_ERROR;
            }
            break;
    
        default:
            snmp_log(LOG_WARNING, "unknow %s in SyslogRowStatus_set", SyslogRowStatus_val);
            ret = MFD_ERROR;
            break;
    }

    return ret;
    
} /* SyslogRowStatus_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
SyslogRowStatus_undo( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:dot11ConfigSysLogServerTable:SyslogRowStatus_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up SyslogRowStatus undo.
     */
    /*
     * copy SyslogRowStatus data
     * set rowreq_ctx->data.SyslogRowStatus from rowreq_ctx->undo->SyslogRowStatus
     */
    rowreq_ctx->data.SyslogRowStatus = rowreq_ctx->undo->SyslogRowStatus;

    
    return MFD_SUCCESS;
} /* SyslogRowStatus_undo */

/**
 * check dependencies
 *
 * This is useful for for tables which have dependencies between columns
 * (or rows, or tables). For example, two columns allocating a percentage
 * of something add up 100%.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * dot11ConfigSysLogServerTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @retval MFD_SUCCESS all the changes to the row are legal
 * @retval MFD_ERROR   one or more changes are not legal
 *
 * (see README-table-dot11ConfigSysLogServerTable if you don't have dependencies)
 */
int
dot11ConfigSysLogServerTable_check_dependencies(dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;
    
    DEBUGMSGTL(("internal:dot11ConfigSysLogServerTable:dot11ConfigSysLogServerTable_check_dependencies","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:470:o: Check dot11ConfigSysLogServerTable row dependencies.
     * check that all new value are legal and consistent with each other
     */
    /*
     * check RowStatus dependencies
     */
    if (rowreq_ctx->column_set_flags & COLUMN_SYSLOGROWSTATUS_FLAG) {
        /*
         * check for valid RowStatus transition (old, new)
         * (Note: move transition check to 
         *  to catch errors earlier)
         */
        rc = check_rowstatus_transition( rowreq_ctx->undo->SyslogRowStatus,
                                         rowreq_ctx->data.SyslogRowStatus );
        if (MFD_SUCCESS != rc)
            return rc;
        
        /*
         * row creation requirements
         */
        if (rowreq_ctx->rowreq_flags & MFD_ROW_CREATED) {
            if (ROWSTATUS_DESTROY ==  rowreq_ctx->data.SyslogRowStatus) {
                rowreq_ctx->rowreq_flags |= MFD_ROW_DELETED;
            }
            else if (ROWSTATUS_CREATEANDGO ==  rowreq_ctx->data.SyslogRowStatus) {
                if ((rowreq_ctx->column_set_flags & DOT11CONFIGSYSLOGSERVERTABLE_REQUIRED_COLS)
                    != DOT11CONFIGSYSLOGSERVERTABLE_REQUIRED_COLS) {
                    DEBUGMSGTL(("dot11ConfigSysLogServerTable",
                                "required columns missing (0x%0x != 0x%0x)\n",
                                rowreq_ctx->column_set_flags, DOT11CONFIGSYSLOGSERVERTABLE_REQUIRED_COLS));
                    return MFD_CANNOT_CREATE_NOW;
                }
                rowreq_ctx->data.SyslogRowStatus = ROWSTATUS_ACTIVE;
            }
        } /* row creation */
        else {
            /*
             * row change requirements
             */
            /*
             * don't allow a destroy if any other value was changed, since
             * that might call data access routines with bad info.
             *
             * you may or may not require the row be notInService before it
             * can be destroyed.
             */
            if (ROWSTATUS_DESTROY == rowreq_ctx->data.SyslogRowStatus) {
                if (rowreq_ctx->column_set_flags & ~COLUMN_SYSLOGROWSTATUS_FLAG) {
                    DEBUGMSGTL(("dot11ConfigSysLogServerTable",
                                "destroy must be only varbind for row\n"));
                    return MFD_NOT_VALID_NOW;
                }
                rowreq_ctx->rowreq_flags |= MFD_ROW_DELETED;

            } /* row destroy */
        } /* row change */
    }
    else {
        /*
         * must have row status to create a row
         */
        if (rowreq_ctx->rowreq_flags & MFD_ROW_CREATED) {
            DEBUGMSGTL(("dot11ConfigSysLogServerTable",
                        "must use RowStatus to create rows\n"));
            return MFD_CANNOT_CREATE_NOW;
        }
    } /* row status not set */

    if ( MFD_SUCCESS != rc )
        return rc;

    return rc;
} /* dot11ConfigSysLogServerTable_check_dependencies */

/** @} */