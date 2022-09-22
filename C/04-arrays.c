#include <stdio.h>

int main(int argc, const char **argv) {
    int arr[100] = {0};

    for (int i = 0; i < 100; i++) {
        arr[i] = i;
    }

    for (int i = 100; i > 0; i--) {
        printf("%i\n", arr[i - 1]);
    }

    return 0;
};

