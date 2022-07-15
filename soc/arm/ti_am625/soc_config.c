/*
 * Copyright (c) 2015 Intel Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file Board config file
 */

#include <zephyr/device.h>
#include <zephyr/init.h>

#include <zephyr/kernel.h>

#include "soc.h"

#include <zephyr/drivers/uart.h>

#define RCGC1 (*((volatile uint32_t *)0x4A00000))

#define RCGC1_UART0_EN 0x00000001

static int uart_am62x_init(const struct device *dev)
{
	RCGC1 |= RCGC1_UART0_EN;
	return 0;
}

SYS_INIT(uart_am62x_init, PRE_KERNEL_1, CONFIG_KERNEL_INIT_PRIORITY_DEVICE);

//Not sure about this

