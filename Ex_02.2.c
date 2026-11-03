#include <reg51.h>
unsigned char received_data;
void main(void)
{
    P1 = 0xFF;        // Configure Port 1 for input
    while(1)
    {
        received_data = P1;
        P2 = received_data;
    }
}
