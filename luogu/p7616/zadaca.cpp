#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	int temp;
	while(b)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int main()
{
	int n,m;
	cin >> n;
	int *a=new int [n+1];

	long long aa=1, bb=1;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cin>>m;
	int* b = new int[m + 1];
	long long cc=1;
	long long gg=1;
	for(int i=0;i<m;i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			long long temp = a[i] * b[j];
			int g = gcd(a[i], b[j]);
			gg *= g;
			cc*=temp/g;

			
		}
	}
	if (aa < bb)
	{
		swap(aa, bb);
	}
	cout <<gcd(cc,gg);
	delete [] a;
	delete [] b;
	return 0;
}