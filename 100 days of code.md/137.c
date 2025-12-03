//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

// Enum for user roles
enum UserRole {ADMIN = 1, USER, GUEST};

int main() {
    enum UserRole role;

    // Display role options
    printf("Select user role:\n1. ADMIN\n2. USER\n3. GUEST\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &role);

    // Display message based on role
    switch(role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have minimal access.\n");
            break;
        default:
            printf("Invalid role selected!\n");
    }

    return 0;
}
