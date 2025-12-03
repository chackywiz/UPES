//Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0, maxLength = 0, wordStart = 0, wordEnd = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            int length = i - start; // length of current word
            if (length > maxLength) {
                maxLength = length;
                wordStart = start;
                wordEnd = i - 1;
            }
            start = i + 1;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    printf("Longest word: ");
    for (i = wordStart; i <= wordEnd; i++) {
        printf("%c", str[i]);
    }
    printf("\nLength: %d\n", maxLength);

    return 0;
}
