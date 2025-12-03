//Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];

        // Check if character is a vowel (both uppercase & lowercase)
        if (ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
            ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U') {
            
            result[j] = ch;   // copy if NOT a vowel
            j++;
        }
        i++;
    }

    result[j] = '\0';   // terminate the new string

    printf("String without vowels: %s", result);

    return 0;
}
