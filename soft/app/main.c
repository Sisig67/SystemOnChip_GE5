#include <stdio.h>
#include <altera_avalon_pio_regs.h>
#include <unistd.h>
#include "system.h"
#include "i2c_opencores_niosv.h"


#define ms 1000
#define RH_ADR = 0x80

volatile int key_edge_capture;
volatile int rh_temp_flag;

static void bt0_int(void * context){
	volatile int * edge_capture_ptr = (volatile int *) context;
	* edge_capture_ptr = IORD_ALTERA_AVALON_PIO_EDGE_CAP(BT0_BASE);

	IOWR_ALTERA_AVALON_PIO_DATA(LED0_BASE, 0x000);

	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BT0_BASE,0);
	IORD_ALTERA_AVALON_PIO_EDGE_CAP(BT0_BASE);
}

static void init_KEY_IRQ(){
	void * edge_capture_ptr = (void * ) & key_edge_capture;
	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BT0_BASE,0xF);
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BT0_BASE,0x0);
	alt_ic_isr_register(BT0_IRQ_INTERRUPT_CONTROLLER_ID, BT0_IRQ, bt0_int, edge_capture_ptr, 0x0);
}

static void rh_temp_int(void * context){
	volatile int * edge_capture_ptr = (volatile int *) context;
	* edge_capture_ptr = IORD_ALTERA_AVALON_PIO_EDGE_CAP(BT0_BASE);

	rh_temp_flag = 1;

	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BT0_BASE,0);
	IORD_ALTERA_AVALON_PIO_EDGE_CAP(BT0_BASE);
}

static void init_RH_TEMP_IRQ(){
	void * edge_capture_ptr = (void * ) & key_edge_capture;
	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(RH_TEMP_DRDY_BASE,0xF);
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(RH_TEMP_DRDY_BASE,0x0);
	alt_ic_isr_register(RH_TEMP_DRDY_IRQ_INTERRUPT_CONTROLLER_ID, RH_TEMP_DRDY_IRQ, rh_temp_int, edge_capture_ptr, 0x0);
}

int main()
{
	usleep(100*ms);
	printf("hello_world");

	//INITIALISATIONS
	i2c_init();
	init_KEY_IRQ();
	init_RH_TEMP_IRQ();
	usleep(100*ms);


	IOWR_ALTERA_AVALON_PIO_DATA(LED0_BASE, 0x155);
	while(1){
		printf("avt_swap\r\n");
		IOWR_ALTERA_AVALON_PIO_DATA(LED0_BASE, ~IORD_ALTERA_AVALON_PIO_DATA(LED0_BASE));
		printf("swap\r\n");
		if (rh_temp_flag){
			rh_temp_flag = 0;


			    // Example 1: Read 3 bytes from HDC1000 temperature register
			    uint8_t temp_data[3];
			    if (i2c_read_3bytes(HDC1000_I2C_ADDR, 0x00, temp_data)) {
			        printf("Temperature data: 0x%02X 0x%02X 0x%02X\n",
			               temp_data[0], temp_data[1], temp_data[2]);
			    } else {
			        printf("Failed to read temperature data\n");
			    }
		}
		usleep(1000*ms);

	}
	return 0;
}
