#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int n, r;
int* shu = new int[n];
void dfs(int step, int last)
{
	if (step == r)
	{
		for (int i = 0; i < r; i++)
		{
			cout << shu[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = last + 1; i <= n; i++)
	{
		swap(shu[last], shu[i - 1]);
		dfs(step + 1, i - 1);
		swap(shu[last], shu[i - 1]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << shu[i] << " ";
	}
	cout << endl;
}
int main()
{
	cin>>n>>r;
	for (int i = 1; i <= n; i++)
	{
		shu[i - 1] = i;
	}
	while (next_permutation(shu, shu + n))
	{
		if (is_sorted(shu, shu + n))
		{
			continue;
		}

	//dfs(0, -1);
	return 0;
}