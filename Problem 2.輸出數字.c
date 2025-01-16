#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    printf("%d\n%d\n%d\n%d\n", n / 1000, n / 100 % 10, n / 10 % 10 , n % 10);
	return 0;
}