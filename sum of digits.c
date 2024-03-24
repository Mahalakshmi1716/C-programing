#include<stdio.h>
int main()
{
	int rem,sum=0,n;
	n=87;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n/=10;
	}
	printf("%d",sum);
	return 0;
}