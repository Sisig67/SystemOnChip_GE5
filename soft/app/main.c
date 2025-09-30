#include <stdio.h>
#include <altera_avalon_pio_regs.h>
#include <unistd.h>
#include "system.h"


#define ms 1000

int main()
{
	printf("hello_world");
	IOWR_ALTERA_AVALON_PIO_DATA(LED0_BASE, 0x155);
	while(1){
		printf("avt_swap\r\n");
		IOWR_ALTERA_AVALON_PIO_DATA(LED0_BASE, ~IORD_ALTERA_AVALON_PIO_DATA(LED0_BASE));
		printf("swap\r\n");
		usleep(1000*ms);
	}
	return 0;
}
