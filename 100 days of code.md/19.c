//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
 #include <stdio.h>

int main() {
    
    int a,b,c;

    // input values
printf("enter first side");
    scanf("%d",&a);

    printf("enter second side");
    scanf("%d",&b);

    printf("enter third side");
    scanf("%d",&c);

    if ((a==b) && (b==c) && (c==a) ) {
        printf ("equilateral triangle");
    }
else if ( (a==b) || (b==c) || (a==c) ) {
    printf ("isoceles triangle") ;
}

else {
    printf("scalene triangle");
}

    return 0;
}
