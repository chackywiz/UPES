#include <stdio.h>

int main() {
    int a[5], k,i,temp,j,p ;

    printf("Enter 5 elements:\n");

    for(k = 0; k < 5; k++) {
        scanf("%d", &a[k]);
    }

    for ( i=1 ;i<5;i++)
{
    temp = a[i] ;
    j=i-1 ;

}    

while (j>=0 && a[j]>temp)
{
    a[j+1]=a[j];
    j--;
}

a[j+1] =temp;

 printf("Array elements are:\n");

    for(p = 0; p < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}