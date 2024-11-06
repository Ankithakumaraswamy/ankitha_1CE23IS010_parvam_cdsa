#include<stdio.h>
int main()
{
    int no=0,s=0;
    scanf("%d",&no);
    while(no>0)
    {
        s+=(no%10);
        no/=10;
    }
    printf("sum of no: %d",s);
    return 0;
}