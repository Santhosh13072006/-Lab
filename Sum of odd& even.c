#include<stdio.h>
int main()
{
    int i,n,h=0,k=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        
        if(i%2==0)
        {
            h=h+i;
            
        }
        else
        {
            
            k=k+i;
        }
    }
    printf("even sum=%d\n",h);
    printf("odd sum=%d\n",k);
    
    return 0;
}
