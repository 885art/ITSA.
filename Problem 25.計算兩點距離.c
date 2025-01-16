#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float x1, x2, y1, y2, d;
    scanf("%f %f\n%f %f", &x1, &y1, &x2, &y2);
    d = pow(x1 - x2, 2) + pow(y1 - y2, 2);
    d = sqrt(d);
    printf("%.2f\n", d);
	return 0;
}