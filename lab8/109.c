#include <stdio.h>
void f(int *x)
{
    * x=2;
    
}
int main()
{
    int a=1;
    int *p=&a;
    f(p);
    printf("%d",a);
}
