// Another reverse warmup
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void failed(const char *message) {
    puts(message);
    exit(1);
}

int main(int argc, char *argv[]) {
    printf("Anohter bad license checker\n");
    if (argc != 2) {
        printf("Usage: %s <key>\n", argv[0]);
        exit(1);
    }

    char *key = argv[1];
    for (size_t i = 0; key[i] != '\0'; ++i) {
        if (key[i] < 'a' || key[i] > 'z') {
            failed("Invalid characters found.");
        }
    }

    for (size_t i = 1; key[i] != '\0'; ++i) { 
        if (key[i] != key[i - 1] - 3) {
            failed("You must respect the rule!");
        }

        switch (key[i]) {
            case 'a':
            case 'b':
            case 'c':
            case 'd':
                failed("Invalid characters again, damn!");
            default:
                break;
        }
    }

    if (strlen(key) != 5) {
        failed("Wrong length!\n");
    } 

    printf("Success!\n");

    return 0;
}
