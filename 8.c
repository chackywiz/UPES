#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            // Print only once for each i
            if(j == 1)
                printf("%d ", i);
        }
    }

    return 0;
}