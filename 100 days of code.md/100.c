//Print all sub-strings of a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline from fgets if present
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("All substrings are:\n");
    for (i = 0; i < length; i++) {          // start index
        for (j = i; j < length; j++) {      // end index
            for (k = i; k <= j; k++) {      // print substring
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
