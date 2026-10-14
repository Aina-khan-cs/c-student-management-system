#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add student\n");
        printf("2. View students\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("Add student coming soon\n"); break;
            case 2: printf("View students coming soon\n"); break;
            case 3: printf("Goodbye!\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 3);

    return 0;
}