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
    ADC_Star();
    VDAC8_Start();
    ADC_StartConvert();
    for(;;)
    {
        /* Place your application code here. */
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        VDAC8_SetValue(ADC_GetResult8());
    }
}

/* [] END OF FILE */
