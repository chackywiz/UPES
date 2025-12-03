//Write a program to reverse a given number.

#include<stdio.h>
int main() {
   
    int n, reversed = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Reverse using for loop
    for (; n != 0; n = n / 10) {
        remainder = n % 10;                
        reversed = reversed * 10 + remainder;
    }

    // Output result
    printf("Reversed number = %d\n", reversed);

    return 0;
}

    
