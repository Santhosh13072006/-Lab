// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int  a,b,c,n;
    int *p;
    
    printf("enter a number\n");
    scanf("%d",&a);
    
    p=&a;
    b=(*p)*(*p);
    c=(*p)*(*p)*(*p);
    
    printf("square of given number is %d\n",b);
    printf("cube of given number is %d\n ",c);
    return 0;
}
