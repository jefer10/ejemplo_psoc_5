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

uint8 DMA_Chan;
uint8 DMA_TD[1];


const uint8 Tabla[]={
128,131,134,137,140,144,147,150,153,156,159,162,165,168,171,174,
177,180,182,185,188,191,194,196,199,201,204,206,209,211,214,216,
218,220,222,224,226,228,230,232,234,236,237,239,240,242,243,244,
246,247,248,249,250,251,251,252,253,253,254,254,254,255,255,255,
255,255,255,255,254,254,253,253,252,252,251,250,249,248,247,246,
245,244,242,241,240,238,236,235,233,231,229,227,225,223,221,219,
217,215,212,210,208,205,203,200,197,195,192,189,187,184,181,178,
175,172,169,166,164,160,157,154,151,148,145,142,139,136,133,130,
126,123,120,117,114,111,108,105,102,99,96,92,89,87,84,81,
78,75,72,69,67,64,61,59,56,53,51,48,46,44,41,39,37,35,33,
31,29,27,25,23,21,20,18,16,15,14,12,11,10,9,8,7,6,5,4,4,
3,3,2,2,1,1,1,1,1,1,1,2,2,2,3,3,4,5,5,6,7,8,9,10,12,13,14,16,
17,19,20,22,24,26,28,30,32,34,36,38,40,42,45,47,50,52,55,57,60,
62,65,68,71,74,76,79,82,85,88,91,94,97,100,103,106,109,112,116,
119,122,125,128   
};

int main(void)
{
    
    /* Defines for DMA */
#define DMA_BYTES_PER_BURST 1
#define DMA_REQUEST_PER_BURST 1
#define DMA_SRC_BASE (CYDEV_FLS_BASE)
#define DMA_DST_BASE (CYDEV_PERIPH_BASE)

/* Variable declarations for DMA */
/* Move these variable declarations to the top of the function */


/* DMA Configuration for DMA */
    DMA_Chan = DMA_DmaInitialize(DMA_BYTES_PER_BURST, DMA_REQUEST_PER_BURST, 
    HI16(DMA_SRC_BASE), HI16(DMA_DST_BASE));
    DMA_TD[0] = CyDmaTdAllocate();
    CyDmaTdSetConfiguration(DMA_TD[0], 256, DMA_TD[0], CY_DMA_TD_INC_SRC_ADR);
    CyDmaTdSetAddress(DMA_TD[0], LO16((uint32)Tabla), LO16((uint32)VDAC8_Data_PTR));
    CyDmaChSetInitialTd(DMA_Chan, DMA_TD[0]);
    CyDmaChEnable(DMA_Chan, 1);
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    
    VDAC8_Start();
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */