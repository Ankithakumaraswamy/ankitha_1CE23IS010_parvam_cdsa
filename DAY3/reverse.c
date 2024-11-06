#include<stdio.h>
int main()
{
    int a=0,r=0;
    scanf("%d",&a);
    while(a>0)
    {
        r= (r*10)+(a%10);
        a/=10;
    }
    printf("reverse of the no: %d",r);
    return 0;
}