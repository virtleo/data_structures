#include<stdio.h>
#include<string.h>
int main()
{
	void rev_str(char string[]);
	char string[100];
	gets(string);
	rev_str(string);
	printf("%s",string);
	return 0;
}
void rev_str(char string[])
{
	char temp;
	int i,j,n;
	n=strlen(string);
	for(i=0,j=n;i<n/2;i++,j--)
	{
		temp=string[i];
		string[i]=string[j-1];
		string[j-1]=temp;
	}
}