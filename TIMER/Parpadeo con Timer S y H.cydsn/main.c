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

int main(void)
{
    //CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    Timer_1_Start();
    Timer_2_Start();
    
    for(;;)
    {
        /* Place your application code here. */
        while((Timer_2_ReadStatusRegister()&0x80)==0);
        LED2_Write(~LED2_Read());
        
    }
}

/* [] END OF FILE */
