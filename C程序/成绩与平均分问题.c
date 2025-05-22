#include <stdio.h>    
int ReadScore(int *score, int *n);  
float Average(int *score, int n);    
int main() 
{  
    int score[40], n;  
    float avg;  
    n = ReadScore(score, &avg);  
    printf("%d\n", n - avg * 40);  
    return 0;  
}  
  
int ReadScore(int *score, int *n) 
{  
    int i = 0;  
    int x;  
    while (scanf("%d", &x) != EOF && x >= 0) 
	{  
        score[i] = x;  
        i++;  
    }  
    *n = i;  
    return i;  
}  
  
float Average(int *score, int n) 
{  
    int sum = 0;
	int i;  
    for ( i = 0; i < n; i++) 
	{  
        sum += score[i];  
    }  
    return (float)sum / n;  
}
