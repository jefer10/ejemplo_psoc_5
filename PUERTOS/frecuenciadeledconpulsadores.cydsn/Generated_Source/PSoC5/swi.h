/*******************************************************************************
* File Name: swi.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_swi_H) /* Pins swi_H */
#define CY_PINS_swi_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "swi_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 swi__PORT == 15 && ((swi__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    swi_Write(uint8 value);
void    swi_SetDriveMode(uint8 mode);
uint8   swi_ReadDataReg(void);
uint8   swi_Read(void);
void    swi_SetInterruptMode(uint16 position, uint16 mode);
uint8   swi_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the swi_SetDriveMode() function.
     *  @{
     */
        #define swi_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define swi_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define swi_DM_RES_UP          PIN_DM_RES_UP
        #define swi_DM_RES_DWN         PIN_DM_RES_DWN
        #define swi_DM_OD_LO           PIN_DM_OD_LO
        #define swi_DM_OD_HI           PIN_DM_OD_HI
        #define swi_DM_STRONG          PIN_DM_STRONG
        #define swi_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define swi_MASK               swi__MASK
#define swi_SHIFT              swi__SHIFT
#define swi_WIDTH              4u

/* Interrupt constants */
#if defined(swi__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in swi_SetInterruptMode() function.
     *  @{
     */
        #define swi_INTR_NONE      (uint16)(0x0000u)
        #define swi_INTR_RISING    (uint16)(0x0001u)
        #define swi_INTR_FALLING   (uint16)(0x0002u)
        #define swi_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define swi_INTR_MASK      (0x01u) 
#endif /* (swi__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define swi_PS                     (* (reg8 *) swi__PS)
/* Data Register */
#define swi_DR                     (* (reg8 *) swi__DR)
/* Port Number */
#define swi_PRT_NUM                (* (reg8 *) swi__PRT) 
/* Connect to Analog Globals */                                                  
#define swi_AG                     (* (reg8 *) swi__AG)                       
/* Analog MUX bux enable */
#define swi_AMUX                   (* (reg8 *) swi__AMUX) 
/* Bidirectional Enable */                                                        
#define swi_BIE                    (* (reg8 *) swi__BIE)
/* Bit-mask for Aliased Register Access */
#define swi_BIT_MASK               (* (reg8 *) swi__BIT_MASK)
/* Bypass Enable */
#define swi_BYP                    (* (reg8 *) swi__BYP)
/* Port wide control signals */                                                   
#define swi_CTL                    (* (reg8 *) swi__CTL)
/* Drive Modes */
#define swi_DM0                    (* (reg8 *) swi__DM0) 
#define swi_DM1                    (* (reg8 *) swi__DM1)
#define swi_DM2                    (* (reg8 *) swi__DM2) 
/* Input Buffer Disable Override */
#define swi_INP_DIS                (* (reg8 *) swi__INP_DIS)
/* LCD Common or Segment Drive */
#define swi_LCD_COM_SEG            (* (reg8 *) swi__LCD_COM_SEG)
/* Enable Segment LCD */
#define swi_LCD_EN                 (* (reg8 *) swi__LCD_EN)
/* Slew Rate Control */
#define swi_SLW                    (* (reg8 *) swi__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define swi_PRTDSI__CAPS_SEL       (* (reg8 *) swi__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define swi_PRTDSI__DBL_SYNC_IN    (* (reg8 *) swi__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define swi_PRTDSI__OE_SEL0        (* (reg8 *) swi__PRTDSI__OE_SEL0) 
#define swi_PRTDSI__OE_SEL1        (* (reg8 *) swi__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define swi_PRTDSI__OUT_SEL0       (* (reg8 *) swi__PRTDSI__OUT_SEL0) 
#define swi_PRTDSI__OUT_SEL1       (* (reg8 *) swi__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define swi_PRTDSI__SYNC_OUT       (* (reg8 *) swi__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(swi__SIO_CFG)
    #define swi_SIO_HYST_EN        (* (reg8 *) swi__SIO_HYST_EN)
    #define swi_SIO_REG_HIFREQ     (* (reg8 *) swi__SIO_REG_HIFREQ)
    #define swi_SIO_CFG            (* (reg8 *) swi__SIO_CFG)
    #define swi_SIO_DIFF           (* (reg8 *) swi__SIO_DIFF)
#endif /* (swi__SIO_CFG) */

/* Interrupt Registers */
#if defined(swi__INTSTAT)
    #define swi_INTSTAT            (* (reg8 *) swi__INTSTAT)
    #define swi_SNAP               (* (reg8 *) swi__SNAP)
    
	#define swi_0_INTTYPE_REG 		(* (reg8 *) swi__0__INTTYPE)
	#define swi_1_INTTYPE_REG 		(* (reg8 *) swi__1__INTTYPE)
	#define swi_2_INTTYPE_REG 		(* (reg8 *) swi__2__INTTYPE)
	#define swi_3_INTTYPE_REG 		(* (reg8 *) swi__3__INTTYPE)
#endif /* (swi__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_swi_H */


/* [] END OF FILE */
