/*******************************************************************************
* File Name: Potenciometro.h  
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

#if !defined(CY_PINS_Potenciometro_H) /* Pins Potenciometro_H */
#define CY_PINS_Potenciometro_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Potenciometro_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Potenciometro__PORT == 15 && ((Potenciometro__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Potenciometro_Write(uint8 value);
void    Potenciometro_SetDriveMode(uint8 mode);
uint8   Potenciometro_ReadDataReg(void);
uint8   Potenciometro_Read(void);
void    Potenciometro_SetInterruptMode(uint16 position, uint16 mode);
uint8   Potenciometro_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Potenciometro_SetDriveMode() function.
     *  @{
     */
        #define Potenciometro_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Potenciometro_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Potenciometro_DM_RES_UP          PIN_DM_RES_UP
        #define Potenciometro_DM_RES_DWN         PIN_DM_RES_DWN
        #define Potenciometro_DM_OD_LO           PIN_DM_OD_LO
        #define Potenciometro_DM_OD_HI           PIN_DM_OD_HI
        #define Potenciometro_DM_STRONG          PIN_DM_STRONG
        #define Potenciometro_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Potenciometro_MASK               Potenciometro__MASK
#define Potenciometro_SHIFT              Potenciometro__SHIFT
#define Potenciometro_WIDTH              1u

/* Interrupt constants */
#if defined(Potenciometro__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Potenciometro_SetInterruptMode() function.
     *  @{
     */
        #define Potenciometro_INTR_NONE      (uint16)(0x0000u)
        #define Potenciometro_INTR_RISING    (uint16)(0x0001u)
        #define Potenciometro_INTR_FALLING   (uint16)(0x0002u)
        #define Potenciometro_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Potenciometro_INTR_MASK      (0x01u) 
#endif /* (Potenciometro__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Potenciometro_PS                     (* (reg8 *) Potenciometro__PS)
/* Data Register */
#define Potenciometro_DR                     (* (reg8 *) Potenciometro__DR)
/* Port Number */
#define Potenciometro_PRT_NUM                (* (reg8 *) Potenciometro__PRT) 
/* Connect to Analog Globals */                                                  
#define Potenciometro_AG                     (* (reg8 *) Potenciometro__AG)                       
/* Analog MUX bux enable */
#define Potenciometro_AMUX                   (* (reg8 *) Potenciometro__AMUX) 
/* Bidirectional Enable */                                                        
#define Potenciometro_BIE                    (* (reg8 *) Potenciometro__BIE)
/* Bit-mask for Aliased Register Access */
#define Potenciometro_BIT_MASK               (* (reg8 *) Potenciometro__BIT_MASK)
/* Bypass Enable */
#define Potenciometro_BYP                    (* (reg8 *) Potenciometro__BYP)
/* Port wide control signals */                                                   
#define Potenciometro_CTL                    (* (reg8 *) Potenciometro__CTL)
/* Drive Modes */
#define Potenciometro_DM0                    (* (reg8 *) Potenciometro__DM0) 
#define Potenciometro_DM1                    (* (reg8 *) Potenciometro__DM1)
#define Potenciometro_DM2                    (* (reg8 *) Potenciometro__DM2) 
/* Input Buffer Disable Override */
#define Potenciometro_INP_DIS                (* (reg8 *) Potenciometro__INP_DIS)
/* LCD Common or Segment Drive */
#define Potenciometro_LCD_COM_SEG            (* (reg8 *) Potenciometro__LCD_COM_SEG)
/* Enable Segment LCD */
#define Potenciometro_LCD_EN                 (* (reg8 *) Potenciometro__LCD_EN)
/* Slew Rate Control */
#define Potenciometro_SLW                    (* (reg8 *) Potenciometro__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Potenciometro_PRTDSI__CAPS_SEL       (* (reg8 *) Potenciometro__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Potenciometro_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Potenciometro__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Potenciometro_PRTDSI__OE_SEL0        (* (reg8 *) Potenciometro__PRTDSI__OE_SEL0) 
#define Potenciometro_PRTDSI__OE_SEL1        (* (reg8 *) Potenciometro__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Potenciometro_PRTDSI__OUT_SEL0       (* (reg8 *) Potenciometro__PRTDSI__OUT_SEL0) 
#define Potenciometro_PRTDSI__OUT_SEL1       (* (reg8 *) Potenciometro__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Potenciometro_PRTDSI__SYNC_OUT       (* (reg8 *) Potenciometro__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Potenciometro__SIO_CFG)
    #define Potenciometro_SIO_HYST_EN        (* (reg8 *) Potenciometro__SIO_HYST_EN)
    #define Potenciometro_SIO_REG_HIFREQ     (* (reg8 *) Potenciometro__SIO_REG_HIFREQ)
    #define Potenciometro_SIO_CFG            (* (reg8 *) Potenciometro__SIO_CFG)
    #define Potenciometro_SIO_DIFF           (* (reg8 *) Potenciometro__SIO_DIFF)
#endif /* (Potenciometro__SIO_CFG) */

/* Interrupt Registers */
#if defined(Potenciometro__INTSTAT)
    #define Potenciometro_INTSTAT            (* (reg8 *) Potenciometro__INTSTAT)
    #define Potenciometro_SNAP               (* (reg8 *) Potenciometro__SNAP)
    
	#define Potenciometro_0_INTTYPE_REG 		(* (reg8 *) Potenciometro__0__INTTYPE)
#endif /* (Potenciometro__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Potenciometro_H */


/* [] END OF FILE */
