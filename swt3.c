//SWITCH
#include<LPC214X.h>
int main(){
while(1){
IODIR1&=(~(0x01<<16));//set direction as input
IODIR0|=(0x01<<7);//set direction as output
if((0x01<<16)&IOPIN1){
	IOSET0|=(0x01<<7);

}
	else{
		IOCLR0|=(0x01<<7);
	}
	}	
}