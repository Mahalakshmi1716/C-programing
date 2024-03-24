#include<stdio.h>
int main()
{
	float account=1000,interest=0.2;
	int i=account*interest;
	int totalamount=account+i;
	{
		printf("annual interest=%d\n",i);
	}
	{
	
		printf("amount after 1year in account=%d",totalamount);
	}
	return 0;
}