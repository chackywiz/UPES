//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main() {
    char ch;

    // Input value
printf("enter ch :");
scanf("%d" , &ch);

    // Checking
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf(" Vowel");
    } else {
        printf(" Consonant");
    }

    return 0;
}


