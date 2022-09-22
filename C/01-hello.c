#include <stdio.h>
#include <stdint.h>

int main(void) {
    printf("Hello, world!\n");

    // Indbyggede typer
    char a = 1;
    short b = 2;
    int c = 3;
    long d = 4;

    // Ekstra typer (anbefalet)
    uint8_t a2 = 1; // FEJL: uint8_t a = 1;
    uint16_t b2 = 2;
    uint32_t c2 = 3;
    uint64_t d2 = 4;

    uintmax_t e = 5;
    uintptr_t f = 6;

    return 0;
};
