//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};   // to count occurrences of a–z
    int i = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];

        // check only lowercase alphabets
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            // if frequency becomes 2, this is the first repeating
            if (freq[ch - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
        i++;
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
