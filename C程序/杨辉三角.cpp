#include<stdio.h>
int main()
{
	int n,i,j,a[20][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==0||i==j)
			a[i][j]=1;
			else 
			a[i][j]=a[i-1][j-1]+a[i-1][j];	
		}
		
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
		return 0;
}