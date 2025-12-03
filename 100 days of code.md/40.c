//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Traverse each bit of the string
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary input!");
            return 0;
        }
    }

    printf("1's Complement = %s", binary);

    return 0;
}
