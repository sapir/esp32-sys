#include "driver/adc.h"
#include "esp_ota_ops.h"
#include "driver/gpio.h"
#include "driver/i2c.h"
#include "driver/i2s.h"
#include "driver/uart.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "nvs_flash.h"
#include "esp_attr.h"
#include "esp32/clk.h"
#include "esp_err.h"
#include "esp_event.h"
#include "esp_flash_partitions.h"
#include "esp_freertos_hooks.h"
#include "esp_interface.h"
#include "esp_now.h"
#include "esp_sleep.h"
#include "esp_smartconfig.h"
#include "esp_system.h"
#include "esp_types.h"
#include "esp_wifi.h"
#include "netdb.h"
#include "lwip/sockets.h"
#include "freertos/task.h"
#include "freertos/portmacro.h"