//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, digit;
    int product = 1;   // start with 1 because it's multiplication
    int foundOdd = 0;  // to check if any odd digit exists

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;          // get last digit
        if (digit % 2 != 0) {    // check if digit is odd
            product *= digit;    // multiply
            foundOdd = 1;
        }
        n = n / 10;              // remove last digit
    }

    if (foundOdd)
        printf("Product of odd digits = %d", product);
    else
        printf("No odd digits present.");

    return 0;
}
