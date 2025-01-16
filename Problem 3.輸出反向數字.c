#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    printf("%d,%d,%d,%d\n", n % 10, n / 10 % 10, n / 100 % 10, n / 1000);
	return 0;
}