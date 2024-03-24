#include<stdio.h>
int main()
{
	int  i,j,k;
	int a[5]={1,2,2,3,4,5},num=5;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
		  if(a[i]==a[j])
		  {
		  	for(k=j;k<num;k++)                      
		  	{
		  		a[k]=a[k+1];
			  }
			  j--;
			  num--;
			  }	
		}
	}
	for(i=0;i<num;i++)
	{
	printf("%d",a[i]);
	}
	return 0;
}