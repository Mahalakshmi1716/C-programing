#include<stdio.h>
int main()
{
	int num=5,sum=0,i;
	for(i=1;i<=num;i++)
	{
	sum=sum +(1/i);
	if(i==1)
	
		printf("\n 1+");
	
	else if(i==num)
	
		printf("(1/%if)",i);
	
	else
	
		printf("(1/%if)"+i);
	}

        printf("\nthe sum of the given series is %.2f",sum);
 return 0;
}