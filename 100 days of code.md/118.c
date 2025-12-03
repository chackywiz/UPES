//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements (0 to n with one missing):\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Total sum of numbers from 0 to n
    int total = n * (n + 1) / 2;

    // Sum of array elements
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];

    int missing = total - sum;
    printf("%d\n", missing);

    return 0;
}
