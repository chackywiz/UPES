//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Invalid: k cannot be greater than array size.\n");
        return 0;
    }

    int windowSum = 0;

    // compute sum of first window
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];  // add new, remove old
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("Maximum sum of subarrays of size %d = %d\n", k, maxSum);

    return 0;
}
