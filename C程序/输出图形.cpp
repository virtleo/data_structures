#include<stdio.h>
int main()
{
	int n,i,j,m;
	scanf("%d",&n);
	m=2*n-1;
	for(i=1;i<=m;i++)
	{
	
		for(j=1;j<=m;j++)
		{
			if((i+j)>m)
			printf("*");
			else printf(" ");
			
		}
		printf("\n");
	}
	for(i=1;i<=m;i++)
	{
	
		for(j=m;j>=1;j--)
		{
			if((i+j)<=m)
			printf("*");
			else printf(" ");
			
		}
		printf("\n");
	}
		return 0;
}
