//
// Created by Sarah on 4/3/2023.
//

#include "../../MCAL/DIO.h"

typedef enum ledErrors{
    LED_OK,
    WRONG_LED_PORT,
    WRONG_LED_PIN
}EN_ledError_t;
EN_ledError_t LED0_Init(uint8_t ledPort,uint8_t ledPin);
EN_ledError_t LED0_ON(uint8_t ledPort,uint8_t ledPin);
EN_ledError_t LED0_OFF(uint8_t ledPort,uint8_t ledPin);
EN_ledError_t LED0_Toggle(uint8_t ledPort,uint8_t ledPin);


EN_ledError_t LED1_Init(uint8_t ledPort,uint8_t ledPin);
EN_ledError_t LED1_ON(uint8_t ledPort,uint8_t ledPin);
EN_ledError_t LED1_OFF(uint8_t ledPort,uint8_t ledPin);
EN_ledError_t LED1_Toggle(uint8_t ledPort,uint8_t ledPin);

EN_ledError_t LED2_Init(uint8_t ledPort,uint8_t ledPin);
EN_ledError_t LED2_ON(uint8_t ledPort,uint8_t ledPin);
EN_ledError_t LED2_OFF(uint8_t ledPort,uint8_t ledPin);
EN_ledError_t LED2_Toggle(uint8_t ledPort,uint8_t ledPin);

EN_ledError_t LED3_Init(uint8_t ledPort,uint8_t ledPin);
EN_ledError_t LED3_ON(uint8_t ledPort,uint8_t ledPin);
EN_ledError_t LED3_OFF(uint8_t ledPort,uint8_t ledPin);
EN_ledError_t LED3_Toggle(uint8_t ledPort,uint8_t ledPin);
