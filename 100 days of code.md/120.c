//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int i = 0;

    // Skip leading spaces
    while(str[i] != '\0' && isspace(str[i])) {
        i++;
    }

    // Capitalize first non-space character
    if(str[i] != '\0')
        str[i] = toupper(str[i]);

    // Convert rest to lowercase
    for(int j = i+1; str[j] != '\0'; j++) {
        str[j] = tolower(str[j]);
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
