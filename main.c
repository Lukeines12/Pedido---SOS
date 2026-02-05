#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
void S(){
pisca(222);
   pisca(222);
   pisca(222);
       printf("S\n"); 
       vTaskDelay(1000 / portTICK_PERIOD_MS);
}
void O(){
  pisca(822);
       pisca(822);
       pisca(822);
         printf("O\n"); 
         vTaskDelay(1000 / portTICK_PERIOD_MS);
}
void app_main() {
  printf("Se liga no meu pedido: \n");
  gpio_set_direction(2,GPIO_MODE_OUTPUT);
  gpio_set_level(2,0);
  while (true) {
   S();
   O();
   S();
              printf("\n");
              printf("Me socorre aí \n"); 
              printf("\n");
              //SOSCORRO   
  }
}
