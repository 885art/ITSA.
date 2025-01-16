#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    float a, b;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f", &a);
        b = a * a;
        b = roundf(b * 10) / 10;
        printf("%.1f\n", b);
    }
	return 0;
}