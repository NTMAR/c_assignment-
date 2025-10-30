//Q23Write a program to generate all even numbers upto 100.
#include <stdio.h>

int main() {
    int i;

    printf("Even numbers from 1 to 100:\n");

    for (i = 2; i <= 100; i += 2) { // Increment by 2 to get only even numbers
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
