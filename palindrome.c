// Q.31.Program: Check whether a number is a palindrome or not
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    /*
       A palindrome number is a number that reads the same
       backward as forward.
       Example: 121, 1331, 1221, 454, etc.
    */

    // Take input from user
    printf("Enter any number: ");
    scanf("%d", &num);

    original = num;  // Store original number to compare later

    // Reverse the number
    while(num != 0) {
        remainder = num % 10;             // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num = num / 10;                   // Remove last digit
    }

    // Check if original number and reversed number are same
    if(original == reversed)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0; // End of program
}
