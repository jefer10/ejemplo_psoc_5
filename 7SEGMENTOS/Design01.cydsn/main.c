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

uint8 dato;
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    display_Start();
    display_SetBrightness(64,0);

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    
    for(;;)
    {
        while (dato==sw_Read());
        dato=sw_Read();
        //dato=0x04;
       display_Write7SegNumberHex(dato,0,2,display_ZERO_PAD);
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
