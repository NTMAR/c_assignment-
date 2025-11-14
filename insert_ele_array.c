// Q.41.Insert a number in an integer array:
//From first position, from last position, from any position
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, choice, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n\n----- MENU -----\n");
        printf("1. Insert at FIRST position\n");
        printf("2. Insert at LAST position\n");
        printf("3. Insert at ANY position\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1: // Insert at first
            printf("Enter value to insert: ");
            scanf("%d", &value);

            for (i = n; i > 0; i--) {
                arr[i] = arr[i - 1];
            }
            arr[0] = value;
            n++;

            printf("Inserted at FIRST position.\n");
            break;


        case 2: // Insert at last
            printf("Enter value to insert: ");
            scanf("%d", &value);

            arr[n] = value;
            n++;

            printf("Inserted at LAST position.\n");
            break;


        case 3: // Insert at any position
            printf("Enter position to insert (1 to %d): ", n + 1);
            scanf("%d", &pos);

            if (pos < 1 || pos > n + 1) {
                printf("Invalid position!\n");
                break;
            }

            printf("Enter value to insert: ");
            scanf("%d", &value);

            for (i = n; i >= pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos - 1] = value;
            n++;

            printf("Inserted at position %d.\n", pos);
            break;


        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }

        // Display array after insertion
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
