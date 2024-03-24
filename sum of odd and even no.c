#include<stdio.h>
int main()
{
	int odd_sum=0,even_sum=0,odd_count=0,even_count=0,i;
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			even_sum=even_sum+i;
			even_count++;
		}
		else
		{
			odd_sum=odd_sum+i;
			odd_count++;
		}
		
	}
	printf("the total no.of even number=%d\n",even_count);
	printf("the total even_sum=%d\n",even_sum);
	printf("the total no.of odd number=%d\n",odd_count);
	printf("the total odd_sum=%d",odd_sum);
	return 0;
}