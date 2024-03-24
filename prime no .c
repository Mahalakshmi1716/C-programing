#include <stdio.h>
int main()
{
	int n=7,i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count=count+1;
	}
	if (count==2)
	{
		printf("%d is the prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
	return 0;
}