#include "special.h"

bool is_symmetrical(matrix& s,int r ,int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (s.data[i][j]!= s.data[j][i])
			{
				return false;
			}
		}
	}
	return true;
}

specm compress(matrix& s, int r, int c)
{
	specm sp;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			sp.pos = (i + 1) * i / 2 + j;
			sp.elem[sp.pos] = s.data[i][j];
		}
	}
	return sp;
}

matrix reduce(specm& s)
{
	matrix m;
	int rows;
	int n = 0;
	for (int i = 0; i < s.pos; i++)
	{
		for (int j = 0; j < s.pos; j++)
		{
			if (i == j * (j + 1) / 2)
			{
				for (int k = 0; k <= j; k++)
				{

					m.data[j][i - j * (j + 1) / 2 + k] = s.elem[n];
					n++;
				}
				for (int q = s.pos; q > j; q--)
				{
					m.data[j][i - j * (j + 1) / 2 + q] = 0;
				}

			}
		}
	}
	return m;

}
