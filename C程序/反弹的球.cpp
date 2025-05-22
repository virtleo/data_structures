#include<stdio.h>
int main()
{
	float m,sum,a;
	int i;
	scanf("%f",&m);
	sum=m;
	for(i=1;i<10;i++)
	{
		m/=2;
		sum=sum+2*m;
		
		a=m/2;
	}
	printf("%.5f %.5f",sum,a);
	return 0;
}