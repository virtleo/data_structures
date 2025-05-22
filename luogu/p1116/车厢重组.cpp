#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *a=new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int q = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j + 1], a[j]);
				q++;
			}
		}
	}
	cout << q << endl;
	delete[] a;
	return 0;
}