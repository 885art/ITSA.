#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, M, M2, M3;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &M);
        M2 = M * M;
        M3 = M2 * M;
        printf("%d %d %d\n", M, M2, M3);
    }
	return 0;
}