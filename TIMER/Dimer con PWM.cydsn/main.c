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
uint16 PasosSM1[]={5700/* 0*/,5380/* 1*/,5140/* 2*/,4810/* 3*/,4500/* 4*/,4270/* 5*/,4000/* 6*/,3650/* 7*/,3170/* 8*/,3000/* 9*/,2300/* 10*/,2070/* 11*/,1740/* 12*/};
uint16 PasosSM2[]={5700,5380,5140,4810,4500,4300,4000,3590,3300,2950,2300,2070,1740};   
uint16 PasosSM3[]={5700,5380,5140,4810,4500,4250,3800,3500,3300,2850,2300,2070,1740};
uint16 PasosSM4[]={5700,5380,5140,4810,4500,4300,3800,3480,3220,2830,2300,2070,1740};



void visual(uint16 numero,uint8 motor){
        switch(motor){
                    case 1:
                        LCD_Position(0,0); 
                        LCD_PrintNumber(numero);
                    break;
                    case 2:
                        LCD_Position(0,8); 
                        
                        LCD_PrintNumber(numero);
                    break;
                    case 3:
                        LCD_Position(1,0);  
                        
                        LCD_PrintNumber(numero);
                    case 4:
                        LCD_Position(1,8);  
                        
                        LCD_PrintNumber(numero);
                    break;
                    default:
                    break;
                        
        }


}

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
                if(numero==7||numero==9){
                PWM_WriteCompare2(5700-365*i);
                }else{
                PWM_WriteCompare2(5700-330*i);}
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
            switch (motor){
                case 1:
                if(numero==6){
                    PWM_WriteCompare1(4000);
                    //visual(4000,1);
                }
                else{
                    PWM_WriteCompare1(2800);
                    //visual(2900,1);  
                    }
                break;
                case 2:
                if(numero==6){
                    PWM_WriteCompare2(3900);
                    //visual(3950,2);
                }
                else{
                    PWM_WriteCompare2(2800);
                    //visual(2800,2);  
                    } 
                break;
                case 3:
                if(numero==6){
                    PWM_1_WriteCompare1(3900);
                    //visual(3980,3);
                }
                else{
                    PWM_1_WriteCompare1(2800);
                    //visual(2700,3);  
                    }
                break;
                case 4:
                if(numero==6){
                    PWM_1_WriteCompare2(3900);
                    //visual(3890,4);
                }
                else{
                    PWM_1_WriteCompare2(2800);
                    //visual(2800,4);  
                    }
                break;
                default:
                break;
            }
            CyDelay(200);

    }else{  
            switch (motor){
                case 1:
                PWM_WriteCompare1(PasosSM1[Inferior[numero]]);
                switch(numero){
                    case 0:
                        PWM_WriteCompare1(3000);
                        //visual(3300,1); 
                    break;
                    case 1:
                        PWM_WriteCompare1(3390); 
                        //visual(3390,1); 
                    break;
                    case 2:
                        PWM_WriteCompare1(3690); 
                        //visual(3690,1); 
                    break;
                    case 7:
                        PWM_WriteCompare1(3700); 
                        //visual(3700,1); 
                    break;
                      case 9:
                        PWM_WriteCompare1(3100);
                        //visual(3300,1); 
                    break;      
                        
                    default:
                        for(uint8 i=Inferior[numero];i>Superior[numero];i--){
                            PWM_WriteCompare1(PasosSM1[i]);
                            //visual(PasosSM1[i],1);   
                            CyDelay(200);
                        }
                    break;
                }
                break;
                case 3:
                PWM_1_WriteCompare1(PasosSM3[Inferior[numero]]);
                switch(numero){  
                    
                     case 9:
                        PWM_1_WriteCompare1(2950);
                    break;
                    default:
                        for(uint8 i=Inferior[numero];i>Superior[numero];i--){
                             PWM_1_WriteCompare1(PasosSM3[i]);
                             //visual(PasosSM3[i],3);
                            CyDelay(200);
                        }
                        
                    break;
                }
                        
                break;
                case 2:
                switch(numero){
                    PWM_WriteCompare2(PasosSM2[Inferior[numero]]);
                    case 0:
                        PWM_WriteCompare2(3000); 
                        //visual(3000,2); 
                    break;
                    case 4:
                        PWM_WriteCompare2(4400); 
                        //visual(4400,2); 
                    break;
                    case 6:
                            PWM_WriteCompare2(3900);
                            //visual(3900,3);
                    break;
                    case 7:
                        PWM_WriteCompare2(3330);//hol
                        //visual(3330,2); 
                    break;
                    case 9:
                        PWM_WriteCompare2(2700);
                        //visual(2700,2); 
                    break;
                    default:
                        for(uint8 i=Inferior[numero];i>Superior[numero];i--){
                        PWM_WriteCompare2(PasosSM2[i]);
                        //visual(PasosSM2[i],2); 
                        CyDelay(200);
                        }
                    break;
                }
                break;
                case 4:
                PWM_1_WriteCompare2(PasosSM4[Inferior[numero]]);
                switch(numero){
                    case 4:
                        PWM_1_WriteCompare2(4200);
                        //visual(4200,4);
                    break;
                    case 9:
                        PWM_1_WriteCompare2(3000);
                        //visual(3250,4); 
                    break;
                   
                    default:
                        for(uint8 i=Inferior[numero];i>Superior[numero];i--){
                            PWM_1_WriteCompare2(PasosSM4[i]);
                          //  visual(PasosSM4[i],4);
                            CyDelay(200);
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
                    Numero(d_hora,4);
					}
                Numero(u_hora,3);
				}
                Numero(d_min,1);
			}
            Numero(u_min,1);
		}
        
	}


CY_ISR(INT_SE){
      tiempo(1); // Se llama tiempo cuando se llega al limite
      visualLCD();  
}
    
CY_ISR(INT_SWI){
    CyDelay(1);
    switch(SWI_Read()){
    case 0b00000010:
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
    case 0b00000001:
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
         