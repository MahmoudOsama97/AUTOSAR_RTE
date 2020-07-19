/**
 *
 * \file HeightMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HeightMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/17/2020 08:30 م
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_HeightMotor.h"


/**
 *
 * Runnable RE_HeightMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHeightMotor_Move
 *
 */

void RE_HeightMotor_Move (MultiStateBtnType step)
{
	if(step==MOTOR_STEP_PLUS)
	{
		Rte_callrpIOSetHeight_IOSetFarward();
	}
	else if(step==MOTOR_STEP_MINUS)
	{
		Rte_callrpIOSetHeight_IOSetReverse();
	}
	else
	{
		
	}
	Std_ReturnType status;

}

