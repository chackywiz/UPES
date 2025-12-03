/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
**/
#include <stdio.h>

int main() {
    // Upper part of diamond
    for (int i = 1; i <= 5; i++) {       // i = row number
        for (int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of diamond
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
