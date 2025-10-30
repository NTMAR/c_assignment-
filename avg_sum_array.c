//Q.37. Program: Input given number of integers in a single-dimensional array
//      and display their sum and average
#include <stdio.h>

int main() {
    int arr[100];   // Declare array (can hold up to 100 elements)
    int n, i, sum = 0;
    float average;

    /*
       This program:
       1. Takes 'n' integer inputs from the user.
       2. Stores them in an array.
       3. Calculates and displays their sum and average.
    */

    // Input number of elements
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

    // Calculate average
    average = (float)sum / n;

    // Display the array elements
    printf("\nThe numbers you entered are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Display sum and average
    printf("\n\nSum of all numbers = %d", sum);
    printf("\nAverage of numbers = %.2f\n", average);

    return 0; // End of program
}
