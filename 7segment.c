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
}
			return 0;
	}