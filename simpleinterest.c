
#include<stdio.h>
int main()
{
    float p,r,t,y,simple_interest;
    printf("simple_interest\n");
    printf("enter p,r,t");
    scanf("%f%f%f",&p,&r,&t);
    simple_interest=(p*t*r)/100;
    printf("simple interest=%f",simple_interest);
    return 0;
}
