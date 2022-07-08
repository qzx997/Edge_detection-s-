#include "sys.h"

#ifndef _SPI_H_
#define _SPI_H_

#define LCD_CTRL  	GPIOB		//����TFT���ݶ˿�
#define SPI_SCLK        GPIO_PIN_13	//PB13--->>TFT --SCL/SCK
#define SPI_MISO        GPIO_PIN_14	
#define SPI_MOSI        GPIO_PIN_15	//PB15 MOSI--->>TFT --SDA/DIN

//Һ�����ƿ���1�������궨��

#define	SPI_MOSI_SET  	LCD_CTRL->BSRR = SPI_MOSI    
#define	SPI_SCLK_SET  	LCD_CTRL->BSRR = SPI_SCLK    


//Һ�����ƿ���0�������궨��

#define	SPI_MOSI_CLR  	LCD_CTRL->BRR = SPI_MOSI    
#define	SPI_SCLK_CLR  	LCD_CTRL->BRR = SPI_SCLK    

void  SPIv_WriteData(uint8_t Data);

#endif
