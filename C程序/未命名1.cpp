#include<stdio.h>
int main()
{
	int a,b,c,j,i,n;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
			for(j=2;j<i;j++)
		{
		if(i%j==0) break;}
		if(j>=i)
		printf("%d ",i);
	}	return 0;
}