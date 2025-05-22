#include<stdio.h>
#include<math.h>
double f(double a,double b,double c,double d,double x)
{
	return a*x*x*x+b*x*x+c*x+d;
}
double df(double a,double b,double c,double x)
{
	return 3*a*x*x+2*b*x+c;
}
double newton(double a,double b,double c,double d,double x)
{
	double x0;
	do{
		x0=x;
		x=x0-f(a,b,c,d,x0)/df(a,b,c,x0);
	}while(fabs(x-x0)>1e-3);
	return x;
}
int main()
{
	double a,b,c,d,x;
	x=1.0;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	printf("%.2lf",newton(a,b,c,d,x));
	return 0;
}