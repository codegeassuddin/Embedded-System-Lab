#include <reg51.h>
void Delay(void)
{
    unsigned char i;

    for(i = 0; i < 250; i++)
    {
        TMOD = 0x01;      // Timer 0, Mode 1

        TH0 = 0xFC;       // Load higher byte
        TL0 = 0x18;       // Load lower byte

        TF0 = 0;
        TR0 = 1;          // Start Timer 0

        while(TF0 == 0);

        TR0 = 0;          // Stop Timer 0
        TF0 = 0;          // Clear overflow flag
    }
}

void main(void)
{
    while(1)
    {
        P2 = 0xFF;        // LED ON
        Delay();

        P2 = 0x00;        // LED OFF
        Delay();
    }
}