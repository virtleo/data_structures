#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
	int v, n;
	cin >> v >> n;
	int count[31] = { 0 };
	vector<vector<int>> f(31, vector<int>(21000, 0));
	//memset(f, 0, sizeof(f));
	for (int i = 1; i <= n; i++)
	{
		cin >> count[i];
	}
	//int shen=n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= v; j++)
		{
			if (j < count[i])
				f[i][j] = f[i - 1][j];
			else
			{
				if (f[i - 1][j] < (f[i - 1][j - count[i]] + count[i]))
					f[i][j] = f[i - 1][j - count[i]] + count[i];
				//shen-=count[i];
				else
					f[i][j] = f[i - 1][j];
			}
		}
	}
	cout << v-f[n][v];
	//cout<<"\n"<<shen;
	return 0;
}