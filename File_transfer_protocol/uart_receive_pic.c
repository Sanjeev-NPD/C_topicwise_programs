#include <xc.h>
#include <stdio.h>
#include <string.h>

#define _XTAL_FREQ 8000000  // Update based on your clock frequency

// UART configuration
void UART_Init() {
    TRISC6 = 0;  // TX pin as output
    TRISC7 = 1;  // RX pin as input
    SPBRG = 51;  // Baud rate 9600 for 8MHz clock
    TXEN = 1;    // Enable transmission
    SYNC = 0;    // Asynchronous mode
    SPEN = 1;    // Enable serial port
    CREN = 1;    // Enable continuous reception
}

void UART_Write(char data) {
    while (!TXIF);  // Wait for TX buffer to be empty
    TXREG = data;   // Transmit data
}

char UART_Read() {
    while (!RCIF);  // Wait for data to be received
    return RCREG;   // Return received data
}

void UART_Write_Text(const char *text) {
    for (int i = 0; i < strlen(text); i++) {
        UART_Write(text[i]);
    }
}

void write_to_memory(uint16_t address, uint8_t data) {
    // Code to write to a specific memory location
    // This depends on the memory type (e.g., flash, EEPROM)
    // Example: Writing to EEPROM
    EEADR = address;  // EEPROM Address Register
    EEDATA = data;    // Data to write
    EEPGD = 0;        // Access EEPROM memory
    WREN = 1;         // Enable write
    GIE = 0;          // Disable interrupts
    EECON2 = 0x55;    // Required sequence
    EECON2 = 0xAA;
    WR = 1;           // Start write
    while (WR);       // Wait for write to complete
    WREN = 0;;        // Disable write
    GIE = 1;          // Enable interrupts
}

void main() {
    char buffer[50];
    uint16_t address = 0x00;  // Start address for data storage

    UART_Init();
    UART_Write_Text("Ready to receive...\n");

    while (1) {
        uint8_t i = 0;
        // Receive a line of hex data
        while (1) {
            char received_char = UART_Read();
            if (received_char == '\n') break;
            buffer[i++] = received_char;
        }
        buffer[i] = '\0';  // Null-terminate the string

        // Echo received data
        UART_Write_Text("Received: ");
        UART_Write_Text(buffer);
        UART_Write('\n');

        // Parse and store data (simple example for storing as bytes)
        for (i = 0; buffer[i] != '\0'; i++) {
            write_to_memory(address++, buffer[i]);
        }
    }
}
