/**
 *
 * \file HeightMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HeightMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/16/2020 02:11 م
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
	if(<Height>BtnState == MULTI_STATE_BTN_MINUS) => Rte_Call_rp<Height>Motor_Move(MOTOR_STEP_MINUS)
	if(<Height> == MULTI_STATE_BTN_PLUS) => Rte_Call_rp<Height>Motor_Move(MOTOR_STEP_PLUS)
	Std_ReturnType status;

}

