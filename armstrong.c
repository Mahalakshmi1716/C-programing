#include<stdio.h>
int main()
{
	int num=153,ori,rem,result=0;
	ori=num;
	while(ori!=0)
	{
		rem=ori%10;
		result+=rem*rem*rem;
		ori/=10;
		
	}
	if (result==num)
	{
		printf("%d is a armstrong",num);
	}
	else
	{
		printf("%d is not a armstrong ",num);
	}
	return 0;
}