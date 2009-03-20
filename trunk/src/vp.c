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
#include "../include/vp.h"

/*******************************************************************************
	function to calc saturated vapor pressure
	
	Args:
						tempc		temperature in celcius
	
	Returns:	
						saturated vapor pressure in millibars
*******************************************************************************/

double Es(
	double tempc)
{
  double Es = 6.1078 * exp((17.27 * tempc) / (237.3 + tempc));

	return Es;
}

/*******************************************************************************
	function to calculate vapor presure from bulbs

	Args:			Ew			wetbulb saturated vapor pressure in millibars
						wetc		wetbulb temperature in celcius
						dryc		drybulb	temperature in celcius
						mb			pressure in millibars
	
	returns:
						vapor pressure in millibars
*******************************************************************************/

double BULBtoE(
	double Ew,
	double wetc,
	double dryc,
	double mb)
{
  double E = Ew - (0.00066 * (1 + 0.00115 * wetc) * (dryc - wetc) * mb);
  
	return E;
}

/*******************************************************************************
	function to calculate vapor pressure from temp and rh
	
	args:
						Tc		temperature in celcius
						RH		relitive humidity
	
	returns:
						vapor pressure
*******************************************************************************/

double E(
	double Tc,
	double RH)
{

	double E;
	double a = 1 - (0.01 * RH);
	
	double b = (Tc - (14.55 + 0.114 * Tc) *
							a -
							pow(((2.5 + 0.007 * Tc) * a), 3) -
							(15.9 + 0.117 * Tc) *
							pow(a, 14));
	
	E = 6.11 * pow (10, (7.5 * b / ( 237.7 + b)));
	
	return E;
}

/*******************************************************************************
	function to calculate dewpoint from vapor pressure
	
	Args:
						E		vapor pressure in millibars
	
	Returns:
						dewpoint temperature in celcius
*******************************************************************************/

double EtoTd (
	double E)
{
	double a = log(E / 6.112);
  double Td = (243.5 * a) / (17.67 - a);
	
  return Td;
}

/*******************************************************************************
	function to calculate rh from vapor pressure
	
	Args:
						Es	saturated vapor pressure in millibars
						E		vapor pressure in millibars
	
	Returns:
						relitive humidity
*******************************************************************************/

double EtoRH(
	double Es,
	double E)
{
  double RH = 100 * E / Es;
	
  return RH;
}

/*******************************************************************************
	function to calculate vapor pressure from rh
	
	Args:
						Es		saturated vapor pressure in millibars
						rh		relitive humidity
	
	Returns:
						vapor pressure in millibars
*******************************************************************************/

double RHtoE(
	double Es,
	double rh)
{
  double E = Es * (rh / 100);
	
  return E;
}
