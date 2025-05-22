#include <iostream>
using namespace std;
template<typename T>
T maax(T* arr, int n)
{
    T max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
template<typename T>
int length(T&arr)
{
    return sizeof(arr) / sizeof(arr[0]);
}
int main()
{
    int arr[] = { 10, 20, 30, 40, 50 };
    int n =length(arr);
    int max = maax(arr, n);
    cout << "Max value is: " << max << endl;
    return 0;
}