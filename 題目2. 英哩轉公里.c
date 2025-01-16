#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a;
    while (scanf("%lf", &a) != EOF) {
        printf("%.1lf\n", a * 1.6);
    }
    
	return 0;
}