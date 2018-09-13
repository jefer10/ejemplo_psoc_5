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
uint8 i;

int main(void)
{
    //CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    VDAC8_Start();

    for(;;)
    {
        /* Place your application code here. */
        switch (SW_Read())
        {
            case 0:
            for(i=0;i<255;i++){
                VDAC8_SetValue(i);
            }for(i=255;i>0;i--){
                VDAC8_SetValue(i);
            }
            break;
            
            case 1:
            for(i=0;i<255;i++){
                VDAC8_SetValue(i);
            }
            break;
            
            case 2:
            VDAC8_SetValue(0);
            CyDelay(1);
            VDAC8_SetValue(255);
            CyDelay(1);
            break;
            
            default:
                 break;
        }
    }
}

/* [] END OF FILE */
