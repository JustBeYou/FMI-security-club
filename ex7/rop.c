// Buffer overflow, executable stack

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char buf[10];
    printf("ROP'n'Roll\n");
    printf("> ");
    fflush(stdout);
    read(0, buf, 999);

    return 0;
}
