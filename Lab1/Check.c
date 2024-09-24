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
    if((a>=97)&&(a<=122))
    {
        printf("small letter ");
    }
    else if((a>=65)&&(a<=90))
    {
        printf("capital letter ");
    }
    
    else if((a>=48)&&(a<=57))
    {
        printf("digit ");
    }
    else
    {
        printf("special character ");
    }
    
    return 0;
    
}
