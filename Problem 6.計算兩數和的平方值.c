#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, a, b;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", (a + b) * (a + b));
    }
	return 0;
}