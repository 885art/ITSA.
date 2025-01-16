#include <stdio.h>
#include <math.h>

int main() {
    int n, a;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        if(a >= 28) printf("肥胖\n");
        else if(a < 28 && a >= 24) printf("體重過重\n");
        else if(a < 24 && a >= 18.5) printf("正常\n");
        else printf("體重過輕\n");
    }

    return 0;
}
