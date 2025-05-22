#include "quick_sort.h"

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    while (low < high)
    {
        while (low < high && arr[high] >= pivot)
            high--;
        arr[low] = arr[high];
        while (low < high && arr[low] <= pivot)
            low++;
        arr[high] = arr[low];
    }
    arr[low] = pivot;
    return low;
}

void quickSort(int arr[], int n)
{
    int i=partition(arr, 0, n-1);
    if (i > 1)
        quickSort(arr, i);
    if (n-i>2)
        quickSort(arr+i+1, n-i-1);
}
