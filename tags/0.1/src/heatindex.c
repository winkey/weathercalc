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

#include "../include/heatindex.h"

/*******************************************************************************
	function to calculate heatindex
	
	args:
						F			temperature in farenheight
						RH		relitive humidity
	
	returns:
						heat index in farenheight
*******************************************************************************/

double heatindex(
	double F,
	double rh)
{
	double rh2 = rh * rh;
	double f2 = F * F;
	
  double Hindex = -42.379 + 2.04901523 * F + 10.14333127 * rh -
									0.22475541 * F * rh - 6.83783 * .001 * f2 -
									5.481717 * .01 * rh2 +
									1.22874 * .001 * f2 * rh +
									8.5282 * .0001 * F * rh2 -
									1.99 * .000001 * f2 * rh2;
	
  return Hindex;
}
