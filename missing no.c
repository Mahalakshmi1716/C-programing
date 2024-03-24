#include<stdio.h>
int main()
{
	int i,sum=0,missing ,n=5;
	int a[5]={1,2,3,5};
	for(i=0;i<5;i++)
	{
		sum+=a[i];
	}
	missing=(n*(n+1))/2-sum;
	printf("missing number is = %d",missing);
	return 0;
	}