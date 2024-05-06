#include "board-constants.h"
#include "gpio.h"
#include "scb.h"
#include "squarewave.h"
#include "systick.h"

systick_t *stk = 0x0;
gpio_t *gpio_e = 0x0;

int main() {
  scb_t *scb = (scb_t *)SCB_ADDR;
  gpio_e = (gpio_t *)GPIO_E_ADDR;
  stk = (systick_t *)SYSTICK_ADDR;

  scb->vtor = (vector_table_t *)MY_VECTOR_TABLE_ADDR;
  init_square_wave(scb->vtor);
  start_square_wave(2000);

  while (1) {
  };

  return 0;
}
