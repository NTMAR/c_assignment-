// Q34.b. Design the pattern using while and for loop
// This program prints a pyramid-like number pattern
// using nested for loops.
// Example output:
// 1
// 12
// 123
// 1234
// 12345
// 1234
// 123
// 12
// 1

#include <stdio.h>

int main() {
    int i, j;  // Declare loop control variables

    // ---------------------------
    // Upper half of the pattern
    // ---------------------------
    // Outer loop for rows from 1 to 5
    for(i = 1; i <= 5; i++) {

        // Inner loop prints numbers from 1 to current row number (i)
        for(j = 1; j <= i; j++) {
            printf("%d", j);  // Print the current number
        }

        printf("\n");  // Move to the next line after each row
    }

    // ---------------------------
    // Lower half of the pattern
    // ---------------------------
    // Outer loop for rows from 4 down to 1
    for(i = 4; i >= 1; i--) {

        // Inner loop prints numbers from 1 to current row number (i)
        for(j = 1; j <= i; j++) {
            printf("%d", j);  // Print the current number
        }

        printf("\n");  // Move to the next line after each row
    }

    return 0;  // Indicate successful program termination
}
