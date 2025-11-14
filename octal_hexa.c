//Q.1.Write a program to find out octal and hexadecimal equivalent of a decimal
//no.
#include <stdio.h>

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("\nOctal equivalent      : %o", decimal);
    printf("\nHexadecimal equivalent: %X\n", decimal);

    return 0;
}
