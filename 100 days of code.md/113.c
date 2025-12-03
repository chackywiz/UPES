//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // Simple selection sort for k steps
    for(int i = 0; i < k; i++) {
        int min_index = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // swap
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    printf("%d", arr[k - 1]);

    return 0;
}
