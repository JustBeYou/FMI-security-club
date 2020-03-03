// Return to win function
// No protections
#include <stdio.h>
#include <stdlib.h>

void login_done() {
    printf("Welcome, admin!\n");
    exit(1337);
}

int main(int argc, char *argv[]) {
    printf("Please enter your access pin: ");

    char correct_pin[5];
    char pin[5];
    scanf("%s", pin);

    FILE *f = fopen("pin.txt", "r");
    fscanf(f, "%s", correct_pin);

    if (strcmp(pin, correct_pin) == 0) {
        login_done();
    } else {
        printf("Invalid\n");
    }

    return 0;
}
