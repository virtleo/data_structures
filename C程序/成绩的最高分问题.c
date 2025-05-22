#include <stdio.h>    
#define MAX_SCORE 10  
#define MIN_SCORE 1  
#define STUDENT_COUNT 40   
int main() 
{  
    int scores[STUDENT_COUNT];  
    int count[MAX_SCORE - MIN_SCORE + 1] = {0};  
    int i;  
    for (i = 0; i < STUDENT_COUNT; i++) 
	{  
        scanf("%d", &scores[i]);  
        if (scores[i] == -1) 
		{  
            break;  
        }  
        scores[i] -= MIN_SCORE; 
        count[scores[i]]++;  
    }  
    printf("Feedback Count Histogram\n");  
    for (i = 0; i <= MAX_SCORE - MIN_SCORE; i++) 
	{  
        printf("%8d %5d\n", i + MIN_SCORE, count[i]);  
    }  
  
    return 0;  
}
