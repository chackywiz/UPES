//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main() {
    int length,breadth,perimeter,area;

    //input length and breadth
     printf("enter length no :");
    scanf ("%d" ,&length);
    printf("enter breadth no :");
    scanf ("%d" ,&breadth);

    // calculate perimeter
    perimeter=2*(length + breadth);

    //calculate area
    area = length*breadth;

    //display output
    printf("perimeter of rectangle is %d\n",perimeter);
    printf("area of rectangle is %d\n",area);

    return 0 ;



}