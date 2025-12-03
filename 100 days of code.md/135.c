//Assign explicit values starting from 10 and print them.
#include <stdio.h>

// Enum with explicit values starting from 10
enum Status {SUCCESS = 10, FAILURE, TIMEOUT};

int main() {
    enum Status code;

    printf("Enum values with explicit assignment:\n");

    for (code = SUCCESS; code <= TIMEOUT; code++) {
        switch(code) {
            case SUCCESS:
                printf("SUCCESS = %d\n", code);
                break;
            case FAILURE:
                printf("FAILURE = %d\n", code);
                break;
            case TIMEOUT:
                printf("TIMEOUT = %d\n", code);
                break;
        }
    }

    return 0;
}
