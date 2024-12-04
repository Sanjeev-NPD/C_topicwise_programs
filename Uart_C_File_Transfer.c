#include <windows.h>
#include <stdio.h>

void send_hex_file(const char *port_name, const char *file_path) {
    HANDLE hSerial;
    DCB dcbSerialParams = {0};
    COMMTIMEOUTS timeouts = {0};
    char buffer[1024];
    FILE *file;
    DWORD bytes_written;

    // Open serial port
    hSerial = CreateFile(port_name, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hSerial == INVALID_HANDLE_VALUE) {
        printf("Error opening port %s\n", port_name);
        return;
    }

    // Configure serial port
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);
    if (!GetCommState(hSerial, &dcbSerialParams)) {
        printf("Error getting serial port state\n");
        CloseHandle(hSerial);
        return;
    }
    dcbSerialParams.BaudRate = CBR_9600;  // Set baud rate
    dcbSerialParams.ByteSize = 8;         // Data bits
    dcbSerialParams.StopBits = ONESTOPBIT;
    dcbSerialParams.Parity = NOPARITY;
    if (!SetCommState(hSerial, &dcbSerialParams)) {
        printf("Error setting serial port state\n");
        CloseHandle(hSerial);
        return;
    }

    // Set timeouts
    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;
    if (!SetCommTimeouts(hSerial, &timeouts)) {
        printf("Error setting timeouts\n");
        CloseHandle(hSerial);
        return;
    }

    // Open hex file
    file = fopen(file_path, "r");
    if (!file) {
        printf("Error opening file %s\n", file_path);
        CloseHandle(hSerial);
        return;
    }

    // Send data line by line
    while (fgets(buffer, sizeof(buffer), file)) {
        // Remove newline character
        char *newline = strchr(buffer, '\n');
        if (newline) *newline = '\0';

        // Write data to the serial port
        if (!WriteFile(hSerial, buffer, strlen(buffer), &bytes_written, NULL)) {
            printf("Error writing to serial port\n");
            break;
        }

        // Send newline to indicate end of the line
        if (!WriteFile(hSerial, "\n", 1, &bytes_written, NULL)) {
            printf("Error writing newline to serial port\n");
            break;
        }

        printf("Sent: %s\n", buffer);
        Sleep(10);  // Allow time for PIC to process
    }

    fclose(file);
    CloseHandle(hSerial);
    printf("File transfer complete.\n");
}

int main() {
    const char *port_name = "COM3";          // Change to your serial port
    const char *file_path = "hexfile.hex";   // Change to your hex file path

    send_hex_file(port_name, file_path);

    return 0;
}
