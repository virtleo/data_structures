#include "heap_sort.h"
int main()
{
	int arr[] = { 53, 78, 65, 17, 1,87,9, 81, 15 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Heapsort(arr, n);
	cout<<"Sorted array: ";
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}