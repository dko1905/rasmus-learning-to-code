#include <stdio.h>

int readline2(char *buffer, int buffer_len);

int main(int argc, const char **argv) {
    char buffer[20];

    int ret = readline2(buffer, 20);

    printf("%i %s\n", ret, buffer);

    return 0;
};

int readline2(char *buffer, int buffer_len) {
    int c = 0, i = 0;
    
    while (c >= 0) {
        c = getc(stdin);
        if (c == '\n') {
            break;
        } else if (i >= buffer_len - 1) {
            break;
        }
        buffer[i++] = (char)c;
    }
    buffer[i] = '\0';

    return i;
}
