// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100],*p,g[100];
    int l,i;
    printf("enter a string\n");
    fgets(s,sizeof(s),stdin);
    p=s;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        g[l-1-i]=*p;
        p++;
    }
    printf(g);

    
    
    return 0;
}
