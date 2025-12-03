//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>


int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Display results
    printf("\nSimple Interest = %f\n", simpleInterest);
    printf("Compound Interest = %f\n", compoundInterest);

    return 0;
}
