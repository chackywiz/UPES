//Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int num, n, digit, sum = 0;
    scanf("%d", &num);

    n = num;  // copy original number

    while (n > 0) {
        digit = n % 10;   // extract last digit

        // calculate factorial of the digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;      // add factorial to sum
        n /= 10;          // move to next digit
    }

    if (sum == num)
        printf("%d is a strong number", num);
    else
        printf("%d is not a strong number", num);

    return 0;
}
