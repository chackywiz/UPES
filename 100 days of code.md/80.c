//Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    
    printf("Enter rows and cols of Matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and cols of Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible!");
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("Enter Matrix 1:\n");
    for(int i=0; i<r1; i++)
        for(int j=0; j<c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter Matrix 2:\n");
    for(int i=0; i<r2; i++)
        for(int j=0; j<c2; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix with 0
    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
            for(int k=0; k<c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
