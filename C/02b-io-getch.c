#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    int c = 0;

    while (true) {
        c = getc(stdin);
        if (c < 0) break;
        printf("%i '%c'\n", c, c);
    }

    return 0;
};
