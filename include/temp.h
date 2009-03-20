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

 
#ifndef _TEMP_H
#define _TEMP_H


/*******************************************************************************
	function to convert Fahrenheit to Celsius

	args:
							F	temp in Fahrenheit
	
	returns:
							temp in Celsius
*******************************************************************************/

double FtoC (
	double F);

/*******************************************************************************
	function to convert Fahrenheit to Kelvin

	args:
							F	temp in Fahrenheit
	
	returns:
							temp in Kelvin
*******************************************************************************/

double FtoK(
	double F);

/*******************************************************************************
	function to convert Fahrenheit to Rankine

	args:
							F	temp in Fahrenheit
	
	returns:
							temp in Rankine
*******************************************************************************/

double FtoR(
	double F);

/*******************************************************************************
	function to convert Celsius to Fahrenheit

	args:
							C	temp in Celsius
	
	returns:
							temp in Fahrenheit
*******************************************************************************/

double CtoF(
	double C);

/*******************************************************************************
	function to convert Celsius to Kelvin

	args:
							C	temp in Celsius
	
	returns:
							temp in Kelvin
*******************************************************************************/

double CtoK(
	double C);

/*******************************************************************************
	function to convert Celsius to rankine

	args:
							C	temp in Celsius
	
	returns:
							temp in rankine
*******************************************************************************/

double CtoR(
	double C);

/*******************************************************************************
	function to convert Kelvin to Fahrenheit

	args:
							K	temp in Kelvin
	
	returns:
							temp in Fahrenheit
*******************************************************************************/

double KtoF(
	double K);

/*******************************************************************************
	function to convert Kelvin to Celsius

	args:
							K	temp in Kelvin
	
	returns:
							temp in Celsius
*******************************************************************************/

double KtoC(
	double K);

/*******************************************************************************
	function to convert Kelvin to Rankine

	args:
							K	temp in Kelvin
	
	returns:
							temp in Rankine
*******************************************************************************/

double KtoR(
	double K);

/*******************************************************************************
	function to convert Rankine to Fahrenheit

	args:
							R	temp in Rankine
	
	returns:
							temp in Fahrenheit
*******************************************************************************/

double RtoF(
	double R);

/*******************************************************************************
	function to convert Rankine to Celsius

	args:
							R	temp in Rankine
	
	returns:
							temp in Celsius
*******************************************************************************/

double RtoC(
	double R);

/*******************************************************************************
	function to convert Rankine to Kelvin

	args:
							R	temp in Rankine
	
	returns:
							temp in Kelvin
*******************************************************************************/

double RtoK(
	double R);

#endif /* _TEMP_H */
