//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main() {

    int a,b,sum,difference,product,quotient;
    //input two numbers
    
    printf("enter first no :");
    scanf ("%d" ,&a);
    printf("enter second no :");
    scanf ("%d" ,&b);

    //calculate sum
    sum=a+b;
    //calculate difference
    difference=a-b;
    //calculate product
    product=a*b;
    //calculate quotient
    quotient=a/b;

    //display result
    printf("sum of %d and %d is: %d\n " ,a,b,sum);
    printf("difference of %d and %d is: %d\n " ,a,b,difference);
    printf("product of %d and %d is: %d\n " ,a,b,product);
    printf("quotient of %d and %d is: %d\n " ,a,b,quotient);


    return 0;







}