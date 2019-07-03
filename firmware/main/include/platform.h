#ifndef PLATFORM_H
#define PLATFORM_H

#include "include/system.h"
#include "include/nvs.h"

#define INIT_DRIVER(name) { extern esp_err_t driver_##name##_init(void); if (driver_##name##_init() != ESP_OK) restart(); }
#define TEST_DRIVER(name) { extern esp_err_t driver_##name##_test(void); driver_##name##_test(); }

void platform_init( void );
void platform_first_boot( void );

#endif
