#include<stdio.h>
int main()
{
	int num=153,originalnum,res=0,rem;
	originalnum=num;
	while(originalnum!=0)
	{
		rem=originalnum%10;
		res+=rem*rem*rem;
		originalnum/=10;
		
	}
	if (num==res)
	printf("%d is armstrong",num);
	else
	printf("%d is not an armstrong",num);
	return 0;
}