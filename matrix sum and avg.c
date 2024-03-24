#include<stdio.h>
int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int i,j,sum=0;
	float avg;
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			sum+=a[i][j];
		}
	}
	printf("sumof elements=%d\n",sum);
	{
		avg=sum/9;
		
	}
	printf("avg of elements=%.2f",avg);
	return 0;
	
}