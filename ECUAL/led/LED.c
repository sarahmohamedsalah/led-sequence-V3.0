#include "led.h"




EN_ledError_t LED0_Init(uint8_t ledPort,uint8_t ledPin)
{

    EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {

    DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
        error = LED_OK;
    }

    return error;
}
EN_ledError_t LED0_ON(uint8_t ledPort,uint8_t ledPin)

{
    EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {

        DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
        error = LED_OK;
    }

    return error;
}
EN_ledError_t LED0_OFF(uint8_t ledPort,uint8_t ledPin)
{EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {
    DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
        error = LED_OK;
    }

    return error;
}
EN_ledError_t LED0_Toggle(uint8_t ledPort,uint8_t ledPin)
{
    EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {
        DIO_TogglePin(DIO_PORTC, DIO_PIN2);
        error = LED_OK;
    }

    return error;
}

EN_ledError_t LED1_Init(uint8_t ledPort,uint8_t ledPin)
{

    EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {

        DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
        error = LED_OK;
    }

    return error;
}
EN_ledError_t LED1_ON(uint8_t ledPort,uint8_t ledPin)

{
    EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {

        DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
        error = LED_OK;
    }

    return error;
}
EN_ledError_t LED1_OFF(uint8_t ledPort,uint8_t ledPin)
{EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {
        DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
        error = LED_OK;
    }

    return error;
}
EN_ledError_t LED1_Toggle(uint8_t ledPort,uint8_t ledPin)
{
    EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {
        DIO_TogglePin(DIO_PORTC, DIO_PIN2);
        error = LED_OK;
    }

    return error;
}

EN_ledError_t LED2_Init(uint8_t ledPort,uint8_t ledPin)
{

    EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {

        DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
        error = LED_OK;
    }

    return error;
}
EN_ledError_t LED2_ON(uint8_t ledPort,uint8_t ledPin)

{
    EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {

        DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
        error = LED_OK;
    }

    return error;
}
EN_ledError_t LED2_OFF(uint8_t ledPort,uint8_t ledPin)
{EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {
        DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
        error = LED_OK;
    }

    return error;
}
EN_ledError_t LED2_Toggle(uint8_t ledPort,uint8_t ledPin)
{
    EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {
        DIO_TogglePin(DIO_PORTC, DIO_PIN2);
        error = LED_OK;
    }

    return error;
}

EN_ledError_t LED3_Init(uint8_t ledPort,uint8_t ledPin)
{

    EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {

        DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
        error = LED_OK;
    }

    return error;
}
EN_ledError_t LED3_ON(uint8_t ledPort,uint8_t ledPin)

{
    EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {

        DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
        error = LED_OK;
    }

    return error;
}
EN_ledError_t LED3_OFF(uint8_t ledPort,uint8_t ledPin)
{EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {
        DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
        error = LED_OK;
    }

    return error;
}
EN_ledError_t LED3_Toggle(uint8_t ledPort,uint8_t ledPin)
{
    EN_ledError_t error = LED_OK;
    if (ledPort > PORTC)
    {
        error = WRONG_LED_PORT;
    }
    else if (ledPin > 7)
    {
        error = WRONG_LED_PIN;
    }
    else
    {
        DIO_TogglePin(DIO_PORTC, DIO_PIN2);
        error = LED_OK;
    }

    return error;
}



