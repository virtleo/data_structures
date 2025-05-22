	//#include <iostream>
	//#include<string>
	//#include<vector>
	//#include<algorithm>
	//using namespace std;
	//string gaocheng1(string s1, string s2)
	//{
	//	string arr = "";
	//	vector<int>a1(10000000, 0);
	//	vector<int>a2(10000000, 0);
	//	vector<int>a3(20000000, 0);
	//	int len1 = s1.length();
	//	int len2 = s2.length();
	//	int len = len1 + len2;
	//	for (int i = 0; i < len1; i++)
	//		a1[i] = s1[len1 - i - 1] - '0';
	//	for (int i = 0; i < len2; i++)
	//		a2[i] = s2[len2 - i - 1] - '0';
	//	for (int i = 0; i < len1; i++)
	//	{
	//		for (int j = 0; j < len2; j++)
	//		{
	//			a3[i + j] += a1[i] * a2[j];
	//			if (a3[i + j] >= 10)
	//			{
	//				a3[i + j + 1] += a3[i + j] / 10;
	//				a3[i + j] %= 10;
	//			}
	//		}
	//	}
	//	if (a3[len])
	//		len++;
	//	while (a3[len - 1] == 0 && len > 1)
	//		len--;
	//	for (int i = len - 1; i >= 0; i--)
	//		arr += a3[i] + '0';
	//	return arr;
	//}
	//string gaocheng(string s, int x)
	//{
	//	vector<int>a1(10000000, 0);
	//	vector<int>a2(10000000, 0);
	//	for (int i = 0; i < s.length(); i++)
	//	{
	//		a1[i] = s[s.length() - 1 - i] - '0';
	//	}
	//	string arr = "";
	//	for (int i = 0; i < s.length(); i++)
	//	{
	//		a2[i]+=a1[i]*x;
	//		if (a2[i] > 9)
	//		{
	//			a2[i+1]+=a2[i] / 10;
	//			a2[i] %= 10;
	//		}
	//	
	//	}
	//	int len = s.length();
	//	if (a2[s.length()])
	//		len++;
	//	while(a2[len-1]==0&&len>1)
	//		len--;

	//	for(int i = len-1; i >=0; i--)
	//	{
	//		arr += to_string(a2[i]);
	//	}
	//	return arr;
	//}
	////int main()
	////{
	////	int p;
	////	cin >> p;
	////	string ans = "2";
	////	for (int i = 1; i < p; i++)
	////	{
	////		ans = gaocheng(ans, 2);
	////	}
	////	cout << ans.length() << endl;
	////	ans[ans.length() - 1] = (ans[ans.length() - 1]- 1);
	////	int k = 1;
	////	string buf = "";
	////	if (ans.length() < 500)
	////	{
	////
	////		for (int i = 499; i > 500 - ans.length(); i--)
	////		{
	////			buf += "0";
	////		}
	////		buf += ans;
	////	}
	////	else
	////		buf = ans;
	////	int len = buf.length();
	////	for(int i = 1; i<500; i++)
	////	{
	////		
	////		cout << buf[len - 500 +i];
	////		k += 1;
	////		if (k % 50 == 0)
	////		{
	////			cout << endl;
	////		}
	////	}
	////	return 0;
	////}
	//string cheng(int n)
	//{
	//	long long  a = 2;
	//	string ans = "1";
	//	while (n)
	//	{
	//		if (n & 1)
	//		{

	//				ans=gaocheng1(ans,to_string(a));
	//		}
	//		a = a * a;
	//		n >>= 1;
	//	}
	//	return ans;
	//}
	//int main()
	//{
	//	int p;
	//	cin >> p;
	//	string ans = "2";
	//	ans = cheng(p);
	//	cout << ans.length() << endl;
	//	ans[ans.length() - 1] = (ans[ans.length() - 1]- 1);
	//	int k = 1;
	//	string buf = "";
	//	if (ans.length() < 500)
	//	{

	//		for (int i = 499; i > 500 - ans.length(); i--)
	//		{
	//			buf += "0";
	//		}
	//		buf += ans;
	//	}
	//	else
	//		buf = ans;
	//	int len = buf.length();
	//	for(int i = 1; i<500; i++)
	//	{
	//	
	//		cout << buf[len - 500 +i];
	//		k += 1;
	//		if (k % 50 == 0)
	//		{
	//			cout << endl;
	//		}
	//	}
	//	return 0;
	//}
#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
int p;
int rev[1100],f[1100],sav[1100],zhishu[1100];
void change1()
{
	memset(sav,0, sizeof(sav));
	for (int i = 1; i <= 500; i++)
	{
		for (int j = 1; j <= 500; j++)
		{
			sav[i + j - 1] += rev[i] * f[j];
			sav[i + j] += sav[i + j - 1] / 10;
			sav[i + j - 1] = sav[i + j - 1] % 10;

		}
	}
		
	memcpy(rev, sav, sizeof(sav));


}
void change2()
{
	memset(sav, 0, sizeof(sav));
	for (int i = 1; i <= 500; i++)
	{
		for (int j = 1; j <= 500; j++)
		{
			sav[i + j - 1] += f[i] * f[j];
			sav[i + j] += sav[i + j - 1] / 10;
			sav[i + j - 1] = sav[i + j - 1] % 10;

		}
	}
		
	memcpy(f, sav, sizeof(f));


}
int main()
{

	cin >> p;
	rev[1] = 1;
	f[1] = 2;
	cout << (int)(p * log10(2) + 1);
	while (p)
	{
		if (p & 1)
		{
			change1();
		}
		p>>=1;
		change2();
	}
	rev[1]--;

	for (int i = 500; i >= 1; i--)
	{
		if (i%50==0)
			cout<<endl;
		cout<<rev[i];
	}
	return 0;
}