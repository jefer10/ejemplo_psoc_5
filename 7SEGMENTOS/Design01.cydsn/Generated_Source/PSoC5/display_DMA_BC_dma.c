/***************************************************************************
* File Name: display_DMA_BC_dma.c  
* Version 1.70
*
*  Description:
*   Provides an API for the DMAC component. The API includes functions
*   for the DMA controller, DMA channels and Transfer Descriptors.
*
*
*   Note:
*     This module requires the developer to finish or fill in the auto
*     generated funcions and setup the dma channel and TD's.
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/
#include <CYLIB.H>
#include <CYDMAC.H>
#include <display_DMA_BC_dma.H>



/****************************************************************************
* 
* The following defines are available in Cyfitter.h
* 
* 
* 
* display_DMA_BC__DRQ_CTL_REG
* 
* 
* display_DMA_BC__DRQ_NUMBER
* 
* Number of TD's used by this channel.
* display_DMA_BC__NUMBEROF_TDS
* 
* Priority of this channel.
* display_DMA_BC__PRIORITY
* 
* True if display_DMA_BC_TERMIN_SEL is used.
* display_DMA_BC__TERMIN_EN
* 
* TERMIN interrupt line to signal terminate.
* display_DMA_BC__TERMIN_SEL
* 
* 
* True if display_DMA_BC_TERMOUT0_SEL is used.
* display_DMA_BC__TERMOUT0_EN
* 
* 
* TERMOUT0 interrupt line to signal completion.
* display_DMA_BC__TERMOUT0_SEL
* 
* 
* True if display_DMA_BC_TERMOUT1_SEL is used.
* display_DMA_BC__TERMOUT1_EN
* 
* 
* TERMOUT1 interrupt line to signal completion.
* display_DMA_BC__TERMOUT1_SEL
* 
****************************************************************************/


/* Zero based index of display_DMA_BC dma channel */
uint8 display_DMA_BC_DmaHandle = DMA_INVALID_CHANNEL;

/*********************************************************************
* Function Name: uint8 display_DMA_BC_DmaInitalize
**********************************************************************
* Summary:
*   Allocates and initialises a channel of the DMAC to be used by the
*   caller.
*
* Parameters:
*   BurstCount.
*       
*       
*   ReqestPerBurst.
*       
*       
*   UpperSrcAddress.
*       
*       
*   UpperDestAddress.
*       
*
* Return:
*   The channel that can be used by the caller for DMA activity.
*   DMA_INVALID_CHANNEL (0xFF) if there are no channels left. 
*
*
*******************************************************************/
uint8 display_DMA_BC_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) 
{

    /* Allocate a DMA channel. */
    display_DMA_BC_DmaHandle = (uint8)display_DMA_BC__DRQ_NUMBER;

    /* Configure the channel. */
    (void)CyDmaChSetConfiguration(display_DMA_BC_DmaHandle,
                                  BurstCount,
                                  ReqestPerBurst,
                                  (uint8)display_DMA_BC__TERMOUT0_SEL,
                                  (uint8)display_DMA_BC__TERMOUT1_SEL,
                                  (uint8)display_DMA_BC__TERMIN_SEL);

    /* Set the extended address for the transfers */
    (void)CyDmaChSetExtendedAddress(display_DMA_BC_DmaHandle, UpperSrcAddress, UpperDestAddress);

    /* Set the priority for this channel */
    (void)CyDmaChPriority(display_DMA_BC_DmaHandle, (uint8)display_DMA_BC__PRIORITY);
    
    return display_DMA_BC_DmaHandle;
}

/*********************************************************************
* Function Name: void display_DMA_BC_DmaRelease
**********************************************************************
* Summary:
*   Frees the channel associated with display_DMA_BC.
*
*
* Parameters:
*   void.
*
*
*
* Return:
*   void.
*
*******************************************************************/
void display_DMA_BC_DmaRelease(void) 
{
    /* Disable the channel */
    (void)CyDmaChDisable(display_DMA_BC_DmaHandle);
}

