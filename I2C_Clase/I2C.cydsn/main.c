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
#define SlaveAddress  0x60

uint8 result;
uint8 Tabla[4];
uint16 angulo;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD_Start();
    I2C_Start();
        LCD_Position(0,2);
        LCD_ClearDisplay();
        LCD_PrintString("resultado:");
        
    for(;;)
    {
        /* Place your application code here. */

        do
        {
            result=I2C_MasterSendRestart(SlaveAddress,I2C_WRITE_XFER_MODE);//es un cero
            
        }
        while(result!=I2C_MSTR_NO_ERROR);
        
        I2C_MasterWriteByte(0x02);//Direccion de memoria inicial
        I2C_MasterSendRestart(SlaveAddress,I2C_READ_XFER_MODE);
        for(uint8 i=0;i<3;i++){
        
        Tabla[i]=I2C_MasterReadByte(I2C_ACK_DATA);
        
        }
        
        Tabla[3]=I2C_MasterReadByte(I2C_NAK_DATA);
        I2C_MasterSendStop();
        angulo=(uint16)Tabla[0];
        angulo=angulo<<8;
        angulo=angulo|Tabla[1];
        LCD_Position(1,1);
        LCD_PrintDecUint16(angulo);
        LCD_Position(1,0);
        LCD_PrintDecUint16(angulo);
        LCD_Position(1,3);
        LCD_PutChar('.');
        
        LCD_PrintNumber(Tabla[2]);
        /*
        I2C_MasterWriteByte(0x1);//direccion de memoria
        I2C_MasterSendRestart(SlaveAddress,I2C_READ_XFER_MODE);
        result=I2C_MasterReadByte(I2C_NAK_DATA);
        I2C_MasterSendStop();
        
        
        LCD_PrintString("resultado:");
        LCD_Position(1,2);
        LCD_PrintNumber(result);*/
        CyDelay(1000);
       
    }
}

/* [] END OF FILE */
