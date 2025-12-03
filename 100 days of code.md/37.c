//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find GCD using Euclid's Algorithm
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;
    lcm = (a * b) / gcd;

    printf("LCM of %d and %d is: %d", a, b, lcm);

    return 0;
}
