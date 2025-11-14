/*Q35.Write a program to generate Pascal Triangle.
    -----------------------------------------
                PASCAL'S TRIANGLE
    -----------------------------------------

                      1
                    1   1
                  1   2   1
                1   3   3   1
              1   4   6   4   1
            1   5  10  10   5   1
          1   6  15  20  15   6   1
        ------------------------------------

*/

#include <stdio.h>

int main() {
    int n, i, j, coef;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        // Print leading spaces
        for (j = 0; j < n - i - 1; j++) {
            printf("  ");
        }

        // Print Pascal values
        coef = 1;
        for (j = 0; j <= i; j++) {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);  // formula for next coefficient
        }

        printf("\n");
    }

    return 0;
}
