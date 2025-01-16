#include <stdio.h>
#include <math.h>

int main() {
    int n, a, b, sum;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        sum = 0;
        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        for(int i = a; i <= b; i++) sum += i;
        printf("%d\n", sum);
    }
    return 0;
}
