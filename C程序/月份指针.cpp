#include<stdio.h>

int main()
{
	char n[12][12]={"January","February","March","April","May","June","July","August","September","October","November","December"},*p;
	int m,i;
	char 
	scanf("%d",&m);
	if(m>12||m<1)
	printf("Illegal month");
	else 
	{
		printf("%s",*(p+m-1));
	}
	return 0;
}