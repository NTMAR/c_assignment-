//Q16.Input any three numbers and find out which one is greatest
#include <stdio.h>

int main() {
    int num1, num2, num3, greatest;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    // Find the greatest number
    if (num1 >= num2 && num1 >= num3) {
        greatest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        greatest = num2;
    } else {
        greatest = num3;
    }

    // Display the result
    printf("The greatest number is %d\n", greatest);

    return 0;
}
