//Q.50.WAP to merge two arrays and display the elements in sorted order.
#include <stdio.h>

int main() {
    int A[100], B[100], C[200];
    int n1, n2, n3, i, j, temp;

    // Input first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }

    // Input second array
    printf("\nEnter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }

    // Merge arrays
    n3 = n1 + n2;
    for (i = 0; i < n1; i++) {
        C[i] = A[i];
    }
    for (i = 0; i < n2; i++) {
        C[n1 + i] = B[i];
    }

    // Sort merged array (Bubble Sort)
    for (i = 0; i < n3 - 1; i++) {
        for (j = 0; j < n3 - i - 1; j++) {
            if (C[j] > C[j + 1]) {
                temp = C[j];
                C[j] = C[j + 1];
                C[j + 1] = temp;
            }
        }
    }

    // Display sorted merged array
    printf("\nMerged and Sorted Array:\n");
    for (i = 0; i < n3; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
