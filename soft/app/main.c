#include <stdio.h>
#include <altera_avalon_pio_regs.h>
#include <unistd.h>
#include "system.h"


#define ms 1000

volatile int key_edge_capture;
volatile int key_detect;

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

int main()
{
	printf("hello_world");

	usleep(100*ms);
	init_KEY_IRQ();
	IOWR_ALTERA_AVALON_PIO_DATA(LED0_BASE, 0x155);
	while(1){
		printf("avt_swap\r\n");
		IOWR_ALTERA_AVALON_PIO_DATA(LED0_BASE, ~IORD_ALTERA_AVALON_PIO_DATA(LED0_BASE));
		printf("swap\r\n");
		usleep(1000*ms);
	}
	return 0;
}
