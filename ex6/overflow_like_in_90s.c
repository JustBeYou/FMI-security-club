// Buffer overflow, executable stack

#include <stdio.h>
#include <stdlib.h>

void useless() {
    asm("jmp %rsp");
}

int main(int argc, char *argv[]) {
    char buf[100];
    printf("Hi, 2004 here, NX not yet implemented anywhere.\n");
    printf("> ");
    fflush(stdout);
    gets(buf);

    return 0;
}
