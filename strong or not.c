#include <stdio.h>
int main()
 {
    int num = 145,originalNum,digit,sum=0,i;  
    originalNum = num;
	while (num > 0)
	 {
        digit = num % 10;
        int fact = 1;
        for (i = 1; i <= digit; i++) 
		{
            fact= fact*i;
        }
        sum =sum+ fact;
        num /= 10;
    }
	if (sum == originalNum)
	 {
        printf("%d is a Strong Number.\n", originalNum);
    } else
	 {
        printf("%d is not a Strong Number.\n", originalNum);
    }

    return 0;
}