#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("factors=");
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                printf("%d\t",i);
            }
            
        }
    }
}
