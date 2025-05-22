#include <stdio.h>
#include <math.h>
int main()
{
   int n = 1, count = 1;
   float x;
   double sum, term;
   printf("Input x:");
   scanf("%f",&x);
   sum = x;
   term = x;
   do{
      term =term*x*x/((n+2)*(n+1))*(-1);
      sum = sum + term;
      n = n + 2;
      count++;
   }while (fabs(term)>=1e-5);
   printf("sin(x) = %.6f, count = %d\n", sum, count);
   return 0;
}