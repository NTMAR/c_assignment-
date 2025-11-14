//Q.40Delete a number from an integer array:
//From first position, from last position, from any position
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n\n----- MENU -----\n");
        printf("1. Delete from FIRST position\n");
        printf("2. Delete from LAST position\n");
        printf("3. Delete from ANY position\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:  // Delete from first position
            if (n == 0) {
                printf("Array is empty!\n");
                break;
            }
            for (i = 0; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            printf("Deleted from FIRST position.\n");
            break;

        case 2:  // Delete from last position
            if (n == 0) {
                printf("Array is empty!\n");
                break;
            }
            n--; 
            printf("Deleted from LAST position.\n");
            break;

        case 3:  // Delete from any position
            if (n == 0) {
                printf("Array is empty!\n");
                break;
            }

            printf("Enter position to delete (1 to %d): ", n);
            scanf("%d", &pos);

            if (pos < 1 || pos > n) {
                printf("Invalid position!\n");
            } else {
                for (i = pos - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Deleted from position %d.\n", pos);
            }
            break;

        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }

        // Display array after each operation
        if (choice >= 1 && choice <= 3) {
            printf("Current Array: ");
            for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }

    } while (choice != 4);

    return 0;
}
