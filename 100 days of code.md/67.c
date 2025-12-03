//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int arr[100], n, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert (1-based index): ");
    scanf("%d", &pos);

    // shift elements to the right
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // insert element
    arr[pos - 1] = element;
    n++;  // increase size

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
