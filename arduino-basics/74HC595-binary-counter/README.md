#74HC595 Binary Counter
This is a simple binary counter using the 74HC595 Shift Register

##Components Used
- Arduino UNO
- 74HC595 Shift Register
- 8 LEDs
- 330Ω Resistors (8x)
- Breadboard and Jumper Wires

##How it Works
The Arduino sends data to the HC595 using SPI-like Serial communication. Each bit represents the state of LED, the bits run from 0 to 1 byte(255) and then back down to 0.

##Code
[binary_counter.ino](./binary_counter.ino)
