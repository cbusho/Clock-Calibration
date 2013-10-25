/*
 * clock_calibration.c
 *
 *  Created on: Oct 24, 2013
 *      Author: C15Colin.Busho
 */

#include "clock_calibration.h"
#include "msp430.h"

void clockSet1MHZ(){
	DCOCTL = 0x00;
	BCSCTL1 = CALBC1_1MHZ;		// Set clockspeed to 1MHZ
	DCOCTL = CALDCO_1MHZ;
}

void clockSet8MHZ(){
	DCOCTL = 0x00;
	BCSCTL1 = CALBC1_8MHZ;		// Set clockspeed to 8MHZ
	DCOCTL = CALDCO_8MHZ;
}

void clockSet12MHZ(){
	DCOCTL = 0x00;
	BCSCTL1 = CALBC1_12MHZ;		// Set clockspeed to 12MHZ
	DCOCTL = CALDCO_12MHZ;
}

void clockSet16MHZ(){
	DCOCTL = 0x00;
	BCSCTL1 = CALBC1_16MHZ;		// Set clockspeed to 16MHZ
	DCOCTL = CALDCO_16MHZ;
}
