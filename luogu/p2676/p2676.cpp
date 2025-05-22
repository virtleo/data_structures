#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, b;
	cin >> n >> b;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int sum = 0;
	int i = 0;
	while (sum < b)
	{
		sum += a[n-1-i];
		i++;
	}
	cout<<i<<endl;
	return 0;
}