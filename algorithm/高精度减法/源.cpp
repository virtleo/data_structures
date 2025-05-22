#include<iostream>
#include<string>//¼õ 
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int a1[51]={0}, a2[51] = {0}, a3[52] = {0};
	int len = s1.size();
	char flag = '+';
	if (len < s2.size() || len == s2.size() && s1 < s2)
	{
		swap(s1, s2);
		flag = '-';
	}
		
	for (int i = 0; i < s1.size(); i++)
		a1[s1.size() - 1 - i] = s1[i] - '0';
	for (int i = 0; i < s2.size(); i++)
		a2[s2.size() - 1 - i] = s2[i] - '0';
	for (int i = 0; i < s1.size(); i++)
	{
		if (a1[i] < a2[i])
		{
			a1[i] += 10;
			a1[i + 1] -= 1;
		}
		a3[i] = a1[i] - a2[i];
	}
	if (flag == '-')
		cout << flag;
	int ind = 0;
	for (int i = s1.size(); i>=0; i--)
	{
		if (a3[i] != 0)
		{
			ind = i;
			break;
		}
			
	}
	for (int i = ind; i >= 0; i--)
		cout << a3[i];
	return 0;
}
