#include<stdio.h>
int fac(int a)
{
	int b;
	if(a==1)
	b=1;
	else b=2*(fac(a-1)+1);
	return b;
}
int main()
{
	printf("%d",fac(10));
	return 0;
}
#include<stdio.h>
int main()
{
	int x=1;
	int num,t,m;
	for(num=9;num>=1;num--)
	{
		x=2*(x+1);
		m=x;
	}
	printf("%d",m);
	return 0;
}
