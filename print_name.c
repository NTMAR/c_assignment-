#include <stdio.h>

int main() {
    int n, i, perLine = 5;
    char name[100];

    // Input full name (including spaces)
    printf("Enter your name: ");
    scanf(" %[^\n]", name);  // Leading space ignores leftover newline

    // Input number of times to display the name
    printf("Enter number of times to display your name: ");
    scanf("%d", &n);

    // Display names horizontally with wrapping
    for (i = 1; i <= n; i++) {
        printf("%s\t", name);
        if (i % perLine == 0) {
            printf("\n"); // Move to next line after 'perLine' names
        }
    }

    printf("\n"); // Final newline after printing all names
    return 0;
}
