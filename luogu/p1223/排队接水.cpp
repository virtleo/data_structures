#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
void siftdown(int arr[], int start, int endofheap)
{
	int i = start;
	int j = i * 2 + 1;
	int temp = arr[i];
	while (j <= endofheap)
	{
		if (j < endofheap && arr[j] < arr[j + 1])
			j++;
		if (temp < arr[j])
		{
			arr[i] = arr[j];
			i = j;
			j = i * 2 + 1;
		}
		else
		{
			break;
		}
		arr[i]=temp;
	}
}
void creatheap(int arr[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
	{
		siftdown(arr, i, n - 1);
	}
}
void heapsort(int arr[], int n)
{
	creatheap(arr, n);
	for (int i = n - 1; i >= 0; i--)
	{
		swap(arr[i], arr[0]);
		siftdown(arr, 0, i - 1);
	}
}
//typedef struct 
//{
//	int number;
//	int time;
//}people;
int main()
{
	int n;
	cin >> n;
	/*people* peo = new people[n + 1];*/
	/*for (int i = 1; i < n+1; i++)
	{
		peo[i].number=i;
		cin >> peo[i].time;
	}*/
	int *peo = new int[n];
	int *time = new int[n];
	int *bianhao= new int[n+1];
	long long sum=0;
	for (int i = 0; i < n; i++)
	{
		cin >> time[i];
	}
	for (int i = 1; i <= n; i++)
	{
		bianhao[i]=time[i-1];
	}
	heapsort(time, n);
	/*for (int i = 0; i < n; i++)
	{
		cout << time[i] << " ";
	}*/
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (time[i] == bianhao[j])
				{
					cout << j << " ";
					bianhao[j]=-1;
					sum+=time[i]*(n-i-1);
					break;
				}
		}
		
	}
	cout << endl;
	cout<<fixed<<setprecision(2)<<double(sum)/n;
	return 0;
}