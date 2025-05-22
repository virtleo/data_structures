#include<stdio.h>
#include<string.h>
void mystrcat(char str1[],char str2[],char str3[])
{
	int i,j,n,m;
	n=strlen(str1);
	m=strlen(str2);
	for(i=0;i<n;i++)
	str3[i]=str1[i];
	for(j=0;j<m;j++)
	str3[i+j]=str2[j];
	str3[i+j+1]='\0';
	
	
}
int main()
{
	char str1[20];
	char str2[20];
	char str3[40];
	gets(str1);
	gets(str2);
	mystrcat(str1,str2,str3);
	printf("%s",str3);
	return 0;
}