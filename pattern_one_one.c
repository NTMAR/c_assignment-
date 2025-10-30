// Q34.a. Design the pattern using while and for loop
// This program prints a right-angled triangle number pattern
// Example output:
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>

int main() {
    int i, j;  // Declare loop control variables

    // Outer loop controls the number of rows (1 to 5)
    for(i = 1; i <= 5; i++) {

        // Inner loop prints numbers from 1 to the current row number (i)
        for(j = 1; j <= i; j++) {
            printf("%d ", j);  // Print the current number
        }

        printf("\n");  // Move to the next line after each row
    }

    return 0;  // Indicate successful program termination
}
