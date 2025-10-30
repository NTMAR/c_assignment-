#include <stdio.h>

int main() {
    int arr[10] = {11, 23, 33, 54, 46, 76, 12, 78, 36, 68};
    int even[10], odd[10];
    int max;
    int m = 0, n = 0;
    int i;

    // Separate even and odd
    for(i = 0; i < 10; i++) 
        (arr[i] % 2 == 0) ? (even[m++] = arr[i]):(odd[n++] = arr[i]);
        
    // Print evens
    for(i = 0; i < m; i++) {
        printf("even: %d\n", even[i]);
    }

    // Print odds
    for(i = 0; i < n; i++) {
        printf("odd: %d\n", odd[i]);
    }

    // Find largest even
    max = even[0];
    for(i = 1; i < m; i++) {
        if(max < even[i]) {
            max = even[i];
        }
    }
    printf("Even largest: %d\n", max);

    // Find largest odd
    max = odd[0];
    for(i = 1; i < n; i++) {
        if(max < odd[i]) {
            max = odd[i];
        }
    }
    printf("Odd largest: %d\n", max);

    return 0;
}
