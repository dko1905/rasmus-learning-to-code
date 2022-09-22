#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int car_count = 5, ret = 0;
    ret = scanf("%i", &car_count);
    if (ret != 1) {
        perror("Failed to read input");
        return 1;
    }

    printf("Hello %i\n", car_count);



    return 0;
};
