#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b;
    int sum = 0;
    for(int i = 0; i < 6; i++){
        scanf("%d", &a);
        b = a * a ;
        sum += b;
    }
    printf("%d\n", sum);
	return 0;
}