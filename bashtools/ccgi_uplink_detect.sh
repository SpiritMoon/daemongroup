#!/bin/sh
#
###########################################################################
#
#              Copyright (C) Autelan Technology
#
#This software file is owned and distributed by Autelan Technology 
#
############################################################################
#THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
#ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
#WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
#DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR 
#ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
#(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
#LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
#ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
#(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
#SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
##############################################################################
#
# uplink_detect
#
# CREATOR:
# autelan.software.xxx. team
# 
# DESCRIPTION: 
#     
#############################################################################

source vtysh_start.sh

if [ $# -eq 6 ] ; then
	if [ 0 -eq $3 ] ; then
		cmdstr="
		configure terminal
		uplink $4 $5 $6
		"
	else
		if [ 0 -eq $2 ] ; then
			cmdstr="
			configure terminal
			config hansi-profile $1-$3
			uplink $4 $5 $6
			"			
		else
			cmdstr="
			configure terminal
			config local-hansi $1-$3
			uplink $4 $5 $6
			"
		fi		
	fi	
        
	vtysh -c "$cmdstr"
	if [ 0 -eq $? ] ; then
		exit 0
	else
		exit 1
	fi
fi
    exit 1							 