//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int n, m, i, j;

    printf("Enter rows and columns: ");
    scanf("%d", &n);
    scanf("%d", &m);

    int a[n][m];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal Traversal:\n");

    // 1️⃣ Start from first column of every row
    for(int start = 0; start < n; start++) {
        i = start;
        j = 0;
        while(i >= 0 && j < m) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    // 2️⃣ Start from top row (excluding 0,0 because already printed)
    for(int start = 1; start < m; start++) {
        i = n - 1;
        j = start;
        while(i >= 0 && j < m) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    return 0;
}
