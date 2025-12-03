/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */
   #include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {             // 5 rows
        
        // print spaces
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        
        // print stars
        for (int j = 0; j < 5 - i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
