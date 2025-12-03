//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

// Define enum for status
enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status code;

    // Example: Loop through all status codes
    for (code = SUCCESS; code <= TIMEOUT; code++) {
        switch(code) {
            case SUCCESS:
                printf("SUCCESS: Operation completed successfully.\n");
                break;
            case FAILURE:
                printf("FAILURE: Operation failed.\n");
                break;
            case TIMEOUT:
                printf("TIMEOUT: Operation timed out.\n");
                break;
        }
    }

    return 0;
}
