//Reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length manually
    while (str[i] != '\0') {
        i++;
    }
    i--;            // move to last valid character
    if (str[i] == '\n') 
        i--;        // ignore newline from fgets

    j = 0;

    // reverse using two-pointer method
    while (j < i) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;

        j++;
        i--;
    }

    printf("Reversed string: %s", str);

    return 0;
}
