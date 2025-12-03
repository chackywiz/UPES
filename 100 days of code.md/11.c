//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main() {
    int a;
    //input value 
    printf("enter value of a:");
    scanf("%d" ,&a);
// checking
    if( a%2==0) {
        printf("a is an even no");
    }
else {
    printf("a is an odd no");
}

return 0;

}



