//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

// Enum for menu choices
enum Menu {ADD = 1, SUBTRACT, MULTIPLY};

int main() {
    enum Menu choice;
    int a, b, result;

    // Display menu
    printf("Menu:\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice < ADD || choice > MULTIPLY) {
        printf("Invalid choice!\n");
        return 1;
    }

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Perform operation based on choice
    switch(choice) {
        case ADD:
            result = a + b;
            printf("Result: %d + %d = %d\n", a, b, result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %d - %d = %d\n", a, b, result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %d * %d = %d\n", a, b, result);
            break;
    }

    return 0;
}
