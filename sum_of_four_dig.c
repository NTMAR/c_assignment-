//Q9.Input a four digit number and display sum of digits.
#include <stdio.h>

int main() {
    int number, sum = 0, temp;

    // Input a four-digit number
    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    temp = number; // Store the original number in temp

    // Calculate sum of digits
    while (temp != 0) {
        sum += temp % 10;  // Add last digit to sum
        temp /= 10;        // Remove last digit
    }

    // Display the result
    printf("Sum of digits of %d = %d\n", number, sum);

    return 0;
}
