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
    printf("percentage=%f\n",p);
     int  x= p/10;
    switch(x)
    {
        case 9:
        printf("pass,gradeA\n");
        break;
        case 8:
        printf("pass\n");
        printf("grade B\n");
        break;
        case 7:
        printf ("pass\n");
        printf("grade C\n");
        break;
        case 6:
        printf("pass\n");
        printf("grade C\n");
        break;
        case 5:
        printf("pass\n");
        printf("grade C\n");
        break;
        case 4:
        printf("pass\n");
        printf("grade E\n");
        default:
        printf("fail");
    }
    return 0;
}
    
