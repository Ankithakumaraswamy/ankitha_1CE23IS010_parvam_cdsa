#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=0;j>0;j--)
            printf("%d ",j+1);
        printf("\n");
    }
    return 0;
}