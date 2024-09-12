#include<stdio.h>
int main()
{
    int n,q,sum=0,t;
    t=n;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        
        q=n%10;
        sum=sum+q*q*q;
        n=n/10;
        
    }
    printf("sum=%d\n",sum);
    if(sum=t)
    {
        printf("armstrong\n");
    }
    else
    {
        printf("not armstrong\n");
    }
    return 0;
}
