#include <stdio.h>
#include <limits.h>

#define MAX 100

void Print_Parens(int s[MAX][MAX], int i, int j) {
    if (i == j) {
        printf("M%d", i + 1);
    } else {
        printf("(");
        Print_Parens(s, i, s[i][j]);
        Print_Parens(s, s[i][j] + 1, j);
        printf(")");
    }
}

void matrixChainOrder(int dimensions[], int n) {
    int m[MAX][MAX] = {0}; 
    int s[MAX][MAX] = {0}; 

    for (int l = 2; l < n; l++) {
        for (int i = 0; i < n - l; i++) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int q = m[i][k] + m[k + 1][j] + dimensions[i] * dimensions[k + 1] * dimensions[j + 1];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }

    Print_Parens(s, 0, n - 2);
    printf("\n");

    printf("%d\n", m[0][n - 2]);
}

int main() {
    int n;
    int dimensions[MAX] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int rows, cols;
        scanf("%d %d", &rows, &cols);
        if (i == 0) {
            dimensions[0] = rows;
        }
        dimensions[i + 1] = cols;
    }

    matrixChainOrder(dimensions, n + 1);

    return 0;
}
