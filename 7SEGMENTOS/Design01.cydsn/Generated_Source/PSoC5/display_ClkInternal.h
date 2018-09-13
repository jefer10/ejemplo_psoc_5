/*******************************************************************************
* File Name: display_ClkInternal.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_display_ClkInternal_H)
#define CY_CLOCK_display_ClkInternal_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void display_ClkInternal_Start(void) ;
void display_ClkInternal_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void display_ClkInternal_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void display_ClkInternal_StandbyPower(uint8 state) ;
void display_ClkInternal_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 display_ClkInternal_GetDividerRegister(void) ;
void display_ClkInternal_SetModeRegister(uint8 modeBitMask) ;
void display_ClkInternal_ClearModeRegister(uint8 modeBitMask) ;
uint8 display_ClkInternal_GetModeRegister(void) ;
void display_ClkInternal_SetSourceRegister(uint8 clkSource) ;
uint8 display_ClkInternal_GetSourceRegister(void) ;
#if defined(display_ClkInternal__CFG3)
void display_ClkInternal_SetPhaseRegister(uint8 clkPhase) ;
uint8 display_ClkInternal_GetPhaseRegister(void) ;
#endif /* defined(display_ClkInternal__CFG3) */

#define display_ClkInternal_Enable()                       display_ClkInternal_Start()
#define display_ClkInternal_Disable()                      display_ClkInternal_Stop()
#define display_ClkInternal_SetDivider(clkDivider)         display_ClkInternal_SetDividerRegister(clkDivider, 1u)
#define display_ClkInternal_SetDividerValue(clkDivider)    display_ClkInternal_SetDividerRegister((clkDivider) - 1u, 1u)
#define display_ClkInternal_SetMode(clkMode)               display_ClkInternal_SetModeRegister(clkMode)
#define display_ClkInternal_SetSource(clkSource)           display_ClkInternal_SetSourceRegister(clkSource)
#if defined(display_ClkInternal__CFG3)
#define display_ClkInternal_SetPhase(clkPhase)             display_ClkInternal_SetPhaseRegister(clkPhase)
#define display_ClkInternal_SetPhaseValue(clkPhase)        display_ClkInternal_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(display_ClkInternal__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define display_ClkInternal_CLKEN              (* (reg8 *) display_ClkInternal__PM_ACT_CFG)
#define display_ClkInternal_CLKEN_PTR          ((reg8 *) display_ClkInternal__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define display_ClkInternal_CLKSTBY            (* (reg8 *) display_ClkInternal__PM_STBY_CFG)
#define display_ClkInternal_CLKSTBY_PTR        ((reg8 *) display_ClkInternal__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define display_ClkInternal_DIV_LSB            (* (reg8 *) display_ClkInternal__CFG0)
#define display_ClkInternal_DIV_LSB_PTR        ((reg8 *) display_ClkInternal__CFG0)
#define display_ClkInternal_DIV_PTR            ((reg16 *) display_ClkInternal__CFG0)

/* Clock MSB divider configuration register. */
#define display_ClkInternal_DIV_MSB            (* (reg8 *) display_ClkInternal__CFG1)
#define display_ClkInternal_DIV_MSB_PTR        ((reg8 *) display_ClkInternal__CFG1)

/* Mode and source configuration register */
#define display_ClkInternal_MOD_SRC            (* (reg8 *) display_ClkInternal__CFG2)
#define display_ClkInternal_MOD_SRC_PTR        ((reg8 *) display_ClkInternal__CFG2)

#if defined(display_ClkInternal__CFG3)
/* Analog clock phase configuration register */
#define display_ClkInternal_PHASE              (* (reg8 *) display_ClkInternal__CFG3)
#define display_ClkInternal_PHASE_PTR          ((reg8 *) display_ClkInternal__CFG3)
#endif /* defined(display_ClkInternal__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define display_ClkInternal_CLKEN_MASK         display_ClkInternal__PM_ACT_MSK
#define display_ClkInternal_CLKSTBY_MASK       display_ClkInternal__PM_STBY_MSK

/* CFG2 field masks */
#define display_ClkInternal_SRC_SEL_MSK        display_ClkInternal__CFG2_SRC_SEL_MASK
#define display_ClkInternal_MODE_MASK          (~(display_ClkInternal_SRC_SEL_MSK))

#if defined(display_ClkInternal__CFG3)
/* CFG3 phase mask */
#define display_ClkInternal_PHASE_MASK         display_ClkInternal__CFG3_PHASE_DLY_MASK
#endif /* defined(display_ClkInternal__CFG3) */

#endif /* CY_CLOCK_display_ClkInternal_H */


/* [] END OF FILE */
