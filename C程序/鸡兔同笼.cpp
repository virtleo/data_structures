#include<stdio.h>
int main()
{
	int m,n,a,b;
	scanf("%d %d",&n,&m);
	for(a==0;a<=n;a++)
	{
			for(b==0;b<=n;b++)
			if((a+b==n)&&(4*a+2*b==m))
				printf("%d %d",a,b);
	}
	return 0; 
}