#include<stdio.h>
int main()
{
    int i=0,n,a[100],d=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%5==0)
            printf("The numbers divisible by 5 in an array are: ",a[i]);
        else 
            break;
    }
}