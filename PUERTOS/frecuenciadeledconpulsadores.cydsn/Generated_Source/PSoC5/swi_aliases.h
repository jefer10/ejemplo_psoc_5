/*******************************************************************************
* File Name: swi.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_swi_ALIASES_H) /* Pins swi_ALIASES_H */
#define CY_PINS_swi_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define swi_0			(swi__0__PC)
#define swi_0_INTR	((uint16)((uint16)0x0001u << swi__0__SHIFT))

#define swi_1			(swi__1__PC)
#define swi_1_INTR	((uint16)((uint16)0x0001u << swi__1__SHIFT))

#define swi_2			(swi__2__PC)
#define swi_2_INTR	((uint16)((uint16)0x0001u << swi__2__SHIFT))

#define swi_3			(swi__3__PC)
#define swi_3_INTR	((uint16)((uint16)0x0001u << swi__3__SHIFT))

#define swi_INTR_ALL	 ((uint16)(swi_0_INTR| swi_1_INTR| swi_2_INTR| swi_3_INTR))

#endif /* End Pins swi_ALIASES_H */


/* [] END OF FILE */
