#include <reg51.h>

sbit LED = P2^0;  // Connect LED to pin P2.0

void delay() {
    int i, j;
    for(i = 0; i < 1000; i++)
        for(j = 0; j < 1275; j++);
}

void main() {
    while(1) {
        LED = 1;  // Turn LED ON
        delay();
        LED = 0;  // Turn LED OFF
        delay();
    }
}