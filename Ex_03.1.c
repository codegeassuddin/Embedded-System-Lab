#include<reg51.h>
unsigned int i,j;
unsigned char count;
void delay(void){
	for(i=0;i<10;i++){
		for(j=0;j<10000;j++){
			;
		}
	}
}
void main(void){
	count =0;
	while(1){
		P2=~count;
		delay();
		count++;
	}
}