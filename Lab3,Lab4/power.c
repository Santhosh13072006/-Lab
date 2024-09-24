#include<stdio.h>
int main()
{
	int c;
	float a,d;
	printf("enter power consumption:");
	scanf("%d",&c);
	if(c>=0&&c<=200)
	{
		a=c*(0.5);
		printf("amount to be paid=%f",a) ;
		
	}
	else if(c>200&&c<=400)
	{
		d=c-200;
		a=100+d*(0.65);
    	printf("amount to be paid=%f",a) ;
    }
	else if(c>00&&c<=600)
	{
		d=c-200;
		a=230+d*(0.80);
    	printf("amount to be paid=%f",a) ;
    }
    else 
	{
		d=c-200;
		a=425+d*(1.25);
    	printf("amount to be paid=%f",a) ;
    }
    return 0;
}
    
	
	
	
