#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c;
    char order;

    scanf("%d %d %d", &a, &b, &c);

    scanf(" %c", &order);

    if (order == 'A') {  
        if (a > b) { int temp = a; a = b; b = temp; }
        if (a > c) { int temp = a; a = c; c = temp; }
        if (b > c) { int temp = b; b = c; c = temp; }
        printf("%d<%d<%d\n", a, b, c);
    } else if (order == 'D') {  
        if (a < b) { int temp = a; a = b; b = temp; }
        if (a < c) { int temp = a; a = c; c = temp; }
        if (b < c) { int temp = b; b = c; c = temp; }
        printf("%d>%d>%d\n", a, b, c);
    }
    return 0;
}
