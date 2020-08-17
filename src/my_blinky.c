#include "sk_lib.h"
#include <libopencm3/cm3/cortex.h>
#include <libopencm3/cm3/nvic.h>
#include <libopencm3/stm32/exti.h>
#include <libopencm3/stm32/rcc.h>




int main(void)
{
    sk_pin pins [] = {sk_io_led_red, sk_io_led_green, sk_io_led_blue, sk_io_led_orange };
    rcc_periph_clock_enable(RCC_GPIOD);
    glsk_pins_init(DISCOVER);
    sk_pin_set(sk_io_led_green,1);
    sk_pin_set(sk_io_led_red,1);
    sk_pin_set(sk_io_led_blue,1);
    sk_pin_set(sk_io_led_orange,1);
    sk_group_set(pins, 0b0011);
    while (1) {
    }
}
