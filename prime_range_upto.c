// Q.33.Program: Generate all prime numbers in a given range
#include <stdio.h>

int main() {
    int start, end, i, j, flag;

    /*
       A prime number is a number greater than 1
       that has no divisors other than 1 and itself.
       This program prints all prime numbers
       between 'start' and 'end' entered by the user.
    */

    // Take input range from user
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("\nPrime numbers between %d and %d are:\n", start, end);

    // Loop through all numbers in the given range
    for (i = start; i <= end; i++) {
        if (i <= 1)
            continue;  // Skip numbers less than or equal to 1

        flag = 0;  // Assume number is prime initially

        // Check divisibility from 2 to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {  // If divisible, not prime
                flag = 1;
                break;
            }
        }

        // If flag is still 0, number is prime
        if (flag == 0)
            printf("%d ", i);
    }

    printf("\n");  // New line after printing all primes
    return 0;      // End of program
}
