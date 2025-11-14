//Q.45.Write a program for matrix multiplication.
#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    printf("Enter rows and columns of first matrix (A): ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of second matrix (B): ");
    scanf("%d %d", &p, &q);

    // Check if multiplication is possible
    if (n != p) {
        printf("\nMatrix multiplication not possible! (Columns of A != Rows of B)\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    // Input matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize C with 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("\nResultant Matrix (A × B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d  ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
