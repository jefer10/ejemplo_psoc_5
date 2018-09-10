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
uint16 volt;
int main(void)
{
    //CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD_Start();
    ADC_Start();
    LCD_PrintString("Voltaje:");
    for(;;)
    {
        LCD_Position(1,8);
        ADC_StartConvert();
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        volt=ADC_GetResult16();
        volt=ADC_CountsTo_mVolts(volt);
        LCD_PrintDecUint16(volt);
        LCD_Position(1,9);
        LCD_PrintDecUint16(volt);
        LCD_Position(1,9);
        LCD_PutChar('.');
        LCD_Position(1,13);
        LCD_PutChar('V');
        CyDelay(1000);
        
    }
}

/* [] END OF FILE */
