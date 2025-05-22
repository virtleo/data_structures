#include "quick_sort.h"
int main()
{
	int arr[] = { 7,29,33,12,89,25,26,77,15,55 };
	quickSort(arr, 10);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";
	return 0;
}