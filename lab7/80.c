#include<stdio.h>
#include<math.h>
void function(int x)
{
    int a=0,b=1,c,i=2;
    if(x==1)
    {
        printf("the 1 term of fibonacii seris is %d",a);
    }
    else if(x==1)
    {
        printf("the 1 term of fibonacii series is %d",a);
         printf("the 2 term of fibonacii series is %d",b);
    }
    else 
    {
         printf("the 1 term of fibonacii series is %d\n",a);
         printf("the 2 term of fibonacii series is %d\n",b);
        do
        {
            c=a+b;
            printf("the %d term of fabinocii series is %d\n ",i+1,c);
            a=b;
            b=c;
            i=i+1;
        }while(i<=x-1);
    }
}

int main()
{
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  function(n);
  return 0;
 
     
}
