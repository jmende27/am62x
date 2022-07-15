/*
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Board configuration macros
 *
 * This header file is used to specify and describe board-level aspects.
 */

#ifndef _BOARD__H_
#define _BOARD__H_

#include <zephyr/sys/util.h>

/* default system clock */

#define SYSCLK_DEFAULT_IOSC_HZ MHZ(12)

/* IRQs */
#define IRQ_UART 0
#define IRQ_TIMER0 2

#ifndef _ASMLANGUAGE

#endif /* !_ASMLANGUAGE */

#endif /* _BOARD__H_ */
