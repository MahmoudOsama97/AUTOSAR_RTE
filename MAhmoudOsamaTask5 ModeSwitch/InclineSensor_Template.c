/**
 *
 * \file InclineSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: InclineSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/19/2020 02:12 م
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_InclineSensor.h"


/**
 *
 * Runnable InclineSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppInclineSensor_GetPosition
 *
 */

void InclineSensor_GetPosition (SensorPositionType* position)
{
	Std_ReturnType status;
	IoPositionSensorReadingType position;

	/* Server Call Points */
	status = Rte_Call_rpIOGetIncline_IOGet(&p);
	
	
	if(P==0)
		p=SENSOR_POSITION_0;
	else if(p>0 &&p<=64)
		p=SENSOR_POSITION_1;
	else if(p>64&&p<=192)
		p=SENSOR_POSITION_2;
	else if(p>192&&p<=255)
		p=SENSOR_POSITION_3;
	position =p;
	Std_ReturnType status;
}

