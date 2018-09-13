/*******************************************************************************
* File Name: potenciometro.h  
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

#if !defined(CY_PINS_potenciometro_H) /* Pins potenciometro_H */
#define CY_PINS_potenciometro_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "potenciometro_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 potenciometro__PORT == 15 && ((potenciometro__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    potenciometro_Write(uint8 value);
void    potenciometro_SetDriveMode(uint8 mode);
uint8   potenciometro_ReadDataReg(void);
uint8   potenciometro_Read(void);
void    potenciometro_SetInterruptMode(uint16 position, uint16 mode);
uint8   potenciometro_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the potenciometro_SetDriveMode() function.
     *  @{
     */
        #define potenciometro_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define potenciometro_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define potenciometro_DM_RES_UP          PIN_DM_RES_UP
        #define potenciometro_DM_RES_DWN         PIN_DM_RES_DWN
        #define potenciometro_DM_OD_LO           PIN_DM_OD_LO
        #define potenciometro_DM_OD_HI           PIN_DM_OD_HI
        #define potenciometro_DM_STRONG          PIN_DM_STRONG
        #define potenciometro_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define potenciometro_MASK               potenciometro__MASK
#define potenciometro_SHIFT              potenciometro__SHIFT
#define potenciometro_WIDTH              1u

/* Interrupt constants */
#if defined(potenciometro__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in potenciometro_SetInterruptMode() function.
     *  @{
     */
        #define potenciometro_INTR_NONE      (uint16)(0x0000u)
        #define potenciometro_INTR_RISING    (uint16)(0x0001u)
        #define potenciometro_INTR_FALLING   (uint16)(0x0002u)
        #define potenciometro_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define potenciometro_INTR_MASK      (0x01u) 
#endif /* (potenciometro__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define potenciometro_PS                     (* (reg8 *) potenciometro__PS)
/* Data Register */
#define potenciometro_DR                     (* (reg8 *) potenciometro__DR)
/* Port Number */
#define potenciometro_PRT_NUM                (* (reg8 *) potenciometro__PRT) 
/* Connect to Analog Globals */                                                  
#define potenciometro_AG                     (* (reg8 *) potenciometro__AG)                       
/* Analog MUX bux enable */
#define potenciometro_AMUX                   (* (reg8 *) potenciometro__AMUX) 
/* Bidirectional Enable */                                                        
#define potenciometro_BIE                    (* (reg8 *) potenciometro__BIE)
/* Bit-mask for Aliased Register Access */
#define potenciometro_BIT_MASK               (* (reg8 *) potenciometro__BIT_MASK)
/* Bypass Enable */
#define potenciometro_BYP                    (* (reg8 *) potenciometro__BYP)
/* Port wide control signals */                                                   
#define potenciometro_CTL                    (* (reg8 *) potenciometro__CTL)
/* Drive Modes */
#define potenciometro_DM0                    (* (reg8 *) potenciometro__DM0) 
#define potenciometro_DM1                    (* (reg8 *) potenciometro__DM1)
#define potenciometro_DM2                    (* (reg8 *) potenciometro__DM2) 
/* Input Buffer Disable Override */
#define potenciometro_INP_DIS                (* (reg8 *) potenciometro__INP_DIS)
/* LCD Common or Segment Drive */
#define potenciometro_LCD_COM_SEG            (* (reg8 *) potenciometro__LCD_COM_SEG)
/* Enable Segment LCD */
#define potenciometro_LCD_EN                 (* (reg8 *) potenciometro__LCD_EN)
/* Slew Rate Control */
#define potenciometro_SLW                    (* (reg8 *) potenciometro__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define potenciometro_PRTDSI__CAPS_SEL       (* (reg8 *) potenciometro__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define potenciometro_PRTDSI__DBL_SYNC_IN    (* (reg8 *) potenciometro__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define potenciometro_PRTDSI__OE_SEL0        (* (reg8 *) potenciometro__PRTDSI__OE_SEL0) 
#define potenciometro_PRTDSI__OE_SEL1        (* (reg8 *) potenciometro__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define potenciometro_PRTDSI__OUT_SEL0       (* (reg8 *) potenciometro__PRTDSI__OUT_SEL0) 
#define potenciometro_PRTDSI__OUT_SEL1       (* (reg8 *) potenciometro__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define potenciometro_PRTDSI__SYNC_OUT       (* (reg8 *) potenciometro__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(potenciometro__SIO_CFG)
    #define potenciometro_SIO_HYST_EN        (* (reg8 *) potenciometro__SIO_HYST_EN)
    #define potenciometro_SIO_REG_HIFREQ     (* (reg8 *) potenciometro__SIO_REG_HIFREQ)
    #define potenciometro_SIO_CFG            (* (reg8 *) potenciometro__SIO_CFG)
    #define potenciometro_SIO_DIFF           (* (reg8 *) potenciometro__SIO_DIFF)
#endif /* (potenciometro__SIO_CFG) */

/* Interrupt Registers */
#if defined(potenciometro__INTSTAT)
    #define potenciometro_INTSTAT            (* (reg8 *) potenciometro__INTSTAT)
    #define potenciometro_SNAP               (* (reg8 *) potenciometro__SNAP)
    
	#define potenciometro_0_INTTYPE_REG 		(* (reg8 *) potenciometro__0__INTTYPE)
#endif /* (potenciometro__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_potenciometro_H */


/* [] END OF FILE */
