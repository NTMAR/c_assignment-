//Q28.Write a program to display sum of digits.
#include <stdio.h>

int main() {
    int number, temp, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    // Convert negative numbers to positive
    if (temp < 0) {
        temp = -temp;
    }

    // Calculate sum of digits
    while (temp != 0) {
        sum += temp % 10;  // Add last digit to sum
        temp = temp / 10;  // Remove last digit
    }

    printf("Sum of digits of %d = %d\n", number, sum);

    return 0;
}
