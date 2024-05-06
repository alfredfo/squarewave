#pragma once

#include "gpio.h"
#include "src/vector_table.h"
#include "systick.h"

extern gpio_t *gpio_e;
extern systick_t *stk;

void init_square_wave(vector_table_t *);
void start_square_wave(uint32_t);
void stop_square_wave();
