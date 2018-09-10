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
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("Mambo");
    LCD_Position(1,0);
    LCD_PrintString("Si Si!!");

    for(i=0;i<5;i++){
           CyDelay(500);
           LCD_DisplayOff();
           Buzzer_Write(1);
           CyDelay(500);
           LCD_DisplayOn();
           Buzzer_Write(0);
    }
    
    for(;;)
    {

        /* Place your application code here. */
    }
}

/* [] END OF FILE */
