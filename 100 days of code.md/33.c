//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int num, original, temp, digits = 0;
    int digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    // Step 1: Count digits
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    // Step 2: Calculate digit^digits
    temp = num;
    while (temp > 0) {
        digit = temp % 10;

        int power = 1;
        for (int i = 1; i <= digits; i++) {
            power = power * digit;
        }

        sum += power;
        temp = temp / 10;
    }

    // Step 3: Compare
    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
