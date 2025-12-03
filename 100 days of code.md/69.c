//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[100], n;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = second = -99999;  // initialize

    // find largest and second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    printf("Second largest element = %d", second);

    return 0;
}
