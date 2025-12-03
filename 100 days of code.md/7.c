//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main() {
    int a,b;

    printf("enter first no");
    scanf("%d",&a);

    printf("enter second no");
    scanf("%d",&b);

    //swapping
    a=a+b;
    b=a-b;
    a=a-b;

    //output
    printf("after swapping \n");
    printf("enter first no :%d\n",a );
    printf("enter second no: %d\n",b);

    return 0;
    
}
