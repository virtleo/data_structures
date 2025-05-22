#include<stdio.h>
int main()
{
	void transpose(int a[][10],int m,int n);
	int i,j,m,n,a[10][10];
	int *p=&m,*q=&n;
	scanf("%d %d",p,q);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
		transpose(a,m,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		printf("%d ",*(*(a+i)+j));
	
		printf("\n");
	}
		return 0;
}
void transpose(int a[][10],int m,int n)
{
	int i,j,t;
	int *p;
		for(i=0;i<n;i++)
		{
				for(j=i;j<m;j++)
				{
					t=a[i][j];
					a[i][j]=a[j][i];
					a[j][i]=t;
				}
		}
	
	

	
}