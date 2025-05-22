#include<stdio.h>
#include<string.h>
int main()
{
	int a=0,b=0,c=0,d=0,e=0;
	char str[81];
	gets(str);
	char *p=str;
	while(*p!='\0')
	{
		if('A'<=*p&&'Z'>=*p)
		a++;
		else if('a'<=*p&&'z'>=*p)
		b++;
		else if(*p==' ')
		c++;
		else if('0'<=*p&&'9'>=*p)
		d++;
		else e++;
		p++;
	}
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}