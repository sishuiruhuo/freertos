#include "gprs.h"
#include "string.h"

static const char * pAT1 = "AT+DSCADDR=0,\"TCP\",\"myiot.top\",1883\r\n";
static const char * pAT2 = "AT+DSCADDR=1,\"TCP\",\"myiot.top\",1883\r\n";
static const char * pAT3 = "AT+DTUPACKET=50,3072\r\n";
static const char * pAT4 = "AT&W\r\n";
static const char * pAT5 = "AT+CFUN=1,1\r\n";

#define GPRS_PWR_PIN_HIGH()        HAL_GPIO_WritePin(Gprs_En_Power_GPIO_Port, Gprs_En_Power_Pin, GPIO_PIN_SET);
#define GPRS_PWR_PIN_LOW()         HAL_GPIO_WritePin(Gprs_En_Power_GPIO_Port, Gprs_En_Power_Pin, GPIO_PIN_RESET);
	 
#define GPRS_RESET_PIN_HIGH()        HAL_GPIO_WritePin(Gprs_Rest_GPIO_Port, Gprs_Rest_Pin, GPIO_PIN_SET);
#define GPRS_RESET_PIN_LOW()         HAL_GPIO_WritePin(Gprs_Rest_GPIO_Port, Gprs_Rest_Pin, GPIO_PIN_RESET);

void init_gprs(void)
{
	//¸´Î»
	GPRS_RESET_PIN_LOW();
	HAL_Delay(100);
	GPRS_RESET_PIN_HIGH();
	//¿ª»ú
	GPRS_PWR_PIN_LOW();
	HAL_Delay(2000);
	GPRS_PWR_PIN_HIGH();
}