//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements (size n, numbers from 1 to n-1 with one repeated):\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int sum_arr = 0;
    int sum_n_minus_1 = (n - 1) * n / 2; // sum of 1 to n-1

    for(int i = 0; i < n; i++)
        sum_arr += arr[i];

    int repeated = sum_arr - sum_n_minus_1;
    printf("%d\n", repeated);

    return 0;
}
