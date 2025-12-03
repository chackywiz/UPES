//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int a[10][10], n, flag = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    // Input matrix
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {   // comparing diagonal elements
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
