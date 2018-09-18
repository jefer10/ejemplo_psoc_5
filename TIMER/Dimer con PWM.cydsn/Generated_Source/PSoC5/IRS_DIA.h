/*******************************************************************************
* File Name: IRS_DIA.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_IRS_DIA_H)
#define CY_ISR_IRS_DIA_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void IRS_DIA_Start(void);
void IRS_DIA_StartEx(cyisraddress address);
void IRS_DIA_Stop(void);

CY_ISR_PROTO(IRS_DIA_Interrupt);

void IRS_DIA_SetVector(cyisraddress address);
cyisraddress IRS_DIA_GetVector(void);

void IRS_DIA_SetPriority(uint8 priority);
uint8 IRS_DIA_GetPriority(void);

void IRS_DIA_Enable(void);
uint8 IRS_DIA_GetState(void);
void IRS_DIA_Disable(void);

void IRS_DIA_SetPending(void);
void IRS_DIA_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the IRS_DIA ISR. */
#define IRS_DIA_INTC_VECTOR            ((reg32 *) IRS_DIA__INTC_VECT)

/* Address of the IRS_DIA ISR priority. */
#define IRS_DIA_INTC_PRIOR             ((reg8 *) IRS_DIA__INTC_PRIOR_REG)

/* Priority of the IRS_DIA interrupt. */
#define IRS_DIA_INTC_PRIOR_NUMBER      IRS_DIA__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable IRS_DIA interrupt. */
#define IRS_DIA_INTC_SET_EN            ((reg32 *) IRS_DIA__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the IRS_DIA interrupt. */
#define IRS_DIA_INTC_CLR_EN            ((reg32 *) IRS_DIA__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the IRS_DIA interrupt state to pending. */
#define IRS_DIA_INTC_SET_PD            ((reg32 *) IRS_DIA__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the IRS_DIA interrupt. */
#define IRS_DIA_INTC_CLR_PD            ((reg32 *) IRS_DIA__INTC_CLR_PD_REG)


#endif /* CY_ISR_IRS_DIA_H */


/* [] END OF FILE */
