#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a[100][20];
	double b[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	int max1=0, min1=10;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] > max1)
				max1 = a[i][j];
			if (a[i][j] < min1)
				min1 = a[i][j];
			b[i] += a[i][j];
		}
		b[i] -= (max1 + min1);
		max1 = 0;
		min1 = 10;
	}
	for (int i = 0; i < n; i++)
	{
		b[i] /= (m - 2);
	}
	double zuida = 0;
	for (int i = 0; i < n; i++)
	{
		if (b[i] > zuida)
			zuida = b[i];
	}
	cout << fixed<<setprecision(2)<<zuida << endl;
	return 0;
}