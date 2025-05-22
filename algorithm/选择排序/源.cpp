template<typename T>
void selection_sort(T arr[], int n)
{
	for (int size = n - 1; size > 0; size--)
	{
		int j = max(size, 0);
		swap(arr[j], arr[size]);
	}
}