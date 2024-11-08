#include<stdio.h>
int main()
{
    int n,a[100],l=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    l=a[0];
    for(int i=1;i<n;i++)
    if(a[i]>l)l=a[i];
    printf("%d",l);
    return 0;
}