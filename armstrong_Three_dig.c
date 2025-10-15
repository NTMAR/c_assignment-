//Q30.Write a program to check a no. is Armstrong or not.three digit only // 1,11,12,18,31,32 so on 
#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    originalNum = num;

    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}