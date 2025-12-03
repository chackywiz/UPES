//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
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

    if (k > n || k <= 0) {
        printf("Invalid value of k.\n");
        return 0;
    }

    // Slide the window from 0 to n-k
    for (int i = 0; i <= n - k; i++) {

        int found = 0;  // flag to check if negative is found

        // Check elements inside the window
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        // If no negative number in the window
        if (!found) {
            printf("0 ");
        }
    }

    printf("\n");
    return 0;
}
