#include<stdio.h>
#include<math.h>
int main()
{
    int d,h1,h2,H,m1,m2,M,S1,s;
    printf("enter no.of days:\n");
    scanf("%d",&d);
    h1=d*24;
    printf("hours=%d\n",h1);
    printf("enter no.of hours:\n");
    scanf("%d",&h2);
    H=h1+h2;
    printf("total hours=%d\n",H);
    m1=H*60;
    printf("minutes=%d\n",m1);
    printf("enter no.of minutes:\n");
    scanf("%d",&m2);
    M=m1+m2;
    printf("total minutes=%d\n",M);
    S1=M*60;
    printf(" seconds=%d\n",S1);
    printf("enter no.of seconds:");
    scanf("%d",&s);
        float S=S1+s;
    printf("total seconds=%f",S);
    return 0;
}
    
    
