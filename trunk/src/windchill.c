/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor Boston, MA 02110-1301,  USA
 */

#include <math.h>
#include "../include/windchill.h"

/*******************************************************************************
	function to calculate windchill
	
	args:
					F		temp in farenheight
					mph	wind speed in mph
	
	returns
					windchill in farenheight
*******************************************************************************/

double windchill(
	double F,
	double mph)
{
	double a = pow(mph, 0.16);
  double wChill = 35.74 + .6215 * F - 35.75 * a + 0.4275 * F * a;
	
	return wChill;
}
