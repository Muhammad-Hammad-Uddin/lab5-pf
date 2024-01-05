#include<stdio.h>
main()
{
	int mor_ter,mor,totalinterstpayable,wholepayable,interest;
	float int_rate;
	printf("enter mortgage amount (in doollars)");
	scanf("%d",&mor);
	printf("enter mortgage term (in years)");
	scanf("%d",&mor_ter);
	printf("enter interest rate(as a decimal)");
	scanf("%f",int_rate);
	totalinterstpayable=mor*mor_ter*int_rate;
	wholepayable=totalinterstpayable+mor;
	interest=wholepayable/(mor*12);
	printf("the monthly payable interest is :$%d",interest);
}
