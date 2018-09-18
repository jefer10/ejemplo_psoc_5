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
volatile uint8 seg;
volatile uint8 min;
volatile uint8 hora;
volatile uint8 medio_dia;
uint16 count;
uint8 de=1;
uint8 Inferior[]={12,9,11,10,9,10,0,9,0,9};
uint8 Superior[]={8,7,6,6,4,5,5,6,8,8};
//                0     1    2   3     4   5    6    7     8*    9*   10   11   12
uint16 PasosS[]={5700,5380,5140,4810,4500,4200,4000,3990,3260,2800,2400,2070,1740};

void visual(uint16 co){

 LCD_Position(1,0);
        LCD_PrintString("            ");
        LCD_Position(1,0);
        LCD_PrintNumber(co);

}

void Numero(uint8 numero)
{
    
    for(uint16 i=3200;i<=5700;i=i+300){
    PWM_WriteCompare1(i);
    CyDelay(200);
    }
     for(uint8 i=1;i<=Inferior[numero];i++){
     PWM_WriteCompare1(5700-330*i);
     visual(i);
     CyDelay(200);
    }
    
    if(Inferior[numero]<Superior[numero]){
        for(uint8 i=0;i<=Superior[numero];i++){ 
        PWM_WriteCompare1(PasosS[i]);
        visual(i); 
        CyDelay(200);
        }
    }else{
        for(uint8 i=Inferior[numero];i>Superior[numero];i--){
        PWM_WriteCompare1(PasosS[i]);
        visual(i); 
        CyDelay(200);
        }
    }
}


CY_ISR(INT_DI){
    hora=0;
    min=0;
    medio_dia=1+medio_dia;
    if (medio_dia>1)
    {
        medio_dia=0;
    }
    
}


CY_ISR(INT_HO){
    hora=hora+1;
    if (hora>12)
    {
        hora=0;
    }
}


CY_ISR(INT_MI){
    min=min+1;
    if (min>60)
    {
        min=0;
    }
 
}


CY_ISR(INT_SE){
    
}



int main(){

    min=0;
    hora=0;
    seg=0;
    medio_dia=0;
    
    LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("Numero");
    
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    ISR_HO_StartEx(INT_HO);
    ISR_SE_StartEx(INT_SE);
    ISR_MI_StartEx(INT_MI);
    ISR_DI_StartEx(INT_DI);
    PWM_Start();
    
    for(;;)
    {   /*
        LCD_Position(0,10);
        LCD_PrintNumber(0);        
        Numero(0);
        CyDelay(10000);
        LCD_Position(0,10);
        LCD_PrintNumber(1);
        Numero(1);
        CyDelay(10000);
 */
        LCD_Position(0,10);
        LCD_PrintNumber(2);
        Numero(2);
        CyDelay(8000);
        LCD_Position(0,10);
        LCD_PrintNumber(3);
        Numero(3);
        CyDelay(8000);
        LCD_Position(0,10);
        LCD_PrintNumber(4);
        Numero(4);
        CyDelay(8000);
        LCD_Position(0,10);
        LCD_PrintNumber(5);
        Numero(5);
        CyDelay(8000);
        LCD_Position(0,10);
        LCD_PrintNumber(6);
        Numero(6);
        CyDelay(8000);
        LCD_Position(0,10);
        LCD_PrintNumber(7);
        Numero(7);
        CyDelay(8000);
        LCD_Position(0,10);
        LCD_PrintNumber(8);
        Numero(8);
        CyDelay(8000);
        LCD_Position(0,10);
        LCD_PrintNumber(9);
        Numero(9);
        CyDelay(80000);
        
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
         