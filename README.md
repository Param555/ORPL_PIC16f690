Description

This project demonstrates the implementation of an LED blinking system using the PIC16F690 microcontroller and PICkit 3 programmer. The objective of the project is to understand the fundamentals of embedded system programming, microcontroller interfacing, hardware configuration, and software compilation using the MPLAB X IDE environment.

The project uses the PIC16F690, a 20-pin, 8-bit RISC-based CMOS microcontroller developed by Microchip Technology. The controller supports up to 20 MHz external clock frequency and includes an accurate 8 MHz internal oscillator, eliminating the need for external crystal components in basic applications. It contains 7 KB Flash memory, 256 Bytes RAM, and 256 Bytes EEPROM for program and data storage. The microcontroller also provides 12-channel 10-bit ADC, dual comparators, and communication interfaces such as UART, SPI, and I2C. Due to its nanoWatt low-power technology, it is suitable for battery-operated and low-power embedded applications.

The hardware setup consists of a PIC16F690 microcontroller, PICkit 3 programmer, breadboard, LED, jumper wires, USB cable, and resistors. A 10kΩ resistor is used as a pull-up resistor for the MCLR reset pin, while a 320Ω resistor limits current through the LED. The LED is connected to Pin 16 (RC0) of the microcontroller, and the programming interface uses In-Circuit Serial Programming (ICSP) connections through the PICkit 3.

The software implementation is performed using MPLAB X IDE v6.20 and the XC8 compiler. The program is written in Embedded C and configured to use the internal oscillator while disabling unnecessary features such as the Watchdog Timer. The source code initializes the RC0 pin as an output and continuously toggles the LED state to create a blinking effect. Since the hardware accepts only hexadecimal machine code, the source file must first be compiled into a HEX file before programming the microcontroller using PICkit 3.

The procedure includes assembling the circuit on a breadboard, configuring MPLAB X project settings, enabling power supply through PICkit 3, compiling the code, and programming the device. After successful flashing of the HEX file, the LED connected to RC0 blinks continuously, verifying proper hardware-to-software communication and successful microcontroller operation.

This project serves as a beginner-level embedded systems experiment that helps in understanding:

Microcontroller programming
ICSP-based programming techniques
Embedded C development
Hardware interfacing
GPIO control
Development environment configuration
HEX file generation and flashing process
