// Reverse warmup
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    printf("Very bad license checker\n");

    printf("License owner's name: ");
    char name[100];
    scanf("%99s", name);

    printf("Enter you license key: ");
    char key[100];
    scanf("%99s", key);

    if (strcmp(name, "bis_bo$$") == 0 &&
            strcmp(key, "qwerty123456") == 0) {
        printf("License validated successfully!\n");
    } else {
        printf("Failed.\n");
    }

    return 0;
}
