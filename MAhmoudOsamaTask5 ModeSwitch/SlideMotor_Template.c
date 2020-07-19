/**
 *
 * \file SlideMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SlideMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/17/2020 08:30 م
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SlideMotor.h"


/**
 *
 * Runnable RE_SlideMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppSlideMotor_Move
 *
 */

void RE_SlideMotor_Move (MultiStateBtnType step)
{
	
	if(step==MOTOR_STEP_PLUS)
	{
		Rte_callrpIOSetSlide_IOSetFarward();
	}
	else if(step==MOTOR_STEP_MINUS)
	{
		Rte_callrpIOSetSlide_IOSetReverse();
	}
	else
	{
		
	}
	Std_ReturnType status;

}

