Lab#include<stdio.h>
int main()
{
    int n,i,a;
    printf("if result is not specified then it is prime\n");
    printf("enter a number:");
    scanf("%d",&n);
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                printf("result=not prime");
                break;
            }
        }
    }
  
    return 0;
}
