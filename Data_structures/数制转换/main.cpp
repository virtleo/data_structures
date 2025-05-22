#include<iostream>
using namespace std;
void transition(int n, int i)
{
	if (n == 0)
		return;
	else
	{
		transition(n / i, i);
		cout << n % i<<" ";
	}
}
int main()
{
	int n, i;
	for (int j = 0; j < 2; j++)
	{

		cout << "输入十进制数：";
		cin >> n;
		cout << "转化的进制数:";
		cin >> i;
		cout<< "输出十进制数:";
		transition(n, i);
		cout << endl;

	}
	return 0;

	
}