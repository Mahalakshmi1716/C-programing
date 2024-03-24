#include <stdio.h>

int main() {
    int year = 2024;
    int date=26;
    int month=02;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
		printf("%d/%d/%d\n is a leap year",date,month,year);
	}
    else
        {
		printf("%d/%d/%d\n is not a leap year",date,month,year);
		}
    return 0;
}
