#include<stdio.h>
int age(int n)
{
	int f;
	if(n==1)
	f=10;
	else if (n>1)
	f=age(n-1)+2;
	return f;
}
int main()
{
	printf("%d",age(5));
	return 0;
}