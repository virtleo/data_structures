#include<iostream>
#include<iomanip>
using namespace std;
int max(float avg[],int n)
{
	int k = 0;
	for (int i = 1; i < n; i++)
	{
		if (avg[i] > avg[k])
		{
			k = i;
		}
	}
	return k;
}
int main()
{
	int n, t;
	cin>>n>>t;
	float debt=0;
	int *m=new int[n];
	int *v=new int[n];
	float *avg=new float[n];
	for (int i = 0; i < n; i++)
	{
		cin>>m[i]>>v[i];
		avg[i]=float(v[i])/m[i];
	}
	while (t > 0)
	{
		int k = max(avg, n);
		if (m[k] > t)
		{
			debt += t*avg[k];
			t = 0;
		}
		else
		{
			debt += m[k]*avg[k];
			t -= m[k];
		}
		avg[k] = 0;
		
	}
	cout <<fixed << setprecision(2)<<debt;
	return 0;
}