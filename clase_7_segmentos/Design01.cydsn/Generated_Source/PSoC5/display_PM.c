/*******************************************************************************
* File Name: display_PM.c
* Version 1.10
*
* Description:
*  This file provides the power management source code to API for the
*  LED_Driver component.
*
* Note:
*  None
*
*******************************************************************************
* Copyright 2013-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
********************************************************************************/

#include "display.h"
static display_backupStruct display_backup;


/*******************************************************************************
* Function Name: display_Sleep
********************************************************************************
*
* Summary:
*  Stop and Save the user configuration
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void display_Sleep(void) 
{
    uint8 i;
    
    /* Store the component enable state */
    display_backup.ledEnableState = display_enableVar;
    
    /* Save the segment buffers */
    for(i = 0u; i < display_NUM_COM; i++)
    {
        display_backup.segLBackup[i] = display_segLBuffer[i];
        #if (display_NUM_SEG > 8u) 
            display_backup.segMBackup[i] = display_segMBuffer[i];
        #endif /* (display_NUM_SEG > 8u) */
        #if (display_NUM_SEG > 16u) 
            display_backup.segHBackup[i] = display_segHBuffer[i];
        #endif /* (display_NUM_SEG > 16u) */
    }
    
    display_Stop();
}


/*******************************************************************************
* Function Name: display_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void display_Wakeup(void) 
{
    uint8 i;
    
    /* Restore the segment buffers */
    for(i = 0u; i < display_NUM_COM; i++)
    {
        display_segLBuffer[i] = display_backup.segLBackup[i];
        #if (display_NUM_SEG > 8u) 
            display_segMBuffer[i] = display_backup.segMBackup[i];
        #endif /* (display_NUM_SEG > 8u) */
        #if (display_NUM_SEG > 16u) 
            display_segHBuffer[i] = display_backup.segHBackup[i];
        #endif /* (display_NUM_SEG > 16u) */
    }
    
    if(display_backup.ledEnableState == display_ENABLED)
    {
        /* Enable the component */
        display_Enable();
    }
}


/* [] END OF FILE */

