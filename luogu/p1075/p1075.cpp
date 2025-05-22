#include <iostream>
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
int main()
{
	int n;
	cin >> n;
	if (n % 2 == 0 && isPrime(n / 2))
		cout << n / 2;
	else
	{
		for (int i = 3; i < n / 2; i += 2)
		{
			if (isPrime(i))
			{
				if (n % i == 0)
				{
					if (isPrime(n / i))
					{
						cout << n / i;
						break;
					}
				}
			}
		}
	}
	return 0;
}