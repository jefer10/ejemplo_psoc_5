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
    //CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD_Start();
    LCD_PrintString("Valor");
    valor=0;
    
    for(;;)
    {
        LCD_Position(0,6);
        LCD_PrintNumber(valor);
        LCD_DrawHorizontalBG(1,0,16,valor);//Fila 1 columna 1 y tamaño horizontal de lcd, valor de 0 a 
        while(valor==swi_Read())
        valor=swi_Read();
        LCD_Position(0,6);
        LCD_PrintString("   ");
        
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
