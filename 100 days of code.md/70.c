//Rotate an array to the right by k positions.
#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[100], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (rotate right by k positions): ");
    scanf("%d", &k);

    k = k % n;   // handle k > n

    // Step 1: reverse whole array
    reverse(arr, 0, n-1);

    // Step 2: reverse first k elements
    reverse(arr, 0, k-1);

    // Step 3: reverse last n-k elements
    reverse(arr, k, n-1);

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
