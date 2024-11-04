// Online C compiler to run C program online
#include<stdio.h>
#include<math.h>
float function(int x,int y)
{
    int a=1,b=1,c=1,i;
    float d;
    for(i=1;i<=x;i++)
    {
        a=a*i;
    }
    
    for(i=1;i<=y;i++)
    {
        b=b*i;
    }
     
    if(x==y)
    {
        c=1;
        d=a/(b*c);
    return(d);
    }
    else if(x>y)
    {
        for(i=1;i<=x-y;i++)
    {
        c=c*i;
    }
    d=a/(b*c);
    return(d);
    
    }
    else
    {
        d=0;
    }
    
    return(d);
}

int main()
{
  int n,r;
  float e;
  printf("enter a number of object or things:");
  scanf("%d",&n);
  printf("enter how many things you want to select:");
  scanf("%d",&r);
  e=function(n,r);
  printf("%f",e);
  return 0;
 
     
}
