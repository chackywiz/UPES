//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int a[10][10], rows, cols;
    int rowSum[10];   // to store sum of each row

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Read matrix
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate row sums
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += a[i][j];
        }
        rowSum[i] = sum;   // store sum of row i
    }

    // Print row sums
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
