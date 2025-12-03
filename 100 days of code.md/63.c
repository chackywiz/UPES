//Merge two arrays.
#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, i, k = 0;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Copy elements of first array into third array
    for (i = 0; i < n1; i++) {
        c[k] = a[i];
        k++;
    }

    // Copy elements of second array into third array
    for (i = 0; i < n2; i++) {
        c[k] = b[i];
        k++;
    }

    printf("\nMerged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
