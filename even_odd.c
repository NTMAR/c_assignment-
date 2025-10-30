//Q13.Input any number and find out whether it is even or odd.
#include <stdio.h>

int main() {
    int number;

    // Input a number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
