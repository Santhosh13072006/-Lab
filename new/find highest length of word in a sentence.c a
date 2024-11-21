// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int l=0,c=0,k,i,f,d;
    printf("enter a string:");
    fgets(s,sizeof(s),stdin);
    l=strlen(s);
    printf("%d\n",l);
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            c=c+1;
        }
    }
    printf("%d\n",c);
    char g[c][100];
    int string_index=0,word_index=0;
    for(i=0;i<l;i++)
    {
        if(s[i]!=' ')
        {
            g[string_index][word_index++]=s[i];
        }
        else
        {
             g[string_index][word_index]='\0';
            string_index=string_index+1;
            
            word_index=0;
        }
    }
     
    f=0;
    for(i=0;i<c+1;i++)
    {
        d=strlen(g[i]);
        if(d>f)
        {
            f=d;
        }
        
    }
    printf(" max lenght of word %d\n",f);
    
    for(i=0;i<c;i++)
    {
        d=strlen(g[i]);
        if(f==d)
        {
            printf("%s\n",g[i]);
        }
        
    }

    return 0;
}
