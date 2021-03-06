/*
 *  winFileaccess.c
 *  joe2
 *
 * created by wolfgang, 02.05.2009
 */
/*-----------------------------------------------------------------------
 JoePass! is a program that animates juggling patterns. 
 It also provides some editors that let you write your own patterns.
 Copyright (C) <1997---today>  Wolfgang Westerboer
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 -----------------------------------------------------------------------*/
#include "systemswitch.h"

#ifdef WINDOWS_VERSION

#include <stdio.h>

#include "fileaccess.h"
#include "opensave.h"

char winFileName[1000];
char saveInfoString[1000]; 
char openInfoString[1000]; 



wwwBoolean fid( char *infoString )
{
return false;
}

wwwBoolean fio( char *infoString, char *fileTypes )
{

	FILE *fp;
	int ret = 0;

	sprintf(openInfoString, infoString);
	ret = callOpenDialog( infoString, fileTypes) ;
	return (ret);
}

wwwBoolean fis( char *infoString , char *name)
{

	FILE *fp;
	int ret = 0;

	sprintf(winFileName, "%s", name);
	sprintf(saveInfoString, infoString);

	ret = callSaveDialog(infoString);

	return (ret);
}


void _initIO( void )
{}


#endif