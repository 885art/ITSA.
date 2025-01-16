#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float a, m;
    scanf("%f", &m);
    a = m * 100 / 23.8;
    a = ceil(a);
    printf("%.0f\n", a);
	return 0;
}