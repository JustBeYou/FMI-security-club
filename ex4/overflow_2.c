// Another flag overflow 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size = 0;
    int buf[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int l33th4xor = 0;

    printf("Input size: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &buf[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += buf[i];
    }
    printf("%d\n", sum);

    printf("Thanks!\n");
    if (l33th4xor == 1337) {
        puts("You look like a l33t h4xor!\n");
        exit(-1);
    }

    return 0;
}
