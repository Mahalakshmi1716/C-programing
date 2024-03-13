#include<stdio.h>
#include<string.h>
union song
{
	char title[100];
	char artist[20];
	char album[60];
	float length;
	
};
int main()
{
	union song S1;
	strcpy(S1.title,"venmegam");
	printf("%s\n",S1.title);
	strcpy(S1.artist,"yuvan");
	printf("%s\n",S1.artist);
	strcpy(S1.album,"yaaradi nee mohini");
	printf("%s\n",S1.album);
	S1.length=4.115;
	printf("%.2f",S1.length);
	return 0;
	
}