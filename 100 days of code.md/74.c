//Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int a[10][10], t[10][10];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            t[j][i] = a[i][j];   // swap rows and columns
        }
    }

    // Print transpose
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < cols; i++) {     // note: rows ↔ cols
        for (int j = 0; j < rows; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
