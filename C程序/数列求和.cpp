#include <stdio.h>
#include <math.h>
int main()
{
   int n = 1;
   float term = 1.0, sign = 1, sum = 0;
   while(fabs(term)>=1e-4)
   {
    	term=(1.0/n)*sign;
      sum = sum + term;
      sign =-sign;
      n++;
   }
   printf("sum = %.6f\n", sum);
   return 0;
}