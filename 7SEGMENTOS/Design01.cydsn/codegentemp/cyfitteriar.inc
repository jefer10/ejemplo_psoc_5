;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* sw */
sw__0__INTTYPE EQU CYREG_PICU3_INTTYPE0
sw__0__MASK EQU 0x01
sw__0__PC EQU CYREG_PRT3_PC0
sw__0__PORT EQU 3
sw__0__SHIFT EQU 0
sw__1__INTTYPE EQU CYREG_PICU3_INTTYPE1
sw__1__MASK EQU 0x02
sw__1__PC EQU CYREG_PRT3_PC1
sw__1__PORT EQU 3
sw__1__SHIFT EQU 1
sw__2__INTTYPE EQU CYREG_PICU3_INTTYPE2
sw__2__MASK EQU 0x04
sw__2__PC EQU CYREG_PRT3_PC2
sw__2__PORT EQU 3
sw__2__SHIFT EQU 2
sw__3__INTTYPE EQU CYREG_PICU3_INTTYPE3
sw__3__MASK EQU 0x08
sw__3__PC EQU CYREG_PRT3_PC3
sw__3__PORT EQU 3
sw__3__SHIFT EQU 3
sw__4__INTTYPE EQU CYREG_PICU3_INTTYPE4
sw__4__MASK EQU 0x10
sw__4__PC EQU CYREG_PRT3_PC4
sw__4__PORT EQU 3
sw__4__SHIFT EQU 4
sw__5__INTTYPE EQU CYREG_PICU3_INTTYPE5
sw__5__MASK EQU 0x20
sw__5__PC EQU CYREG_PRT3_PC5
sw__5__PORT EQU 3
sw__5__SHIFT EQU 5
sw__6__INTTYPE EQU CYREG_PICU3_INTTYPE6
sw__6__MASK EQU 0x40
sw__6__PC EQU CYREG_PRT3_PC6
sw__6__PORT EQU 3
sw__6__SHIFT EQU 6
sw__AG EQU CYREG_PRT3_AG
sw__AMUX EQU CYREG_PRT3_AMUX
sw__BIE EQU CYREG_PRT3_BIE
sw__BIT_MASK EQU CYREG_PRT3_BIT_MASK
sw__BYP EQU CYREG_PRT3_BYP
sw__CTL EQU CYREG_PRT3_CTL
sw__DM0 EQU CYREG_PRT3_DM0
sw__DM1 EQU CYREG_PRT3_DM1
sw__DM2 EQU CYREG_PRT3_DM2
sw__DR EQU CYREG_PRT3_DR
sw__INP_DIS EQU CYREG_PRT3_INP_DIS
sw__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
sw__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
sw__LCD_EN EQU CYREG_PRT3_LCD_EN
sw__MASK EQU 0x7F
sw__PORT EQU 3
sw__PRT EQU CYREG_PRT3_PRT
sw__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
sw__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
sw__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
sw__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
sw__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
sw__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
sw__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
sw__PS EQU CYREG_PRT3_PS
sw__SHIFT EQU 0
sw__SLW EQU CYREG_PRT3_SLW

/* Com_1 */
Com_1__0__INTTYPE EQU CYREG_PICU2_INTTYPE2
Com_1__0__MASK EQU 0x04
Com_1__0__PC EQU CYREG_PRT2_PC2
Com_1__0__PORT EQU 2
Com_1__0__SHIFT EQU 2
Com_1__1__INTTYPE EQU CYREG_PICU2_INTTYPE3
Com_1__1__MASK EQU 0x08
Com_1__1__PC EQU CYREG_PRT2_PC3
Com_1__1__PORT EQU 2
Com_1__1__SHIFT EQU 3
Com_1__AG EQU CYREG_PRT2_AG
Com_1__AMUX EQU CYREG_PRT2_AMUX
Com_1__BIE EQU CYREG_PRT2_BIE
Com_1__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Com_1__BYP EQU CYREG_PRT2_BYP
Com_1__CTL EQU CYREG_PRT2_CTL
Com_1__DM0 EQU CYREG_PRT2_DM0
Com_1__DM1 EQU CYREG_PRT2_DM1
Com_1__DM2 EQU CYREG_PRT2_DM2
Com_1__DR EQU CYREG_PRT2_DR
Com_1__INP_DIS EQU CYREG_PRT2_INP_DIS
Com_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Com_1__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Com_1__LCD_EN EQU CYREG_PRT2_LCD_EN
Com_1__MASK EQU 0x0C
Com_1__PORT EQU 2
Com_1__PRT EQU CYREG_PRT2_PRT
Com_1__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Com_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Com_1__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Com_1__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Com_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Com_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Com_1__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Com_1__PS EQU CYREG_PRT2_PS
Com_1__SHIFT EQU 2
Com_1__SLW EQU CYREG_PRT2_SLW

/* Seg_1 */
Seg_1__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
Seg_1__0__MASK EQU 0x01
Seg_1__0__PC EQU CYREG_PRT0_PC0
Seg_1__0__PORT EQU 0
Seg_1__0__SHIFT EQU 0
Seg_1__1__INTTYPE EQU CYREG_PICU0_INTTYPE1
Seg_1__1__MASK EQU 0x02
Seg_1__1__PC EQU CYREG_PRT0_PC1
Seg_1__1__PORT EQU 0
Seg_1__1__SHIFT EQU 1
Seg_1__2__INTTYPE EQU CYREG_PICU0_INTTYPE2
Seg_1__2__MASK EQU 0x04
Seg_1__2__PC EQU CYREG_PRT0_PC2
Seg_1__2__PORT EQU 0
Seg_1__2__SHIFT EQU 2
Seg_1__3__INTTYPE EQU CYREG_PICU0_INTTYPE3
Seg_1__3__MASK EQU 0x08
Seg_1__3__PC EQU CYREG_PRT0_PC3
Seg_1__3__PORT EQU 0
Seg_1__3__SHIFT EQU 3
Seg_1__4__INTTYPE EQU CYREG_PICU0_INTTYPE4
Seg_1__4__MASK EQU 0x10
Seg_1__4__PC EQU CYREG_PRT0_PC4
Seg_1__4__PORT EQU 0
Seg_1__4__SHIFT EQU 4
Seg_1__5__INTTYPE EQU CYREG_PICU0_INTTYPE5
Seg_1__5__MASK EQU 0x20
Seg_1__5__PC EQU CYREG_PRT0_PC5
Seg_1__5__PORT EQU 0
Seg_1__5__SHIFT EQU 5
Seg_1__6__INTTYPE EQU CYREG_PICU0_INTTYPE6
Seg_1__6__MASK EQU 0x40
Seg_1__6__PC EQU CYREG_PRT0_PC6
Seg_1__6__PORT EQU 0
Seg_1__6__SHIFT EQU 6
Seg_1__AG EQU CYREG_PRT0_AG
Seg_1__AMUX EQU CYREG_PRT0_AMUX
Seg_1__BIE EQU CYREG_PRT0_BIE
Seg_1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Seg_1__BYP EQU CYREG_PRT0_BYP
Seg_1__CTL EQU CYREG_PRT0_CTL
Seg_1__DM0 EQU CYREG_PRT0_DM0
Seg_1__DM1 EQU CYREG_PRT0_DM1
Seg_1__DM2 EQU CYREG_PRT0_DM2
Seg_1__DR EQU CYREG_PRT0_DR
Seg_1__INP_DIS EQU CYREG_PRT0_INP_DIS
Seg_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Seg_1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Seg_1__LCD_EN EQU CYREG_PRT0_LCD_EN
Seg_1__MASK EQU 0x7F
Seg_1__PORT EQU 0
Seg_1__PRT EQU CYREG_PRT0_PRT
Seg_1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Seg_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Seg_1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Seg_1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Seg_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Seg_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Seg_1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Seg_1__PS EQU CYREG_PRT0_PS
Seg_1__SHIFT EQU 0
Seg_1__SLW EQU CYREG_PRT0_SLW

/* display */
display_bLED_PWM_CtlReg__0__MASK EQU 0x01
display_bLED_PWM_CtlReg__0__POS EQU 0
display_bLED_PWM_CtlReg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
display_bLED_PWM_CtlReg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB04_05_CTL
display_bLED_PWM_CtlReg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB04_05_CTL
display_bLED_PWM_CtlReg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB04_05_CTL
display_bLED_PWM_CtlReg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB04_05_CTL
display_bLED_PWM_CtlReg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB04_05_MSK
display_bLED_PWM_CtlReg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB04_05_MSK
display_bLED_PWM_CtlReg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB04_05_MSK
display_bLED_PWM_CtlReg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB04_05_MSK
display_bLED_PWM_CtlReg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
display_bLED_PWM_CtlReg__CONTROL_REG EQU CYREG_B1_UDB04_CTL
display_bLED_PWM_CtlReg__CONTROL_ST_REG EQU CYREG_B1_UDB04_ST_CTL
display_bLED_PWM_CtlReg__COUNT_REG EQU CYREG_B1_UDB04_CTL
display_bLED_PWM_CtlReg__COUNT_ST_REG EQU CYREG_B1_UDB04_ST_CTL
display_bLED_PWM_CtlReg__MASK EQU 0x01
display_bLED_PWM_CtlReg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
display_bLED_PWM_CtlReg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
display_bLED_PWM_CtlReg__PERIOD_REG EQU CYREG_B1_UDB04_MSK
display_bLED_PWM_PwmDP_u0__16BIT_A0_REG EQU CYREG_B1_UDB04_05_A0
display_bLED_PWM_PwmDP_u0__16BIT_A1_REG EQU CYREG_B1_UDB04_05_A1
display_bLED_PWM_PwmDP_u0__16BIT_D0_REG EQU CYREG_B1_UDB04_05_D0
display_bLED_PWM_PwmDP_u0__16BIT_D1_REG EQU CYREG_B1_UDB04_05_D1
display_bLED_PWM_PwmDP_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
display_bLED_PWM_PwmDP_u0__16BIT_F0_REG EQU CYREG_B1_UDB04_05_F0
display_bLED_PWM_PwmDP_u0__16BIT_F1_REG EQU CYREG_B1_UDB04_05_F1
display_bLED_PWM_PwmDP_u0__A0_A1_REG EQU CYREG_B1_UDB04_A0_A1
display_bLED_PWM_PwmDP_u0__A0_REG EQU CYREG_B1_UDB04_A0
display_bLED_PWM_PwmDP_u0__A1_REG EQU CYREG_B1_UDB04_A1
display_bLED_PWM_PwmDP_u0__D0_D1_REG EQU CYREG_B1_UDB04_D0_D1
display_bLED_PWM_PwmDP_u0__D0_REG EQU CYREG_B1_UDB04_D0
display_bLED_PWM_PwmDP_u0__D1_REG EQU CYREG_B1_UDB04_D1
display_bLED_PWM_PwmDP_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
display_bLED_PWM_PwmDP_u0__F0_F1_REG EQU CYREG_B1_UDB04_F0_F1
display_bLED_PWM_PwmDP_u0__F0_REG EQU CYREG_B1_UDB04_F0
display_bLED_PWM_PwmDP_u0__F1_REG EQU CYREG_B1_UDB04_F1
display_bLED_PWM_PwmDP_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
display_bLED_PWM_PwmDP_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
display_ClkInternal__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
display_ClkInternal__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
display_ClkInternal__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
display_ClkInternal__CFG2_SRC_SEL_MASK EQU 0x07
display_ClkInternal__INDEX EQU 0x00
display_ClkInternal__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
display_ClkInternal__PM_ACT_MSK EQU 0x01
display_ClkInternal__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
display_ClkInternal__PM_STBY_MSK EQU 0x01
display_Com_Driver_Sync_ctrl_reg__0__MASK EQU 0x01
display_Com_Driver_Sync_ctrl_reg__0__POS EQU 0
display_Com_Driver_Sync_ctrl_reg__1__MASK EQU 0x02
display_Com_Driver_Sync_ctrl_reg__1__POS EQU 1
display_Com_Driver_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
display_Com_Driver_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
display_Com_Driver_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
display_Com_Driver_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
display_Com_Driver_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
display_Com_Driver_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB10_11_MSK
display_Com_Driver_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
display_Com_Driver_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB10_11_MSK
display_Com_Driver_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
display_Com_Driver_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
display_Com_Driver_Sync_ctrl_reg__CONTROL_REG EQU CYREG_B0_UDB10_CTL
display_Com_Driver_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_B0_UDB10_ST_CTL
display_Com_Driver_Sync_ctrl_reg__COUNT_REG EQU CYREG_B0_UDB10_CTL
display_Com_Driver_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_B0_UDB10_ST_CTL
display_Com_Driver_Sync_ctrl_reg__MASK EQU 0x03
display_Com_Driver_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
display_Com_Driver_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
display_Com_Driver_Sync_ctrl_reg__PERIOD_REG EQU CYREG_B0_UDB10_MSK
display_DMA_BC__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
display_DMA_BC__DRQ_NUMBER EQU 0
display_DMA_BC__NUMBEROF_TDS EQU 0
display_DMA_BC__PRIORITY EQU 2
display_DMA_BC__TERMIN_EN EQU 0
display_DMA_BC__TERMIN_SEL EQU 0
display_DMA_BC__TERMOUT0_EN EQU 0
display_DMA_BC__TERMOUT0_SEL EQU 0
display_DMA_BC__TERMOUT1_EN EQU 0
display_DMA_BC__TERMOUT1_SEL EQU 0
display_DMA_Com__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
display_DMA_Com__DRQ_NUMBER EQU 1
display_DMA_Com__NUMBEROF_TDS EQU 0
display_DMA_Com__PRIORITY EQU 2
display_DMA_Com__TERMIN_EN EQU 0
display_DMA_Com__TERMIN_SEL EQU 0
display_DMA_Com__TERMOUT0_EN EQU 0
display_DMA_Com__TERMOUT0_SEL EQU 0
display_DMA_Com__TERMOUT1_EN EQU 0
display_DMA_Com__TERMOUT1_SEL EQU 0
display_DMA_Seg__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
display_DMA_Seg__DRQ_NUMBER EQU 2
display_DMA_Seg__NUMBEROF_TDS EQU 0
display_DMA_Seg__PRIORITY EQU 2
display_DMA_Seg__TERMIN_EN EQU 0
display_DMA_Seg__TERMIN_SEL EQU 0
display_DMA_Seg__TERMOUT0_EN EQU 1
display_DMA_Seg__TERMOUT0_SEL EQU 2
display_DMA_Seg__TERMOUT1_EN EQU 0
display_DMA_Seg__TERMOUT1_SEL EQU 0
display_Seg_Driver_L_Sync_ctrl_reg__0__MASK EQU 0x01
display_Seg_Driver_L_Sync_ctrl_reg__0__POS EQU 0
display_Seg_Driver_L_Sync_ctrl_reg__1__MASK EQU 0x02
display_Seg_Driver_L_Sync_ctrl_reg__1__POS EQU 1
display_Seg_Driver_L_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
display_Seg_Driver_L_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB11_12_CTL
display_Seg_Driver_L_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB11_12_CTL
display_Seg_Driver_L_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB11_12_CTL
display_Seg_Driver_L_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB11_12_CTL
display_Seg_Driver_L_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB11_12_MSK
display_Seg_Driver_L_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB11_12_MSK
display_Seg_Driver_L_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB11_12_MSK
display_Seg_Driver_L_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB11_12_MSK
display_Seg_Driver_L_Sync_ctrl_reg__2__MASK EQU 0x04
display_Seg_Driver_L_Sync_ctrl_reg__2__POS EQU 2
display_Seg_Driver_L_Sync_ctrl_reg__3__MASK EQU 0x08
display_Seg_Driver_L_Sync_ctrl_reg__3__POS EQU 3
display_Seg_Driver_L_Sync_ctrl_reg__4__MASK EQU 0x10
display_Seg_Driver_L_Sync_ctrl_reg__4__POS EQU 4
display_Seg_Driver_L_Sync_ctrl_reg__5__MASK EQU 0x20
display_Seg_Driver_L_Sync_ctrl_reg__5__POS EQU 5
display_Seg_Driver_L_Sync_ctrl_reg__6__MASK EQU 0x40
display_Seg_Driver_L_Sync_ctrl_reg__6__POS EQU 6
display_Seg_Driver_L_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
display_Seg_Driver_L_Sync_ctrl_reg__CONTROL_REG EQU CYREG_B0_UDB11_CTL
display_Seg_Driver_L_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_B0_UDB11_ST_CTL
display_Seg_Driver_L_Sync_ctrl_reg__COUNT_REG EQU CYREG_B0_UDB11_CTL
display_Seg_Driver_L_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_B0_UDB11_ST_CTL
display_Seg_Driver_L_Sync_ctrl_reg__MASK EQU 0x7F
display_Seg_Driver_L_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
display_Seg_Driver_L_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
display_Seg_Driver_L_Sync_ctrl_reg__PERIOD_REG EQU CYREG_B0_UDB11_MSK

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000007
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */