#pragma once
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define pdSECOND pdMS_TO_TICKS(1000)

#include "Gpio.h"

class Main final
{
public:
    esp_err_t setup(void);
    void loop(void);

    Gpio::GpioOutput led{GPIO_NUM_27, true};
};