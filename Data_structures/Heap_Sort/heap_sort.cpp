#include "heap_sort.h"

void siftdown(int arr[], int start, int endofheap)
{
	int i = start;
	int j = 2 * i + 1;
	int temp = arr[i];
	while (j <= endofheap)
	{
		if (j < endofheap && arr[j] < arr[j + 1])
			j++;
		if (temp < arr[j])
		{
			arr[i] = arr[j];
			i = j;
			j = 2 * i + 1;
		}
		else
			break;
	}
	arr[i] = temp;
}

void Createheap(int arr[], int n)
{
	for (int i = n - 2 / 2; i >= 0; i--)
	{
		siftdown(arr, i, n - 1);
	}
}

void Heapsort(int arr[],int n)
{
	Createheap(arr, n);
	for (int i = n - 1; i >= 0; i--)
	{
		swap(arr[i], arr[0]);
		siftdown(arr, 0, i - 1);
	}
}
