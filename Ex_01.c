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
        P2=0;
        delay();
        P2=1;
        delay();
    }
}
