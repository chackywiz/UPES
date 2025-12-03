//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main() {
    int a,b,c;

    printf("enter first no");
    scanf("%d",&a);

    printf("enter second no");
    scanf("%d",&b);

    //swapping
    c=a;
    a=b;
    b=c;

    //output
    printf("after swapping \n");
    printf("enter first no :%d\n",a );
    printf("enter second no: %d\n",b);

    return 0;
    
}