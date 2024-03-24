#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={6,7,8,9,10};
	int merge[10]={0,0,0,0,0,0,0,0,0,0};
	int i,k;
	for (i=0;i<5;i++)
	{
		merge[i]=a[i];
	}
	k=i;
	for(i=0;i<5;i++)
	{
		merge[k]=b[i];
		k++;
	}
	for(i=0;i<k;i++)
	{
		printf("%d,",merge[i]);
	}
	return 0;
}