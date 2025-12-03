//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int num, rem;
    int freq[10] = {0};   // frequency of digits 0–9
    int max = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Make num positive (if user enters negative)
    if (num < 0)
        num = -num;

    // Count frequency of each digit
    while (num > 0) {
        rem = num % 10;     // extract last digit
        freq[rem]++;        // increase frequency
        num /= 10;          // remove last digit
    }

    // Find digit with highest frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            digit = i;
        }
    }

    printf("Digit occurring most times = %d (appears %d times)\n", digit, max);

    return 0;
}
