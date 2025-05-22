#include<stdio.h>
int main()
{
	char grade;
	int score;
	scanf("%d",&score);
	grade=(score>=90)?'A':((score>=60)?'B':'C');
	printf("%c",grade);
	return 0;
}