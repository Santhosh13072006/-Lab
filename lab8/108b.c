#include <stdio.h>
#include <string.h>

int main() 
{
    int a,b,l1,l2,i;
    char s[100],h[100];
    printf("enter string 1");
    fgets(s,sizeof(s),stdin);
    l1=strlen(s);
    printf("enter string 2");
    fgets(h,sizeof(h),stdin);
    l2=strlen(h);
    if(l1!=l2)
    {
        printf("both are different");
    }
    else
    {
        for(i=0;i<l1;i++)
        {
            a=s[i];
            b=h[i];
            if((a-b)!=0)
            {
                printf("both are different");
                break;
            }
        }
    }
    
