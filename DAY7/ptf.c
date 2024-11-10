#include<stdio.h>
void foo();
void bar(int );

int main()
{
    void (*q)(int)=&bar;
    printf("Start of Main");
    foo();
    q(12);
    q(1);
    foo();
    printf("End of Main");
    return 0;
}
void foo()
{
    printf("\nfoo func\n");
}
void bar(int x){
    printf("\nbar func %d\n",x);
}
