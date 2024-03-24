#include<stdio.h>
int main()
{
	int years,weeks,days;
	int day=400;
	 years=(day/365);
	 weeks=(day%365)/7;
	 days=day-((years*365)+(weeks*7));
	printf("years=%d\n",years);
	printf("weeks=%d\n",weeks);
	printf("days=%d",days);
	return 0; 
}