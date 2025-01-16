#include <stdio.h>
#include <math.h>

int main() {
    float weight, height, bmi;

    scanf("%f", &weight);
    scanf("%f", &height);

    height = height / 100;
    bmi = weight / (height * height);
    bmi = roundf(bmi * 100) / 100;

    printf("%.2f\n", bmi);

    return 0;
}
