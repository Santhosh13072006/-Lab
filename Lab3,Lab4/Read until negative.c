#include<stdio.h>
int main()
{
    int n,i,b=0,h=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        printf("enter number:");
        scanf("%d",&h);
       if(h<0)
        {
            
          break;
        }
        else
        {
            b=b+h;
        }
    }
    printf("sum=%d",b);
    return 0;
}
