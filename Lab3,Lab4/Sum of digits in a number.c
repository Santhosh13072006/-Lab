#include<stdio.h>
int main()
{
    int n,q,sum=0;
    
    printf("enter a number:");
    
    scanf("%d",&n);
    while(n!=0)
    {
        
        q=n%10;
        sum=sum+q;
        n=n/10;
        
    }
    printf("sum of digits in given number=%d\n",sum);
    return 0;
}
    
