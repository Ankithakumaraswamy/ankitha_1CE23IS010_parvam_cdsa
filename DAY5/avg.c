#include<stdio.h>
int main()
{
    int i=0,n,a[100],sum=0;
    int avr=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum=sum+a[i];
    avr=(int)sum/n;
    printf("The average is: %d",avr);
    return 0;
}