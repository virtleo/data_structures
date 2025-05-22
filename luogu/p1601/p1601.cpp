#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int len = s1.size();
	if (len<s2.size())
		len=s2.size();
	int a1[1000]={ 0 }, a2[1000]={0}, a3[1000] = {0};
	for (int i = 0; i < s1.size(); i++)
	{
		a1[i] = s1[s1.size() - 1 - i] - '0';

	}
	for (int i = 0; i < s2.size(); i++)
	{
		a2[i] = s2[s2.size() - 1 - i] - '0';
	}
	for (int i = 0; i < len; i++)
	{
		a3[i]+=a1[i]+a2[i];
		if (a3[i] > 9)
		{
			a3[i+1]+= a3[i] /10;
			a3[i] %= 10;
		}
	}
	if (a3[len])
		len++;
	for (int i = len - 1; i >= 0; i--)
	{
		cout << a3[i];	
	}
	return 0;
}