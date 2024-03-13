#include<stdio.h>
int bitodec(long long binary)
{
	int dec=0,base=1,rem;
	while(binary!=0)
	{
		rem=binary%10;
		dec+=rem*base;
		base*=2;
		binary/=10;
	}
	return dec;
}
int main()
{
	long long binary=101001101;
	int dec=bitodec(binary);
	printf("decimal of %lld=%d",binary,dec);
}