/* $NetBSD$ */

/*-
 * Copyright (c) 2014 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Hiroshi Tokuda
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _ARM_ROCKCHIP_ROCKCHIP_REG_H_
#define _ARM_ROCKCHIP_ROCKCHIP_REG_H_

#define CONSADDR_VA     ((CONSADDR - ROCKCHIP_CORE1_BASE) + ROCKCHIP_CORE1_VBASE)

#define ROCKCHIP_REF_FREQ	24000000L /* 24MHz */
#define ROCKCHIP_UART_FREQ	ROCKCHIP_REF_FREQ
#define ROCKCHIP_UART_SIZE	0x400

#define ROCKCHIP_CORE0_BASE     0x10000000
#define ROCKCHIP_CORE0_VBASE    0xFEA00000
#define ROCKCHIP_CORE0_SIZE     0x00300000

#define ROCKCHIP_OTG_BASE	0x10180000
#define ROCKCHIP_OTG_SIZE	0x40000
#define ROCKCHIP_USB_BASE	0x101C0000
#define ROCKCHIP_USB_SIZE	0x40000
#define ROCKCHIP_UART0_BASE	0x10124000
#define ROCKCHIP_UART0_SIZE	0x400
#define ROCKCHIP_UART1_BASE	0x10126000
#define ROCKCHIP_UART1_SIZE	0x400
#define ROCKCHIP_PL310_BASE     0x10138000
#define ROCKCHIP_PL310_SIZE     0x1000
#define ROCKCHIP_GICC_BASE	0x1013C100
#define ROCKCHIP_GICC_SIZE	0x100
#define ROCKCHIP_A9TMR_BASE	0x1013C200
#define ROCKCHIP_A9TMR_SIZE	0x100
#define ROCKCHIP_A9WDT_BASE	0x1013C600
#define ROCKCHIP_A9WDT_SIZE	0x20
#define ROCKCHIP_GICD_BASE	0x1013D000
#define ROCKCHIP_GICD_SIZE	0x1000

#define ROCKCHIP_CORE1_BASE     0x20000000
#define ROCKCHIP_CORE1_VBASE    0xFED00000
#define ROCKCHIP_CORE1_SIZE     0x00100000

#define ROCKCHIP_GRF_BASE	0x20008000
#define ROCKCHIP_GRF_SIZE	0x2000

#define ROCKCHIP_UART2_BASE	0x20064000
#define ROCKCHIP_UART2_SIZE	0x400
#define ROCKCHIP_UART3_BASE	0x20068000
#define ROCKCHIP_UART3_SIZE	0x400
#define ROCKCHIP_GPIO0_BASE	0x2000A000
#define ROCKCHIP_GPIO0_SIZE	0x100
#define ROCKCHIP_GPIO1_BASE	0x2003C000
#define ROCKCHIP_GPIO1_SIZE	0x100
#define ROCKCHIP_GPIO2_BASE	0x2003E000
#define ROCKCHIP_GPIO2_SIZE	0x100
#define ROCKCHIP_GPIO3_BASE	0x20080000
#define ROCKCHIP_GPIO3_SIZE	0x100

#endif /* _ARM_ROCKCHIP_ROCKCHIP_REG_H_ */
