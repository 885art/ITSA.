#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int N;
    scanf("%d", &N);
    if(N > 0) printf("正數\n");
    else if(N < 0) printf("負數\n");
    else printf("0\n");
	return 0;
}