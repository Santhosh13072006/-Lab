#include<stdio.h>
#include<math.h>
int main()
{
    float s;
    printf("enter the seconds(s):");
    scanf("%f",&s);
    float  m=(s/60);
    printf("minutes=%f\n",m);
    float h=(m/60);
    printf("hours=%f\n",h);
    float d=(h/60);
    printf("days=%f,d");
    
    
    
    return 0;
}