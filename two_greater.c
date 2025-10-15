//Q15.Input any two numbers and find out whether both are equal or which one
//is greater.
#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Compare the numbers
    if (num1 == num2) {
        printf("Both numbers are equal.\n");
    } else if (num1 > num2) {
        printf("%d is greater than %d.\n", num1, num2);
    } else {
        printf("%d is greater than %d.\n", num2, num1);
    }

    return 0;
}
