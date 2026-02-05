#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void app_main() {
  printf("Se liga no meu pedido: \n");
  gpio_set_direction(2,GPIO_MODE_OUTPUT);
  gpio_set_level(2,0);
  while (true) {
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    gpio_set_level(2,0);
     vTaskDelay(300 / portTICK_PERIOD_MS);
    gpio_set_level(2,1);
    vTaskDelay(300 / portTICK_PERIOD_MS);
    gpio_set_level(2,0);
    vTaskDelay(300 / portTICK_PERIOD_MS);
      gpio_set_level(2,1);
      vTaskDelay(300 / portTICK_PERIOD_MS);
      gpio_set_level(2,0);
      vTaskDelay(300 / portTICK_PERIOD_MS);
      gpio_set_level(2,1);
      vTaskDelay(300 / portTICK_PERIOD_MS);
       gpio_set_level(2,0);
       printf("S\n"); 
       vTaskDelay(1000 / portTICK_PERIOD_MS);
       gpio_set_level(2,1);
        vTaskDelay(600 / portTICK_PERIOD_MS);
         gpio_set_level(2,0);
         vTaskDelay(600 / portTICK_PERIOD_MS);
         gpio_set_level(2,1);
         vTaskDelay(600 / portTICK_PERIOD_MS);
         gpio_set_level(2,0);
         vTaskDelay(600 / portTICK_PERIOD_MS);
         gpio_set_level(2,1);
         vTaskDelay(600 / portTICK_PERIOD_MS);
         gpio_set_level(2,0);
         printf("O\n"); 
         vTaskDelay(1000 / portTICK_PERIOD_MS);
         gpio_set_level(2,1);
          vTaskDelay(300 / portTICK_PERIOD_MS);
           gpio_set_level(2,0);
            vTaskDelay(300 / portTICK_PERIOD_MS);
            gpio_set_level(2,1);
             vTaskDelay(300 / portTICK_PERIOD_MS);
             gpio_set_level(2,0);
              vTaskDelay(300 / portTICK_PERIOD_MS);
              gpio_set_level(2,1);
              vTaskDelay(300 / portTICK_PERIOD_MS);
              gpio_set_level(2,0);
              printf("S\n"); 
              vTaskDelay(2000 / portTICK_PERIOD_MS);
              printf("\n");
              printf("Me socorre ai \n"); 
              printf("\n");
              //SOSCORRO
    
  }
    
}