#include<stdio.h>
int main()
{
    float x,y;
    int n;
    printf("enter a number:");
    scanf("%f",&x);
    printf("enter n:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
      {
        y=1+x;
        printf("y=%f\n",y);
        break;
      }
     case 2:
      {
        y=1+x/2;
        printf("y=%f\n",y);
        break;
       }
       
     case 3:
       {
        y=1+x*x*x;
        printf("y=%f\n",y);
        break;
       }
    default:
       {
        y=1+n*x;
        printf("y=%d\n",y);
       }
    }
    
    return 0;
}
