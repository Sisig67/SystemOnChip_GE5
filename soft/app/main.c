#include <stdio.h>
#include <altera_avalon_pio_regs.h>
#include <unistd.h>
#include "system.h"



int main()
{
	printf("hello_world");
	IOWR_ALTERA_AVALON_PIO_DATA(LED0_BASE, 0x155);
	while(1){
		printf("avt_swap");
		IOWR_ALTERA_AVALON_PIO_DATA(LED0_BASE, ~IORD_ALTERA_AVALON_PIO_DATA(LED0_BASE));
		printf("swap");
		usleep(1000*1000);
	}
	return 0;
}
