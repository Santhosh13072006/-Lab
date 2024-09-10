#include<stdio.h>
int main()
{
    int N,h,i;
    printf("enter N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        h=i*i;
        printf("%d\n",h);
    }
    return 0;
}
