// Q34.e. Design the pattern using while and for loop
// he program prints the following pattern:
// 1
// 23
// 456
// 78910

#include<stdio.h>

int main(){
    int i, j, num;
    num = 1; // Initialize starting number to 1

    // Outer loop controls the number of rows (4 rows)
    for(i = 1; i <= 4; i++){
        
        // Inner loop controls the number of columns (numbers per row)
        for(j = 1; j <= i; j++){
            printf("%d", num); // Print the current number
            num++;             // Increment the number after printing
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0; // End of program
}
