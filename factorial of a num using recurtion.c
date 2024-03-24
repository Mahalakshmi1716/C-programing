#include<stdio.h>
long int multiplynumber(int n);
int main()
{
	int n=5;
	printf("factorial of %d =%ld",n,multiplynumber(n));
	return 0;
}
long int multiplynumber(int n)
{
	if (n>=1)
	return n*multiplynumber(n-1);
	else
	return 1;
}