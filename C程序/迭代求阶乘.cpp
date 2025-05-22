#include<stdio.h>
int Fact(int n)
{
	int f;
	if(n==0||n==1)
	f=1;
	else if(n>1)
	f=Fact(n-1)*n;
	return f;
}
int main()
{
	int i,n,sum=0;;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		sum=Fact(i)+sum;
	}
	printf("%d",sum);
	return 0;
}