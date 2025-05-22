#include <iostream>
using namespace std;
template<typename T>
T* bulleSort(T arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}
template<typename T>
int length(T& arr)
{
	return sizeof(arr) / sizeof(arr[0]);
}
int main()
{
	int arr[] = { 5, 2, 8, 3, 9, 1, 7 };
	int n = length(arr);
	int *shu=bulleSort(arr,n);
	for (int i = 0; i < n; i++)
	{
		cout << shu[i] << " ";
	}
	return 0;
}