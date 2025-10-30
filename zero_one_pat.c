// Q34.d. Design the pattern using while and for loop
// The program prints the following pattern:
// 1
// 10
// 101
// 1010
// 10101
#include<stdio.h>

int main(){
    int i, j;

    // Outer for loop controls the number of rows (1 to 5)
    for(i = 1; i <= 5; i++){

        // Inner for loop controls the number of columns in each row
        for(j = 1; j <= i; j++){
            // If j is odd, print 1; if even, print 0
            j % 2 == 1 ? printf("1") : printf("0");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0; // End of program
}
