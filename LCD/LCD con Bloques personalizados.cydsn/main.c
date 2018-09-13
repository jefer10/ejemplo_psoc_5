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

extern uint8 const CYCODE LCD_customFonts[];
uint8 i;
volatile uint16 tiempo;


CY_ISR(Inte){
    switch(sw_Read()){
    case 0x0E:
        tiempo=100;
        break;
    case 0x0D:
        tiempo=200;
        break;
    case 0x0B:
        tiempo=500;
        break;
    case 0x7:
        tiempo=1000;
        break;
     default:
        break;
    }
    sw_ClearInterrupt();
}
int main(void)
{

    LCD_Start();//Carga caracteres personalizados
    //LCD_LoadCustomFonts(LCD_customFonts);
    CyGlobalIntEnable; /* Enable global interrupts. */
    IRS_SW_StartEx(Inte);
    tiempo=10;
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
    for(i=0;i<20;i++){
    LCD_ClearDisplay();
    LCD_Position(0,i);
    LCD_PutChar(LCD_CUSTOM_0);
    LCD_PutChar(LCD_CUSTOM_1);
    LCD_PutChar(LCD_CUSTOM_2);
    LCD_PutChar(LCD_CUSTOM_3);
    CyDelay(tiempo);
    }    /* Place your application code here. */
    }
}

/* [] END OF FILE */
