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
volatile uint8 u_min;
volatile uint8 d_min;
volatile uint8 u_hora;
volatile uint8 d_hora;

uint16 count;
uint8 de=1;
uint8 aux;
uint8 Inferior[]={12,9,11,10,9,10,0,9,0,9};
uint8 Superior[]={8,7,6,6,4,5,5,6,8,8};
//                0     1    2   3     4   5    6*    7*     8*    9*   10   11   12
uint16 PasosSM1[]={5700/* 0*/,5380/* 1*/,5140/* 2*/,4810/* 3*/,4500/* 4*/,3900/* 5*/,3680/* 6*/,3500/* 7*/,3100/* 8*/,2925/* 9*/,2300/* 10*/,2070/* 11*/,1740/* 12*/};
uint16 PasosSM2[]={5700,5380,5140,4810,4500,4300,3680,3500,3100,2925,2300,2070,1740};   
uint16 PasosSM3[]={5700,5380,5140,4810,4500,4300,3680,3500,3100,2925,2300,2070,1740};
uint16 PasosSM4[]={5700,5380,5140,4810,4500,4300,3680,3500,3100,2925,2300,2070,1740};


void visualLCD(){

     LCD_Position(0,0);
     LCD_PrintString("             ");//Se Borra
     LCD_Position(0,0);
     LCD_PrintNumber(d_hora);
     LCD_PrintNumber(u_hora);
     LCD_PrintString(":");
     LCD_PrintNumber(d_min);
     LCD_PrintNumber(u_min);
     LCD_PrintString(":");
     LCD_PrintNumber(seg/10);
    LCD_PrintNumber(seg%10);

}


void Numero(uint8 numero,uint8 motor)
{
    
    for(uint16 i=3200;i<=5700;i=i+300){
     switch (motor){
                case 1:
                PWM_WriteCompare1(i);  
                break;
                case 2:
                PWM_WriteCompare2(i);
                break;
                case 3:
                PWM_1_WriteCompare1(i);  
                break;
                case 4:
                PWM_1_WriteCompare2(i);
                break;
                default:
                break;
            }
    CyDelay(200);
    }
     for(uint8 i=1;i<=Inferior[numero];i++){
     switch (motor){
                case 1:
                PWM_WriteCompare1(5700-330*i);  
                break;
                case 2:
                PWM_WriteCompare2(5700-330*i);
                break;
                case 3:
                PWM_1_WriteCompare1(5700-330*i);  
                break;
                case 4:
                PWM_1_WriteCompare2(5700-330*i);
                break;
                default:
                break;
            }
     CyDelay(200);
    }
    
    if(Inferior[numero]<Superior[numero]){
        for(uint8 i=0;i<=Superior[numero];i++){ 
            switch (motor){
                case 1:
                PWM_WriteCompare1(PasosSM1[i]);  
                break;
                case 2:
                PWM_WriteCompare2(PasosSM2[i]);  
                break;
                case 3:
                PWM_1_WriteCompare1(PasosSM3[i]);
                break;
                case 4:
                PWM_1_WriteCompare2(PasosSM4[i]);
                break;
                default:
                break;
            }
            CyDelay(200);
        }
    }else{  
            
            switch (motor){
                case 1:
                PWM_WriteCompare1(PasosSM1[Inferior[numero]]);
                switch(numero){
                    case 0:
                        PWM_WriteCompare1(2800); 
                    break;
                    case 1:
                        PWM_WriteCompare1(3300); 
                    break;
                    case 4:
                        PWM_WriteCompare1(4200); 
                    default:
                        for(uint8 i=Inferior[numero];i>Superior[numero];i--){
                            PWM_WriteCompare1(PasosSM1[i]); }
                    break;
                }
                break;
                case 3:
                PWM_1_WriteCompare1(PasosSM3[Inferior[numero]]);
                switch(numero){
                    case 0:
                    
                    break;
                    case 1:
                    
                    break;              
                    default:
                        for(uint8 i=Inferior[numero];i>Superior[numero];i--){
                             PWM_1_WriteCompare1(PasosSM3[i]);}
                    break;
                }
                        
                break;
                case 2:
                switch(numero){
                    PWM_WriteCompare2(PasosSM2[Inferior[numero]]);
                    case 1:
                        PWM_WriteCompare2(3300); 
                    break;
                    case 2:
                        PWM_WriteCompare2(3590); 
                    break;
                    case 4:
                        PWM_WriteCompare2(4400); 
                    break;
                    case 5:
                        PWM_WriteCompare2(4000); 
                    break;
                    case 7:
                        PWM_WriteCompare2(3690); 
                    break;
                    default:
                        for(uint8 i=Inferior[numero];i>Superior[numero];i--){
                        PWM_WriteCompare2(PasosSM2[i]);
                        }
                    break;
                }
                break;
                case 4:
                PWM_1_WriteCompare2(PasosSM4[Inferior[numero]]);
                switch(numero){
                    case 0:
                    
                    break;
                    case 1:
                    
                    break;              
                    default:
                        for(uint8 i=Inferior[numero];i>Superior[numero];i--){
                            PWM_1_WriteCompare2(PasosSM4[i]);
                        }
                    break;
                }
                break;
                
                default:
                break;
            }
            CyDelay(200); 
        }
        
    }
void tiempo(uint8 aumento){
seg=seg+aumento;
 if(seg>=60){    
		seg=0;
		u_min++;
		if(u_min == 10){
			u_min=0;
			d_min++;
			if(d_min==6){
				d_min=0;
				u_hora++;
				if(u_hora==10){
					u_hora=0;
					d_hora++;
                    if(d_hora==2){
						    //Reinicia Reloj
			    		d_hora=0;
						}
                    //Numero(d_hora,4);
					}
                //Numero(u_hora,3);
				}
                //Numero(d_min,1);
			}
            Numero(u_min,3);
		}
        
	}


CY_ISR(INT_SE){
      tiempo(1); // Se llama tiempo cuando se llega al limite
      visualLCD();  
}
    
CY_ISR(INT_SWI){
    CyDelay(1);
    switch(SWI_Read()){
    case 0b00000001:
      if(aux==1){
        LCD_Position(1,0);
        LCD_PrintString("Configuracion");
        Timer_Stop();
        aux=0;
        }else{
        LCD_Position(1,0);
        LCD_PrintString("             ");
        Timer_Start();
        aux=1;
      }
        break;
    case 0b00000010:
        if(aux==0){
        tiempo(60);
        seg=0;//Segundos en Cero
        }
        visualLCD();
        break;
     default:
        break;
    }
    SWI_ClearInterrupt();
}

int main(){

    
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    ISR_SWI_StartEx(INT_SWI);
    ISR_SE_StartEx(INT_SE);
    PWM_Start();
    PWM_1_Start();
    LCD_Start();
    Timer_Start();
     
    d_hora=0;
    u_hora=0;
    d_min=0;
    u_min=0;
    seg=0;
    aux=1;
    Numero(u_min,1);
    Numero(d_min,2);
    Numero(u_hora,3);
    Numero(d_hora,4);

    for(;;)
    {   
    //Numero(uint8 numero,uint8 motor)  
        
        
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
         