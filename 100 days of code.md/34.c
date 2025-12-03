//Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // assume prime initially

    printf("Enter a number: ");
    scanf("%d", &num);

    // 0, 1, and negative numbers are NOT prime
    if (num <= 1) {
        printf("Not a prime number.\n");
        return 0;
    }

    // check factors from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0; // not prime
            break;
        }
    }

    if (isPrime == 1)
        printf("Prime number.\n");
    else
        printf("Not a prime number.\n");

    return 0;
}
