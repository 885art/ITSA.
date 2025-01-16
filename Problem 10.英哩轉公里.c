#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a;
    scanf("%lf", &a);
    printf("km=%.1lf\n", a * 1.6);
	return 0;
}