#include <stdio.h>
#include <math.h>

int main() {
    int n, a;
    int v = 0, w = 0, x = 0, y = 0, z = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        if(a >= 90) v++;
        else if(a <= 89 && a >= 80) w++;
        else if(a <= 79 && a >= 70) x++;
        else if(a <= 69 && a >= 60) y++;
        else if(a <= 59) z++;
    }
    printf("優等 %d\n甲等 %d\n乙等 %d\n丙等 %d\n不及格 %d\n", v , w , x , y , z);
    return 0;
}
