#include<iostream>
using namespace std;
class arr
{
	int var[2][3];
public:
	arr(int a, int b, int c, int d, int e, int f)
	{
		var[0][0]=a;
		var[0][1]=b;
		var[0][2]=c; 
		var[1][0]=d;
		var[1][1]=e;
		var[1][2]=f;
	}
	arr()
	{
		var[0][0]=1;
		var[0][1]=1;
		var[0][2]=1;
		var[1][0]=1;
		var[1][1]=1;
		var[1][2]=1;
	}
	arr operator+(arr a)
	{
		arr temp;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				temp.var[i][j] = var[i][j] + a.var[i][j];
			}
		}
		return temp;
	}
	arr operator-(arr a);
	friend arr operator*(arr a, arr b);
	void display(arr c)
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << c.var[i][j] << " ";
			}
			cout << endl;
		}
	}
};
arr arr::operator-(arr a)
{
	arr temp;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
		{
			temp.var[i][j] = var[i][j] - a.var[i][j];
		}
	return temp;
}
arr operator*(arr a, arr b)
{
	arr temp;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			temp.var[i][j] = a.var[i][j] * b.var[i][j];
		}
	}
	return temp;
}
int main()
{
	arr a(1, 2, 3, 4, 5, 6);
	arr b(7, 8, 9, 10, 11, 12);
	arr c = a + b;
	arr d = a - b;
	arr e = a * b;
	e.display(e);
	cout << "The difference of two arrays is:" << endl;
	d.display(d);
	cout << "The sum of two arrays is:" << endl;
	c.display(c);
	return 0;
}