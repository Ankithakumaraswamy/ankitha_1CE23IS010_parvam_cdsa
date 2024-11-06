#include<stdio.h>
int main()
{
    int a=0;
    printf("Enter the year \n");
    scanf("%i",&a); 
    if(a%4==0&&a%100!=0)
        printf("it is a leap year");
    else if(a%100==0&&a%400==0)
        printf("it is a leap year");
    else
        printf("it is not a leap year");
    return 0;
}