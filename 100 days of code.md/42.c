//Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num, sum = 0;
    scanf("%d", &num);

    // find sum of divisors (except the number itself)
    for (int i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num)
        printf("%d is a perfect number", num);
    else
        printf("%d is not a perfect number", num);

    return 0;
}

