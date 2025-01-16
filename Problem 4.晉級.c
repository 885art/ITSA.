#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    int a, count = 0;
    char s[100];
    for (int i = 0; i < n; i++){
        scanf("%s %d", s, &a);
        if (a >= 60) {
            printf("%s\n",s);
            count++;
        }
    }
    if (count >= ceil(n / 2)) printf("晉級\n");
    else printf("失敗\n");
	return 0;
}