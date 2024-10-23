#include<stdio.h>
#include<math.h>
int function(int x)
{
    int num,h=0,m=0,t;
    t=x;
    
    do
    {
        
        x=x/10;
        m=m+1;
    }
    
    while(x!=0);
    x=t;
    do
    {
        num=x%10;
        x=x/10;
        
        h=pow(num,m)+h;
    }
    while(x!=0);
    printf("%d\n",h);
    return (h);
}

int main()
{
  int n,c;
  printf("enter a number:");
  scanf("%d",&n);
  c=function(n);
  if(c==n)
    {
        printf("given number is Armstrong number ");
    }
    else
    {
        printf("given number is not Armstrong number");
    }
    return 0;
     
}
