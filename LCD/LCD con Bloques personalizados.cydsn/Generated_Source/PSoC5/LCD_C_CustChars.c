/*******************************************************************************
* File Name: LCD_C_CustChars.c
* Version 2.20
*
* Description:
*  This file provides the source code for the Character LCD custom character
*  API.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "LCD_C.h"


uint8 const CYCODE LCD_C_customFonts[] = \
{
    /* Character LCD_C_CUSTOM_0   */
        0x00u,    0x01u,    0x03u,    0x0Fu,    0x1Fu,    0x1Eu,    0x1Eu,    0x03u, \
    /* Character LCD_C_CUSTOM_1   */
        0x0Fu,    0x1Du,    0x19u,    0x11u,    0x1Fu,    0x0Fu,    0x0Fu,    0x1Cu, \
    /* Character LCD_C_CUSTOM_2   */
        0x1Cu,    0x16u,    0x13u,    0x13u,    0x11u,    0x1Eu,    0x1Eu,    0x03u, \
    /* Character LCD_C_CUSTOM_3   */
        0x00u,    0x00u,    0x00u,    0x1Cu,    0x1Eu,    0x0Fu,    0x0Fu,    0x18u, \
    /* Character LCD_C_CUSTOM_4   */
        0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u, \
    /* Character LCD_C_CUSTOM_5   */
        0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u, \
    /* Character LCD_C_CUSTOM_6   */
        0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u, \
    /* Character LCD_C_CUSTOM_7   */
        0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u \
 };


/*******************************************************************************
* Function Name: LCD_C_LoadCustomFonts
********************************************************************************
*
* Summary:
*  Loads 8 custom font characters into the LCD Module for use.  Cannot use
*  characters from two different font sets at once, but font sets can be
*  switched out during runtime.
*
* Parameters:
*  customData:  pointer to a constant array of 64 bytes representing 8 custom
*               font characters.
* Return:
*  None.
*
* Theory:
*  Prior to using this function user need to import the pointer to custom
*  font array to your project by writting the following in the source code file
*  where custom font will be used:
*       extern uint8 const CYCODE LCD_Char_customFonts[];
*  This function is not automatically called by the Start() routine and must be
*  called manually by the user.
*
*******************************************************************************/
void LCD_C_LoadCustomFonts(uint8 const customData[]) 
{
    uint8 indexU8;

    LCD_C_IsReady();

    /* Set starting address in the LCD Module.
    * Optionally: Read the current address to restore at a later time.
    */
    LCD_C_WriteControl(LCD_C_CGRAM_0);

    /* Load in the 64 bytes of CustomChar Data */
    for(indexU8 = 0u; indexU8 < LCD_C_CUSTOM_CHAR_SET_LEN; indexU8++)
    {
        LCD_C_WriteData(customData[indexU8]);
    }

    LCD_C_IsReady();
    LCD_C_WriteControl(LCD_C_DDRAM_0);
}


/* [] END OF FILE */
