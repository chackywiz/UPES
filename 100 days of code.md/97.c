//Print the initials of a name.
#include <stdio.h>

int main() {
    char name[200];
    int i = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // print the first character as initial
    if (name[i] != '\n') {
        printf("%c", name[i]);
    }

    // loop through the string to find spaces
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            printf("%c", name[i+1]);  // print character after space
        }
        i++;
    }

    printf("\n");
    return 0;
}
