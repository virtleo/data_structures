#include<iostream>
#include<vector>
using namespace std;
int zheng(vector<vector<int>>& a,int x,int y,int r)
{
	int wei = 2 * r + 1;
	for (int i = x - 1; i < x + wei - 1; i++)
	{
		for (int j = y - 1; j < y + wei - 1; j++)
		{

		}
	}
}
int main()
{
	int  n, m;	
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(n));
	int shu = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j]=shu++;
		}
	}
	int x[500], y[500], r[500], z[500];
	for (int i = 0; i < m; i++)
	{
		cin >> x[i] >> y[i] >> r[i]>>z[i];
	}

	return 0;
}