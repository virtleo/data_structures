#include<stdio.h>
int main()
{
	void invert(int n,int *x);
	int i,n,a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	invert(n,a);
	for(i=n-1;i>=0;i--)//for(int *p=a;p<=a[n-1];p++) printf("%d",*p);
	printf("%d ",a[i]);
	
}
void invert(int n,int *x)
{
	int *p,temp,*i,*j;
	i=x;j=x+n-1,p=x+n;
	for(;i<=p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}
}