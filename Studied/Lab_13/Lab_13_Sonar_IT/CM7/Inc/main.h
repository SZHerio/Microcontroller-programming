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

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Definition for I2Cx clock resources */
#define I2Cx                            I2C4
#define I2Cx_CLK_ENABLE()               __HAL_RCC_I2C4_CLK_ENABLE()
#define I2Cx_SDA_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOF_CLK_ENABLE()
#define I2Cx_SCL_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOF_CLK_ENABLE()

#define I2Cx_FORCE_RESET()              __HAL_RCC_I2C4_FORCE_RESET()
#define I2Cx_RELEASE_RESET()            __HAL_RCC_I2C4_RELEASE_RESET()

/* Definition for I2Cx Pins */
#define I2Cx_SCL_PIN                    GPIO_PIN_14
#define I2Cx_SCL_GPIO_PORT              GPIOF
#define I2Cx_SDA_PIN                    GPIO_PIN_15
#define I2Cx_SDA_GPIO_PORT              GPIOF
#define I2Cx_SCL_SDA_AF                 GPIO_AF4_I2C4

/* Definition for I2Cx's NVIC */
#define I2Cx_EV_IRQn                    I2C4_EV_IRQn
#define I2Cx_ER_IRQn                    I2C4_ER_IRQn
#define I2Cx_EV_IRQHandler              I2C4_EV_IRQHandler
#define I2Cx_ER_IRQHandler              I2C4_ER_IRQHandler

/* Definition for TIMx clock resources */
#define TIMx                            TIM3
#define TIMx_CLK_ENABLE()               __HAL_RCC_TIM3_CLK_ENABLE()

/* Definition for TIMx's NVIC */
#define TIMx_IRQn                       TIM3_IRQn
#define TIMx_IRQHandler                 TIM3_IRQHandler

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __MAIN_H */

