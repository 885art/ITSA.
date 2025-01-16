#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Trapezoid area:%.1lf\n", (a + b) * c / 2);
	return 0;
}