// Q.32. Program: Check whether a number is a prime number or not
#include <stdio.h>

int main() {
    int num, i, flag = 0;

    /*
       A prime number is a number greater than 1
       that is divisible only by 1 and itself.
       Examples: 2, 3, 5, 7, 11, 13, ...
    */

    // Take input from user
    printf("Enter any number: ");
    scanf("%d", &num);

    // Prime numbers are greater than 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check divisibility from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {   // If divisible by any number
            flag = 1;         // Then it's not prime
            break;            // No need to check further
        }
    }

    // Display result
    if (flag == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0; // End of program
}
