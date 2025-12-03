//Write a program to swap the first and last digit of a number
#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num;    // copy original number

    last = n % 10;  // get last digit

    // find first digit
    while (n >= 10) {
        n = n / 10;
    }
    first = n;

    // count digits
    n = num;
    while (n != 0) {
        n = n / 10;
        digits++;
    }

    // if number has only 1 digit → no swap needed
    if (digits == 1) {
        printf("Swapped number: %d", num);
        return 0;
    }

    // remove first digit: num % (10^(digits-1))
    int pow10 = 1;
    for (int i = 1; i < digits - 1; i++) {
        pow10 *= 10;
    }

    int middle = (num % pow10) / 10;

    // new number = last digit + middle + first digit
    int swapped = last * pow10 + middle * 10 + first;

    printf("Swapped number: %d", swapped);
    return 0;
}
