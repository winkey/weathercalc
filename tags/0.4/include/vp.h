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
 
#ifndef _VP_H
#define _VP_H

/***** steam point temp kelvin *****/
#define Tst 373.15;

/***** vapor pressure at steam point temp *****/
#define Est 1013.25

/*******************************************************************************
	function to calc saturated vapor pressure
	
	Args:
						tempc		temperature in celcius
	
	Returns:	
						saturated vapor pressure in millibars
*******************************************************************************/

double Es(
	double tempc);

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
	double mb);

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
	double RH);


/*******************************************************************************
	function to calculate dewpoint from vapor pressure
	
	Args:
						E		vapor pressure in millibars
	
	Returns:
						dewpoint temperature in celcius
*******************************************************************************/

double EtoTd (
	double E);


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
	double E);

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
	double rh);



#endif /* _VP_H */

 
