#include<stdio.h>
int Average(int score[],int n)
{
	int i;
	float aver,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+score[i];
	}
	aver=sum/n;
	return aver;
}
int ReadScore(int score[],int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(score[i]>Average(score,i))
			j++;
	}
	return j;
}
int main()
{
	int i=0,score[40],n;
	do{
		scanf("%d ",&score[i]);
		i++;
	}while(score[i]<0);
	printf("%d",ReadScore(score,i+1));
	return 0;

}