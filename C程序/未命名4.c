#include<stdio.h>
int main()
{
	int x=1;
	int num,m;
	for(num=9;num>=1;num--)
	{
		x=2*(x+1);
		m=x;
	}
	printf("%d",m);
	return 0;
}