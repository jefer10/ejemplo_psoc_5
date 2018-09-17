/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

/*
    Cada 1/12M se lee la tabla y se pasa al DAC
*/
#include "project.h"


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */


    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    VDAC8_Start();
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
