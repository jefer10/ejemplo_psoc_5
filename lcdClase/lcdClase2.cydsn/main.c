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
 uint8 valor;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    LCD_start();
    LCD_printString("valor");
    valor=0;

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        LCD_Position(0,4); 
        LCD_PrintNumber(valor);
        LCD_DrawHorizontalBG(1,0,16,valor);
        while(valor==swi_read())
        valor=swi_read();
        LCD_Position(0,6);
        LCD_printString("");
        
    }
}

/* [] END OF FILE */
