
#include<stdio.h>
#include<string.h>
int function(void)
{
    int d;
    char s[100];
    
    
    
        printf("enter a string :");
        gets(s);
     
    d=strlen(s);
    return(d);
}

int main()
{
  int e;
  
  
  
  e=function();
  printf(" the length of string is %d",e);
  
  return 0;
 
     
}
