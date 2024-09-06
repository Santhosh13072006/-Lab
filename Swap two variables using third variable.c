#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    c=a+b;
    a=c-a;
    printf("a=%d",a);
    b=c-a;
    printf("b=%d",b);
    return 0;
}
