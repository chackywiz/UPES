//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    char filename[100];
    char text[1000];
    FILE *fp;

    // Input file name
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Clear input buffer before taking text
    getchar();  // consume leftover newline from previous input

    // Input text to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fprintf(fp, "%s", text);

    printf("Text successfully appended to %s\n", filename);

    // Close the file
    fclose(fp);

    return 0;
}
