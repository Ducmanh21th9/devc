#include <stdio.h>

void displayMenu() {
    printf("===== MENU =====\n");
    printf("1. Option 1: Say Hello\n");
    printf("2. Option 2: Add Two Numbers\n");
    printf("3. Option 3: Exit\n");
    printf("================\n");
    printf("Enter your choice: ");
}

void sayHello() {
    printf("Hello, User!\n");
}

void addNumbers() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("The sum is: %d\n", num1 + num2);
}

int main() {
    int choice;

    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sayHello();
                break;
            case 2:
                addNumbers();
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
