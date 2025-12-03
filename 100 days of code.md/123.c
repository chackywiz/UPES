//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open file in read mode
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;  // count every character including spaces and newlines

        if (ch == '\n')
            lines++;   // count lines

        // Count words: a sequence of non-space chars
        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    // If file is not empty, add 1 to lines if last line doesn't have newline
    if (characters > 0 && ch != '\n')
        lines++;

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);

    return 0;
}
