#include<stdio.h>
#include<string.h>
struct song
{
	char title[20];
	char artist[20];
	char album[20];
	float length;
	
};
int main()
{
	struct song S1;
	strcpy(S1.title,"venmegam");
	strcpy(S1.artist,"yuvan");
	strcpy(S1.album,"yaaradi nee mohini");
	S1.length=4.115;
	printf("%s,\n%s,\n%s,\n%.2f",S1.title,S1.artist,S1.album,S1.length);
	return 0;
	
}