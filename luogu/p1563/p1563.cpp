#include<string>
#include<iostream>
#include<vector>
using namespace std;
string zhiling(vector<string> &s, string &name,int &wei,int &n, int &p, int &q)
{
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == name)
		{
			index = i;
			break;
		}
	}
	int length = s.size();
	if ((p == 0&&wei == 0)||(p == 1&&wei == 1))
		if (index - q >= 0)
			return 	s[index - q];
		else
		{
			while ((index + length - q) < 0)
				length += length;
			return s[index + length - q];
		}
	if ((p == 0&&wei == 1)||(p == 1&&wei== 0))
		if (index + q < length)
			return s[index + q];
		else
		{
			while ((index - length + q) >= length)
				length += length;
			return s[index - length + q];
		}
	
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> s(n);
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin>>a[i]>>s[i];
	}
	vector<int> p(m);
	vector<int> q(m);
	for (int i = 0; i < m; i++)
	{
		cin >> p[i] >> q[i];
	}
	string name = s[0];
	for (int i = 0; i < m; i++)
	{
		int index = 0;
		for (int j = 0; j < n; j++)
		{
			if (s[j] == name)
			{
				index = j;
				break;
			}
		}
		name = (zhiling(s, name, a[index], n, p[i], q[i]));
	}
	cout << name << endl;
	return 0;
}