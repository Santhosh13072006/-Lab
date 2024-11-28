
#include <stdio.h>

int main()
{
    int n ,*p,max,i;
    printf("enter no.of integers you want to enter");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    p=x;
    max=0;
    for(i=0;i<n;i++)
    {
        if(max<*(p+i))
        {
            max=*(p+i);
        }
    }
    printf(" max=%d",max);
    return 0;
}
