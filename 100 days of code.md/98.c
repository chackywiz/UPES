//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[200];
    int i = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print initials of all words except the last word (surname)
    while (name[i] != '\0') {
        // Print first character or character after a space
        if (i == 0 && name[i] != ' ' && name[i] != '\n') {
            printf("%c.", name[i]);  // initial of first name
        } else if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            // check if next word is the last word
            int j = i+1, lastWord = 1;
            while (name[j] != '\0') {
                if (name[j] == ' ' && name[j+1] != '\0' && name[j+1] != '\n') {
                    lastWord = 0;
                    break;
                }
                j++;
            }
            if (!lastWord) {
                printf("%c.", name[i+1]);  // initial
            } else {
                break;  // last word starts here
            }
        }
        i++;
    }

    // Print the last word (surname) in full
    int start = i;
    while (name[start] == ' ') start++;  // skip spaces
    while (name[start] != '\0' && name[start] != '\n') {
        printf("%c", name[start]);
        start++;
    }

    printf("\n");
    return 0;
}
