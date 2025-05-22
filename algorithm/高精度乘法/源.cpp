////高精度*普通数字
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	int shu;
//	getline(cin, s);
//	cin >> shu;
//	int a[101] = { 0 };
//	int len = s.length();
//	for (int i = 0; i < len; i++)
//	{
//		a[i] = s[len - 1 - i] - '0';
//		a[i]=a[i]*shu;
//	}
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] >= 10)
//		{
//			a[i + 1]+=a[i] / 10;
//			a[i]=a[i] % 10;
//		}
//	}
//	int index = 0;
//	for (int i = 100; i >= 0; i--)
//	{
//		if (a[i] != 0)
//		{
//			index = i;
//			break;
//		}
//	}
//	for (int i = index; i >= 0; i--)
//	{
//		cout << a[i];
//	}
//	return 0;
//
//}
//高精度*高精度q
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int a1[51]={0}, a2[51]={0}, a3[102]={0};
	int len = s1.length();
	if (len<s2.size())
		len=s2.size();
	for (int i = 0; i < s1.size(); i++)
	{
		a1[i] = s1[s1.size() - 1 - i] - '0';
	}
	for (int i = 0; i < s2.size(); i++)
	{
		a2[i] = s2[s2.size() - i - 1] - '0';
	}
	for (int i = 0; i < s1.size(); i++)
	{
		for (int j = 0; j < s2.size(); j++)
		{
			a3[i + j] += a1[i] * a2[j];
			if (a3[i + j] >= 10)
			{
				a3[i + j + 1] += a3[i + j] / 10;
				a3[i + j] %= 10;
			}
		}
	}
	int index = 101;
	for (int i = 101; i >= 0; i--)
	{
		if (a3[i] != 0)
		{
			index = i;
			break;
		}
	}
	string res = "";
	for (int i = index; i >= 0; i--)
	{
		res += to_string (a3[i]);
	}
	cout<<res<<endl;
	//int length = s1.size() + s2.size();
	//while (a3[length])
	//	length++;
	//while(a3[length-1]==0&&length>1)
	//	length--;
	//for (int i = length-1; i >= 0; i--)
	//{
	//	cout << a3[i];
	//}
	return 0;
}
