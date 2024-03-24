#include<stdio.h>
int main()
{
	int t1=0,t2=1,nt,n,i,pos=8;
	printf("fibonocci series of pos %d is ",pos);
	nt=t1+t2;
	for(i=2;i<pos;i++)
			
	{
			
		t1=t2;
		t2=nt;
		nt=t1+t2;
	}
	printf("%d",nt);
	
	return 0;
}