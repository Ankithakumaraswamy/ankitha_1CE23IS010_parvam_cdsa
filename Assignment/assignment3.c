#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char **s=NULL,pos[23][3]={"aa","ae","ai","ao","au","ea","ee","ei","eo","eu","ia","ie","ii","io","iu","oa","oe","oi","oo","ou","ua","ue","ui","uo","uu"};
    int n=0;
    scanf("%d",&n);

    s=(char **)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++)
    {
        s[i]=(char *)malloc(100*sizeof(char));
        scanf("%s",s[i]);
        

    }
}    