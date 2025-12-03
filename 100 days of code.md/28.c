//Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main () {
    int n,i,product =1;
    //input values
printf("value of n is");
scanf("%d",&n);

for (i=2;i<=n; i+=2) {
  product *=i  ; 

}

printf("%d" ,product);
return 0;

     
}
