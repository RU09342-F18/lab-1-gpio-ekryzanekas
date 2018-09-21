#include <msp430g2553.h>
//code taken from 'Embedded Project Hunter Wordpress' link: https://embeddedprojecthunter.wordpress.com/2015/08/28/simple-button-programming-for-msp430g2553/
//comments to explain code will be in my own words
void main(void)
{
    WDTCTL = WDTPW + WDTHOLD; //stops watchdog timer
    P1DIR = BIT0; //sets bit 0 to an output
    P1REN = BIT3; //enables pull up resistor to 1.3 (button) to make it high
    P1OUT = BIT3; //sets bit 1.3 to output (1) to connect the resistor to the power supply, making BIT3 high, this is important for the logic inside the for loop

    while(1)
    {
        if((P1IN & BIT3)!=BIT3) //if p1 input and bit3 are not equal to bit 3(1) then it will toggle the LED
                                // because p1 is 0 when the button is pressed and bit3 is always 1, when the button is pressed, the LED will toggle
        {
            __delay_cycles(550000); //sets a delay, I messed with this delay to make it at a speed ergonomic to a human normally pressing a button
            P1OUT ^= BIT0;
        }
    }
}
