#include<iostream>
using namespace std;
//大循环n-1次
void f_bubblesort(int* arr, int n)
{
	int i, j, k;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;
			}
		}
	}
}
//小循环n-1次，如果没有交换，则说明已经有序，可以提前结束
void s_bubblesort(int* arr, int n)
{
	int i ,j,k;
	for (i = 0; i < n - 1; i++)
	{
		int flag=0;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;
				flag=1;
			}
		}
		if (flag == 0)
			break;
	}
}
int main()
{
	int arr[]={5,2,8,3,9,1};
	int arr1[] = { 64, 34, 25, 12, 22, 11, 90 };

	int n = sizeof(arr) / sizeof(arr[0]);
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	f_bubblesort(arr, n);
	s_bubblesort(arr1, n1);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout<<endl;
	for (int i = 0; i < n1; i++)
		cout << arr1[i] << " ";
	return 0;
}