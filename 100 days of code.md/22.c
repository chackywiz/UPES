//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    
    float a ,b ,profit,profitpercent ,loss,losspercent;

    //input values
printf("enter cost price :");
    scanf("%f",&a);

    printf("enter selling price :");
    scanf("%f",&b);
 if (a>b ) {
    loss = a-b ;
    losspercent = (loss/a) *100 ;
    printf ("%f  is losspercent",losspercent);
}

else if (b>a) {
    profit=b-a;
    profitpercent = (profit/a)*100;
     printf ("%f  is profitpercent",profitpercent);


}

else {
    printf("neither profit nor loss");
}
    return 0;
}