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
/* Exported macro ------------------------------------------------------------*/
/* Definition for STEP_IN1 Pin */
#define S1_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOE_CLK_ENABLE()
#define S1_GPIO_PORT                   GPIOE
#define S1_PIN                         GPIO_PIN_9

/* Definition for STEP_IN2 Pin */
#define S2_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOE_CLK_ENABLE()
#define S2_GPIO_PORT                   GPIOE
#define S2_PIN                         GPIO_PIN_11

/* Definition for STEP_IN3 Pin */
#define S3_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOE_CLK_ENABLE()
#define S3_GPIO_PORT                   GPIOE
#define S3_PIN                         GPIO_PIN_13

/* Definition for STEP_IN4 Pin */
#define S4_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOE_CLK_ENABLE()
#define S4_GPIO_PORT                   GPIOE
#define S4_PIN                         GPIO_PIN_14

/* Exported functions ------------------------------------------------------- */

#endif /* __MAIN_H */

