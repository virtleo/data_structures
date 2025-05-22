#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int>shu(n);
	for (int i = 0; i < n; i++)
	{
		cin >> shu[i];
	}
	long long he = 0;
	sort(shu.begin(), shu.end());
	reverse(shu.begin(), shu.end());
	for (int i = 0; i < n; i++)
	{
		he += shu[i];
	}
	long long sun = he;
	int jump;
	if (shu.size() > shu.size() / 2 + 10000)
		jump = shu[shu.size() / 2 + 10000];
	else
		jump = shu[shu.size() / 2];
	int jishu = 0;
	while (sun >= m)
	{
		sun = 0;
		for (int i = 0; i < n; i++)
		{
			sun += shu[i] - jump;
			if (sun >= m)
				break;
		}
		jishu = jump;
		jump++;
	}
	cout << jishu - 1;
	return 0;
}