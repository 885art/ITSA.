#include <stdio.h>

int main() {
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            for (int i = 1; i <= 5; i++) {
                for (int j = 1; j <= 5 - i; j++) {
                    printf(" ");
                }
                for (int k = 1; k <= 2 * i - 1; k++) {
                    if (k == 1 || k == 2 * i - 1 || i == 5) {
                        printf("*");
                    } 
                    else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            break;
        case 2:
            for (int i = 1; i <= 5; i++) {
                for (int j = 1; j <= 5 - i; j++) {
                    printf(" ");
                }
            for (int k = 1; k <= 2 * i - 1; k++) {
                printf("*");
            }
            printf("\n");
            }
            break;
        case 3:
            for (int i = 5; i >= 1; i--) {
                for (int j = 1; j <= 5 - i; j++) {
                printf(" ");
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                printf("*");
            }
            printf("\n");
        }
            break;
    }

    return 0;
}
