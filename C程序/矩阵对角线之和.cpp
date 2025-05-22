#include<stdio.h>
int main()
{
	void sum1(int sum,int n,int a[][10]);
	int i,j,sum=0,n,a[10][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
			sum=sum+a[i][i]+a[i][n-1-i];
	sum1(sum,n,a);
	return 0;
}
void sum1(int sum,int n,int a[][10])
{		
		if(n%2==1)
		printf("%d",sum-a[n/2][n/2]);
		else printf("%d",sum);
}