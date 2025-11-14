//Q.48.WAP to implement Linear Search for an array of integers.
#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;   // Stop when found
        }
    }

    if (found)
        printf("Element %d found at position %d.\n", key, i + 1);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
