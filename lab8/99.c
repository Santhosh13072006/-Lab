// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>
void function(void)
{
    
    char s[100];
    int c=0,x,i,l;
    printf("enter a string:");
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
       x=s[i] ;
    
    if(x==65||x==97||x==69||x==101||x==73||x==105||x==79||x==111||x==85||x==117)
    {
    c=c+1;
    }
    }

    printf("%d",c);
}

int main()
{
  function();
  
  
  return 0;
}
