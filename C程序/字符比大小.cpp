#include<stdio.h>
#include<string.h>
void bubblesort(char str[])
{
	int i,j,temp;
	for(i=0;i<10;i++)
		for(j=i+1;j<10;j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];str[i]=str[j];str[j]=temp;
			}
		}
}
int main()
{
	char str[10];
	gets(str);
	bubblesort(str);
	printf("%s",str);
	return 0;
}