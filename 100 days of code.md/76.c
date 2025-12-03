//Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int a[10][10], rows, cols, flag = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Condition 1: Must be square
    if (rows != cols) {
        printf("Matrix is not symmetric (not a square matrix).\n");
        return 0;
    }

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] != a[j][i]) {
                flag = 0;   // mismatch found
                break;
            }
        }
    }

    if (flag == 1)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
