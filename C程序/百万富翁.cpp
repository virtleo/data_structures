#include<stdio.h>
int main()
{
	int day;
	long a;
	double b;
	a=0,b=1e-2;
	for(day=1;day<=30;++day)
	{
		a=a+1e5;
		b=b*2;
	}
	printf("%ld %.2f",a,b);
	return 0;
}