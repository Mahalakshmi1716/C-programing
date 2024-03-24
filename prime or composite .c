

#include<stdio.h>
int main()
{
    int i,n,c=0;
    n=3;
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        c=c+1;
    }
    if (c==2)
    printf ("%d The number is PRIME",n);
    else
    printf ("%d The number is COMPOSITE",n);
    return 0;
}