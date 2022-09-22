#include <stdio.h>

int main(int argc, const char **argv) {
    for (int i = 0; i < argc; i++) {
        printf("%s\t", argv[i]);
    }
    printf("\n");

    return 0;
};
