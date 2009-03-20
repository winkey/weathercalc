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

#include "../include/distance.h"

/*******************************************************************************
	function to convert feet to meters

	args:
							FT	distance in feet
	
	returns:
							distance in meters
*******************************************************************************/

double FTtoM(
	double FT)
{
	return FT * 0.3048;
}
  
/*******************************************************************************
	function to convert feet to miles

	args:
							FT	distance in feet
	
	returns:
							distance in miles
*******************************************************************************/

double FTtoMI(
	double FT)
{
	return FT * 0.000189393939;
}
  
/*******************************************************************************
	function to convert feet to kilometers

	args:
							FT	distance in feet
	
	returns:
							distance in kilometers
*******************************************************************************/

double FTtoKM(
	double FT)
{
	return FT * 0.0003048;
}

/*******************************************************************************
	function to convert feet to inches

	args:
							FT	distance in feet
	
	returns:
							distance in inches
*******************************************************************************/

double FTtoIN(
	double FT)
{
	return FT * 12;
}

/*******************************************************************************
	function to convert feet to centimeters

	args:
							FT	distance in feet
	
	returns:
							distance in centimeters
*******************************************************************************/

double FTtoCM(
	double FT)
{
	return FT * 30.48;
}

/*******************************************************************************
	function to convert feet to millimeters

	args:
							FT	distance in feet
	
	returns:
							distance in millimeters
*******************************************************************************/

double FTtoMM(
	double FT)
{
	return FT * 304.8;
}

/*******************************************************************************
	function to convert meters to feet

	args:
							M	distance in meters
	
	returns:
							distance in feet
*******************************************************************************/

double MtoFT(
	double M)
{
	return M * 3.2808399;
}

/*******************************************************************************
	function to convert meters to miles

	args:
							M	distance in meters
	
	returns:
							distance in miles
*******************************************************************************/

double MtoMI(
	double M)
{
	return M * 0.000621371192;
}

/*******************************************************************************
	function to convert meters to kilometers

	args:
							M	distance in meters
	
	returns:
							distance in kilometers
*******************************************************************************/

double MtoKM(
	double M)
{
	return M / 1000;
}

/*******************************************************************************
	function to convert meters to inches

	args:
							M	distance in meters
	
	returns:
							distance in inches
*******************************************************************************/

double MtoIN(
	double M)
{
	return M * 39.3700787;
}

/*******************************************************************************
	function to convert meters to centimeters

	args:
							M	distance in meters
	
	returns:
							distance in centimeters
*******************************************************************************/

double MtoCM(
	double M)
{
	return M * 100;
}

/*******************************************************************************
	function to convert meters to millimeters

	args:
							M	distance in meters
	
	returns:
							distance in millimeters
*******************************************************************************/

double MtoMM(
	double M)
{
	return M * 1000;
}

/*******************************************************************************
	function to convert miles to feet

	args:
							MI distance in miles
	
	returns:
							distance in feet
*******************************************************************************/

double MItoFT(
	double MI)
{
	return MI * 5280;
}

/*******************************************************************************
	function to convert miles to meters

	args:
							MI distance in miles
	
	returns:
							distance in meters
*******************************************************************************/

double MItoM(
	double MI)
{
	return MI * 1609.344;
}

/*******************************************************************************
	function to convert miles to kilometers

	args:
							MI distance in miles
	
	returns:
							distance in kilometers
*******************************************************************************/

double MItoKM(
	double MI)
{
	return MI * 1.609344;
}

/*******************************************************************************
	function to convert miles to inches

	args:
							MI distance in miles
	
	returns:
							distance in inches
*******************************************************************************/

double MItoIN(
	double MI)
{
	return MI * 63360;
}

/*******************************************************************************
	function to convert miles to centimeters

	args:
							MI distance in miles
	
	returns:
							distance in centimeters
*******************************************************************************/

double MItoCM(
	double MI)
{
	return MI * 160934.4;
}

/*******************************************************************************
	function to convert miles to millimeters

	args:
							MI distance in miles
	
	returns:
							distance in millimeters
*******************************************************************************/

double MItoMM(
	double MI)
{
	return MI * 1609344.0;
}

/*******************************************************************************
	function to convert kilometers to feet

	args:
							KM distance in kilometers
	
	returns:
							distance in feet
*******************************************************************************/
  
double KMtoFT(
	double KM)
{
	return KM * 3280.8399;
}

/*******************************************************************************
	function to convert kilometers to meters

	args:
							KM distance in kilometers
	
	returns:
							distance in meters
*******************************************************************************/
	
double KMtoM(
	double KM)
{
	return KM / 1000;
}

/*******************************************************************************
	function to convert kilometers to miles

	args:
							KM distance in kilometers
	
	returns:
							distance in miles
*******************************************************************************/
  
double KMtoMI(
	double KM)
{
	return KM * 0.621371192;
}

/*******************************************************************************
	function to convert kilometers to inches

	args:
							KM distance in kilometers
	
	returns:
							distance in inches
*******************************************************************************/
  
double KMtoIN(
	double KM)
{
	return KM * 39370.0787;
}

/*******************************************************************************
	function to convert kilometers to centimeters

	args:
							KM distance in kilometers
	
	returns:
							distance in centimeters
*******************************************************************************/
  
double KMtoCM(
	double KM)
{
	return KM * 100000;
}

/*******************************************************************************
	function to convert kilometers to millimeters

	args:
							KM distance in kilometers
	
	returns:
							distance in millimeters
*******************************************************************************/
  
double KMtoMM(
	double KM)
{
	return KM * 1000000;
}

/*******************************************************************************
	function to convert inches to feet

	args:
							IN	distance in inches
	
	returns:
							distance in feet
*******************************************************************************/

double INtoFT(
	double IN)
{
	return IN / 12;
}

/*******************************************************************************
	function to convert inches to meters

	args:
							IN	distance in inches
	
	returns:
							distance in meters
*******************************************************************************/

double INtoM(
	double IN)
{
	return IN * 0.0254;
}
  
/*******************************************************************************
	function to convert inches to miles

	args:
							IN	distance in inches
	
	returns:
							distance in miles
*******************************************************************************/

double INtoMI(
	double IN)
{
	return IN / 63360;
}
  
/*******************************************************************************
	function to convert inches to kilometers

	args:
							IN	distance in feet
	
	returns:
							distance in kilometers
*******************************************************************************/

double INtoKM(
	double IN)
{
	return IN / 39370.0787;
}

/*******************************************************************************
	function to convert inches to centimeters

	args:
							IN	distance in feet
	
	returns:
							distance in centimeters
*******************************************************************************/

double INtoCM(
	double IN)
{
	return IN * 2.54;
}

/*******************************************************************************
	function to convert inches to millimeters

	args:
							IN	distance in feet
	
	returns:
							distance in millimeters
*******************************************************************************/

double INtoMM(
	double IN)
{
	return IN * 25.4;
}

/*******************************************************************************
	function to convert centimeters to feet

	args:
							CM	distance in centimeters
	
	returns:
							distance in feet
*******************************************************************************/

double CMtoFT(
	double CM)
{
	return CM / 30.48;
}

/*******************************************************************************
	function to convert centimeters to meters

	args:
							CM	distance in centimeters
	
	returns:
							distance in meters
*******************************************************************************/

double CMtoM(
	double CM)
{
	return CM / 100;
}
  
/*******************************************************************************
	function to convert centimeters to miles

	args:
							CM	distance in centimeters
	
	returns:
							distance in miles
*******************************************************************************/

double CMtoMI(
	double CM)
{
	return CM / 160934.4;
}
  
/*******************************************************************************
	function to convert centimeters to kilometers

	args:
							CM	distance in centimeters
	
	returns:
							distance in kilometers
*******************************************************************************/

double CMtoKM(
	double CM)
{
	return CM / 100000;
}

/*******************************************************************************
	function to convert centimeters to inches

	args:
							CM	distance in centimeters
	
	returns:
							distance in inches
*******************************************************************************/

double CMtoIN(
	double CM)
{
	return CM / 2.54;
}

/*******************************************************************************
	function to convert centimeters to millimeters

	args:
							CM	distance in centimeters
	
	returns:
							distance in millimeters
*******************************************************************************/

double CMtoMM(
	double CM)
{
	return CM * 10;
}

/*******************************************************************************
	function to convert millimeters to feet

	args:
							MM	distance in millimeters
	
	returns:
							distance in feet
*******************************************************************************/

double MMtoFT(
	double MM)
{
	return MM / 304.8;
}

/*******************************************************************************
	function to convert millimeters to meters

	args:
							MM	distance in millimeters
	
	returns:
							distance in meters
*******************************************************************************/

double MMtoM(
	double MM)
{
	return MM / 1000;
}
  
/*******************************************************************************
	function to convert millimeters to miles

	args:
							MM	distance in millimeters
	
	returns:
							distance in miles
*******************************************************************************/

double MMtoMI(
	double MM)
{
	return MM / 1609344.0;
}
  
/*******************************************************************************
	function to convert millimeters to kilometers

	args:
							MM	distance in millimeters
	
	returns:
							distance in kilometers
*******************************************************************************/

double MMtoKM(
	double MM)
{
	return MM / 1000000;
}

/*******************************************************************************
	function to convert millimeters to inches

	args:
							MM	distance in millimeters
	
	returns:
							distance in inches
							
*******************************************************************************/

double MMtoIN(
	double MM)
{
	return MM / 25.4;
}

/*******************************************************************************
	function to convert millimeters to centimeters

	args:
							MM	distance in millimeters
	
	returns:
							distance in centimeters
*******************************************************************************/

double MMtoCM(
	double MM)
{
	return MM / 10;
}



