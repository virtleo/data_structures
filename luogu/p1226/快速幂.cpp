#include<iostream>
using namespace std;
int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	long long ans = 1;
	int d, e;
	d = a;
	e = b;
	a %= c;
	while (b)
	{
		if (b & 1)
		{
			ans = (ans * a) % c;
		}
		a = (a * a) % c;
		b >>= 1;
	}
	cout <<d<<"^"<<e <<" mod "<<c<<"=" << ans << endl;
	return 0;
}