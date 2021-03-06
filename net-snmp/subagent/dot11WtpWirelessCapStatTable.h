/*******************************************************************************
Copyright (C) Autelan Technology


This software file is owned and distributed by Autelan Technology 
********************************************************************************


THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR 
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
********************************************************************************
* dot11WtpWirelessCapStatTable.h
*
*
* CREATOR:
* autelan.software.Network Dep. team
*
* DESCRIPTION:
* 
*
*
*******************************************************************************/
#ifndef DOT11WTPWIRELESSCAPSTATTABLE_H
#define DOT11WTPWIRELESSCAPSTATTABLE_H

/* function declarations */
void init_dot11WtpWirelessCapStatTable(void);
void initialize_table_dot11WtpWirelessCapStatTable(void);
Netsnmp_Node_Handler dot11WtpWirelessCapStatTable_handler;
Netsnmp_First_Data_Point  dot11WtpWirelessCapStatTable_get_first_data_point;
Netsnmp_Next_Data_Point   dot11WtpWirelessCapStatTable_get_next_data_point;

/* column number definitions for table dot11WtpWirelessCapStatTable */
       #define COLUMN_AVGRXSIGNALSTRENGTH		1
       #define COLUMN_HIGHESTRXSIGNALSTRENGTH		2
       #define COLUMN_LOWESTRXSIGNALSTRENGTH		3
       #define COLUMN_CHSTATSPHYERRPKTS		4
       #define COLUMN_CHSTATSFRAMERETRYCNT		5
       #define COLUMN_CHSTATSFRAMEERRORCNT		6
	   #define WTPCAPSTATTABLE_MIN_COLUMN     COLUMN_AVGRXSIGNALSTRENGTH
	   #define WTPCAPSTATTABLE_MAX_COLUMN     COLUMN_CHSTATSFRAMEERRORCNT
#endif /* DOT11WTPWIRELESSCAPSTATTABLE_H */
