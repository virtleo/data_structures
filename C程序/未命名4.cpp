#include <stdio.h>
#define STUD 30 /* 最多可能的学生人数 */
#define COURSE 5 /* 最多可能的考试科目数 */
void Total(int Score[][COURSE], int sum[], float aver[], int m, int n);
void Print(int Score[][COURSE], int sum[], float aver[], int m, int n);
int main()
{
   int i, j, m, n, score[STUD][COURSE], sum[STUD];
   float aver[STUD];
   int *p;
   printf("How many students?");
   scanf("%d", &m);
   printf("How many courses?");
   scanf("%d", &n);
   printf("Input scores:\n");
   for(i = 0; i < m; i++)
   {
      for(j = 0; j < n; j++)
      {
         scanf("%d", &score[i][j]);
      }
   }
   Total(score, sum, aver, m, n);
   Print(score, sum, aver, m, n);
   return 0;
}
void Total(int Score[][COURSE], int sum[], float aver[], int m, int n)
{
   int i, j;
   int *p;
   for(i = 0; i < m; i++)
   {
      sum[i] = 0;
      for(j = 0; j < n; j++)
      {
         sum[i] = sum[i] + *(*(Score+i)+j);
      }
   aver[i] = (float) sum[i] / n;
   }
}
void Print(int Score[][COURSE], int sum[], float aver[], int m, int n)
{
   int i, j;
   int *p;
   printf("Result:\n");
   for(i = 0; i < m; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("%4d\t", *(*(Score+i)+j));
      }
      printf("%5d\t%6.1f\n", sum[i], aver[i]);
   }
}