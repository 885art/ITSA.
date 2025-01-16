#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Triangle area:%.1lf\n", a * b / 2);

	return 0;
}