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

#include "../include/speed.h"

/*******************************************************************************
	function to convert MPH to KTS

	args:
							MPH	speed in MPH
	
	returns:
							speed in KTS
*******************************************************************************/

double MPHtoKTS(
	double MPH)
{
	double KTS = 0.8689762 * MPH;
	
	return KTS;
}

/*******************************************************************************
	function to convert MPH to MPS

	args:
							MPH	speed in MPH
	
	returns:
							speed in MPS
*******************************************************************************/

double MPHtoMPS(
	double MPH)
{
	double MPS = 0.44704 * MPH;
	
	return MPS;
}

/*******************************************************************************
	function to convert MPH to FPS

	args:
							MPH	speed in MPH
	
	returns:
							speed in FPS
*******************************************************************************/

double MPHtoFPS(
	double MPH)
{
	double FPS = 1.46667 * MPH;
	
	return FPS;
}

/*******************************************************************************
	function to convert MPH to KPH

	args:
							MPH	speed in MPH
	
	returns:
							speed in KPH
*******************************************************************************/

double MPHtoKPH(
	double MPH)
{
	double KPH = 1.609344 * MPH;
	
	return KPH;
}

/*******************************************************************************
	function to convert KTS to MPH

	args:
							KTS	speed in KTS
	
	returns:
							speed in MPH
*******************************************************************************/

double KTStoMPH(
	double KTS)
{
	double MPH = 1.1507794 * KTS;
	
	return MPH;
}

/*******************************************************************************
	function to convert KTS to MPS

	args:
							KTS	speed in KTS
	
	returns:
							speed in MPS
*******************************************************************************/

double KTStoMPS(
	double KTS)
{
	double MPS = 0.5144444 * KTS;
	
	return MPS;
}

/*******************************************************************************
	function to convert KTS to FPS

	args:
							KTS	speed in KTS
	
	returns:
							speed in FPS
*******************************************************************************/

double KTStoFPS(
	double KTS)
{
	double FPS = 1.6878099 * KTS;
	
	return FPS;
}

/*******************************************************************************
	function to convert KTS to KPH

	args:
							KTS	speed in KTS
	
	returns:
							speed in KPH
*******************************************************************************/

double KTStoKPH(
	double KTS)
{
	double KPH = 1.852 * KTS;
	
	return KPH;
}

/*******************************************************************************
	function to convert MPS to MPH

	args:
							MPS	speed in MPS
	
	returns:
							speed in MPH
*******************************************************************************/

double MPStoMPH(
	double MPS)
{
	double MPH = 2.23694 * MPS;
	
	return MPH;
}

/*******************************************************************************
	function to convert MPS to KTS

	args:
							MPS	speed in MPS
	
	returns:
							speed in KTS
*******************************************************************************/

double MPStoKTS(
	double MPS)
{
	double KTS = 1.9438445 * MPS;

	return KTS;
}

/*******************************************************************************
	function to convert MPS to FPS

	args:
							MPS	speed in MPS
	
	returns:
							speed in FPS
*******************************************************************************/

double MPStoFPS(
	double MPS)
{
	double FPS = 3.28084 * MPS;
	
	return FPS;
}

/*******************************************************************************
	function to convert MPS to KPH

	args:
							MPS	speed in MPS
	
	returns:
							speed in KPH
*******************************************************************************/

double MPStoKPH(
	double MPS)
{
	double KPH = 3.6 * MPS;

	return KPH;
}

/*******************************************************************************
	function to convert FPS to MPH

	args:
							FPS	speed in FPS
	
	returns:
							speed in MPH
*******************************************************************************/

double FPStoMPH(
	double FPS)
{
	double MPH = 0.681818 * FPS;
	
	return MPH;
}

/*******************************************************************************
	function to convert FPS to KTS

	args:
							FPS	speed in FPS
	
	returns:
							speed in KTS
*******************************************************************************/

double FPStoKTS(
	double FPS)
{
	double KTS =  0.5924838 * FPS;

	return KTS;
}

/*******************************************************************************
	function to convert FPS to MPS

	args:
							FPS	speed in FPS
	
	returns:
							speed in MPS
*******************************************************************************/

double FPStoMPS(
	double FPS)
{
	double MPS =  0.3048 * FPS;
	
	return MPS;
}

/*******************************************************************************
	function to convert FPS to KPH

	args:
							FPS	speed in FPS
	
	returns:
							speed in KPH
*******************************************************************************/

double FPStoKPH(
	double FPS)
{
	double KPH = 1.09728 * FPS;
	
	return KPH;
}

/*******************************************************************************
	function to convert KPH to MPH

	args:
							KPH	speed in KPH
	
	returns:
							speed in MPH
*******************************************************************************/

double KPHtoMPH(
	double KPH)
{
	double MPH = 0.621371 * KPH;
	
	return MPH;
}

/*******************************************************************************
	function to convert KPH to KTS

	args:
							KPH	speed in KPH
	
	returns:
							speed in KTS
*******************************************************************************/

double KPHtoKTS(
	double KPH)
{
	double KTS = 0.5399568 * KPH;
	
	return KTS;
}
	
/*******************************************************************************
	function to convert KPH to MPS

	args:
							KPH	speed in KPH
	
	returns:
							speed in MPS
*******************************************************************************/

double KPHtoMPS(
	double KPH)
{
	double MPS = 0.277778 * KPH;
	
	return MPS;
}

/*******************************************************************************
	function to convert KPH to FPS

	args:
							KPH	speed in KPH
	
	returns:
							speed in FPS
*******************************************************************************/

double KPHtoFPS(
	double KPH)
{
	double FPS = 0.911344 * KPH;

	return FPS;
}

