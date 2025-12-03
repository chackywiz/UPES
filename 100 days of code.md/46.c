/*Write a program to print the following pattern:
*****
*****
*****
*****
***** */
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {          // 5 rows
        for (int j = 1; j <= 5; j++) {      // 5 stars in each row
            printf("*");
        }
        printf("\n");                       // move to next line
    }
    
    return 0;
}

