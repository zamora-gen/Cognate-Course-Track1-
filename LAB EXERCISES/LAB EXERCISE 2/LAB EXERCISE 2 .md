<img width="1421" height="564" alt="image" src="https://github.com/user-attachments/assets/220f0290-a3aa-4a61-ba8b-8ce30eff7df1" />



The circuit shown in the image is an Arduino-based 7-segment display counter designed using Tinkercad. The setup follows the given instructions by using an Arduino Uno, a common cathode 7-segment display, two push buttons, resistors, and a breadboard. The 7-segment display is connected at the center of the breadboard, with its segment pins linked to Arduino digital pins 2 through 8. The common cathode pin is connected to the ground rail through a 330Ω resistor to protect the LEDs from excessive current.

Two push buttons are placed on the right side of the breadboard and serve as the increment and decrement controls. The increment button is connected to Arduino pin 10, while the decrement button is connected to pin 9. Both buttons are wired with 10kΩ pull-down resistors connected to ground to ensure stable LOW signals when the buttons are not pressed, preventing random or false inputs caused by electrical noise.

The Arduino program acts as the brain of the circuit. It starts the counter value at 0 and displays it on the 7-segment display. When the increment button is pressed, the Arduino checks if the current value is less than 9 before adding 1 to the counter. When the decrement button is pressed, the Arduino checks if the value is greater than 0 before subtracting 1. These conditions prevent the counter from exceeding the range of 0 to 9.

To improve the performance of the buttons, a short delay of 200 milliseconds is added in the code to avoid the “double-click” or bouncing effect, ensuring that each press changes the number only once. Overall, the circuit demonstrates how input devices, output displays, and Arduino programming work together to create a functional digital counter system.
