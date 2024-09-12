#include<stdio.h>
int main()
{
    printf ("sum=1,subraction=2,multiplication=3,divison=4,remainder=5\n");
    
    int a,b,h,sum,sub,mul,r;
    float d;
    printf("enter your choice:");
    scanf("%d",&h);
    printf("enter a and b:" );
    scanf("%d%d",&a,&b);
    switch(h)
    {
        case 1:
        {
            sum=a+b;
            printf("sum=%d",sum);
            break;
        }
         case 2:
       {
           sub=a-b;
           printf("sub=%d",sub);
           break;
       }
         case 3:
       {
           mul=a*b;
           printf("mul=%d",mul);
           break;
       }
         case 4:
        {
            d=a/b;
            printf("division=%d",d);
            break;
        }
         case 5:
        {
           r=a%b;
           printf("remainder=%d",r);
          break;
        }
    }
    return 0;
    
}
