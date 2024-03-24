#include<stdio.h>
int main()
{
	int num=123,reverse=0,remainder,original_num;
	original_num=num;
	while(num!=0)
	{
		remainder=num%10;
		reverse=reverse*10+remainder;
		num=num/10;
	}
	if(original_num==reverse)
	{
		printf("%d is a palindrome",original_num);
	}
	else
	{
		printf("%d is not a palindrome",original_num);
	}
	return 0;
}