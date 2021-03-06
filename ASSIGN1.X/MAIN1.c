/*
 * File:   MAIN1.c
 * Author: Simon SHUMBUSHO & Sandrine CYIMANA
 *
 * Created on July 19, 2021, 3:17 AM
 */

// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.


#include <xc.h>
#define _XTAL_FREQ 30000000
void main(void) {
        TRISA=0x00;
        PORTA=0;
        while(1){
            PORTAbits.RA0=1;
            __delay_ms(5000);
            PORTAbits.RA0=0;
            
            PORTAbits.RA1=1;
            __delay_ms(1000);
            PORTAbits.RA1=0;
            
            PORTAbits.RA2=1;
            __delay_ms(5000);
            PORTAbits.RA2=0;      
        }
    return;
}

