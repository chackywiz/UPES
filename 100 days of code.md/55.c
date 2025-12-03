/*Write a program to print all the prime numbers from 1 to n.*/
#include <stdio.h>

int main() {
    int n, i, j, flag;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        flag = 1;  // assume number is prime

        for (j = 2; j * j <= i; j++) {  
            if (i % j == 0) {
                flag = 0;  // not prime
                break;
            }
        }

        if (flag == 1)
            printf("%d ", i);
    }

    return 0;
}
