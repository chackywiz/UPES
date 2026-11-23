// find minimum and maximum element in an array
#include <stdio.h>

int main() {
    int a[5], i;
    int min, max;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    min = max = a[0];

    for(i = 1; i < 5; i++) {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}