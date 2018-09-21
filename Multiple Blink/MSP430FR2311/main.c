#include <msp430.h> 


/**
 code is the same as G2, but since the two LEDs have different pins, 1.0 and 2.0 instead of 1.0 and 1.6, I added a separate DIR line for each.
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode

	P1DIR |= BIT0;
	P2DIR |= BIT0;

	    int led1;
	    int led2;
	    while (1)
	    {


	    if (led1 > 30000)
	    {
	        P1OUT ^= BIT0;
	        led1 = 0;

	    }


	    if (led2 > 15000)
	    {
	        P2OUT ^= BIT0;
	        led2 = 0;

	    }
	    led1++;
	    led2++;
	    }
	

}
