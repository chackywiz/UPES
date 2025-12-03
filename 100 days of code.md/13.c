//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main() {
    int year ;
//input value
     printf("enter year:");
    scanf("%d" ,&year); 
    // checking
    if ( year%400==0 || ( year %4==0 && year % 100 !=0) ) {
        printf ("leap year") ;
    }
    else  {
        printf("not a leap year");
    }

    return 0;
}