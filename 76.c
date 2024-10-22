#include <stdio.h>
int check(int x)
{
    int c;

    c=x%2;
    return (c);
}
int main()
{
    int a,b;
    printf("enter number to be checked:");
    scanf("%d",&a);
    b=check(a);
    if(b==0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
return 0;
    
}
