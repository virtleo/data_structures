#include<stdio.h>
int main()
{
	int n,b,i,j;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			if(n/i!=1)
				printf("%d*",i);
		else printf("%d",i);
		n=n/i;
		}
	
	}
	return 0;
}