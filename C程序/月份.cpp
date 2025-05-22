#include <stdio.h>
int main() 
{  
    int month;  
    char *months[12] = {"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};
    scanf("%d", &month);  
    if(month < 1 || month > 12)
	{  
        printf("Illegal month\n");  
    }
	 else  
	{  
        printf("%s", months[month-1]);  
    }  
      
    return 0;  
}