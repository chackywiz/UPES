//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float numerator = 2.0 * i;
        float denominator = 4.0 * i - 1;

        sum += numerator / denominator;
    }

    printf("Sum of the series = %.4f", sum);

    return 0;
}
