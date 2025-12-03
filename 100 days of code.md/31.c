//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num, i = 0;
    int bin[32];

    printf("Enter a number: ");
    scanf("%d", &num);

    // If number is 0
    if (num == 0) {
        printf("Binary: 0");
        return 0;
    }

    // Store remainders
    while (num > 0) {
        bin[i++] = num % 2;
        num /= 2;
    }

    // Print in reverse
    printf("Binary: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", bin[i]);
    }

    return 0;
}
