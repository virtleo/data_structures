#include<stdio.h>
int main()
{
	int sum=0,a,n,t;
	scanf("%d %d",&a,&n);
	for(t=1;t<=n;t++)
	{
		sum=sum+a;
		a=a*10;	
		printf("%d+",sum);
		if(t==n)
		printf("%d",sum);	
	}

	return 0;
}