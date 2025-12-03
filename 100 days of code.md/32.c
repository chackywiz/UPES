//Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store the original number

    // reverse the number
    while (num > 0) {
        digit = num % 10;          // get last digit
        reverse = reverse * 10 + digit; // add digit to reversed number
        num = num / 10;            // remove last digit
    }

    // check palindrome
    if (original == reverse) {
        printf("It is a palindrome\n");
    } else {
        printf("It is NOT a palindrome\n");
    }

    return 0;
}
