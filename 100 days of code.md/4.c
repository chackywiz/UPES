//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main() {
    float r,circumfrence,area;

    //input radius
   printf("Enter radius ");
   scanf("%f",&r);

   //calculate circumfrence
   circumfrence=2*3.14*r;

   //calculate area
   area=3.14*r*r;

   printf("circumfrence of circle is :%f\n" , circumfrence);
   printf("area of circle is :%f\n" , area);

   return 0;


}
