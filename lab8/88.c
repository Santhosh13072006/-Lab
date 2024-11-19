
#include <stdio.h>

int main()
{
    int a,*p,i;
    printf("no.of elements in array");
    scanf("%d",&a);
    int s[100],g[100];
    p=s;
    for(i=0;i<a;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<a;i++)
    {
       g[i]= *(p+i);
    }
    for(i=0;i<a;i++)
    {
        printf("%d",g[i]);
    }
    

    return 0;
}
