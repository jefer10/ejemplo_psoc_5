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
    count=468;//90°
    PWM_WriteCompare(count);

    for(;;)
    {
       /* Place your application code here. */
    if (count>=780)//maximo 784 (180°)
    {
		de=0;
	}
	if(count<=154)//minimo 154(0°) ó 155 
    {
		de=1;
	}
         if(de==1){//con una adiccion de 20 cambia 5° y con 40 cambia 10°
            count=count+40;
        }else{
            count=count-40;}
        
        while(PWM_STATUS_TC==0);
        if(count<154)
        {
            count=154;
        }
        if (count>780)
        {
            count=780;
        }
        PWM_WriteCompare(count);
        LCD_Position(1,0);
        LCD_PrintString("            ");
        LCD_Position(1,0);
        LCD_PrintNumber(count);
            
        CyDelay(1000);
     
    }
}
         