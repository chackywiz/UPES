//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main() {
    int n,i,sum;

    printf("enter a pasitive integer:") ;
    scanf("%d", &n);

    for ( i=1;i<=n ;i++) {
        printf (" %d \n" , i);
    
        sum +=i;
    }
    printf("sum of %d natural numbers is %d\n",n,sum);
    return 0 ;

}