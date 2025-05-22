#include <stdio.h>  
#include <string.h>  
int main() 
{  
    char countries[10][20];  
    char temp[20];    
    for (int i=0;i<10;i++)
        scanf("%s",&countries[i]);   
    for (int i=0;i<9;i++) 
	{  
        for (int j=i+1;j<10;j++) 
		{  
            if (strcmp(countries[i],countries[j])> 0) 
			{  
                strcpy(temp,countries[i]);  
                strcpy(countries[i],countries[j]);  
                strcpy(countries[j],temp);  
            }  
        }  
    }  
    for (int i=0;i<10;i++)  
        printf("%s\n",countries[i]);  
    return 0;  
}