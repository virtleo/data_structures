#include "transposition.h"

void init(matrix& m, int r, int c)
{
	m.elem = new elemtype[maxsize];
	m.rows = r;
	m.cols = c;
	m.count = 0;
}

matrix bf(matrix& m)
{
	matrix ne;
	init(ne, m.cols, m.rows);
	int i = 0;
	for (int j = 0; j < m.cols; j++)
	{
		for (int q = 0; q < m.count; q++)
		{
			if (m.elem[q].col == j)
			{
				ne.elem[i].row = m.elem[q].col;
				ne.elem[i].col = m.elem[q].row;
				ne.elem[i].value = m.elem[q].value;
				i++;
			}
		}
	}
	ne.count = i;
	return ne;
}

matrix fast(matrix& m)
{
	matrix ne;
	init(ne, m.cols, m.rows);
	int j = 0;
	int* num = new int[m.count];
	for (int i = 0; i < m.cols; i++)
	{
		num[i] = 0;
	}
	for (int i = 0; i < m.count; i++)
	{
		num[m.elem[i].col]++;
	}
	int *pos = new int[m.count+1];
	pos[0] = 0;
	for (int i = 1; i < m.cols; i++)
	{
		pos[i] = pos[i-1] + num[i-1];
	}
	int co=0;
	for (int i = 0; i < m.count; i++)
	{
		j = pos[m.elem[i].col];
		ne.elem[j].row = m.elem[i].col;
		ne.elem[j].col = m.elem[i].row;
		ne.elem[j].value = m.elem[i].value;
		pos[m.elem[i].col]++;
		co++;
	}
	ne.count = co;
	delete[] num;
	delete[] pos;
	return ne;
}

void print(matrix& m)
{
	int i = 0;
	for (int j = 0; j < m.rows; j++)
	{
		for (int q = 0; q < m.cols; q++)
		{
			if (m.elem[i].row == j && m.elem[i].col == q )
			{
				cout << m.elem[i].value << " ";
				i++;
			}
			else
			{
				cout << "0 "<< " ";
			}
		}
		cout << endl;
	}
}
