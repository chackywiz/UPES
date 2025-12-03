//Show that enums store integers by printing assigned values.
#include <stdio.h>

// Enum with assigned values
enum Status {SUCCESS = 100, FAILURE = 200, TIMEOUT = 300};

int main() {
    enum Status code;

    printf("Enum values stored as integers:\n");

    // Loop through all enum values
    code = SUCCESS;
    printf("SUCCESS = %d\n", code);

    code = FAILURE;
    printf("FAILURE = %d\n", code);

    code = TIMEOUT;
    printf("TIMEOUT = %d\n", code);

    return 0;
}
