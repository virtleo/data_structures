#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *a=new int [n];
	int b[100];
	int q = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}	
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[i+1])
		{
			b[i] = a[i];
			q++;
		}
		else
		{
			b[i] = 0;
		}
	}
	cout<<q<<" "<<endl;
	for (int i = 0; i < n; i++)
	{
		if (b[i]>0)
			cout<<b[i]<<" ";
	}
	delete[] a;
	return 0;
}