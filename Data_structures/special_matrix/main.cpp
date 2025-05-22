#include "special.h"
int main()
{
	matrix li1,li2;
	li1.data[0][0] = 1;
	li1.data[0][1] = 2;
	li1.data[1][0] = 2;
	li1.data[1][1] = 3;
	specm a;
	if (is_symmetrical(li1, 2, 2))
	{
		cout<<"The matrix is symmetrical\n";
		a = compress(li1, 2, 2);
		for (int i = 0; i < a.pos+1; i++)
		{
			cout<<a.elem[i]<<" ";
		}
	}
	cout << endl;
	cout << "reduced matrix is:\n";
	matrix re1;
	re1=reduce(a);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << re1.data[i][j] << " ";
		}
		cout << endl;
	}
	int li3[4][4]={
		{ 1, 4, 6, 5 },
		{ 4,3,7,9 },
		{ 6,7,0,2 },
		{ 5,9,2,8 }
	};
	for (int i = 0; i < 4; i++)	
	{
		for (int j = 0; j < 4; j++)
		{
			li2.data[i][j] = li3[i][j];
		}
	}
	if (is_symmetrical(li2, 4, 4))
	{
		cout << "The matrix is symmetrical\n";
		a = compress(li2, 4, 4);
		for (int i = 0; i < a.pos + 1; i++)
		{
			cout << a.elem[i] << " ";
		}
		cout << endl;
		cout << "reduced matrix is:\n";
		re1 = reduce(a);
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << re1.data[i][j] << " ";
			}
			cout << endl;
		}
	}

	
	return 0;
	
}