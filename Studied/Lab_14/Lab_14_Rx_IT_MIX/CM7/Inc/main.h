/**
  ******************************************************************************
  * @file    Templates/BootCM4_CM7/CM7/Inc/main.h
  * @author  MCD Application Team
  * @brief   Header for main.c module for Cortex-M7.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"
#include "stm32h7xx_nucleo.h"

#include "stm32h7xx_ll_adc.h"
#include "stm32h7xx_ll_bdma.h"
#include "stm32h7xx_ll_bus.h"
#include "stm32h7xx_ll_comp.h"
#include "stm32h7xx_ll_cortex.h"
#include "stm32h7xx_ll_crc.h"
#include "stm32h7xx_ll_dac.h"
#include "stm32h7xx_ll_dma.h"
#include "stm32h7xx_ll_dma2d.h"
#include "stm32h7xx_ll_dmamux.h"
#include "stm32h7xx_ll_exti.h"
#include "stm32h7xx_ll_gpio.h"
#include "stm32h7xx_ll_hrtim.h"
#include "stm32h7xx_ll_hsem.h"
#include "stm32h7xx_ll_i2c.h"
#include "stm32h7xx_ll_iwdg.h"
#include "stm32h7xx_ll_lptim.h"
#include "stm32h7xx_ll_lpuart.h"
#include "stm32h7xx_ll_mdma.h"
#include "stm32h7xx_ll_opamp.h"
#include "stm32h7xx_ll_pwr.h"
#include "stm32h7xx_ll_rcc.h"
#include "stm32h7xx_ll_rng.h"
#include "stm32h7xx_ll_rtc.h"
#include "stm32h7xx_ll_spi.h"
#include "stm32h7xx_ll_swpmi.h"
#include "stm32h7xx_ll_system.h"
#include "stm32h7xx_ll_tim.h"
#include "stm32h7xx_ll_usart.h"
#include "stm32h7xx_ll_utils.h"
#include "stm32h7xx_ll_wwdg.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Definition for USARTx clock resources */
#define USARTx                           USART3
#define USARTx_CLK_ENABLE()              __HAL_RCC_USART3_CLK_ENABLE()
#define USARTx_RX_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOD_CLK_ENABLE()
#define USARTx_TX_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOD_CLK_ENABLE()

#define USARTx_FORCE_RESET()             __HAL_RCC_USART3_FORCE_RESET()
#define USARTx_RELEASE_RESET()           __HAL_RCC_USART3_RELEASE_RESET()

/* Definition for USARTx Pins */
#define USARTx_TX_PIN                    GPIO_PIN_8
#define USARTx_TX_GPIO_PORT              GPIOD
#define USARTx_TX_AF                     GPIO_AF7_USART3
#define USARTx_RX_PIN                    GPIO_PIN_9
#define USARTx_RX_GPIO_PORT              GPIOD
#define USARTx_RX_AF                     GPIO_AF7_USART3

/* Definition for USARTx's NVIC IRQ and IRQ Handlers */
#define USARTx_IRQn                      USART3_IRQn
#define USARTx_IRQHandler                USART3_IRQHandler

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void USART_CharReception_Callback(void);
void Error_Callback(void);

#endif /* __MAIN_H */

