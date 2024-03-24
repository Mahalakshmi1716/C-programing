#include<stdio.h>
int main()
{
	int i,n=5;
	int a[5]={1,2,3,4,5};
	int b[5]={6,7,8,9,10};
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	    printf("\n");
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		printf("%d",b[i]);
	}
	return 0;
}