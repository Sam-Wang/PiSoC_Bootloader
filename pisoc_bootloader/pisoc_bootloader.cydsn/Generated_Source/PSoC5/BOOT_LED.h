/*******************************************************************************
* File Name: BOOT_LED.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_BOOT_LED_H) /* Pins BOOT_LED_H */
#define CY_PINS_BOOT_LED_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "BOOT_LED_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 BOOT_LED__PORT == 15 && ((BOOT_LED__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    BOOT_LED_Write(uint8 value) ;
void    BOOT_LED_SetDriveMode(uint8 mode) ;
uint8   BOOT_LED_ReadDataReg(void) ;
uint8   BOOT_LED_Read(void) ;
uint8   BOOT_LED_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define BOOT_LED_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define BOOT_LED_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define BOOT_LED_DM_RES_UP          PIN_DM_RES_UP
#define BOOT_LED_DM_RES_DWN         PIN_DM_RES_DWN
#define BOOT_LED_DM_OD_LO           PIN_DM_OD_LO
#define BOOT_LED_DM_OD_HI           PIN_DM_OD_HI
#define BOOT_LED_DM_STRONG          PIN_DM_STRONG
#define BOOT_LED_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define BOOT_LED_MASK               BOOT_LED__MASK
#define BOOT_LED_SHIFT              BOOT_LED__SHIFT
#define BOOT_LED_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define BOOT_LED_PS                     (* (reg8 *) BOOT_LED__PS)
/* Data Register */
#define BOOT_LED_DR                     (* (reg8 *) BOOT_LED__DR)
/* Port Number */
#define BOOT_LED_PRT_NUM                (* (reg8 *) BOOT_LED__PRT) 
/* Connect to Analog Globals */                                                  
#define BOOT_LED_AG                     (* (reg8 *) BOOT_LED__AG)                       
/* Analog MUX bux enable */
#define BOOT_LED_AMUX                   (* (reg8 *) BOOT_LED__AMUX) 
/* Bidirectional Enable */                                                        
#define BOOT_LED_BIE                    (* (reg8 *) BOOT_LED__BIE)
/* Bit-mask for Aliased Register Access */
#define BOOT_LED_BIT_MASK               (* (reg8 *) BOOT_LED__BIT_MASK)
/* Bypass Enable */
#define BOOT_LED_BYP                    (* (reg8 *) BOOT_LED__BYP)
/* Port wide control signals */                                                   
#define BOOT_LED_CTL                    (* (reg8 *) BOOT_LED__CTL)
/* Drive Modes */
#define BOOT_LED_DM0                    (* (reg8 *) BOOT_LED__DM0) 
#define BOOT_LED_DM1                    (* (reg8 *) BOOT_LED__DM1)
#define BOOT_LED_DM2                    (* (reg8 *) BOOT_LED__DM2) 
/* Input Buffer Disable Override */
#define BOOT_LED_INP_DIS                (* (reg8 *) BOOT_LED__INP_DIS)
/* LCD Common or Segment Drive */
#define BOOT_LED_LCD_COM_SEG            (* (reg8 *) BOOT_LED__LCD_COM_SEG)
/* Enable Segment LCD */
#define BOOT_LED_LCD_EN                 (* (reg8 *) BOOT_LED__LCD_EN)
/* Slew Rate Control */
#define BOOT_LED_SLW                    (* (reg8 *) BOOT_LED__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define BOOT_LED_PRTDSI__CAPS_SEL       (* (reg8 *) BOOT_LED__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define BOOT_LED_PRTDSI__DBL_SYNC_IN    (* (reg8 *) BOOT_LED__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define BOOT_LED_PRTDSI__OE_SEL0        (* (reg8 *) BOOT_LED__PRTDSI__OE_SEL0) 
#define BOOT_LED_PRTDSI__OE_SEL1        (* (reg8 *) BOOT_LED__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define BOOT_LED_PRTDSI__OUT_SEL0       (* (reg8 *) BOOT_LED__PRTDSI__OUT_SEL0) 
#define BOOT_LED_PRTDSI__OUT_SEL1       (* (reg8 *) BOOT_LED__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define BOOT_LED_PRTDSI__SYNC_OUT       (* (reg8 *) BOOT_LED__PRTDSI__SYNC_OUT) 


#if defined(BOOT_LED__INTSTAT)  /* Interrupt Registers */

    #define BOOT_LED_INTSTAT                (* (reg8 *) BOOT_LED__INTSTAT)
    #define BOOT_LED_SNAP                   (* (reg8 *) BOOT_LED__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_BOOT_LED_H */


/* [] END OF FILE */
