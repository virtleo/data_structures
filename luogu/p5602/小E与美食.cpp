#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (a[j] > a[j+1])

			{
				swap(a[j+1], a[j]);
			}
		}
	}*/

	sort(a, a + n);
	long long  sum = 0;
	int q = 0;
	double he;
	int f=0;
	for (int i = 0; i < n; i++)
	{
		sum += a[n - 1-i];
		q++;
		he =max(he,sum*(sum*1.0/q));
			
	}

	cout << fixed<<setprecision(10)<<he;
	delete[] a;
	return 0;
}