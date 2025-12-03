//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // Skip spaces
        while (str[i] == ' ' && str[i] != '\0')
            i++;

        start = i;

        // Find the end of the current word
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            i++;

        end = i - 1;

        // Reverse current word
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    printf("Sentence with reversed words: %s", str);
    return 0;
}

