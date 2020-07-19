/**
 *
 * \file InclineMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: InclineMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/17/2020 08:30 م
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_InclineMotor.h"


/**
 *
 * Runnable RE_InclineMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppInclineMotor_Move
 *
 */

void RE_InclineMotor_Move (MultiStateBtnType step)
{
	
	if(step==MOTOR_STEP_PLUS)
	{
		Rte_callrpIOSetIncline_IOSetFarward();
	}
	else if(step==MOTOR_STEP_MINUS)
	{
		Rte_callrpIOSetIncline_IOSetReverse();
	}
	else
	{
		
	}
	Std_ReturnType status;

}

