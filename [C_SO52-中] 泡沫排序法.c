#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    int temp;
    bool f;
    for (int i = 0; i < n - 1; i++) {
        f = false; 
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j + 1] > arr[j]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                f = true;
            }
        }
        if (f == false) break;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d %d\n", i + 1, arr[i]);
    }

    return 0;
}
