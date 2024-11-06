#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %i",&x,&y);
    printf("before swap x=%d y=%i",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("Integers after swaping: ");
    printf("x=%d y=%i",x,y);
    return 0;
}