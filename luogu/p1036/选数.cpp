#include<iostream>
using namespace std;
bool isPrime(int n)
{
	if (n < 2)
		return false;
	else if (n == 2)
		return true;
	else if (n % 2 == 0)
		return false;
	else
	{
		for (int i = 3; i * i <= n; i += 2)
			if (n % i == 0)
				return false;
		return true;
	}
}
int n, k;
int cunt = 0;
int shu[25];
void f(int flag, int num, int su) 
{
	if (num==0 )
	{
		if (isPrime(su))
			cunt++;
		return;
	}
	if (n - flag + 1 < num)
		return;
	for (int i = flag; i <n; i++)
	{
		f(i + 1, num - 1, su + shu[i]);
	}
	return;
}
//一个求阶乘的函数，本来是要求总共的组合数，但是现在用递归枚举
//long long factorial(int n)
//{
//	long long res = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		res*=i;
//	}
//	return res;
//}
int main()
{

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin>>shu[i];
	}
	//做一个不必要的排序，因为题目中说了输入的数是无序的
	//for (int i = 0; i < n; i++)
	//{
	//	for (int in = 0; in < n; in++)
	//	{
	//		if (shu[i] > shu[in])
	//		{
	//			swap(shu[i], shu[in]);
	//		}
	//	}
	//}
	f(0, k, 0);
	cout<<cunt<<endl;
	
	return 0;
}