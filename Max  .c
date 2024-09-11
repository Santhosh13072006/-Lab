#include<stdio.h>
int main()
{
    int a,b,c;
  
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    (a>b,a>c)?printf("a max\n"):printf("a is not greatest\n");
    (b>a,b>c)?printf("b max\n"):printf("b is not greatest\n");
    (c>a,c>b)?printf("c max\n"):printf("c is not greatest\n");
   
}
