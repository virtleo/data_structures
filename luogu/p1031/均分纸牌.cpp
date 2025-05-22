#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *a = new int[n];
	int sum = 0;
	int cut = 0;
	for (int i = 1; i <= n; i++)
	{
		cin>>a[i-1];
		sum += a[i-1];
	}
	int avg = sum / n;
	for (int i = n-1; i >0; i--)
	{
		if (a[i] > avg)
		{
			a[i-1]+=a[i]-avg;
			a[i] = avg;
			cut++;	
		}
		else if (a[i] < avg)
		{
			a[i-1]-=avg-a[i];
			a[i] = avg;
			cut++;
		}
	}
	cout<<cut<<endl;
	return 0;
}