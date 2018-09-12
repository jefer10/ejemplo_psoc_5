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
uint16 count;
uint8 de=1;
/*
CY_ISR(INT_sw){
    switch(sw_Read())
    {
        case 1:
            if(count!=255)count++;
            while(PWM_STATUS_TC==0);
            PWM_WriteCompare(count);
            break;
        case 2:
            if(count!=0)count--;
            while(PWM_STATUS_TC==0);
            PWM_WriteCompare(count);
            break;
            default:
            
            break;
        }
    sw_ClearInterrupt();
    
}
    */
int main(void)
{
    LCD_Start();
    LCD_Position(0,3);
    LCD_PrintString("Valor PWM:");
    
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    PWM_Start();
    count=150;
    PWM_WriteCompare(count);

    for(;;)
    {
       /* Place your application code here. */
       if (count==800){
		de=0;
	}
	if(count==150){
		de=1;
	}
         if(de==1){
            count=count+25;
        }else{
            count=count-25;}
        
            while(PWM_STATUS_TC==0);
            PWM_WriteCompare(count);
        LCD_Position(1,0);
        LCD_PrintString("            ");
        LCD_Position(1,0);
        LCD_PrintNumber(count);
            
        CyDelay(1000);
        
    }
}
         