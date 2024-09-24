#include<stdio.h>
int main()
{
    int a,b,h=1,i;
    printf("enter a number");
    scanf("%d",&a);
    printf("power required:");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        h=h*a;
    }
    printf("%d power %d=%d",a,b,h);
    return 0;
} 
