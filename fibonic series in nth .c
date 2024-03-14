#include<stdio.h>
int main()
{
	int t1=0,t2=1,nextterm,i,n=3;
	printf("fibonacci series of position %d is : ",n);
	nextterm=t1+t2;
	for(i=2;i<n;i++)
	{
		t1=t2;
		t2=nextterm;
		nextterm=t1+t2;
	}
		printf("%d",nextterm);
	return 0;
}