//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//vector<int> arra(int x)
//{
//	vector<int> arr;
//	arr.push_back( x % 10);
//	arr.push_back(x / 10 % 10);
//	arr.push_back ( x / 100 % 10);
//	return arr;
//}
//template<typename T>
//bool xiangtong(T x, T y, T z)
//{
//	vector<int> arr(arra(x));
//	vector<int> arr2(arra(y));
//	vector<int> arr3(arra(z));
//	arr.insert(arr.end(), arr2.begin(), arr2.end());
//	arr.insert(arr.end(), arr3.begin(), arr3.end());
//	for (int i = 0; i < 9; i++)
//	{
//		int cout = 0;
//		if (count(arr.begin(), arr.end(), arr[i]) != 1)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	for (int i = 123; i <=333; i++)
//	{
//		for(int j = 246; j <= 999; j++)
//		{
//			for (int k = 369; k <= 999; k++)
//			{
//				if (xiangtong(i, j, k))
//				{
//					if ((i * b == j * a) && (i * c == k * a) && (j * c == k * b))
//					{
//						cout << a * i << " " << b * i << " " << c * i << endl;
//					}
//				}
//
//			}
//		}
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	int k1,k2,k3, a, b, c, arr[10];
	cin>>a>>b>>c;
	int ans = 0;
	for (int m = 0; m <= 999; m++)
	{
		k1 = a * m;
		k2 = b * m;
		k3=c*m;
		if (k3 > 999 || k2 > 999 || k1 > 999)
			break;
		for (int i = 0; i < 3; i++)
		{
			if (k1 % 10 == 0)
				arr[9]++;
			else
				arr[(k1 % 10)-1]++;
			k1/=10;
		}
		for (int i = 0; i < 3; i++)
		{
			if (k2 % 10 == 0)
				arr[9]++;
			else
				arr[(k2 % 10)-1]++;
			k2 /= 10;
		}
		for (int i = 0; i < 3; i++)
		{
			if (k3 % 10 == 0)
				arr[9]++;
			else
				arr[(k3 % 10)-1]++;
			k3 /= 10;
		}
		int	l = 0;
		for (int i = 0; i < 9; i++)
		{
			if (arr[i] != 1)
			{
				l = 1;
				break;
			}
		}

		for (int i = 0; i < 9; i++)
		{
			arr[i] = 0;
		}
		if (!l)
		{
			cout << a * m << " " << b * m << " " << c * m << endl;
			ans++;
		}
		else
			l = 0;
	}
	if (!ans)
		cout << "No!!!";
	return 0;
}