#include<stdio.h>
int main ()
{
    int s,hra,o,g;
    printf("enter salary:");
    scanf("%d",&s);
    printf("enter hra:");
    scanf("%d",&hra);
    printf("enter other_àllowances:");
    scanf("%d",&o);
    g=(s+hra+o);
    printf("gross salary=%d",g);
    return 0;
}
