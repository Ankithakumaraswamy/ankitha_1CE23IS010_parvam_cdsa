#include<stdio.h>
int main()
{
    int i=0,n,a[100],sod=0,soe=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            soe+=a[i];
        else
            sod+=a[i];
    }
    printf("%d %d",soe,sod);
}