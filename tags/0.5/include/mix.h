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
 
#ifndef _MIX_H
#define _MIX_H

/*******************************************************************************
	function to calculate mix ratio
	
	args:
							E		vapor pressure in millibars
							Es	Saturated Vapor pressure in millibars
	
	returns:
							mixing ratio
*******************************************************************************/

double MixRatio(
	double E,
	double Es);

/*******************************************************************************
	function to calculate specific humidity from mix ratio
	
	args:
						MR		mix ratio
	
	returns:
						specific humidity
*******************************************************************************/

double MRtoSH(
	double MR);

/*******************************************************************************
	function to calculate mix ratio from specific humidity
	
	args:
						SR		specific humidity
	
	returns:
						mix ratio
*******************************************************************************/

double SHtoMRto(
	double SH);

/*******************************************************************************
	function to calculate relitive humidity from mixing ratio
	
	args:
							MRs		saturated mixing ratio
							MR		mixing ratio
	
	returns:
							relitive humidity
*******************************************************************************/

double RHfromMR(
	double MRs,
	double MR);


#endif /* _MIX_H */

 
