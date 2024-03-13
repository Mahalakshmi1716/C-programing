#include<stdio.h>
int convert(int n)
{
	return (n==0) ? 0 : (n%2+10*convert(n/2));
}
int main()
{
	int dec=15;
	printf("the given decimal %d to binary is %d",dec,convert(dec));
	return 0;
}