
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "nvs_flash.h"
#include "net_wifi_mgr.h"
#include "net_mqtt_client.h"


void app_main() {
    printf("################################### START \n");
    nvs_flash_init();
    net_wifi_init();
    mqtt_client_start();
}
