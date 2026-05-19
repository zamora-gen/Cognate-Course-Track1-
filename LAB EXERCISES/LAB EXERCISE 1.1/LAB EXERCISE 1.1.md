<img width="635" height="462" alt="{9BC20C5E-FC80-4224-9593-542242760EF3}" src="https://github.com/user-attachments/assets/cddb22f5-c97d-416b-a31a-39f81d8ee71f" />


The Arduino Uno serves as the main controller of the circuit and is responsible for sending signals to the LEDs connected to pins 2–12. In the setup() function, the Arduino configures each pin as an OUTPUT using a for loop so the LEDs can be controlled properly. The loop() function then continuously executes the LED patterns to create a running light effect.

The first for loop moves the LEDs from right to left by starting from the last LED and decreasing the value of i until it reaches the first LED. Each LED lights up for 1 second and then turns off before the next LED lights up.

The second for loop moves the LEDs from left to right by starting from the first LED and increasing the value of i until it reaches the last LED. This creates a running light effect in the opposite direction.
