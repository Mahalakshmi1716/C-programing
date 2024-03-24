#include<stdio.h>
float calculateSI(float principal,float time, char customertype );
int main()
{
	float principal=200000,rate,time=3,SI;
	char customertype='N';
	SI=calculateSI(principal,time,customertype);
	printf("the SI is %.2f\n",SI);
	return 0;
}
float calculateSI(float principal,float time,char customertype)
{
	float rate;
	if (customertype=='Y'||customertype=='y')
	{
		rate=12.0;
	}
	else
	{
		rate=10.0;
	}
	return(principal*rate*time)/100;
}