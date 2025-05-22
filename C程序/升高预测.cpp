#include<stdio.h>
int main()
{
	char sex,sports,diet;
	float faHeight,moHeight,height;
	scanf("%c ",&sex);
	scanf("%f %f ",&faHeight,&moHeight);
	scanf("%c %c",&sports,&diet);	
	if(sex=='F')
	{
		height=(faHeight*0.92+moHeight)/2.0;
		if(sports=='Y'&&diet=='Y') height=height*(1.0+3.53e-2);
		else if(sports=='Y'&&diet=='N') height=height*(1.0+1.5e-2);
		else if(sports=='N'&&diet=='Y') height=height*(1.0+2e-2);
		else if(sports=='N'&&diet=='N') height=height;
	}
	else
	{
		if(sex=='M')
		{
			height=(faHeight+moHeight)*0.54;
			if(sports=='Y'&&diet=='Y') height=height*(1.0+3.53e-2);
			else if(sports=='Y'&&diet=='N') height=height*(1.0+1.5e-2);
			else if(sports=='N'&&diet=='Y') height=height*(1.0+2e-2);
			else if(sports=='N'&&diet=='N') height=height;
		}
	}
	printf("%.0f",height);
	return 0;
}