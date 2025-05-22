#include<stdio.h>
int main()
{
	int num[20],n,i,*p;
	scanf("%d",&n);
	p=num;
	for(i=0;i<n;i++)
	*(p+i)=i+1; 
	int m=0,k=0,j=0;
	while(m<n-1)
	{
		if(*(p+j)!=0)
		k++;
		if(k==3)
		{
			k=0;
			*(p+j)=0;
			m++;
		}
		j++;
		if(j==n)
		j=0;
	}
	for(int x=0;x<n;x++)
	{
		if(*(p+x)!=0)
		printf("%d",*(p+x));
	}	
	return 0;
}