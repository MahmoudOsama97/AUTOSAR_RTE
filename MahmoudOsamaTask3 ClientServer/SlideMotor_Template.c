/**
 *
 * \file SlideMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SlideMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/16/2020 02:11 م
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
	if(<Slide>BtnState == MULTI_STATE_BTN_MINUS) => Rte_Call_rp<Slide>Motor_Move(MOTOR_STEP_MINUS)
	if(<Slide> == MULTI_STATE_BTN_PLUS) => Rte_Call_rp<Slide>Motor_Move(MOTOR_STEP_PLUS)
	
	Std_ReturnType status;

}

