#include<stdio.h>
int main()
{
    int m,s,c,h,b;
    printf("total marks=500\n");
    printf("Enter mathematics marks: ");
    scanf("%d",&m);
    printf("Enter biology marks: ");
    scanf("%d",&b);
    printf("Enter social marks: ");
    scanf("%d",&s);
    printf("Enter chemistry marks: ");
    scanf("%d",&c);
    printf("Enter hindi marks: ");
    scanf("%d",&h);
    
    float t = (m+b+s+c+h);
    printf("t=%f\n",t);
    float p=(t/5);
    printf("percentage=%f",p);
}