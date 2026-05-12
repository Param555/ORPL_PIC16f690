#include <xc.h>
// CONFIGURATION BITS
#pragma config FOSC = INTRCIO // Internal oscillator
#pragma config MCLRE = ON // MCLR Pin On
#pragma config CP = OFF // Code Protection Off
#pragma config BOREN = ON // Brown-out Reset On
#define _XTAL_FREQ 4000000 // 4MHz Clock
void main(void) {
OSCCONbits.IRCF = 0b110; // Set internal clock to 4MHz
ANSELbits.ANS4 = 0; // Disable analog functionality on
RC0
TRISCbits.TRISC0 = 0; // Set RC0 (Pin 16) as output
PORTCbits.RC0 = 0; // Initialize LED as off
while (1) {
PORTCbits. RCO = 1;
// LED ON
_delay_ms(5000);
// 5sec delay
PORTCbits.RCO = 0;
// LED OFF
_delay_ms(5000);
// 5sec delay
}
}
