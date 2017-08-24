/**
  ******************************************************************************
  * @file    GPRS
  * @author  ms co.
  * @version V1.0.0
  * @date    2016-6-19
  * @brief   Header for gprs.c module
  ******************************************************************************
  * @attention
  *
  * 奇崛电子
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GPRS_H
#define __GPRS_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
#include "main.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
extern UART_HandleTypeDef huart1;
////定义GPRS 所使用端口
//#define UART_GPRS  huart1
////定义GPRS电源引脚使能
//#define GPRS_PWR_PORT           GPIOB
//#define GPRS_PWR_PIN           GPIO_PIN_13
////定义GPRS复位引脚
//#define GPRS_RESET_PORT           GPIOB
//#define GPRS_RESET_PIN           GPIO_PIN_12
////定义GPRS网络灯状态脚
//#define GPRS_NET_LED_PORT           GPIOB
//#define GPRS_NET_LED_PIN           GPIO_PIN_14
////定义GPRS连接状态脚
//#define GPRS_CONNET_STATE_PORT           GPIOB
//#define GPRS_CONNET_STATE_PIN           GPIO_PIN_2
//	 
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void init_gprs(void);
void gprs_process(void);
void gprs_time_tick(void);
void handle_gprs_reset(void);
void read_gprs_connect_state(void);
void config_gprs(void);
#ifdef __cplusplus
}
#endif

#endif /* __GPRS_H */


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
