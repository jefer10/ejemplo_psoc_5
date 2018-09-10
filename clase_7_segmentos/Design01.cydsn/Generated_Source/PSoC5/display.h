/*******************************************************************************
* File Name: display.h
* Version 1.10
*
* Description:
*  This file provides constants and parameter values and API definition for the
*  LED Driver Component
*
* Note:
*  None
*
********************************************************************************
* Copyright 2013-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CY_LED_Driver_display_H)
#define CY_LED_Driver_display_H


/***************************************
*   Conditional Compilation Parameters
***************************************/
#define display_BRIGHTNESS_EN                (1u)
#define display_COM_DRIVE                    (1u)
#define display_SEG_DRIVE                    (0u)
#define display_NUM_COM                      (2u)
#define display_NUM_SEG                      (7u)
#define display_TWO_NUM_COM                  ((uint8)((uint8)display_NUM_COM << 1u))

/* Error message for removed commons control register through optimization */
#ifdef display_Com_Driver_Sync_ctrl_reg__REMOVED
    #error LED_Driver_v1_10 requires all the signals from the commons terminal to be connected to pins.
#endif /* display_Com_Driver_Sync_ctrl_reg__REMOVED */

/* Error message for removed segments control registers through optimization */
#if defined display_Seg_Driver_L_Sync_ctrl_reg__REMOVED || \
defined display_Seg_Driver_M_Sync_ctrl_reg__REMOVED || \
defined display_Seg_Driver_H_Sync_ctrl_reg__REMOVED
    #error LED_Driver_v1_10 requires all the signals from the segments terminal to be connected to pins.
#endif /* display_Seg_Driver_L_Sync_ctrl_reg__REMOVED */


/***************************************
*   Header files
***************************************/
#include <display_Com_Driver.h>
#include <display_Seg_Driver_L.h>
#if (display_NUM_SEG > 8u)
    #include <display_Seg_Driver_M.h>
#endif /* Segment_M control register */
#if (display_NUM_SEG > 16u)
    #include <display_Seg_Driver_H.h>
#endif /* Segment_H control register */

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#ifndef CY_PSOC5A
    #error Component LED_Driver_v1_10 requires cy_boot v3.0 or later
#endif /* CY_PSOC5A */


/***************************************
*        Structure Definitions
***************************************/
typedef struct
{
    uint8 ledEnableState;
    /* Backup the segment values when going to sleep. (Stop() clears the buffers) */
    uint8 segLBackup[display_NUM_COM];
    #if (display_NUM_SEG > 8u) 
        uint8 segMBackup[display_NUM_COM];
    #endif /* (display_NUM_SEG > 8u) */
    #if (display_NUM_SEG > 16u) 
        uint8 segHBackup[display_NUM_COM];
    #endif /* (display_NUM_SEG > 16u) */
}display_backupStruct;


/***************************************
*        Function Prototypes
***************************************/
void display_Init(void)                       ;
void display_Enable(void)                     ;
void display_Start(void)                      ;
void display_Stop(void)                       ;
void display_SetDisplayRAM(uint8 value, uint8 position) 
                                                        ;
void display_SetRC(uint8 row, uint8 column)    ;
void display_ClearRC(uint8 row, uint8 column)  ;
void display_ToggleRC(uint8 row, uint8 column) ;
uint8 display_GetRC(uint8 row, uint8 column)   ;
void display_ClearDisplay(uint8 position)      ;
void display_ClearDisplayAll(void)             ;
void display_Write7SegNumberDec(int32 number, uint8 position, uint8 digits, uint8 alignment)
                                                        ;
void display_Write7SegNumberHex(uint32 number, uint8 position, uint8 digits, uint8 alignment)
                                                        ;
void display_WriteString7Seg(char8 const character[], uint8 position)
                                                        ;
void display_PutChar7Seg(char8 character , uint8 position)
                                                        ;
void display_Write7SegDigitDec(uint8 digit, uint8 position)
                                                        ;
void display_Write7SegDigitHex(uint8 digit, uint8 position)
                                                        ;
void display_Write14SegNumberDec(int32 number, uint8 position, uint8 digits, uint8 alignment)
                                                        ;
void display_Write14SegNumberHex(uint32 number, uint8 position, uint8 digits, uint8 alignment)
                                                        ;
void display_WriteString14Seg(char8 const character[], uint8 position)
                                                        ;
void display_PutChar14Seg(char8 character , uint8 position)
                                                        ;
void display_Write14SegDigitDec(uint8 digit, uint8 position)
                                                        ;
void display_Write14SegDigitHex(uint8 digit, uint8 position)
                                                        ;
void display_Write16SegNumberDec(int32 number, uint8 position, uint8 digits, uint8 alignment)
                                                        ;
void display_Write16SegNumberHex(uint32 number, uint8 position, uint8 digits, uint8 alignment)
                                                        ;
void display_WriteString16Seg(char8 const character[], uint8 position)
                                                        ;
void display_PutChar16Seg(char8 character , uint8 position)
                                                        ;
void display_Write16SegDigitDec(uint8 digit, uint8 position)
                                                        ;
void display_Write16SegDigitHex(uint8 digit, uint8 position)
                                                        ;
void display_PutDecimalPoint(uint8 dp, uint8 position)
                                                        ;
uint8 display_GetDecimalPoint(uint8 position)  ;
uint8 display_EncodeNumber7Seg(uint8 number)   ;
uint8 display_EncodeChar7Seg(char8 input)      ;
uint16 display_EncodeNumber14Seg(uint8 number) ;
uint16 display_EncodeChar14Seg(char8 input)    ;
uint16 display_EncodeNumber16Seg(uint8 number) ;
uint16 display_EncodeChar16Seg(char8 input)    ;
void display_SetBrightness(uint8 bright, uint8 position)
                                                        ;
uint8 display_GetBrightness(uint8 position)    ;
void display_Sleep(void)                       ;
void display_Wakeup(void)                      ;


/***************************************
*           Global Variables
***************************************/
extern uint8 display_initVar;
extern uint8 display_enableVar;

/* Buffers used to hold the display(segment) values to be transferred to the control registers */
extern uint8 display_segLBuffer[display_NUM_COM];
#if (display_NUM_SEG > 8u) 
    extern uint8 display_segMBuffer[display_NUM_COM];
#endif /* (display_NUM_SEG > 8u) */
#if (display_NUM_SEG > 16u) 
    extern uint8 display_segHBuffer[display_NUM_COM];
#endif /* (display_NUM_SEG > 16u) */


/***************************************
*           API Constants
***************************************/

/* Related to conditional compilation */
#define display_HIGH                   (0x01u)
#define display_ENABLED                (0x01u)

/* Number of DMA channels */
#if (display_BRIGHTNESS_EN == display_ENABLED)
    #define display_CHANNEL_LIMIT      (0x03u)
#else
    #define display_CHANNEL_LIMIT      (0x02u)
#endif /* (display_BRIGHTNESS_EN == display_ENABLED) */

/* Defines related to sign extraction for number displays */
#define display_SIGNED                 (0x01u)
#define display_UNSIGNED               (0x00u)
#define display_ZERO_NEG               ((int32)0x00000000)

/* Brightness control defines */
#define display_INIT_BRIGHT            (0xFFu)

/* Segment display defines */
#if(display_SEG_DRIVE == display_HIGH)
    #define display_CLEAR              (0x00u)
    #define display_CLEAR_16           ((uint16)0x0000u)
    #define display_ZERO_7CHAR         (0x3Fu)
    #define display_ZERO_14CHAR        ((uint16)0x243Fu)
    #define display_ZERO_16CHAR        ((uint16)0x90FFu)
#else
    #define display_CLEAR              (0xFFu)
    #define display_CLEAR_16           ((uint16)0xFFFFu)
    #define display_ZERO_7CHAR         (0xC0u)
    #define display_ZERO_14CHAR        ((uint16)0xDBC0u)
    #define display_ZERO_16CHAR        ((uint16)0x6F00u)
#endif /* (display_SEG_DRIVE == display_HIGH) */

/* Shifts and 4-bit operation mask */
#define display_SHIFT_NIBBLE           (0x04u)
#define display_NIBBLE_MASK            (0x0Fu)
#define display_SHIFT_BYTE             (0x08u)

/* ASCII table access defines */
#define display_SEG_ASCII_OFFSET       (0x02u)
#define display_SEG_ASCII_LIM_HI       (0x08u)
#define display_SEG_ASCII_LIM_LO       (0x01u)

/* Decimal point defines */
#define display_DEC_POINT              (0x07u)
#define display_DEC_POINT_MASK         (0x01u)
#if(display_SEG_DRIVE == display_HIGH)
    #define display_DEC_POINT_VALUE    (0x80u)
#else
    #define display_DEC_POINT_VALUE    (0x7Fu)
#endif /* (display_SEG_DRIVE == display_HIGH) */

/* 7-seg position to register mapping defines */
#define display_SEG_REG_LOW            (0x00u)
#define display_SEG_REG_MID            (0x01u)
#define display_SEG_REG_HIGH           (0x02u)

/* Segment display alignment defines */
#define display_RIGHT_ALIGN            (0x00u)
#define display_LEFT_ALIGN             (0x01u)
#define display_ZERO_PAD               (0x02u)


/***************************************
*           Registers
***************************************/
#define display_CONTROL_REG_BASE       (CYDEV_PERIPH_BASE)
#define display_SRAM_BASE              (CYDEV_SRAM_BASE)

#define display_COM_CONTROL_PTR        (display_Com_Driver_Control_PTR)
#define display_SEG_L_CONTROL_PTR      (display_Seg_Driver_L_Control_PTR)

#if (display_NUM_SEG > 8u)
    #define display_SEG_M_CONTROL_PTR  (display_Seg_Driver_M_Control_PTR)
#endif /* (display_NUM_SEG > 8u) */
#if (display_NUM_SEG > 16u)
    #define display_SEG_H_CONTROL_PTR  (display_Seg_Driver_H_Control_PTR)
#endif /* (display_NUM_SEG > 16u) */


/***************************************
*           UDB PWM Registers
***************************************/
/* Control register */
#define display_CONTROL_REG            (*(reg8 *) display_bLED_PWM_CtlReg__CONTROL_REG)
#define display_CONTROL_PTR            ( (reg8 *) display_bLED_PWM_CtlReg__CONTROL_REG)

/* Counter register */
#define display_COUNTER_REG            (*(reg8 *) display_bLED_PWM_PwmDP_u0__A1_REG)
#define display_COUNTER_PTR            ((reg8 *) display_bLED_PWM_PwmDP_u0__A1_REG)
/* Compare value buffer */
#define display_COMPARE_REG            (*(reg8 *) display_bLED_PWM_PwmDP_u0__D0_REG)
#define display_COMPARE_PTR            ((reg8 *) display_bLED_PWM_PwmDP_u0__D0_REG)


/***************************************
*          Register Constants
***************************************/
/* Control Register Enable/Disable. Also use for display_enableVar */
#define display_CTRL_ENABLE            (0x01u)
#define display_CTRL_DISABLE           (0x00u)

#endif /* CY_LED_Driver_display_H Header File */


/* [] END OF FILE */
