#include <msp430.h> 


/**
 this code is copy-pasted from the G2 code.
 */

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode



        P1DIR = BIT0;
        P1REN = BIT1;
        P1OUT = BIT1;
        while(1)
        {
            if((P1IN & BIT1)!=BIT1)
            {
                __delay_cycles(550000);
                P1OUT ^= BIT0;
            }
        }
        return 0;

}
