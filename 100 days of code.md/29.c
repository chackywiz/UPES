//Write a program to calculate the factorial of a number.

#include<stdio.h>
int main () {
    int n,i,fact =1;
    //input values
printf("value of n is");
scanf("%d",&n);

for (i=2;i<=n; i++) {
  fact *=i  ; 

}

printf("%d" ,fact);
return 0;

     
}
