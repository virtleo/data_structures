#include<stdio.h>
int main()
{
	int temp,a[10],k,i,j;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		k=i;
		for(j=i+1;j<10;j++)
			if(a[j]<a[k])
				k=j;
			if(k!=i)
			{
				temp=a[k];
				a[k]=a[i];
				a[i]=temp;
			}
	}
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	return 0;
}