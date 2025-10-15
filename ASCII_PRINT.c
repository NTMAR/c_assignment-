//Q26.Write a program to display ASCII characters from 0-255
#include <stdio.h>

int main() {
    int i;

    printf("ASCII characters from 0 to 255:\n\n");

    for (i = 0; i <= 255; i++) {
        printf("%3d : %c\t", i, i); // Display code and character
    }

    printf("\n");
    return 0;
}
