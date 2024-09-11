#include<stdio.h>
int main()
{
    char a;
    int h;
    printf("enter a character:");
    scanf("%c",&a);
    printf("ascii code=%d\n",a);
    printf("enter ascii code:\n");
    scanf("%d",&h);
    (97<=h<=122)?printf("small letter"):printf("not a small letter");
    return 0;
    
}
