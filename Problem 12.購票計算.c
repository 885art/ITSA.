#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int N, a, b, c;
    scanf("%d", &N);
    a = N / 10;
    b = (N - (a * 10)) / 5 ;
    c = (N - (a * 10)) - (b * 5);
    printf("NT10=%d\nNT5=%d\nNT1=%d\n", a, b, c);
	return 0;
}