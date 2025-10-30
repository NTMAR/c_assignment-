//Q27.Write a program to count total no. of digits in a number.
#include <stdio.h>

int main() {
    int number, temp, count = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    // Handle 0 as a special case
    if (temp == 0) {
        count = 1;
    } else {
        // Count digits
        if (temp < 0) {
            temp = -temp; // Convert negative to positive
        }
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }
    }

    printf("Total number of digits in %d = %d\n", number, count);

    return 0;
}
