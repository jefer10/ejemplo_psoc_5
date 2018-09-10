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
#include "project.h"

CY_ISR(INT_SW){
    LED_Write(~LED_Read());
    sw_ClearInterrupt();    
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    IRS_SW_StartEx(INT_SW);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LED_Write(1);
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
