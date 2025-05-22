#include<stdio.h>
int main()
{
	long n=0,i,j;
	double m=1e-2;
	for(i=0;i<30;i++)
	{
		m=m*2;
		n=n+1e5;
	}
	printf("%ld %.2lf",n,m);
	return 0;
}
