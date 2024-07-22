#include <LPC214x.h>

// Delay function
void delay(unsigned int count) {
    unsigned int i;
    for (i = 0; i < count; i++);
}

int main() {
while(1){   
	// Set P0.10 as output
    IODIR0 |=(1<<9);
	  IODIR0 |=(1<<10);
		IODIR0 |=(1<<11);
		IODIR0 |=(1<<12);
		IODIR0 |=(1<<13);
		IODIR0 |=(1<<14);
		IODIR0 |=(1<<15);
		
				
IOSET0 |= (1 << 10);
IOSET0 |= (1 << 11);
		delay(100000);
IOCLR0 |=(1<<10);
IOCLR0 |=(1<<11);


IOSET0 |= (1 << 9);
IOSET0 |= (1 << 10);
IOSET0 |= (1 << 15);
IOSET0 |= (1 << 13);
IOSET0 |= (1 << 12);
	delay(100000);
IOCLR0 |=(1<<9);
IOCLR0 |=(1<<10);
IOCLR0 |=(1<<15);
IOCLR0 |=(1<<13);
IOCLR0 |=(1<<12);
	

IOSET0 |= (1 << 9);
IOSET0 |= (1 << 10);
IOSET0 |= (1 << 15);
IOSET0 |= (1 << 11);
IOSET0 |= (1 << 12);
	delay(100000);
IOCLR0 |=(1<<9);
IOCLR0 |=(1<<10);
IOCLR0 |=(1<<15);
IOCLR0 |=(1<<11);
IOCLR0 |=(1<<12);
	
	
IOSET0 |= (1 << 14);
IOSET0 |= (1 << 15);
IOSET0 |= (1 << 10);
IOSET0 |= (1 << 11);
	delay(100000);
IOCLR0 |=(1<<14);
IOCLR0 |=(1<<15);
IOCLR0 |=(1<<10);
IOCLR0 |=(1<<11);
	
	
IOSET0 |= (1 << 9);
IOSET0 |= (1 << 14);
IOSET0 |= (1 << 15);
IOSET0 |= (1 << 11);
IOSET0 |= (1 << 12);
	delay(100000);
IOCLR0 |=(1<<9);
IOCLR0 |=(1<<14);
IOCLR0 |=(1<<15);
IOCLR0 |=(1<<11);
IOCLR0 |=(1<<12);
	
	
IOSET0 |= (1 << 9);
IOSET0 |= (1 << 11);
IOSET0 |= (1 << 14);
IOSET0 |= (1 << 15);
IOSET0 |= (1 << 13);
IOSET0 |= (1 << 12);
	delay(100000);
IOCLR0 |=(1<<9);
IOCLR0 |=(1<<11);
IOCLR0 |=(1<<15);
IOCLR0 |=(1<<13);
IOCLR0 |=(1<<12);
IOCLR0 |=(1<<14);

	
IOSET0 |= (1 << 9);
IOSET0 |= (1 << 10);
IOSET0 |= (1 << 11);
	delay(100000);
	IOCLR0 |=(1<<9);
IOCLR0 |=(1<<10);
IOCLR0 |=(1<<11);
	
	
IOSET0 |= (1 << 9);
IOSET0 |= (1 << 10);
IOSET0 |= (1 << 11);
IOSET0 |= (1 << 14);
IOSET0 |= (1 << 15);
IOSET0 |= (1 << 13);
IOSET0 |= (1 << 12);
	delay(100000);
IOCLR0 |=(1<<9);
IOCLR0 |=(1<<10);
IOCLR0 |=(1<<11);
IOCLR0 |=(1<<15);
IOCLR0 |=(1<<13);
IOCLR0 |=(1<<12);
IOCLR0 |=(1<<14);
	
	
IOSET0 |= (1 << 9);
IOSET0 |= (1 << 10);
IOSET0 |= (1 << 11);
IOSET0 |= (1 << 14);
IOSET0 |= (1 << 15);
IOSET0 |= (1 << 12);
	delay(100000);
IOCLR0 |=(1<<9);
IOCLR0 |=(1<<10);
IOCLR0 |=(1<<11);
IOCLR0 |=(1<<15);
IOCLR0 |=(1<<12);
IOCLR0 |=(1<<14);
	
	
}
			return 0;
	}