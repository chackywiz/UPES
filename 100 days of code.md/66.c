//insert an element in a sorted array at the appropriate position
#include <stdio.h>

int main() {
    int arr[100] = {2, 4, 7, 10, 14};  // sorted array
    int n = 5;  // current size
    int element = 6;  // element to insert

    int i = n - 1;

    // shift elements to create space
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // insert element
    arr[i + 1] = element;
    n++;  // new size

    // print array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
