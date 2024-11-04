
#include<stdio.h>
#include<math.h>
void function(int x)
{
    int  c=0,i;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        printf("1");
    }
    else
    {
        printf("0");
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
