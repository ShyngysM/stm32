/*
 * File: STEPPER_cfg.c
 * Driver Name: [[ STEPPER Motor ]]
 * SW Layer:   ECUAL
 * Created on: Jun 28, 2020
 * Author:     Khaled Magdy
 * -------------------------------------------
 * For More Information, Tutorials, etc.
 * Visit Website: www.DeepBlueMbedded.com
 *
 */

#include "STEPPER.h"

const STEPPER_CfgType STEPPER_CfgParam[STEPPER_UNITS] =
{
	// Stepper Motor 1 Configurations
    {
	    {GPIOB, GPIOG, GPIOE, GPIOE},
		{GPIO_PIN_6, GPIO_PIN_14, GPIO_PIN_13, GPIO_PIN_14},
		2048,
		STEPPER_UNIPOLAR,
		WAVE_DRIVE
	}
};
