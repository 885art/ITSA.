#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    int bits[8]; 
    if (num < 0) {
        num = 256 + num; 
    }

    for (int i = 7; i >= 0; i--) {
        bits[i] = num % 2;
        num /= 2;
    }

    for (int i = 0; i < 8; i++) {
        printf("%d", bits[i]);
    }
    printf("\n");

    return 0;
}