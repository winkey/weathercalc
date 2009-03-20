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
#include "../include/pressure.h"

/*******************************************************************************
	function to convert inches of mercury to millimeters of mercury
	
	args:
					INHG pressure in inches of mercury

	returns:
					presure in millimeters of mercury
*******************************************************************************/

double INHGtoMMHG(
	double INHG)
{
	double MMHG = 25.4 * INHG;

	return  MMHG;
}

/*******************************************************************************
	function to convert inches of mercury to millibars
	
	args:
					INHG pressure in inches of mercury

	returns:
					pressure in millibars
*******************************************************************************/

double INHGtoMB(
	double INHG)
{
	double MB = 33.8639 * INHG;

	return  MB;
}

/*******************************************************************************
	function to convert inches of mercury to kilopascals
	
	args:
					INHG pressure in inches of mercury

	returns:
					pressure in kilopascals
*******************************************************************************/

double INHGtoKPA(
	double INHG)
{
	double KPA = INHGtoMB(INHG) / 10;

	return  KPA;
}

/*******************************************************************************
	function to convert inches of mercury to hectopascals
	
	args:
					INHG pressure in inches of mercury

	returns:
					pressure in hectopascals
*******************************************************************************/

double INHGtoHPA(
	double INHG)
{
	double HPA = INHGtoMB(INHG);

	return  HPA;
}

/*******************************************************************************
	function to convert inches of mercury to pounds per square inch
	
	args:
					INHG pressure in inches of mercury

	returns:
					pressure in pounds per square inch
*******************************************************************************/

double INHGtoPSI(
	double INHG)
{
	double PSI = 0.491130 * INHG;

	return  PSI;
}

/*******************************************************************************
	function to convert inches of mercury to standard atmospheres
	
	args:
					INHG pressure in inches of mercury

	returns:
					pressure in standard atmospheres
*******************************************************************************/

double INHGtoATM(
	double INHG)
{
	double ATM = 0.033421 * INHG;

	return  ATM;
}

/*******************************************************************************
	function to convert millimeters of mercury to inches of mercury
	
	args:
					MMHG pressure in millimeters of mercury

	returns:
					pressure in inches of mercury
*******************************************************************************/

double MMHGtoINHG(
	double MMHG)
{
	double INHG = 0.03937008 * MMHG;

	return  INHG;
}

/*******************************************************************************
	function to convert millimeters of mercury to millibars
	
	args:
					MMHG pressure in millimeters of mercury

	returns:
					pressure in millibars
*******************************************************************************/

double MMHGtoMB(
	double MMHG)
{
	double MB = 1.333224 * MMHG;

	return  MB;
}

/*******************************************************************************
	function to convert millimeters of mercury to kilopascals
	
	args:
					MMHG pressure in millimeters of mercury

	returns:
					pressure in kilopascals
*******************************************************************************/

double MMHGtoKPA(
	double INHG)
{
	double KPA = MMHGtoMB(INHG) / 10;

	return  KPA;
}

/*******************************************************************************
	function to convert millimeters of mercury to hectopascals
	
	args:
					MMHG pressure in millimeters of mercury

	returns:
					pressure in hectopascals
*******************************************************************************/

double MMHGtoHPA(
	double INHG)
{
	double HPA = MMHGtoMB(INHG);


	return HPA;
}

/*******************************************************************************
	function to convert millimeters of mercury to pounds per square inch
	
	args:
					MMHG pressure in millimeters of mercury

	returns:
					pressure in pounds per square inch
*******************************************************************************/

double MMHGtoPSI(
	double MMHG)
{
	double PSI = 0.0193368 * MMHG;

	return  PSI;
}

/*******************************************************************************
	function to convert millimeters of mercury to standard atmospheres
	
	args:
					MMHG pressure in millimeters of mercury

	returns:
					pressure in standard atmospheres
*******************************************************************************/

double MMHGtoATM(
	double MMHG)
{
	double ATM = 0.0013157894 * MMHG;

	return  ATM;
}

/*******************************************************************************
	function to convert millibars to inches of mercury
	
	args:
					MB pressure in millibars

	returns:
					pressure in inches of mercury
*******************************************************************************/

double MBtoINHG(
	double MB)
{
	double INHG = 0.0295300 * MB;

	return  INHG;
}

/*******************************************************************************
	function to convert millibars to millimeters of mercury
	
	args:
					MB pressure in millibars

	returns:
					pressure in millimeters of mercury
*******************************************************************************/

double MBtoMMHG(
	double MB)
{
	double MMHG = 0.750062 * MB;

	return  MMHG;
}

/*******************************************************************************
	function to convert millibars to kilopascals
	
	args:
					MB pressure in millibars

	returns:
					pressure in kilopascals
*******************************************************************************/

double MBtoKPA(
	double MB)
{
	double kpa = MB / 10;

	return  kpa;
}

/*******************************************************************************
	function to convert millibars to hectopascals
	
	args:
					MB pressure in millibars

	returns:
					pressure in hectopascals
*******************************************************************************/

double MBtoHPA(
	double MB)
{
	return  MB;
}
   
/*******************************************************************************
	function to convert millibars to pounds per square inch
	
	args:
					MB pressure in millibars

	returns:
					pressure in pounds per square inch
*******************************************************************************/

double MBtoPSI(
	double MB)
{
	double PSI = 0.0145038 * MB;

	return  PSI;
}

/*******************************************************************************
	function to convert millibars to standard atmospheres
	
	args:
					MB pressure in millibars

	returns:
					pressure in standard atmospheres
*******************************************************************************/

double MBtoATM(
	double MB)
{
	double ATM = 0.0009869233 * MB;

	return  ATM;
}

/*******************************************************************************
	function to convert kilopascals to inches of mercury
	
	args:
					KPA pressure in kilopascals

	returns:
					pressure in inches of mercury
*******************************************************************************/

double KPAtoINHG(
	double KPA)
{
	double INHG = 0.295300 * KPA;

	return  INHG;
}

/*******************************************************************************
	function to convert kilopascals to millimeters of mercury
	
	args:
					KPA pressure in kilopascals

	returns:
					pressure in millimeters of mercury
*******************************************************************************/

double KPAtoMMHG(
	double KPA)
{
	double mmhg = MBtoMMHG(KPA * 10);

	return  mmhg;
}

/*******************************************************************************
	function to convert kilopascals to millibars
	
	args:
					KPA pressure in kilopascals

	returns:
					pressure in millibars
*******************************************************************************/

double KPAtoMB(
	double KPA)
{
	double MB = KPA * 10;

	return  MB;
}

/*******************************************************************************
	function to convert kilopascals to hectopascals
	
	args:
					KPA pressure in kilopascals

	returns:
					pressure in hectopascals
*******************************************************************************/

double KPAtoHPA(
	double KPA)
{
	double HPA = KPA * 10;

	return  HPA;
}

/*******************************************************************************
	function to convert kilopascals to pounds per square inch
	
	args:
					KPA pressure in kilopascals

	returns:
					pressure in pounds per square inch
*******************************************************************************/

double KPAtoPSI(
	double KPA)
{
	double PSI = MBtoPSI(KPA * 10);

	return  PSI;
}

/*******************************************************************************
	function to convert kilopascals to standard atmospheres
	
	args:
					KPA pressure in kilopascals

	returns:
					pressure in standard atmospheres
*******************************************************************************/

double KPAtoATM(
	double KPA)
{
	double ATM = MBtoATM(KPA * 10);

	return  ATM;
}

/*******************************************************************************
	function to convert hectopascals to inches of mercury
	
	args:
					HPA pressure in hectopascals

	returns:
					pressure in inches of mercury
*******************************************************************************/

double HPAtoINHG(
	double HPA)
{
	double INHG = 0.295300 * HPA;

	return  INHG;
}

/*******************************************************************************
	function to convert hectopascals to millimeters of mercury
	
	args:
					HPA pressure in hectopascals

	returns:
					pressure in millimeters of mercury
*******************************************************************************/

double HPAtoMMHG(
	double HPA)
{
	double mmhg = MBtoMMHG(HPA);

	return  mmhg;
}

/*******************************************************************************
	function to convert hectopascals to millibars
	
	args:
					HPA pressure in hectopascals

	returns:
					pressure in millibars
*******************************************************************************/

double HPAtoMB(
	double HPA)
{
	double MB = HPA;

	return  MB;
}

/*******************************************************************************
	function to convert hectopascals to kilopascals
	
	args:
					HPA pressure in hectopascals

	returns:
					pressure in kilopascals
*******************************************************************************/

double HPAtoKPA(
	double HPA)
{
	double KPA = HPA / 10;

	return  KPA;
}

/*******************************************************************************
	function to convert hectopascals to pounds per square inch
	
	args:
					HPA pressure in hectopascals

	returns:
					pressure in pounds per square inch
*******************************************************************************/

double HPAtoPSI(
	double HPA)
{
	double PSI = MBtoPSI(HPA);

	return  PSI;
}

/*******************************************************************************
	function to convert hectopascals to standard atmospheres
	
	args:
					HPA pressure in hectopascals

	returns:
					pressure in standard atmospheres
*******************************************************************************/

double HPAtoATM(
	double HPA)
{
	double ATM = MBtoATM(HPA);

	return  ATM;
}


/*******************************************************************************
	function to convert pounds per square inch to inches of mercury
	
	args:
					PSI pressure in pounds per square inch

	returns:
					pressure in inches of mercury
*******************************************************************************/

double PSItoINHG(
	double PSI)
{
	double INHG = 2.03602 * PSI;

	return  INHG;
}

/*******************************************************************************
	function to convert pounds per square inch to millimeters of mercury
	
	args:
					PSI pressure in pounds per square inch

	returns:
					pressure in millimeters of mercury
*******************************************************************************/

double PSItoMMHG(
	double PSI)
{
	double MMHG = 51.7149 * PSI;

	return  MMHG;
}

/*******************************************************************************
	function to convert pounds per square inch to millibars
	
	args:
					PSI pressure in pounds per square inch

	returns:
					pressure in millibars
*******************************************************************************/

double PSItoMB(
	double PSI)
{
	double MB = 68.9476 * PSI;

	return  MB;
}

/*******************************************************************************
	function to convert pounds per square inch to kilopascals
	
	args:
					PSI pressure in pounds per square inch

	returns:
					pressure in kilopascals
*******************************************************************************/

double PSItoKPA(
	double PSI)
{
	double KPA = PSItoMB(PSI) / 10;

	return  KPA;
}

/*******************************************************************************
	function to convert pounds per square inch to hectopascals
	
	args:
					PSI pressure in pounds per square inch

	returns:
					pressure in hectopascals
*******************************************************************************/

double PSItoHPA(
	double PSI)
{
	double HPA = PSItoMB(PSI);

	return  HPA;
}

/*******************************************************************************
	function to convert pounds per square inch to standard atmospheres
	
	args:
					PSI pressure in pounds per square inch

	returns:
					pressure in standard atmospheres
*******************************************************************************/

double PSItoATM(
	double PSI)
{
	double ATM = 0.0680457 * PSI;

	return  ATM;
}

/*******************************************************************************
	function to convert standard atmospheres to inches of mercury
	
	args:
					ATM pressure in standard atmospheres

	returns:
					pressure in inches of mercury
*******************************************************************************/

double ATMtoINHG(
	double ATM)
{
	double INHG = 29.9213 * ATM;

	return  INHG;

}

/*******************************************************************************
	function to convert standard atmospheres to millimeters of mercury
	
	args:
					ATM pressure in standard atmospheres

	returns:
					pressure in millimeters of mercury
*******************************************************************************/

double ATMtoMMHG(
	double ATM)
{
	double MMHG = 760 * ATM;

	return  MMHG;
}

/*******************************************************************************
	function to convert standard atmospheres to millibars
	
	args:
					ATM pressure in standard atmospheres

	returns:
					pressure in millibars
*******************************************************************************/

double ATMtoMB(
	double ATM)
{
	double MB = STD_ATM_MB * ATM;

	return  MB;
}

/*******************************************************************************
	function to convert standard atmospheres to kilopascals
	
	args:
					ATM pressure in standard atmospheres

	returns:
					pressure in kilopascals
*******************************************************************************/

double ATMtoKPA(
	double ATM)
{
	double KPA = ATMtoMB(ATM) / 10;

	return  KPA;
}

/*******************************************************************************
	function to convert standard atmospheres to hectopascals
	
	args:
					ATM pressure in standard atmospheres

	returns:
					pressure in hectopascals
*******************************************************************************/

double ATMtoHPA(
	double ATM)
{
	double HPA = ATMtoMB(ATM);

	return  HPA;
}

/*******************************************************************************
	function to convert standard atmospheres to pounds per square inch
	
	args:
					ATM pressure in standard atmospheres

	returns:
					pressure in pounds per square inch
*******************************************************************************/

double ATMtoPSI(
	double ATM)
{
	double PSI = 14.6960 * ATM;

	return  PSI;
}

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
	double meters)
{
	double F1;
	double F2;
	double F3;
	double F;
	double alt;
	
  F1 = (pow(1013.25, 0.190284) * 0.0065) / 288;
  F2 = meters / pow((mb - 0.3), 0.190284);
  F3 = 1 / 0.190284;
  F = pow((1 + (F1 * F2)), F3);
  alt = (mb - 0.3) * F;
  
	return alt;
}

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
	double meters)
{
  double sp = in * pow((288 - 0.0065 * meters) / 288, 5.2561);
  
	return sp;
}


