#include<stdio.h>
int main()
{
	int a,b,c,d,e,n;
	scanf("%d",&n);
	if(n>=99999||n<0)
	return -1;
	a=n/10000;
	b=n/1000%10;
	c=n/100%100%10;
	d=n/10%1000%100%10;
	e=n%10;

	if(a!=0) 
	{
		printf("5\n");
		printf("%d %d %d %d %d\n",a,b,c,d,e);
		printf("%d%d%d%d%d",e,d,c,b,a);
	}
	else if(b!=0) 
	{
		printf("4\n");
		printf("%d %d %d %d\n",b,c,d,e);
		printf("%d%d%d%d",d,c,b,a);
	}
	else if(c!=0) 
	{
		printf("3\n");
		printf("%d %d %d\n",c,d,e);
		printf("%d%d%d",c,b,a);
	}
	else if(d!=0) 
	{
		printf("2\n");
		printf("%d %d\n",d,e);
		printf("%d%d",b,a);
	}
	else if(e!=0)
	{
		printf("1\n");
		printf("%d\n",e);
		printf("%d",a);
	 } 


	return 0;
	
}