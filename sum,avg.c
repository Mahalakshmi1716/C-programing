#include<stdio.h>
int main ()
{
	int a[5]={10,20,30,40,50};
	int sum=0,i;
	float avg;
	for (i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/5;
	printf("%d\n",sum);
	printf("%f",avg);
	return 0;
}