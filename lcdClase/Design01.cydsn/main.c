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
    uint8 i;
    LCD_Start();
    LCD_Position(0,3);
    LCD_PrintString("MAMPO C.F");
    LCD_Position(1,1);
    LCD_PrintString("vamos que vamos");
    for (i=0;i<5;i++)
    {
        CyDelay(500);
        LCD_DisplayOff();
        buzzer_Write(1);
        CyDelay(500);
        LCD_DisplayOn();
        buzzer_Write(0);
    }
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
