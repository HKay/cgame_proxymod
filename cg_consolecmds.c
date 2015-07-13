/*
	==============================
	Written by id software, nightmare and hk of mdd

	This file is part of mdd client proxymod.

	mdd client proxymod is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	mdd client proxymod is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with mdd client proxymod.  If not, see <http://www.gnu.org/licenses/>.
	==============================
	Note: mdd client proxymod contains large quantities from the quake III arena source code
*/
#include "cg_local.h"
#include "cg_consolecmds.h"



qboolean *CG_ConsoleCommand( void ) {
	int32_t argc;
	int i;
	char tmpArg[1024];
	char args[1024];

	memset( tmpArg, '\0', sizeof(tmpArg));
	memset( args, '\0', sizeof(args));

	argc = g_syscall( CG_ARGC );

	g_syscall( CG_ARGV, 0, tmpArg, sizeof(tmpArg) );
	strncat(args, vaf("%s ^1", tmpArg), sizeof(args));

	for( i=1; i<argc; i++ ) {
		g_syscall( CG_ARGV, i, tmpArg, sizeof(tmpArg) );
		strncat(args, vaf("%s ", tmpArg), sizeof(args));
//		strncpy(args, tmpArg, sizeof(args));
	}

	// g_syscall( CG_PRINT, vaf("^4>>>^7 %s\n", args));
//  char cmdBuffer[256];
//	uint32_t argc;

//	argc = g_syscall( CG_ARGC );
//	g_syscall( CG_ARGV, 0, cmdBuffer, sizeof(cmdBuffer) );

//	g_syscall( CG_PRINT, vaf("^6%s^7\n", cmdBuffer) );
//	TODO: check if the player uses one of our commands

	return qfalse; // not a command
}
