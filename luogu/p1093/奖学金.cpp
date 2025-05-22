#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int **a = new int*[n];
	int *biaohao = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i]=new int[3];
	}
	int* sum = new int[n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
		sum[i] = a[i][0] + a[i][1] + a[i][2];
		biaohao[i] = i + 1;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (sum[i] < sum[j])
			{
				swap(a[i][0], a[j][0]);
				swap(sum[i], sum[j]);
				swap(biaohao[i], biaohao[j]);
			}
			else if (sum[i] == sum[j])
			{
				if (a[i][0] < a[j][0])
				{
					swap(sum[i], sum[j]);
					swap(biaohao[i], biaohao[j]);
					swap(a[i][0], a[j][0]);
				}
				else if (a[i][0] == a[j][0])
				{
					if(biaohao[i]>biaohao[j])
					{
						swap(sum[i], sum[j]);
						swap(biaohao[i], biaohao[j]);
					}
				}
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << biaohao[i] << " "<< sum[i] << endl;
	}
	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;
	delete[] biaohao;
	delete[] sum;
	return 0;
}