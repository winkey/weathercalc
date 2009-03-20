/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option); any later version.
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
 
#ifndef _PRESSURE_H
#define _PRESSURE_H

/*******************************************************************************
	macro for standard atmoshphere
*******************************************************************************/

#define STD_ATM_MB 1013.25

/*******************************************************************************
	function to convert inches of mercury to millimeters of mercury
	
	args:
					INHG pressure in inches of mercury

	returns:
					presure in millimeters of mercury
*******************************************************************************/

double INHGtoMMHG(
	double INHG);

/*******************************************************************************
	function to convert inches of mercury to millibars
	
	args:
					INHG pressure in inches of mercury

	returns:
					pressure in millibars
*******************************************************************************/

double INHGtoMB(
	double INHG);

/*******************************************************************************
	function to convert inches of mercury to kilopascals
	
	args:
					INHG pressure in inches of mercury

	returns:
					pressure in kilopascals
*******************************************************************************/

double INHGtoKPA(
	double INHG);

/*******************************************************************************
	function to convert inches of mercury to hectopascals
	
	args:
					INHG pressure in inches of mercury

	returns:
					pressure in hectopascals
*******************************************************************************/

double INHGtoHPA(
	double INHG);

/*******************************************************************************
	function to convert inches of mercury to pounds per square inch
	
	args:
					INHG pressure in inches of mercury

	returns:
					pressure in pounds per square inch
*******************************************************************************/

double INHGtoPSI(
	double INHG);

/*******************************************************************************
	function to convert inches of mercury to standard atmospheres
	
	args:
					INHG pressure in inches of mercury

	returns:
					pressure in standard atmospheres
*******************************************************************************/

double INHGtoATM(
	double INHG);

/*******************************************************************************
	function to convert millimeters of mercury to inches of mercury
	
	args:
					MMHG pressure in millimeters of mercury

	returns:
					pressure in inches of mercury
*******************************************************************************/

double MMHGtoINHG(
	double MMHG);

/*******************************************************************************
	function to convert millimeters of mercury to millibars
	
	args:
					MMHG pressure in millimeters of mercury

	returns:
					pressure in millibars
*******************************************************************************/

double MMHGtoMB(
	double MMHG);

/*******************************************************************************
	function to convert millimeters of mercury to kilopascals
	
	args:
					MMHG pressure in millimeters of mercury

	returns:
					pressure in kilopascals
*******************************************************************************/

double MMHGtoKPA(
	double INHG);

/*******************************************************************************
	function to convert millimeters of mercury to hectopascals
	
	args:
					MMHG pressure in millimeters of mercury

	returns:
					pressure in hectopascals
*******************************************************************************/

double MMHGtoHPA(
	double INHG);

/*******************************************************************************
	function to convert millimeters of mercury to pounds per square inch
	
	args:
					MMHG pressure in millimeters of mercury

	returns:
					pressure in pounds per square inch
*******************************************************************************/

double MMHGtoPSI(
	double MMHG);

/*******************************************************************************
	function to convert millimeters of mercury to standard atmospheres
	
	args:
					MMHG pressure in millimeters of mercury

	returns:
					pressure in standard atmospheres
*******************************************************************************/

double MMHGtoATM(
	double MMHG);

/*******************************************************************************
	function to convert millibars to inches of mercury
	
	args:
					MB pressure in millibars

	returns:
					pressure in inches of mercury
*******************************************************************************/

double MBtoINHG(
	double MB);

/*******************************************************************************
	function to convert millibars to millimeters of mercury
	
	args:
					MB pressure in millibars

	returns:
					pressure in millimeters of mercury
*******************************************************************************/

double MBtoMMHG(
	double MB);

/*******************************************************************************
	function to convert millibars to kilopascals
	
	args:
					MB pressure in millibars

	returns:
					pressure in kilopascals
*******************************************************************************/

double MBtoKPA(
	double MB);

/*******************************************************************************
	function to convert millibars to hectopascals
	
	args:
					MB pressure in millibars

	returns:
					pressure in hectopascals
*******************************************************************************/

double MBtoHPA(
	double MB);
  
/*******************************************************************************
	function to convert millibars to pounds per square inch
	
	args:
					MB pressure in millibars

	returns:
					pressure in pounds per square inch
*******************************************************************************/

double MBtoPSI(
	double MB);

/*******************************************************************************
	function to convert millibars to standard atmospheres
	
	args:
					MB pressure in millibars

	returns:
					pressure in standard atmospheres
*******************************************************************************/

double MBtoATM(
	double MB);

/*******************************************************************************
	function to convert kilopascals to inches of mercury
	
	args:
					KPA pressure in kilopascals

	returns:
					pressure in inches of mercury
*******************************************************************************/

double KPAtoINHG(
	double KPA);

/*******************************************************************************
	function to convert kilopascals to millimeters of mercury
	
	args:
					KPA pressure in kilopascals

	returns:
					pressure in millimeters of mercury
*******************************************************************************/

double KPAtoMMHG(
	double KPA);

/*******************************************************************************
	function to convert kilopascals to millibars
	
	args:
					KPA pressure in kilopascals

	returns:
					pressure in millibars
*******************************************************************************/

double KPAtoMB(
	double KPA);

/*******************************************************************************
	function to convert kilopascals to hectopascals
	
	args:
					KPA pressure in kilopascals

	returns:
					pressure in hectopascals
*******************************************************************************/

double KPAtoHPA(
	double KPA);

/*******************************************************************************
	function to convert kilopascals to pounds per square inch
	
	args:
					KPA pressure in kilopascals

	returns:
					pressure in pounds per square inch
*******************************************************************************/

double KPAtoPSI(
	double KPA);

/*******************************************************************************
	function to convert kilopascals to standard atmospheres
	
	args:
					KPA pressure in kilopascals

	returns:
					pressure in standard atmospheres
*******************************************************************************/

double KPAtoATM(
	double KPA);

/*******************************************************************************
	function to convert hectopascals to inches of mercury
	
	args:
					HPA pressure in hectopascals

	returns:
					pressure in inches of mercury
*******************************************************************************/

double HPAtoINHG(
	double HPA);

/*******************************************************************************
	function to convert hectopascals to millimeters of mercury
	
	args:
					HPA pressure in hectopascals

	returns:
					pressure in millimeters of mercury
*******************************************************************************/

double HPAtoMMHG(
	double HPA);

/*******************************************************************************
	function to convert hectopascals to millibars
	
	args:
					HPA pressure in hectopascals

	returns:
					pressure in millibars
*******************************************************************************/

double HPAtoMB(
	double HPA);

/*******************************************************************************
	function to convert hectopascals to kilopascals
	
	args:
					HPA pressure in hectopascals

	returns:
					pressure in kilopascals
*******************************************************************************/

double HPAtoKPA(
	double HPA);

/*******************************************************************************
	function to convert hectopascals to pounds per square inch
	
	args:
					HPA pressure in hectopascals

	returns:
					pressure in pounds per square inch
*******************************************************************************/

double HPAtoPSI(
	double HPA);

/*******************************************************************************
	function to convert hectopascals to standard atmospheres
	
	args:
					HPA pressure in hectopascals

	returns:
					pressure in standard atmospheres
*******************************************************************************/

double HPAtoATM(
	double HPA);

/*******************************************************************************
	function to convert pounds per square inch to inches of mercury
	
	args:
					PSI pressure in pounds per square inch

	returns:
					pressure in inches of mercury
*******************************************************************************/

double PSItoINHG(
	double PSI);

/*******************************************************************************
	function to convert pounds per square inch to millimeters of mercury
	
	args:
					PSI pressure in pounds per square inch

	returns:
					pressure in millimeters of mercury
*******************************************************************************/

double PSItoMMHG(
	double PSI);

/*******************************************************************************
	function to convert pounds per square inch to millibars
	
	args:
					PSI pressure in pounds per square inch

	returns:
					pressure in millibars
*******************************************************************************/

double PSItoMB(
	double PSI);

/*******************************************************************************
	function to convert pounds per square inch to kilopascals
	
	args:
					PSI pressure in pounds per square inch

	returns:
					pressure in kilopascals
*******************************************************************************/

double PSItoKPA(
	double PSI);

/*******************************************************************************
	function to convert pounds per square inch to hectopascals
	
	args:
					PSI pressure in pounds per square inch

	returns:
					pressure in hectopascals
*******************************************************************************/

double PSItoHPA(
	double PSI);

/*******************************************************************************
	function to convert pounds per square inch to standard atmospheres
	
	args:
					PSI pressure in pounds per square inch

	returns:
					pressure in standard atmospheres
*******************************************************************************/

double PSItoATM(
	double PSI);

/*******************************************************************************
	function to convert standard atmospheres to inches of mercury
	
	args:
					ATM pressure in standard atmospheres

	returns:
					pressure in inches of mercury
*******************************************************************************/

double ATMtoINHG(
	double ATM);

/*******************************************************************************
	function to convert standard atmospheres to millimeters of mercury
	
	args:
					ATM pressure in standard atmospheres

	returns:
					pressure in millimeters of mercury
*******************************************************************************/

double ATMtoMMHG(
	double ATM);

/*******************************************************************************
	function to convert standard atmospheres to millibars
	
	args:
					ATM pressure in standard atmospheres

	returns:
					pressure in millibars
*******************************************************************************/

double ATMtoMB(
	double ATM);

/*******************************************************************************
	function to convert standard atmospheres to kilopascals
	
	args:
					ATM pressure in standard atmospheres

	returns:
					pressure in kilopascals
*******************************************************************************/

double ATMtoKPA(
	double ATM);

/*******************************************************************************
	function to convert standard atmospheres to hectopascals
	
	args:
					ATM pressure in standard atmospheres

	returns:
					pressure in hectopascals
*******************************************************************************/

double ATMtoHPA(
	double ATM);

/*******************************************************************************
	function to convert standard atmospheres to pounds per square inch
	
	args:
					ATM pressure in standard atmospheres

	returns:
					pressure in pounds per square inch
*******************************************************************************/

double ATMtoPSI(
	double ATM);

/*******************************************************************************
	function to convert station pressure to altimeter
	
	args:
					mb			station pressure in millibars
					meters	elevation of station in meters
	
	returns:
					altimeter in millibars
*******************************************************************************/

double SPtoALT(
	double mb,
	double meters);

/*******************************************************************************
	function to convert altimeter to station pressure
	
	args:
						in			altimeter in inches of mercury
						meter		station elevation in meters
	
	returns:
						station pressure in inches of mercury
*******************************************************************************/

double ALT_to_SP(
	double in,
	double meters);

#endif /* _PRESSURE_H */

 
