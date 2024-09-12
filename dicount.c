#include<stdio.h>
int main()
{
	int c;
	float a,d,t;
	printf("enter total bill:");
	scanf("%d",&c);
	if(c>=0&&c<=500)
	{
		a=c*(0.05);
		printf("discount=%f\n",a) ;
		t=c-a;
		printf("amount to be paid=%f\n",t);
		
	}
	else if(c>500&&c<=2000)
	{
		d=c-500;
		a=35+d*(0.10);
		printf("discount=%f\n",a) ;
		t=c-a;
    	printf("amount to be paid=%f\n",t) ;
    }
	else if(c>2000&&c<=5000)
	{
		d=c-2000;
		a=185+d*(0.12);
		printf("discount=%f\n",a) ;
		t=c-a;
    	printf("amount to be paid=%f\n",t) ;
    }
    else 
	{
		
		a=c*(0.125);
		printf("discount=%f\n",a) ;
		t=c-a;
    	printf("amount to be paid=%f\n",t) ;
    }
    return 0;
}
    
	
	
	
