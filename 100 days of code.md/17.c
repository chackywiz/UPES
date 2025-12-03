//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>

int main() {
    int a, b, c, D;

    // Input value
    printf("Enter a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Calculate discriminant
    D = (b * b) - (4 * a * c);

    
    if (D > 0) {
        printf("Roots are real and distinct");
    }
    else if (D == 0) {
        printf("Roots are real and equal");
    }
    else {
        printf("Roots are complex ");
    }

    return 0;
}