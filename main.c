#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

int main() {
    struct Student students[100];
    int count = 0;
    int choice;

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add student\n");
        printf("2. View students\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID: ");
                scanf("%d", &students[count].id);
                printf("Enter name: ");
                scanf(" %49[^\n]", students[count].name);
                printf("Enter GPA: ");
                scanf("%f", &students[count].gpa);
                count++;
                printf("Student added!\n");
                break;
            case 2:
                if (count == 0) {
                    printf("No students yet.\n");
                } else {
                    for (int i = 0; i < count; i++) {
                        printf("ID: %d | Name: %s | GPA: %.2f\n",
                               students[i].id, students[i].name, students[i].gpa);
                    }
                }
                break;
            case 3:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 3);

    return 0;
}