#include<stdio.h>
int main()
{
	int a,b,c;
	for(a='X';a<='Z';a++)
		for(b='X';b<='Z';b++)
		{
				for(c='X';c<='Z';c++)
				{
					if((a!='X')&&(c!='X')&&(c!='Z')&&(a!=b)&&(a!=c)&&(b!=c))
					printf("%c %c %c",a,b,c);
				}
		}

			return 0;
}