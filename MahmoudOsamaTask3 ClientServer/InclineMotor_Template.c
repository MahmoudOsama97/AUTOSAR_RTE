/**
 *
 * \file InclineMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: InclineMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/16/2020 02:11 م
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
	if(<Incline>BtnState == MULTI_STATE_BTN_MINUS) => Rte_Call_rp<Incline>Motor_Move(MOTOR_STEP_MINUS)
	if(<Incline> == MULTI_STATE_BTN_PLUS) => Rte_Call_rp<Incline>Motor_Move(MOTOR_STEP_PLUS)
	
	Std_ReturnType status;

}

