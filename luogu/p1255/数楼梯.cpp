#include<iostream>
using namespace std;
int louti(int n)
{
	if (n == 1)
		return 1;
	else if (n==0)
		return 1;
	else 
	{
		return louti(n - 1) + louti(n - 2);       
	}
}
int main()

{
	int n;
	cin >> n;
	long long * a = new long long [n + 1];
	a[0] = a[1] = 1;
	for (int i = 2; i < n+1; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	cout << a[n] << endl;
	return 0;
}