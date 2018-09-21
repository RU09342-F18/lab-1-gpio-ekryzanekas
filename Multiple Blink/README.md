The code outlines how to make two LEDs blink at different frequencies. The code used on each board was basically the same, with
the only difference being that on the G2, the LED pins are 1.0 and 1.6, while on the FR2311, they are on the 1.0 and 2.0. This
is a pretty simple adjustment. All you have to do is edit the PxDIR lines and correspond them to the bits with the LEDS. The
program works by running an infinite while loop, and nesting for loops inside them. The for loops increment an int, and when
the int reaches a certain value, the LEDs will toggle. To make each LED toggle at a different rate, one for loop made one
LED toggle at an arbitrary int, while the other for loop made the other LED toggle at a different integer value. If one int
was twice as large as the other, that LED would blink twice as slow. 
