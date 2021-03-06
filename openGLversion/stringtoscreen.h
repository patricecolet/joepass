/*
 *  stringtoscreen.h
 *  joe2
 *
 * created by wolfgang 
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

#ifndef STRING_TO_SCREEN
#define STRING_TO_SCREEN

#include "vtypes.h"

#define atLine( a) ((a)*15 + 10)
#define defaultTextSize	.8f

enum    { left, centered, right, continuous};

extern  int leftMargin, rightMargin;

void    initOneMessage( bool valid );
void    message( char *msg );
void    stringToScreen( char *s, int alignement, int offset, int h, float scale, sysColor *c);


#endif