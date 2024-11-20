// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    char s[100],*p;
    int c=0;
    printf("enter a string\n");
    fgets(s,sizeof(s),stdin);
    p=s;
    while(*p!='\0')
    {
        if(*p==' ')
        {
           c=c+1; 
        }
        p++;
    }
    printf("no.of words %d",c+1);

    
    
    return 0;
}
