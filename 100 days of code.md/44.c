//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator;

        if (i == 1)
            denominator = 1;
        else
            denominator = 2 * i;

        sum += numerator / denominator;
    }

    printf("Sum of the series = %.4f", sum);

    return 0;
}
