// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>
int function(int x)
{
    static int c=0;
if(x==65||x==97)
{
    c=c+1;
}
else if(x==69||x==101)
{
    c=c+1;
}
else if(x==73||x==105)
{
    c=c+1;
}

else if(x==79||x==111)
{
    c=c+1;
}
else if(x==85||x==117)
{
    c=c+1;
}
else
{
    c=c;
}
return (c);
}

int main()
{
  char s[100],*p;
  int e,l,i,a;
  printf("enter a string:");
  fgets(s,sizeof(s),stdin);
  l=strlen(s);
 
  p=s;
  for(i=0;i<l-1;i++)
  {
      e=*p;
      
      
   a=function(e);
   
  p++;
  }
  printf("%d no.of vowels",a);
  
  
  return 0;
 
     
}
