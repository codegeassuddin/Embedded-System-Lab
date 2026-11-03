#include<reg51.h>
unsigned int i,j;
void delay(void){
	for(i=0;i<10;i++){
		for(j=0;j<10000;j++){
			;
		}
	}
}
void main(void){
	while(1){
		P2=0xFF;
		delay();
		P2=0x55;
		delay();
		P2=0x44;
		delay();
		P2=0xAA;
		delay();
	}
}