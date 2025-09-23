/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'intel_niosv_g_0' in SOPC Builder design 'NIOS_RFS2'
 * SOPC Builder design path: ../../NIOS_RFS2.sopcinfo
 *
 * Generated: Tue Sep 23 09:27:29 CEST 2025
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "intel_niosv_g"
#define ALT_CPU_CLIC_EN 0
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_DATA_ADDR_WIDTH 0x20
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 4096
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HAS_CSR_SUPPORT 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INST_ADDR_WIDTH 0x20
#define ALT_CPU_INT_MODE 0
#define ALT_CPU_MTIME_OFFSET 0x00030000
#define ALT_CPU_NAME "intel_niosv_g_0"
#define ALT_CPU_NIOSV_CORE_VARIANT 3
#define ALT_CPU_NUM_GPR 32
#define ALT_CPU_NUM_SRF_BANKS 1
#define ALT_CPU_RESET_ADDR 0x00000000
#define ALT_CPU_TICKS_PER_SEC NIOSV_INTERNAL_TIMER_TICKS_PER_SECOND
#define ALT_CPU_TIMER_DEVICE_TYPE 2


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define BANTAMLAKE_CLIC_EN 0
#define BANTAMLAKE_CPU_FREQ 50000000u
#define BANTAMLAKE_DATA_ADDR_WIDTH 0x20
#define BANTAMLAKE_DCACHE_LINE_SIZE 32
#define BANTAMLAKE_DCACHE_LINE_SIZE_LOG2 5
#define BANTAMLAKE_DCACHE_SIZE 4096
#define BANTAMLAKE_HAS_CSR_SUPPORT 1
#define BANTAMLAKE_HAS_DEBUG_STUB
#define BANTAMLAKE_ICACHE_LINE_SIZE 32
#define BANTAMLAKE_ICACHE_LINE_SIZE_LOG2 5
#define BANTAMLAKE_ICACHE_SIZE 4096
#define BANTAMLAKE_INST_ADDR_WIDTH 0x20
#define BANTAMLAKE_INT_MODE 0
#define BANTAMLAKE_MTIME_OFFSET 0x00030000
#define BANTAMLAKE_NIOSV_CORE_VARIANT 3
#define BANTAMLAKE_NUM_GPR 32
#define BANTAMLAKE_NUM_SRF_BANKS 1
#define BANTAMLAKE_RESET_ADDR 0x00000000
#define BANTAMLAKE_TICKS_PER_SEC NIOSV_INTERNAL_TIMER_TICKS_PER_SECOND
#define BANTAMLAKE_TIMER_DEVICE_TYPE 2


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_SYSID_QSYS
#define __INTEL_NIOSV_G


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "MAX 10"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x30048
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x30048
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x30048
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSID_BASE SYSID_QSYS_0_BASE
#define ALT_SYSID_ID SYSID_QSYS_0_ID
#define ALT_SYSTEM_NAME "NIOS_RFS2"
#define ALT_SYS_CLK_TICKS_PER_SEC ALT_CPU_TICKS_PER_SEC
#define ALT_TIMESTAMP_CLK_TIMER_DEVICE_TYPE ALT_CPU_TIMER_DEVICE_TYPE


/*
 * hal2 configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK INTEL_NIOSV_G_0
#define ALT_TIMESTAMP_CLK INTEL_NIOSV_G_0
#define INTEL_FPGA_DFL_START_ADDRESS 0xffffffffffffffff
#define INTEL_FPGA_USE_DFL_WALKER 0


/*
 * intel_niosv_g_0_dm_agent configuration
 *
 */

#define ALT_MODULE_CLASS_intel_niosv_g_0_dm_agent intel_niosv_g
#define INTEL_NIOSV_G_0_DM_AGENT_BASE 0x20000
#define INTEL_NIOSV_G_0_DM_AGENT_CLIC_EN 0
#define INTEL_NIOSV_G_0_DM_AGENT_CPU_FREQ 50000000u
#define INTEL_NIOSV_G_0_DM_AGENT_DATA_ADDR_WIDTH 0x20
#define INTEL_NIOSV_G_0_DM_AGENT_DCACHE_LINE_SIZE 32
#define INTEL_NIOSV_G_0_DM_AGENT_DCACHE_LINE_SIZE_LOG2 5
#define INTEL_NIOSV_G_0_DM_AGENT_DCACHE_SIZE 4096
#define INTEL_NIOSV_G_0_DM_AGENT_HAS_CSR_SUPPORT 1
#define INTEL_NIOSV_G_0_DM_AGENT_HAS_DEBUG_STUB
#define INTEL_NIOSV_G_0_DM_AGENT_ICACHE_LINE_SIZE 32
#define INTEL_NIOSV_G_0_DM_AGENT_ICACHE_LINE_SIZE_LOG2 5
#define INTEL_NIOSV_G_0_DM_AGENT_ICACHE_SIZE 4096
#define INTEL_NIOSV_G_0_DM_AGENT_INST_ADDR_WIDTH 0x20
#define INTEL_NIOSV_G_0_DM_AGENT_INTERRUPT_CONTROLLER_ID 0
#define INTEL_NIOSV_G_0_DM_AGENT_INT_MODE 0
#define INTEL_NIOSV_G_0_DM_AGENT_IRQ -1
#define INTEL_NIOSV_G_0_DM_AGENT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INTEL_NIOSV_G_0_DM_AGENT_MTIME_OFFSET 0x00030000
#define INTEL_NIOSV_G_0_DM_AGENT_NAME "/dev/intel_niosv_g_0_dm_agent"
#define INTEL_NIOSV_G_0_DM_AGENT_NIOSV_CORE_VARIANT 3
#define INTEL_NIOSV_G_0_DM_AGENT_NUM_GPR 32
#define INTEL_NIOSV_G_0_DM_AGENT_NUM_SRF_BANKS 1
#define INTEL_NIOSV_G_0_DM_AGENT_RESET_ADDR 0x00000000
#define INTEL_NIOSV_G_0_DM_AGENT_SPAN 65536
#define INTEL_NIOSV_G_0_DM_AGENT_TICKS_PER_SEC NIOSV_INTERNAL_TIMER_TICKS_PER_SECOND
#define INTEL_NIOSV_G_0_DM_AGENT_TIMER_DEVICE_TYPE 2
#define INTEL_NIOSV_G_0_DM_AGENT_TYPE "intel_niosv_g"


/*
 * intel_niosv_g_0_timer_sw_agent configuration
 *
 */

#define ALT_MODULE_CLASS_intel_niosv_g_0_timer_sw_agent intel_niosv_g
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_BASE 0x30000
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_CLIC_EN 0
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_CPU_FREQ 50000000u
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_DATA_ADDR_WIDTH 0x20
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_DCACHE_LINE_SIZE 32
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_DCACHE_LINE_SIZE_LOG2 5
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_DCACHE_SIZE 4096
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_HAS_CSR_SUPPORT 1
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_HAS_DEBUG_STUB
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_ICACHE_LINE_SIZE 32
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_ICACHE_LINE_SIZE_LOG2 5
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_ICACHE_SIZE 4096
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_INST_ADDR_WIDTH 0x20
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_INTERRUPT_CONTROLLER_ID 0
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_INT_MODE 0
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_IRQ -1
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_MTIME_OFFSET 0x00030000
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_NAME "/dev/intel_niosv_g_0_timer_sw_agent"
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_NIOSV_CORE_VARIANT 3
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_NUM_GPR 32
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_NUM_SRF_BANKS 1
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_RESET_ADDR 0x00000000
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_SPAN 64
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_TICKS_PER_SEC NIOSV_INTERNAL_TIMER_TICKS_PER_SECOND
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_TIMER_DEVICE_TYPE 2
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_TYPE "intel_niosv_g"


/*
 * intel_niosv_g_hal_driver configuration
 *
 */

#define NIOSV_INTERNAL_TIMER_TICKS_PER_SECOND 1000


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x30048
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * ram_0 configuration
 *
 */

#define ALT_MODULE_CLASS_ram_0 altera_avalon_onchip_memory2
#define RAM_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_0_BASE 0x0
#define RAM_0_CONTENTS_INFO ""
#define RAM_0_DUAL_PORT 0
#define RAM_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_0_INIT_CONTENTS_FILE "NIOS_RFS2_ram_0"
#define RAM_0_INIT_MEM_CONTENT 1
#define RAM_0_INSTANCE_ID "NONE"
#define RAM_0_IRQ -1
#define RAM_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_0_NAME "/dev/ram_0"
#define RAM_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_0_RAM_BLOCK_TYPE "AUTO"
#define RAM_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_0_SINGLE_CLOCK_OP 0
#define RAM_0_SIZE_MULTIPLE 1
#define RAM_0_SIZE_VALUE 131072
#define RAM_0_SPAN 131072
#define RAM_0_TYPE "altera_avalon_onchip_memory2"
#define RAM_0_WRITABLE 1


/*
 * sysid_qsys_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sysid_qsys_0 altera_avalon_sysid_qsys
#define SYSID_QSYS_0_BASE 0x30040
#define SYSID_QSYS_0_ID 0
#define SYSID_QSYS_0_IRQ -1
#define SYSID_QSYS_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_QSYS_0_NAME "/dev/sysid_qsys_0"
#define SYSID_QSYS_0_SPAN 8
#define SYSID_QSYS_0_TIMESTAMP 1758611086
#define SYSID_QSYS_0_TYPE "altera_avalon_sysid_qsys"

#endif /* __SYSTEM_H_ */
