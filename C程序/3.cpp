#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	printf("%d=",n);
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			n/=i;
			printf("%d",i);
			if(n!=1) printf("*");
		}
	}
	return 0;
}