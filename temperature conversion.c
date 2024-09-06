#include<stdio.h>
int main()
{
    float f;
    printf("enter the temperature in fahrenheit:");
    scanf("%f",&f);
    float c=((f-32)*5)/9;
    printf("temperature in celsius=%f",c);
    return 0;
}
