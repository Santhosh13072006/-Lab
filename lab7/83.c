// Online C compiler to run C program online
#include<stdio.h>
#include<math.h>
int function(int x)
{
    int s[x],i,j,a,d;
    
    for(i=0;i<x;i++)
    {
        printf("enter a number :");
        scanf("%d",&s[i]);
    }
    
    
    for(i=0;i<x;i++)
    {
        for(j=1+i;j<x;j++)
        {
            if(s[i]>s[j])
            {
                a=s[j];;
                s[j]=s[i];
                s[i]=a;
            }
        }
    }
     
    d=s[x-1];
    return(d);
}

int main()
{
  int n,e;
  
  printf("enter no.of elements in a array:");
  scanf("%d",&n);
  
  e=function(n);
  printf(" max is %d",e);
  
  return 0;
 
     
}
