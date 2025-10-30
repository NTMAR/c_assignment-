//Q17.Write a program to find biggest among 10 nos. using if and goto.
#include <stdio.h>

int main() {
    int num, i = 1, biggest;
    
    // Input the first number
    printf("Enter number 1: ");
    scanf("%d", &num);
    biggest = num; // Initialize biggest

input_loop: // Label for goto loop
    i++;
    if (i <= 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > biggest) {
            biggest = num; // Update biggest if current number is larger
        }
        goto input_loop; // Repeat for next number
    }

    printf("The biggest number is %d\n", biggest);

    return 0;
}
