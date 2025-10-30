// Q.26.Program: Input 10 values in a single-dimensional array and display them
#include <stdio.h>

int main() {
    int arr[10]; // Declare an array of size 10
    int i;

    /*
       This program takes 10 integer inputs from the user
       and displays them back as output.
    */

    // Input 10 values
    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the array values
    printf("\nThe values you entered are:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n"); // New line for clean output
    return 0;     // End of program
}
