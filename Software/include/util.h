#ifndef __UTIL_H
#define __UTIL_H

#include <ch32v20x.h>
#include <stddef.h>
#include <stdint.h>

extern RCC_ClocksTypeDef clocks;

uint8_t clock_init(void);

void delay_us(uint32_t us);

size_t board_get_unique_id(uint8_t id[], size_t max_len);

uint32_t board_millis(void);

void watchdog_init(void);
void watchdog_task(void);
size_t device_id(void);

#endif