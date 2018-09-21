This code allows the user to toggle the LED with a button. The button is technically directed as an output. This makes pin 1.3
a 1 and connects it to the power supply. The resistor is then enabled. The logic in the if statement toggles the LED when the
input and BIT3 are not equal. So, when the button is pressed, the input is 0 and the LED is toggled. When the button is let go,
the two values are equal again and the LED is toggled again. 