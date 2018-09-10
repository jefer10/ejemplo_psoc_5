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

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    uint16 tiempo=100;
    uint8 dato;
    for(;;)
    {
        /* Place your application code here. */
        led_Write(~led_Read());
        CyDelay(tiempo);
        led_Write(~led_Read());
        CyDelay(tiempo);
        dato=swi_Read();
        switch (dato){
            case 0xE:
                tiempo=50;
                break;
            case 0xD:
                tiempo=100;
                break;
            case 0xB:
                 tiempo=250;
                 break;
            case 7:
                 tiempo=500;
                 break;
            default:
                 break;
            
        }
    }
}

/* [] END OF FILE */
