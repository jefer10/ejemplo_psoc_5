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
uint8 Inferior[]={12,9,11,10,9,11,0,9,0,11};
uint8 Superior[]={10,11,6,6,4,5,5,6,8,8};


void visual(uint16 co){

 LCD_Position(1,0);
        LCD_PrintString("            ");
        LCD_Position(1,0);
        LCD_PrintNumber(co);

}

void Numero(uint8 numero)
{
    
    for(uint16 i=1600;i<=5700;i=i+100){
    
    PWM_WriteCompare(i);
    CyDelay(100);
    }
     for(uint8 i=0;i<=Inferior[numero];i++){
     PWM_WriteCompare(5700-330*i);
     visual(5700-330*i);
     CyDelay(1000);
    }
    if(Inferior[numero]<Superior[numero]){
    for(uint8 i=Inferior[numero];i>=Superior[numero];i--){ 
     PWM_WriteCompare(5700-330*i);
    visual(5700-330*i); 
    CyDelay(1000);
    }
    
    }else{
    for(uint8 i=0;i<=Superior[numero];i++){
    PWM_WriteCompare(5700-330*i);
    visual(5700-330*i); 
     CyDelay(1000);
    }
    }
    
}



int main(){

    LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("Numero");
    
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    PWM_Start();
    
    for(;;)
    {
        LCD_Position(0,10);
        LCD_PrintNumber(1);
        
        
        Numero(1);
        
        CyDelay(2000);
        
    /* CODIGO DE PRUEBA MOTOR*/    
       /*
    if (count>=5700)//(5700 azul) maximo 784 (180°)
    {
		de=0;
	}
	if(count<=1600)// (1600 azul) minimo 154(0°) ó 155 
    {
		de=1;
	}
         if(de==1){//con una adiccion de 20 cambia 5° y con 40 cambia 10°
            count=count+340;
        }else{
            count=count-340;}
        
        while(PWM_STATUS_TC==0);
        PWM_WriteCompare(count);
        LCD_Position(1,0);
        LCD_PrintString("            ");
        LCD_Position(1,0);
        LCD_PrintNumber(count);
        PWM_WriteCompare(count);
        CyDelay(1000);
        
     */
    }
}
         