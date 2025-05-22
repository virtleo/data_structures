#include<iostream>
#include<string>
#include<vector>
using namespace std;
string gaocheng(string s1, string s2)
{
	string arr="";
	vector<int>a1(10000, 0);
	vector<int>a2(10000, 0);
	vector<int>a3(20000, 0);
	int len1 = s1.length();
	int len2 = s2.length();
	int len = len1 + len2;
	for (int i = 0; i < len1; i++)
		a1[i] = s1[len1 - i - 1] - '0';
	for (int i = 0; i < len2; i++)
		a2[i] = s2[len2 - i - 1] - '0';
	for (int i = 0; i < len1; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			a3[i+j]+=a1[i]*a2[j];
			if (a3[i + j] >= 10)
			{
				a3[i + j + 1] += a3[i + j] / 10;
				a3[i + j] %= 10;
			}
		}
	}
	if (a3[len])
		len++;
	while(a3[len-1]==0&&len>1)
		len--;
	for (int i = len - 1; i >= 0; i--)
		arr += a3[i] + '0';
	return arr;
}
//高精度*单精度
string gaochengdan(string s1, int a)
{
	int len = s1.length();
	vector<int>a1(10000, 0);
	vector<int>a3(1000000, 0);
	for (int i = 0; i < len; i++)
	{
		a1[i] = s1[len - 1 - i] - '0';
	}
	for (int i = 0; i < len; i++)
	{
		a3[i]+=a1[i]*a;
		if (a3[i] >= 10)
		{
			a3[i + 1] += a3[i] / 10;
			a3[i] %= 10;
		}
	}
	if (a3[len])
		len++;
	while (a3[len - 1] == 0 && len > 1)
		len--;
	string arr = "";
	for (int i = len - 1; i >= 0; i--)
		arr += to_string(a3[i]);
	return arr;
}
int main()
{
	int t;
	cin >> t;
	int a[11][2];
	int b[11] = {0};
	for (int i = 0; i < t; i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	string b1 = "1";
	for (int i = 0; i < t; i++)
	{
		for (int j = 2; j <= a[i][0]; j++)
		{
			b1=gaochengdan(b1, j);
		}
		for (int k = 0; k < b1.length(); k++)
		{
			if (a[i][1] == b1[k] - '0')
			{
				b[i]++;
			}
		}
		b1 = "1";

	}
	for (int i = 0; i < t; i++)
	{
		cout << b[i] << endl;
	}
	return 0;
}
//#include<iostream>
//using namespace std;
//int a[11][10000];//二维数组存储每一组数据的阶乘
//int s[11];//存储n！中指定数码出现次数
//int main()
//{
//	int n, i, x, j, k, q;
//	cin >> n;//输入数据组数
//	for (i = 1; i <= n; i++)
//	{
//		a[i][0] = 1;//为每一组数据阶乘的位数
//		a[i][1] = 1;//为下一步乘做准备
//	}
//	for (i = 1; i <= n; i++)
//	{
//		int sum = 0;//记录数码出现次数
//		cin >> x;
//		cin >> q;//输入要求阶乘的数和制定数码
//		for (j = 1; j <= x; j++)
//		{
//			for (k = 1; k <= a[i][0]; k++)
//			{
//				a[i][k] *= j;
//			}
//			for (k = 1; k <= a[i][0]; k++)
//			{
//				a[i][k + 1] += a[i][k] / 10;
//				a[i][k] %= 10;
//			}
//			while (a[i][a[i][0] + 1] > 0)
//			{
//				a[i][0]++;
//				a[i][a[i][0] + 1] += a[i][a[i][0]] / 10;
//				a[i][a[i][0]] %= 10;
//			}
//		}//普普通通高精乘低精
//		for (j = a[i][0]; j >= 1; j--)
//		{
//			if (a[i][j] == l)
//				sum++;
//		}//如果指定数码出现一次就++
//		s[i] = sum;//将每一组数据的指定数码出现次数存在数组中，方便输出
//	}
//	for (i = 1; i <= n; i++)
//	{
//		cout << s[i] << endl;
//	}
//	return 0;
//}