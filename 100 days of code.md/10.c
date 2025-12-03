//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main() {

    int sec,minutes,hour;
//input second
printf("no of seconds:");
scanf("%d" ,&sec);
//calculate minutes
minutes=sec/60;
//calculate hours
hour=minutes/60;
//output
printf("%d:%d:%d",sec,hour,minutes,sec);
return 0;

}


