/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'intel_niosv_g_0' in SOPC Builder design 'NIOS_RFS2'
 * SOPC Builder design path: ../../NIOS_RFS2.sopcinfo
 *
 * Generated: Tue Oct 07 09:19:50 CEST 2025
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
#define ALT_CPU_MTIME_OFFSET 0x04030000
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
#define BANTAMLAKE_MTIME_OFFSET 0x04030000
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
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __I2C_OPENCORES
#define __INTEL_NIOSV_G


/*
 * SDRAM configuration
 *
 */

#define ALT_MODULE_CLASS_SDRAM altera_avalon_new_sdram_controller
#define SDRAM_BASE 0x0
#define SDRAM_CAS_LATENCY 3
#define SDRAM_CONTENTS_INFO
#define SDRAM_INIT_NOP_DELAY 0.0
#define SDRAM_INIT_REFRESH_COMMANDS 2
#define SDRAM_IRQ -1
#define SDRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_IS_INITIALIZED 1
#define SDRAM_NAME "/dev/SDRAM"
#define SDRAM_POWERUP_DELAY 100.0
#define SDRAM_REFRESH_PERIOD 7.8125
#define SDRAM_REGISTER_DATA_IN 1
#define SDRAM_SDRAM_ADDR_WIDTH 0x19
#define SDRAM_SDRAM_BANK_WIDTH 2
#define SDRAM_SDRAM_COL_WIDTH 10
#define SDRAM_SDRAM_DATA_WIDTH 16
#define SDRAM_SDRAM_NUM_BANKS 4
#define SDRAM_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_SDRAM_ROW_WIDTH 13
#define SDRAM_SHARED_DATA 0
#define SDRAM_SIM_MODEL_BASE 0
#define SDRAM_SPAN 67108864
#define SDRAM_STARVATION_INDICATOR 0
#define SDRAM_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_T_AC 5.4
#define SDRAM_T_MRD 3
#define SDRAM_T_RCD 15.0
#define SDRAM_T_RFC 70.0
#define SDRAM_T_RP 15.0
#define SDRAM_T_WR 14.0


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
#define ALT_STDERR_BASE 0x4030098
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x4030098
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x4030098
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
 * bt0 configuration
 *
 */

#define ALT_MODULE_CLASS_bt0 altera_avalon_pio
#define BT0_BASE 0x4030070
#define BT0_BIT_CLEARING_EDGE_REGISTER 0
#define BT0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BT0_CAPTURE 1
#define BT0_DATA_WIDTH 1
#define BT0_DO_TEST_BENCH_WIRING 0
#define BT0_DRIVEN_SIM_VALUE 0
#define BT0_EDGE_TYPE "FALLING"
#define BT0_FREQ 50000000
#define BT0_HAS_IN 1
#define BT0_HAS_OUT 0
#define BT0_HAS_TRI 0
#define BT0_IRQ 1
#define BT0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BT0_IRQ_TYPE "EDGE"
#define BT0_NAME "/dev/bt0"
#define BT0_RESET_VALUE 0
#define BT0_SPAN 16
#define BT0_TYPE "altera_avalon_pio"


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
 * i2c_opencores_0 configuration
 *
 */

#define ALT_MODULE_CLASS_i2c_opencores_0 i2c_opencores
#define I2C_OPENCORES_0_BASE 0x4030040
#define I2C_OPENCORES_0_IRQ 2
#define I2C_OPENCORES_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define I2C_OPENCORES_0_NAME "/dev/i2c_opencores_0"
#define I2C_OPENCORES_0_SPAN 32
#define I2C_OPENCORES_0_TYPE "i2c_opencores"


/*
 * intel_niosv_g_0_dm_agent configuration
 *
 */

#define ALT_MODULE_CLASS_intel_niosv_g_0_dm_agent intel_niosv_g
#define INTEL_NIOSV_G_0_DM_AGENT_BASE 0x4020000
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
#define INTEL_NIOSV_G_0_DM_AGENT_MTIME_OFFSET 0x04030000
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
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_BASE 0x4030000
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
#define INTEL_NIOSV_G_0_TIMER_SW_AGENT_MTIME_OFFSET 0x04030000
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
#define JTAG_UART_0_BASE 0x4030098
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
 * led0 configuration
 *
 */

#define ALT_MODULE_CLASS_led0 altera_avalon_pio
#define LED0_BASE 0x4030080
#define LED0_BIT_CLEARING_EDGE_REGISTER 0
#define LED0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED0_CAPTURE 0
#define LED0_DATA_WIDTH 10
#define LED0_DO_TEST_BENCH_WIRING 0
#define LED0_DRIVEN_SIM_VALUE 0
#define LED0_EDGE_TYPE "NONE"
#define LED0_FREQ 50000000
#define LED0_HAS_IN 0
#define LED0_HAS_OUT 1
#define LED0_HAS_TRI 0
#define LED0_IRQ -1
#define LED0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED0_IRQ_TYPE "NONE"
#define LED0_NAME "/dev/led0"
#define LED0_RESET_VALUE 0
#define LED0_SPAN 16
#define LED0_TYPE "altera_avalon_pio"


/*
 * ram_0 configuration
 *
 */

#define ALT_MODULE_CLASS_ram_0 altera_avalon_onchip_memory2
#define RAM_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_0_BASE 0x4000000
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
 * rh_temp_drdy configuration
 *
 */

#define ALT_MODULE_CLASS_rh_temp_drdy altera_avalon_pio
#define RH_TEMP_DRDY_BASE 0x4030060
#define RH_TEMP_DRDY_BIT_CLEARING_EDGE_REGISTER 0
#define RH_TEMP_DRDY_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RH_TEMP_DRDY_CAPTURE 1
#define RH_TEMP_DRDY_DATA_WIDTH 1
#define RH_TEMP_DRDY_DO_TEST_BENCH_WIRING 0
#define RH_TEMP_DRDY_DRIVEN_SIM_VALUE 0
#define RH_TEMP_DRDY_EDGE_TYPE "FALLING"
#define RH_TEMP_DRDY_FREQ 50000000
#define RH_TEMP_DRDY_HAS_IN 1
#define RH_TEMP_DRDY_HAS_OUT 0
#define RH_TEMP_DRDY_HAS_TRI 0
#define RH_TEMP_DRDY_IRQ 3
#define RH_TEMP_DRDY_IRQ_INTERRUPT_CONTROLLER_ID 0
#define RH_TEMP_DRDY_IRQ_TYPE "EDGE"
#define RH_TEMP_DRDY_NAME "/dev/rh_temp_drdy"
#define RH_TEMP_DRDY_RESET_VALUE 0
#define RH_TEMP_DRDY_SPAN 16
#define RH_TEMP_DRDY_TYPE "altera_avalon_pio"


/*
 * sysid_qsys_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sysid_qsys_0 altera_avalon_sysid_qsys
#define SYSID_QSYS_0_BASE 0x4030090
#define SYSID_QSYS_0_ID 0
#define SYSID_QSYS_0_IRQ -1
#define SYSID_QSYS_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_QSYS_0_NAME "/dev/sysid_qsys_0"
#define SYSID_QSYS_0_SPAN 8
#define SYSID_QSYS_0_TIMESTAMP 1759820903
#define SYSID_QSYS_0_TYPE "altera_avalon_sysid_qsys"

#endif /* __SYSTEM_H_ */
