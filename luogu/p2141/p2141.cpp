#include<iostream>
#include<set>
using namespace std;

int main()
{
	int n, a[1000], temp;
	set<int>num;
	set<int>res;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		num.insert(a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			temp = a[i] + a[j];
			set<int>::iterator it = num.find(temp);
			if (it != num.end())
			{
				res.insert(temp);
			}
		}
	}
	cout << res.size();
	
	return 0;
}