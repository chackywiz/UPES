//Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string

    // counting characters manually
    while (str[count] != '\0') {
        count++;
    }

    // subtract 1 if newline is included by fgets
    if (str[count - 1] == '\n') {
        count--; 
    }

    printf("Number of characters = %d\n", count);

    return 0;
}
