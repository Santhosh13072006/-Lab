
#include <stdio.h>

int main()
{
    int  count=0,s=0;
    char *p;
    char g[100];
    printf("enter a string\n");
    fgets(g,sizeof(g),stdin);
    p=g;
    while(*p!='\0')
    {
        if(*p!=' ')
        {
            
        
        count=count+1;
        }
        else
        {
            s=s+1;
        }
        p++;
    }
    
    printf("length of with out space characters is %d\n with out null character\n",count-1);
    printf("length of with space characters is %d with out null character\n ",count+s-1);
    return 0;
}
