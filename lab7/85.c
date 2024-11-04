// Online C compiler to run C program online
#include<stdio.h>

void function(int x)
{
if(x==65||x==97)
{
    printf("given character is vowel");
}
else if(x==69||x==101)
{
    printf("given character is vowel");
}
else if(x==73||x==105)
{
    printf("given character is vowel");
}
else if(x==79||x==111)
{
    printf("given character is vowel");
}
else if(x==85||x==117)
{
    printf("given character is vowel");
}
else
{
    printf("given character  is consonant");
}
}

int main()
{
  char n;
  int e;
  printf("enter a character:");
  scanf("%c",&n);
  e=n;
  function(e);
  
  
  return 0;
 
     
}
