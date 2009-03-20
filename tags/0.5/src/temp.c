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

#include "../include/temp.h"

/*******************************************************************************
	function to convert Fahrenheit to Celsius

	args:
							F	temp in Fahrenheit
	
	returns:
							temp in Celsius
*******************************************************************************/

double FtoC (
	double F)
{
	double c = .55556 * (F - 32);
		
	return c;
}

/*******************************************************************************
	function to convert Fahrenheit to Kelvin

	args:
							F	temp in Fahrenheit
	
	returns:
							temp in Kelvin
*******************************************************************************/

double FtoK(
	double F)
{
	double k = (.5556 * (F - 32)) + 273.15;
	
	return k;
}

/*******************************************************************************
	function to convert Fahrenheit to Rankine

	args:
							F	temp in Fahrenheit
	
	returns:
							temp in Rankine
*******************************************************************************/

double FtoR(
	double F)
{
	double r = F + 459.69;
	
	return r;
}           

/*******************************************************************************
	function to convert Celsius to Fahrenheit

	args:
							C	temp in Celsius
	
	returns:
							temp in Fahrenheit
*******************************************************************************/

double CtoF(
	double C)
{
	double f = 1.8 * C + 32;
	
	return f;
}

/*******************************************************************************
	function to convert Celsius to Kelvin

	args:
							C	temp in Celsius
	
	returns:
							temp in Kelvin
*******************************************************************************/

double CtoK(
	double C)
{
	double k = C + 273.15;
	
	return k;
}

/*******************************************************************************
	function to convert Celsius to rankine

	args:
							C	temp in Celsius
	
	returns:
							temp in rankine
*******************************************************************************/

double CtoR(
	double C)
{
	double r = (1.8 * C + 32) + 459.69;
	
	return r;
}

/*******************************************************************************
	function to convert Kelvin to Fahrenheit

	args:
							K	temp in Kelvin
	
	returns:
							temp in Fahrenheit
*******************************************************************************/

double KtoF(
	double K)
{
	double f = (1.8 * (K - 273.15) + 32);
	
	return f;
}

/*******************************************************************************
	function to convert Kelvin to Celsius

	args:
							K	temp in Kelvin
	
	returns:
							temp in Celsius
*******************************************************************************/

double KtoC(
	double K)
{
	double c = K - 273.15;
	
	return c;
}

/*******************************************************************************
	function to convert Kelvin to Rankine

	args:
							K	temp in Kelvin
	
	returns:
							temp in Rankine
*******************************************************************************/

double KtoR(
	double K)
{
	double r = (1.8 * (K - 273.15) + 32) + 459.69;
	
	return r;
}

/*******************************************************************************
	function to convert Rankine to Fahrenheit

	args:
							R	temp in Rankine
	
	returns:
							temp in Fahrenheit
*******************************************************************************/

double RtoF(
	double R)
{
	double f = R - 459.69;

	return f;
}

/*******************************************************************************
	function to convert Rankine to Celsius

	args:
							R	temp in Rankine
	
	returns:
							temp in Celsius
*******************************************************************************/

double RtoC(
	double R)
{
	double c = .55556 * ((R - 459.69) - 32);

	return c;
}

/*******************************************************************************
	function to convert Rankine to Kelvin

	args:
							R	temp in Rankine
	
	returns:
							temp in Kelvin
*******************************************************************************/

double RtoK(
	double R)
{
	double k = (.55556 * ((R - 459.69) - 32)) + 273.15;

	return k;
}

