#include <stdio.h>
void swapx(int x, int y);
int main()
{
	int a = 10, b = 20;
	swapx(a, b);
	printf("Before swapping inside the Caller:\na = %d b = %d\n", a, b);
    return 0;
}
void swapx(int x, int y)
{
	int t;
    t = x;
	x = y;
	y = t;
    printf("After swapping inside Function:\nx = %d y = %d\n", x, y);
}