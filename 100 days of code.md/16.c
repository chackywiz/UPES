//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main() {
    int a,b,c ;
    //input values
     printf("enter first no");
    scanf("%d",&a);

    printf("enter second no");
    scanf("%d",&b);

    printf("enter third no");
    scanf("%d",&c);

    if ( (a>b) && (a>c)) {
        printf(" a is the largest no");
    }
     else if ((b>c) && (b>a)) {
        printf("b is the largest no");
     }

     else {
        printf("c is the largest no");
     }

     return 0;

    }




