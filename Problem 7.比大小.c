#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = a; 
    if (b > max) {
        max = b; 
    }
    if (c > max) {
        max = c; 
    }
    printf("%d\n", max);
	return 0;
}