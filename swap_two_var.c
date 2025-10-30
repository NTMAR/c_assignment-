//Q8.Write a program to swapping of 2 nos. without using 3rd variable.
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Display numbers before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swapping without using third variable
    a = a + b;  // Step 1
    b = a - b;  // Step 2
    a = a - b;  // Step 3

    // Display numbers after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
