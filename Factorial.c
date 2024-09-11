#include<stdio.h>
int main()
{
    int n,i,h=1;
    printf("factorial\n");
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        h=h*i;
        
    }
    printf("%d",h);
    return 0;
}
