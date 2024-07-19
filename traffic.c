#include <LPC214x.h>

// Delay function
void delay(unsigned int count) {
    unsigned int i;
    for (i = 0; i < count; i++);
}

int main(void) {
    // Set P0.10 as output
    IODIR0 |= (1 << 7);
	  IODIR0 |=(1<<5);
	IODIR0 |=(1<<6);
	
    
    while (1) {
        // Turn LED on
        IOSET0 |= (1 << 7);
        delay(500000);

        // Turn LED off
        IOCLR0 |= (1 << 7);
        delay(10000);
			 IOSET0 |= (1 << 5);
        delay(500000);

        // Turn LED off
        IOCLR0 |= (1 << 5);
        delay(10000);
			IOSET0 |= (1 << 6);
        delay(500000);

        // Turn LED off
        IOCLR0 |= (1 << 6);
        delay(10000);
    }

    return 0;
}