//Q24.Write a program to generate all odd numbers upto 100.
#include <stdio.h>

int main() {
    int i;

    printf("Odd numbers from 1 to 100:\n");

    for (i = 1; i <= 100; i += 2) { // Increment by 2 to get only odd numbers
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
