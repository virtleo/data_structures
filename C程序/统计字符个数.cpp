#include<stdio.h>
int main()
{
	int a=0,b=0,e=0,d=0;
	char c;
	while((c=getchar())!='\n')
	{
		if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
			a++;
		else if(c>='0'&&c<='9')
			b++;
		else if(c==' ')
			e++;
		else
			d++;
	}
	printf("%d %d %d %d\n",a,b,e,d);
	return 0;
}