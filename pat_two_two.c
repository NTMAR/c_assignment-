// Q34.b. Design the pattern using while and for loop
// This program prints a right-angled triangle number pattern
// where each row contains repeated values of the row number.
// Example output:
// 1
// 22
// 333
// 4444
// 55555

#include <stdio.h>

int main() {
    int i, j;  // Declare loop control variables

    // Outer loop controls the number of rows (1 to 5)
    for(i = 1; i <= 5; i++) {

        // Inner loop prints the current row number 'i' repeatedly
        for(j = 1; j <= i; j++) {
            printf("%d", i);  // Print the current row number
        }

        printf("\n");  // Move to the next line after each row
    }

    return 0;  // Indicate successful program termination
}
