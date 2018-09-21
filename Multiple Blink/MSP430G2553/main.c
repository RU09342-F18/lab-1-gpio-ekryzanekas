#include <msp430.h>

/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer


    P1DIR |= (BIT0 | BIT6); // P1.0 and 1.6 are both going to be used as outputs

    int green; //int to count for the green light
    int red; // int to count for the red light

    while(1) //runs infinitely
    {
        if(green > 20000) //led will toggle after 20k ticks
        {
            P1OUT ^= BIT0; //toggles LED
           green = 0; //goes back to 0
        }
        if(red > 5000) //led will toggle after 5k
        {
            P1OUT ^= BIT6; //toggles red led
            red = 0;
        }

        green++; // these lines increment the ints in the for loops
        red++;
    }

}
