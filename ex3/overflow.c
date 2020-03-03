
// Overflow win flag
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buf[16];
    char key = 'B';

    memset(buf, 0, 16);
    printf("Type some data: ");
    gets(buf);

    printf("Thanks!\n");
    if (key == 'A') {
        puts("You look like a l33t h4xor!\n");
        exit(-1);
    }

    return 0;
}
