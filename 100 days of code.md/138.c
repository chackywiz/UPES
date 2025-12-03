//Print all enum names and integer values using a loop.
#include <stdio.h>

// Enum for user roles
enum UserRole {ADMIN = 1, USER, GUEST};

int main() {
    enum UserRole role;

    // Array of names corresponding to enum values
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    printf("Enum Names and Values:\n");

    // Loop through enum values and print
    for (role = ADMIN; role <= GUEST; role++) {
        printf("%s = %d\n", roleNames[role - 1], role);
    }

    return 0;
}
