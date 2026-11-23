// reverse the elements of an array
#include <stdio.h>

int main() {
    int a[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array in reverse order:\n");

    for(i = 4; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}