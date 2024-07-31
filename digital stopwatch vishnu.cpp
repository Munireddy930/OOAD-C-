#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <stdint.h>

// PIT Ports
#define PIT_CONTROL_PORT 0x43
#define PIT_CHANNEL0_PORT 0x40
#define PIT_CHANNEL1_PORT 0x41
#define PIT_CHANNEL2_PORT 0x42

// PIT Control Word
#define PIT_MODE0 0x00    // Mode 0 - Interrupt on terminal count
#define PIT_MODE2 0x04    // Mode 2 - Rate Generator

// PIT Frequency
#define PIT_CLOCK 1193180 // PIT Clock Frequency in Hz

// Timer Frequency
#define TIMER_FREQ 1     // 1 Hz for 1-second intervals

// Set up PIT to operate in mode 2 (Rate Generator)
void setup_timer() {
    uint16_t divisor = PIT_CLOCK / TIMER_FREQ;

    // Set PIT to Mode 2 (Rate Generator) and binary mode
    outp(PIT_CONTROL_PORT, PIT_MODE2 | 0x30); // 0x30 = binary, LSB/MSB

    // Send divisor to PIT channel 0
    outp(PIT_CHANNEL0_PORT, divisor & 0xFF);   // Send LSB
    outp(PIT_CHANNEL0_PORT, (divisor >> 8) & 0xFF); // Send MSB
}

// Read the current value from PIT channel 0
uint16_t read_timer() {
    outp(PIT_CONTROL_PORT, 0x00); // Set mode to read channel 0
    uint16_t lsb = inp(PIT_CHANNEL0_PORT);
    uint16_t msb = inp(PIT_CHANNEL0_PORT);
    return (msb << 8) | lsb;
}

int main() {
    uint16_t start_time, end_time;
    uint16_t elapsed_time;

    // Initialize the PIT timer
    setup_timer();

    printf("Stopwatch started. Press any key to stop...\n");

    // Start the stopwatch
    start_time = read_timer();

    // Wait for a key press
    while (!kbhit()) {
        // Do nothing, just wait
    }

    // Stop the stopwatch
    end_time = read_timer();
    elapsed_time = start_time - end_time;

    printf("Elapsed time: %u ticks\n", elapsed_time);

    return 0;
}
