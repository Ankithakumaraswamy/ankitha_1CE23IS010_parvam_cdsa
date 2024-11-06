#include<stdio.h>
int main()
{
    int a=0,t=0,r=0;
    scanf("%d",&a);
    t=a;
    r=(t%10)*(t%10)*(t%10);
    t/=10;
    r+=(t%10)*(t%10)*(t%10);
    t/=10;
    r=+(t%10)*(t%10)*(t%10);
    if (r==a)
    printf("%d is an Amstrong no\n",a);
    else
    printf("%d is not an Amstrong no\n",a);
    return 0;
}