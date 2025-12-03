//Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int a[10][10], rows, cols, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];   // keep adding each element
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
