#include<stdio.h>
#include<math.h>
void function(int x,int y)
{
   int c;
   c=x+y;
   x=c-x;
   printf("%d\n",x);
   y=c-y;
   printf("%d\n",y);
    
}

int main()
{
  int n,m,c;
  printf("enter numbers to be exchange:");
  scanf("%d%d",&n,&m);
  function(n,m);
    return 0;
     
}