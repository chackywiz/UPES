// Write a program to input two numbers and display their sum.
#include <stdio.h>

int main() {
   int a,b;
   scanf ("%d",&a);
   scanf ("%d",&b);
     

a=a+b;
b=a-b;
a= b+a-b;
printf ("%d,%d" ,a,b);
return 0;
}
