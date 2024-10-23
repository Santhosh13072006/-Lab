#include<stdio.h>
int function(int x)
{
    int num,h=0;
    do
    {
        num=x%10;
        x=x/10;
        h=h*10+num;
    }
    while(x!=0);
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
        printf("given number is palindrome");
    }
    else
    {
        printf("given number is not palindrome");
    }
    return 0;
     
}
