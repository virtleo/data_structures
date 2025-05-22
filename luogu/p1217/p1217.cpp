#include<iostream>
#include<string>
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
		for (int i=3; i*i<=n; i+=2)
			if (n % i == 0)
				return false;
		return true;
	}
}
int huiwen(int n)
{
	string s = to_string(n);
	for (int i = 0; i < s.size() / 2; i++)
	{
		if (s[i] != s[s.size() - i - 1])
			return 0;
	}
	return n;
}
int main()
{
	int a, b;
	cin >> a >> b;
	if(a%2==0)
		a++;
	for (int i = a; i <= b; i+=2)
	{
		if (huiwen(i))
		{
			if (isPrime(i))
				cout << i <<endl;
		}
			
	}
	return 0;
}