#include<stdio.h>
int main()
{
	int a[9][9]={{1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9}};
	int i,j,b;
	a[i][j]=i*j;
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		{
			
			printf("%4d",a[i][j]);
		}
		printf("\n");
	return 0;
}