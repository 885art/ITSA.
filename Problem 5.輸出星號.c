#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    int a, b, c, d, e;

    scanf("%d", &n);
    a = n / 10000;
    b = n / 1000 % 10;
    c = n / 100 % 10;
    d = n / 10 % 10;
    e = n % 10;

    for(int i = 0; i < a; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < b; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < c; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < d; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < e; i++){
        printf("*");
    }
    printf("\n");    
	return 0;
}