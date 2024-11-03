// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n,a,b,i;
    printf("for how many numbers you want H.C.F ");
    scanf("%d",&n);
    printf("enter a number:");
    scanf("%d",&a);
    for(i=1;i<n;i++)
    {
        int c,j,e,d;
        printf("enter a number:");
        scanf("%d",&c);
        if(a>c)
        {
          do
          {
             d=a%c;
             a=c;
             c=d;
             j++;
          }while(d!=0);
        }
        else
        {
            e=a+c;
            a=e-a;
            c=e-c;
             do
          {
             d=a%c;
             a=c;
             c=d;
             j++;
          }while(d!=0);
        }
        b=a;
    }
    printf(" h.c.f is %d",b);
    return 0;
}
