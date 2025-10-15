//Q29.Write a program to display reverse of a no.
#include <stdio.h>

int main() {
    int number, temp, reverse = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    // Convert negative numbers to positive for reversal
    int isNegative = 0;
    if (temp < 0) {
        temp = -temp;
        isNegative = 1;
    }

    // Reverse the number
    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }

    // Apply negative sign if original number was negative
    if (isNegative) {
        reverse = -reverse;
    }

    printf("Reverse of %d = %d\n", number, reverse);

    return 0;
}
