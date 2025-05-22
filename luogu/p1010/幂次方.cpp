#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void micifang(int n)
{
	vector<int> a;
	int i = 0;
	while (n > 0)
	{
		a.push_back(n % 2);
		n /= 2;
		i++;
	}
	for (int i = a.size() - 1; i >= 0; i--)
	{
		if (i == 0 && a[i] == 1)
			cout << "+2(0)";
		else if (a[i] == 1 && i == 1)
		{
			for (int j = a.size() - 1; j >i; j--)
			{
				if (a[j] == 1)
				{
					cout << "+";
					break;
				}

			}
			cout << "2";
			
		}
			

		else if (a[i] == 1)
		{
			for (int j = a.size() - 1; j > i; j--)
			{
				if (a[j] == 1)
				{
					cout << "+";
					break;
				}

			}
			cout << "2(";
			micifang(i);
			cout<< ")";
		}

			

	}
}


int main()
{
	int n;
	cin >> n;
	micifang (n);
	return 0;
}
